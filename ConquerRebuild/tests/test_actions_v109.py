#!/usr/bin/env python3
"""Live test: v109 - action type 1086 (new-engine case 0x4C).

Ported from FUN_140382f00 (MsgServer.c:634202-634276): the action converts
"minutes" into an exp amount by walking cq_levexp type-0 records
(cell 1 = exp, cell 2 = up_lev_time) with single-precision float math, then
stores the result in var[idx] (FUN_140164520: idx > 7 logs and writes nothing).
Expected values below are computed from the live cq_levexp rows with the same
float32 rounding the original uses; the probe character is level 130 exp 0."""
import socket, struct, subprocess, sys, time

HOST, PORT = '127.0.0.1', 5816
PROBE_ID, PROBE_ACC = 96, 100096
N_A, N_B, N_C = 99020100, 99020101, 99020102
EXP_2400, EXP_600 = 201887472, 50471868
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

def db_vars():
    r = subprocess.run(['mysql', '-h', '127.0.0.1', '-u', 'test', '-ptest', 'cq',
                        '-N', '-B', '-e',
                        f"SELECT var,val FROM cq_user_script_var WHERE player_id={PROBE_ID}"],
                       capture_output=True, text=True)
    out = {}
    for line in r.stdout.splitlines():
        p = line.split('\t')
        if len(p) == 2:
            out[p[0]] = int(p[1])
    return out

fails = []
def check(cond, msg):
    print(('ok   ' if cond else 'FAIL ') + msg)
    if not cond: fails.append(msg)

a = socket.create_connection((HOST, PORT))
send_pkt(a, 1008, struct.pack('<II', PROBE_ACC, 777))
drain_all(a)
print('V108Probe logged in')

t = texts(click_npc(a, N_A))
check('v108ok1086' in t, f'1086 "2400 5" follows id_next ({t})')
t = texts(click_npc(a, N_B))
check('v108ok1086b' in t, f'1086 "600 9" (idx > 7) still follows id_next ({t})')
t = texts(click_npc(a, N_C))
check('v108fail1086' in t, f'1086 with a non-numeric param takes id_nextfail ({t})')
check('v108ok1086' not in t, 'the bad-param row did not run the ok branch')

a.close()          # vars flush on disconnect
time.sleep(1.6)
v = db_vars()
check(v.get('var:5') == EXP_2400,
      f'var[5] == {EXP_2400} (exp of 2400 minutes), got {v.get("var:5")}')
check('var:9' not in v,
      f'idx 9 > 7 wrote nothing (got {v.get("var:9")})')

print()
if fails:
    print(f'{len(fails)} FAILURES'); sys.exit(1)
print('ALL V109 TESTS PASSED')
