#!/usr/bin/env python3
"""Live test: v116 - action type 1204 (max_mana <= mana).

VERIFIED from msgserver_gameaction.c:17666-17670: 1204 reads the user getters +0x80
(current mana) and +0x88 (max mana) and branches on `max <= current`. The slots are pinned
by FUN_1401a2660 case 2 (the mana attrib), which clamps against +0x88 and reads +0x80 for
its 10017 entry. 1002 "mana" restores mana to the maximum."""
import socket, struct, subprocess, sys, time

HOST, PORT = '127.0.0.1', 5816
PROBE_ID, PROBE_ACC = 96, 100096
N_HEAL, N_HALF, N_PLAIN, N_BAD = 99020130, 99020131, 99020132, 99020133
N_MP_PLAIN, N_MP_FILL = 99020140, 99020141
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

def db_vars():
    r = subprocess.run(['mysql', '-h', '127.0.0.1', '-u', 'test', '-ptest', 'cq',
                        '-N', '-B', '-e',
                        f"SELECT var,val FROM cq_user_script_var WHERE player_id={PROBE_ID}"],
                       capture_output=True, text=True)
    out = {}
    for line in r.stdout.splitlines():
        parts = line.split('\t')
        if len(parts) == 2:
            out[parts[0]] = int(parts[1])
    return out

fails = []
def check(cond, msg):
    print(('ok   ' if cond else 'FAIL ') + msg)
    if not cond: fails.append(msg)

a = socket.create_connection((HOST, PORT))
send_pkt(a, 1008, struct.pack('<II', PROBE_ACC, 777))
drain_all(a)
print('probe logged in')

t0 = texts(click_npc(a, N_MP_PLAIN))
check(('v116-mana-full' in t0) or ('v116-mana-notfull' in t0),
      f'1204 branched on the current mana state ({t0})')
check(not ('v116-mana-full' in t0 and 'v116-mana-notfull' in t0),
      '1204 took exactly one branch')

t = texts(click_npc(a, N_MP_FILL))       # 1002 mana -> full, then 1204
check('v116-mana-full-after' in t,
      f'1204 passes once 1002 restores full mana ({t})')
check('v116-mana-notfull-after' not in t,
      'the refilled actor was not reported short on mana')

a.close()
time.sleep(0.4)
print()
if fails:
    print(f'{len(fails)} FAILURES'); sys.exit(1)
print('ALL V116 TESTS PASSED')
