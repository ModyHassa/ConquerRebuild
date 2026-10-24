#!/usr/bin/env python3
"""Live test: v37 — action types 1022 (gmlog log), 1021 (weapon-skill
ops on cq_weapon_skill), 1020 (magic ops on cq_magic + CMsgMagicInfo
1103). ChatA (cq_user 11, acc 100011) on map 1002, NPC ActionsSage 9990.

Sources (new-engine gameaction.cpp, jump table type->case confirmed by
reading the byte map at MsgServer.exe .text off 0x139e9c):
  1020 = case 0x0e "check T [L]" / "learn T" / "uplevel T" / "addexp T E"
         / "addlevtime T V" (defer) / "del T" on CPlayerMagic; learn
         sends 1103 (wire 0x20: [len][type][tick@+4][ownerid@+8]
         [magictype@+0xC][level u2@+0x10][u2@+0x12][u1@+0x14][pad3]
         [exp@+0x18][expire@+0x1C]).
  1021 = case 0x0f "check T V" / "learn T V" / "addexp T E" /
         "addlevtime T V" on the v24 cq_weapon_skill system; learn
         sends CMsgWeaponSkill 1025.
  1022 = case 0x10 MyLogSave("gmlog/action", param) + continue.
"""
import socket, struct, sys, subprocess, time

HOST, PORT = '127.0.0.1', 5816
ACTIONSAGE = 9990
_rcv = {}

def recv_pkt(sock, timeout=4.0):
    sock.settimeout(timeout)
    buf = _rcv.setdefault(sock, b'')
    while True:
        if len(buf) >= 4:
            ln, tp = struct.unpack_from('<HH', buf, 0)
            if len(buf) >= ln:
                pkt = (ln, tp, buf[:ln])
                _rcv[sock] = buf[ln:]
                return pkt
        try:
            chunk = sock.recv(4096)
            if not chunk: return None
        except socket.timeout:
            return None
        buf = _rcv[sock] = buf + chunk

def send_pkt(sock, tp, payload=b''):
    sock.sendall(struct.pack('<HH', 4 + len(payload), tp) + payload)

def drain_all(sock, quiet=1.0):
    pkts = []
    while True:
        p = recv_pkt(sock, timeout=quiet)
        if not p: break
        pkts.append(p)
        quiet = 0.3
    return pkts

def find(pkts, tid):
    for p in pkts:
        if p[1] == tid: return p
    return None

def parse_2032(data):
    npc_id, optcount, task_id = struct.unpack_from('<HHH', data, 8)
    mode, face = data[0xF], data[0xE]
    pos = 0x10
    count = data[pos]; pos += 1
    strs = []
    for _ in range(count):
        n = data[pos]; pos += 1
        strs.append(data[pos:pos+n].decode('utf-8', 'replace')); pos += n
    return dict(npc=npc_id, opts=optcount, task=task_id, mode=mode,
                face=face, strings=strs)

def reply_2032(sock, action_id, text):
    body = struct.pack('<HHIHBB', 0, 0, action_id, 0, 0, 0x66)
    body += bytes([1, len(text)]) + text.encode()
    send_pkt(sock, 2032, body)

ALL_PKTS = []
def click_option(sock, action_id, text):
    send_pkt(sock, 2031, struct.pack('<IIIHH', 0, ACTIONSAGE, 0, 0, 0))
    pkts = drain_all(sock)
    assert any(p[1] == 2032 for p in pkts), f'no menu after click: {[p[1] for p in pkts]}'
    ALL_PKTS.extend(pkts)
    reply_2032(sock, action_id, text)
    pkts = drain_all(sock)
    ALL_PKTS.extend(pkts)
    s_ = []
    for p_ in pkts:
        if p_[1] == 2032:
            s_.extend(parse_2032(p_[2])['strings'])
    return s_

def db(q):
    r = subprocess.run(['mysql', '-N', '-B', 'cq', '-e', q],
                       capture_output=True, text=True)
    return r.stdout.strip()

def parse_1103(data):
    # wire: [len u2][type u2] then tick@+4 ownerid@+8 magictype@+0xC
    # level u2@+0x10 ... exp@+0x18 expire@+0x1C
    tick, ownerid, magictype = struct.unpack_from('<III', data, 4)
    level = struct.unpack_from('<H', data, 0x10)[0]
    exp = struct.unpack_from('<I', data, 0x18)[0]
    return dict(tick=tick, owner=ownerid, type=magictype,
                level=level, exp=exp)

