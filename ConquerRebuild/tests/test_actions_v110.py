#!/usr/bin/env python3
"""Live test: v110 - action type 1554 (achievement chk/add/clr).

Ported from new-engine case 0x99 (msgserver_gameaction.c:19025) with
FUN_140171090 (chk) / FUN_140170e90+FUN_1403772a0 (add) /
FUN_140113380+FUN_140377690 (clr). DATA = cq_achievementtype.position;
field = (data/100)%100 + 1, bit = data%100 (1-based). Storage is the real
cq_achievement row: point + achieve1..13, cells[1] = point, [2..14] = achieveN.
Fixture position 20101 -> field 2 (achieve1) bit 1, worth 25 points."""
import socket, struct, subprocess, sys, time

HOST, PORT = '127.0.0.1', 5816
PROBE_ID, PROBE_ACC = 96, 100096
N_CHK, N_ADD, N_CLR = 99020110, 99020111, 99020112
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

def db_row():
    r = subprocess.run(['mysql', '-h', '127.0.0.1', '-u', 'test', '-ptest', 'cq',
                        '-N', '-B', '-e',
                        f"SELECT point,achieve1 FROM cq_achievement WHERE userid={PROBE_ID}"],
                       capture_output=True, text=True)
    line = r.stdout.strip().split('\n')[0] if r.stdout.strip() else ''
    if not line: return None, None
    parts = line.split('\t')
    return int(parts[0]), int(parts[1])

fails = []
def check(cond, msg):
    print(('ok   ' if cond else 'FAIL ') + msg)
    if not cond: fails.append(msg)

def login():
    s = socket.create_connection((HOST, PORT))
    send_pkt(s, 1008, struct.pack('<II', PROBE_ACC, 777))
    drain_all(s)
    return s

a = login()
print('V108Probe logged in')

t = texts(click_npc(a, N_CHK))
check('v110-pre-fail' in t, f'award not held yet -> chk takes id_nextfail ({t})')
check('v110-pre-ok' not in t, 'the empty achievement did not report as set')

t = texts(click_npc(a, N_ADD))
check('v110-add-ok' in t, f'add then chk passes ({t})')
check('v110-add-fail' not in t, 'the add did not leave the bit clear')

a.close()
time.sleep(1.6)
pt, a1 = db_row()
check(pt == 25, f'cq_achievement.point == 25 after add (got {pt})')
check(a1 is not None and (a1 & 1) == 1,
      f'achieve1 bit 1 set after add (got {a1})')

b = login()                 # re-login proves the row is loaded back
print('V108Probe re-logged in (achievement row loaded)')
t = texts(click_npc(b, N_CLR))
check('v110-cleared' in t, f'clr then chk reports the bit clear ({t})')
check('v110-still-set' not in t, 'clr did not leave the bit set')
b.close()
time.sleep(1.6)
pt, a1 = db_row()
check(pt == 0, f'point back to 0 after clr (got {pt})')
check(a1 is not None and (a1 & 1) == 0, f'achieve1 bit 1 cleared (got {a1})')

print()
if fails:
    print(f'{len(fails)} FAILURES'); sys.exit(1)
print('ALL V110 TESTS PASSED')
