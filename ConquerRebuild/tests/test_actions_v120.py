#!/usr/bin/env python3
"""Live test: v120 - action type 1040 (Rebirth).

Ported from the new-engine case 0x22 -> FUN_1401c3180 (requirement scan +
argument chain) -> FUN_1401b9d70 (apply core), with the column map proven in
docs/worker_cuserdata.md and the full recipe in docs/worker_rebirth_apply2.md
section N.

Fixture (tools/seed_test_accounts.sql): V120Reborn = cq_user 97, level 130,
profession 10, all five stat points 0, one item equipped in slot 4, and
cq_rebirth 990001 = need_prof 10 -> new_prof 11, need_level 1 -> new_level 15,
metepsychosis 1. The action param "11 004" gives v1=11 (new profession),
v2=4 (mode) and v3=1 (metepsychosis tier).

Expected apply (all address-backed):
  look tuple for new_prof 11 -> 11/10=1 -> switch default -> (strength 0,
  speed 3, health 5, soul 2) with life = (0+3*8+2+5)*3 = 93, mana = 0*5 = 0
  points = (0+0+0+0+0) - 3*130 - 7 = -397 -> 0, then + 3*15 - 3 = 42
            (mode 4 uses the plain branch), capped at 850-10 = 840 -> 42
  lookface = (100003/1000 - 4/1000)*1000 + 4 = 100004
"""
import socket, struct, subprocess, time

HOST, PORT = '127.0.0.1', 5816
PROBE_ID, PROBE_ACC = 97, 100097
N_OK, N_NOROW = 99020160, 99020161
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

def click_npc(sock, npc_id):
    _rcv[sock] = b''
    send_pkt(sock, 2031, struct.pack('<IIIHH', 0, npc_id, 0, 0, 0))
    return drain_all(sock)

def texts(pkts):
    out = []
    for p in pkts:
        if p[1] != 2032: continue
        d = p[2]
        if len(d) < 0x12: continue
        n, pos = d[0x10], 0x11
        for _ in range(n):
            ln = d[pos]; pos += 1
            out.append(d[pos:pos+ln].decode('utf-8', 'replace')); pos += ln
    return out

def attribs(pkts):
    """Every 10017 pair (key, value) in the drain, plus the 64-bit keys."""
    out = {}
    for p in pkts:
        if p[1] != 10017: continue
        d = p[2]
        cnt = struct.unpack_from('<I', d, 12)[0]
        for k in range(cnt):
            off = 0x10 + k * 0x1C
            key, val = struct.unpack_from('<II', d, off)
            out[key] = val
        # 64-bit entries live in the same run: value = lo@+8, hi@+0xC
        for k in range(cnt):
            off = 0x10 + k * 0x1C
            key = struct.unpack_from('<I', d, off)[0]
            lo, hi = struct.unpack_from('<II', d, off + 8)
            if key in (4, 5):
                out[key] = lo | (hi << 32)
    return out

def db_row():
    r = subprocess.run(['mysql', '-h', '127.0.0.1', '-u', 'test', '-ptest', 'cq',
                        '-N', '-B', '-e',
                        "SELECT level,profession,strength,Speed,health,soul,"
                        "additional_point,metempsychosis,lookface,life,mana,exp "
                        f"FROM cq_user WHERE id={PROBE_ID}"],
                       capture_output=True, text=True)
    return r.stdout.strip().split('\t')

fails = []
def check(cond, msg):
    print(('ok   ' if cond else 'FAIL ') + msg)
    if not cond: fails.append(msg)

a = socket.create_connection((HOST, PORT))
send_pkt(a, 1008, struct.pack('<II', PROBE_ACC, 999))
drain_all(a)
print('V120Reborn logged in')
row0 = db_row()
check(row0[0] == '130' and row0[1] == '10', f'seed state before the rebirth ({row0})')

# ---- 1) the successful rebirth -------------------------------------------
pk = click_npc(a, N_OK)
t = texts(pk)
check('v120-rebirth-ok' in t, f'1040 follows id_next ({t})')
at = attribs(pk)
print('attribs:', {hex(k): v for k, v in at.items()})
check(at.get(0xC) == 15, f'attrib 0xc level = 15 ({at.get(0xC)})')
check(at.get(7) == 11, f'attrib 7 profession = 11 ({at.get(7)})')
check(at.get(0xD) == 0, f'attrib 0xd strength = 0 ({at.get(0xD)})')
check(at.get(0xE) == 3, f'attrib 0xe speed = 3 ({at.get(0xE)})')
check(at.get(0xF) == 5, f'attrib 0xf health = 5 ({at.get(0xF)})')
check(at.get(0x10) == 2, f'attrib 0x10 soul = 2 ({at.get(0x10)})')
check(at.get(10) == 42, f'attrib 10 points = 42 ({at.get(10)})')
check(at.get(0x16) == 1, f'attrib 0x16 metepsychosis = 1 ({at.get(0x16)})')
check(at.get(0) == 93, f'attrib 0 life = 93 ({at.get(0)})')
check(at.get(2) == 0, f'attrib 2 mana = 0 ({at.get(2)})')
check(at.get(5) == 0, f'attrib 5 exp = 0 ({at.get(5)})')
check(at.get(0x33) == 10, f'attrib 0x33 old profession = 10 ({at.get(0x33)})')

row = db_row()
print('cq_user 97:', row)
check(row[0] == '15', f'DB level 15 ({row[0]})')
check(row[1] == '11', f'DB profession 11 ({row[1]})')
check(row[2] == '0' and row[3] == '3' and row[4] == '5' and row[5] == '2',
      f'DB stats 0/3/5/2 ({row[2:6]})')
check(row[6] == '42', f'DB additional_point 42 ({row[6]})')
check(row[7] == '1', f'DB metempsychosis 1 ({row[7]})')
check(row[8] == '100004', f'DB lookface 100004 ({row[8]})')
check(row[9] == '93' and row[10] == '0', f'DB life 93 / mana 0 ({row[9:11]})')
check(row[11] == '0', f'DB exp 0 ({row[11]})')

r = subprocess.run(['mysql', '-h', '127.0.0.1', '-u', 'test', '-ptest', 'cq',
                    '-N', '-B', '-e',
                    "SELECT position FROM cq_item WHERE id=990120"],
                   capture_output=True, text=True)
check(r.stdout.strip() == '0', f'slot-4 item unequipped to the inventory ({r.stdout.strip()})')

# ---- 2) the requirement gate --------------------------------------------
pk2 = click_npc(a, N_NOROW)
t2 = texts(pk2)
check('v120-rebirth-norow' in t2, f'1040 without a cq_rebirth row takes id_nextfail ({t2})')
check('v120-rebirth-ok' not in t2, 'the failed rebirth did not run the ok branch')
row2 = db_row()
check(row2 == row, 'the failed rebirth left the row untouched')

a.close()
if fails:
    print(f'\n{len(fails)} FAILED'); raise SystemExit(1)
print('\nall v120 rebirth assertions passed')