fails = []
def check(cond, msg):
    tag = 'ok  ' if cond else 'FAIL'
    print(f'{tag} {msg}')
    if not cond: fails.append(msg)

# idempotency: a previous failed run can leave rows (the disconnect
# flush re-INSERTs dirty in-memory weapon skills) - clear before login
db("DELETE FROM cq_weapon_skill WHERE owner_id=11 AND type=410")
db("DELETE FROM cq_magic WHERE ownerid=11 AND type=11230")

a = socket.create_connection((HOST, PORT))
send_pkt(a, 1008, struct.pack('<II', 100011, 888))
drain_all(a)
print('ChatA logged in')

# --- 1022: pure log, chain continues ---
s = click_option(a, 99000450, '1022~log. 99000450')
check(any('V37~LOG~OK.' in x for x in s), f'1022 log chain ({s})')

# --- 1021: learn 410 lvl 2 -> check -> addexp 100 ---
s = click_option(a, 99000455, '1021~wskill. 99000455')
check(any('V37~WSK~OK.' in x for x in s), f'1021 wskill chain ({s})')
row = db("SELECT level,exp FROM cq_weapon_skill WHERE owner_id=11 AND type=410")
check(row.split() == ['2', '100'],
      f'cq_weapon_skill (410) = level 2 exp 100 (got {row!r})')
pkt1025 = [p for p in ALL_PKTS if p[1] == 1025]
check(bool(pkt1025), 'CMsgWeaponSkill 1025 sent on learn')
if pkt1025:
    wt, wl = struct.unpack_from('<IH', pkt1025[0][2], 4)
    check(wt == 410 and wl == 2, f'1025 type 410 level 2 (got {wt},{wl})')

# --- 1021 learn-twice: skill already known -> original returns false
# (FUN_140170ae0 LearnWeaponSkill refuses a known skill) -> FAIL branch
ALL_PKTS.clear()
s = click_option(a, 99000455, '1021~wskill. 99000455')
check(any('V37~WSK~FAIL.' in x for x in s),
      f'1021 re-learn known skill -> FAIL branch ({s})')

# --- 1020: learn 11230 -> check -> uplevel; 1103 to client; DB row ---
ALL_PKTS.clear()
s = click_option(a, 99000465, '1020~magic. 99000465')
check(any('V37~MAGIC~OK.' in x for x in s), f'1020 magic chain ({s})')
row = db("SELECT level,exp FROM cq_magic WHERE ownerid=11 AND type=11230")
check(row.split() == ['1', '0'],
      f'cq_magic (11230) = level 1 exp 0 (got {row!r})')
pkts1103 = [p for p in ALL_PKTS if p[1] == 1103]
check(bool(pkts1103), 'CMsgMagicInfo 1103 received (learn + uplevel)')
m = pkts1103[-1] if pkts1103 else None
if m:
    check(m[0] == 0x20, f'1103 wire len 32 (got {m[0]})')
    f = parse_1103(m[2])
    check(f['owner'] == 11, f'1103 owner id 11 (got {f["owner"]})')
    check(f['type'] == 11230, f'1103 magic type 11230 (got {f["type"]})')
    check(f['level'] == 1, f'1103 level 1 (got {f["level"]})')

# --- 1020 del chain: addexp 50 -> del; row must vanish ---
s = click_option(a, 99000470, '1020~magicdel. 99000470')
check(any('V37~DEL~OK.' in x for x in s), f'1020 addexp+del chain ({s})')
row = db("SELECT COUNT(*) FROM cq_magic WHERE ownerid=11 AND type=11230")
check(row == '0', f'cq_magic row deleted (count={row})')

# --- cleanup: close the session FIRST (the disconnect flush re-INSERTs
# dirty weapon skills, so deleting before close would resurrect the row),
# then remove the fixture rows so re-runs start clean ---
a.close()
time.sleep(1.0)
db("DELETE FROM cq_weapon_skill WHERE owner_id=11 AND type=410")
db("DELETE FROM cq_magic WHERE ownerid=11 AND type=11230")
print()
if fails:
    print(f'{len(fails)} FAILURES'); sys.exit(1)
print('ALL V37 TESTS PASSED')
