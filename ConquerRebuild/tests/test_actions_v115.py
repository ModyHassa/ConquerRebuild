#!/usr/bin/env python3
"""Live test: v115 - action types 1203 and 1510.

1203 (case 0x6F, msgserver_gameaction.c:17661) branches on `max_life <= life` using the
user's +0x10 getters +0x78 (life) / +0x80 (max life).
1510 (case 0x8C, :18350) parses one int and drains `v` percent of life, the DATA column
choosing the base: 0 = max life, 1 = current life; the amount is clamped to the current
life and applied through FUN_140177000 (life -= x)."""
import socket, struct, subprocess, sys, time

HOST, PORT = '127.0.0.1', 5816
PROBE_ID, PROBE_ACC = 96, 100096
N_HEAL, N_HALF, N_PLAIN, N_BAD = 99020130, 99020131, 99020132, 99020133
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
print('V1084Probe logged in')

t = texts(click_npc(a, N_HEAL))          # 1002 life -> full heal, then 1203
check('v115-full-after-heal' in t,
      f'1203 passes once 1002 restores full life ({t})')
check('v115-still-notfull' not in t, 'the healed actor was not reported short')

t = texts(click_npc(a, N_PLAIN))         # still undamaged -> 1203 must pass again
check('v115-init-full' in t, f'1203 still passes on the untouched actor ({t})')

t = texts(click_npc(a, N_HALF))          # 1510 50% of CURRENT life, then 1203
check('v115-halved' in t, f'1510 halves life so 1203 fails afterwards ({t})')
check('v115-unexpected-full' not in t, '1510 did not leave life at the maximum')

t = texts(click_npc(a, N_PLAIN))         # damaged now -> 1203 must fail
check('v115-init-notfull' in t,
      f'1203 flips to id_nextfail once life is below max ({t})')

t = texts(click_npc(a, N_BAD))           # 1510 with a non-numeric param
check('v115-badparam-fail' in t, f'1510 with a non-numeric param fails ({t})')
check('v115-badparam-ok' not in t, 'a non-numeric 1510 param did not pass')

a.close()
time.sleep(0.5)
print()
if fails:
    print(f'{len(fails)} FAILURES'); sys.exit(1)
print('ALL V115 TESTS PASSED')
