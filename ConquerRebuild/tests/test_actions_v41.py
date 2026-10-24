#!/usr/bin/env python3
"""Live test: v41 — item action types (old-engine ProcessActionItem
FUN_140123590): 506 take N item copies, 511 equipped-weapon check, 513
transform (1105 with 0 targets + lookface swap via 10014), 516 item
field probe into var, 517 item field ops by type.
TestKnight (cq_user 1, acc 100001, uin 777) with weapon 90001 (type
613129) at position 4; NPC ActionSage 9990 on map 1002."""
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

fails = []
def check(cond, msg):
    tag = 'ok  ' if cond else 'FAIL'
    print(f'{tag} {msg}')
    if not cond: fails.append(msg)

a = socket.create_connection((HOST, PORT))
send_pkt(a, 1008, struct.pack('<II', 100001, 777))
drain_all(a)
print('TestKnight logged in')

# --- 506: award 3 DivineHare then take 2 (1 left) ---
db("DELETE FROM cq_item WHERE player_id=1 AND type=725015")
ALL_PKTS.clear()
s = click_option(a, 99000510, 'take~gems. 99000510')
check(any('V41~TAKE~OK.' in x for x in s), f'506 award 3 + take 2 chain ({s})')
left = db("SELECT COUNT(*) FROM cq_item WHERE player_id=1 AND type=725015 AND del_time=0")
check(left == '1', f'506 left exactly 1 copy in DB (got {left})')

# --- 506 miss: taking 2 of an unowned type follows id_nextfail ---
s = click_option(a, 99000517, 'take~miss. 99000517')
check(any('V41~TAKE~MISS~OK.' in x for x in s), f'506 miss -> id_nextfail ({s})')

# --- 511: equipped weapon (pos 4, type 613129) exists ---
s = click_option(a, 99000520, 'check~weapon. 99000520')
check(any('V41~WEAPON~OK.' in x for x in s), f'511 weapon-present branch ({s})')
check(not any('V41~WEAPON~MISS.' in x for x in s), '511 must not hit MISS branch')

# --- 513: transform -> 1105 (0 targets, type 3310) + 10014 respawn ---
ALL_PKTS.clear()
s = click_option(a, 99000525, 'transform. 99000525')
check(any('V41~TRANS~OK.' in x for x in s), f'513 transform chain ({s})')
eff = [p for p in ALL_PKTS if p[1] == 1105]
check(bool(eff), f'513 broadcast 1105 ({[p[1] for p in ALL_PKTS]})')
if eff:
    caster, target = struct.unpack_from('<II', eff[0][2], 4)
    mtype, mlevel = struct.unpack_from("<HH", eff[0][2], 0xC)
    count = eff[0][2][0x13]
    check(caster == 1 and mtype == 3310 and count == 0,
          f'1105 wire caster=1 type=3310 count=0 (got {caster},{mtype},{count})')
sp2 = [p for p in ALL_PKTS if p[1] == 10014]
check(bool(sp2), '513 broadcast a fresh 10014 spawn')

# --- 516: "0 14 == 0 to 7" gem probe on the weapon -> var(0) ---
s = click_option(a, 99000530, 'probe~field. 99000530')
check(any('V41~FIELD~OK.' in x for x in s), f'516 field probe chain ({s})')

# --- 517: set field 14 = 1 on weapon type, then == 1 ---
s = click_option(a, 99000533, 'set~field. 99000533')
check(any('V41~SET~OK.' in x for x in s), f'517 set + == chain ({s})')

a.close()
time.sleep(0.5)
print()
if fails:
    print(f'{len(fails)} FAILURES'); sys.exit(1)
print('ALL V41 TESTS PASSED')
