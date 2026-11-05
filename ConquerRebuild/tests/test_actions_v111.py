#!/usr/bin/env python3
"""Live test: v111 - action type 1084 (new-engine case 0x4A).

Ported from FUN_140382d20 (MsgServer.c:634133-634200): sscanf "%I64d %u %u"
(exactly 3 tokens) -> exp amount, varA, varB; the helper adds the amount to the
current exp, walks the type-0 cq_levexp rows and reports the ABSOLUTE new level
plus the percentage into the new level using DOUBLE math. Probe char 96 is
level 130 exp 0, so 10,000,000,000 exp lands on level 131 with 5%."""
import socket, struct, subprocess, sys, time

HOST, PORT = '127.0.0.1', 5816
PROBE_ID, PROBE_ACC = 96, 100096
N_MAIN, N_SHORT, N_IDX = 99020120, 99020121, 99020122
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

t = texts(click_npc(a, N_MAIN))
check('v111-ok' in t,
      f'1084 of 1e10 exp from level 130 -> level 131 and 5% ({t})')
check('v111-badlevel' not in t, 'the computed level did not mismatch')
check('v111-badpct' not in t, 'the computed percentage did not mismatch')

t = texts(click_npc(a, N_SHORT))
check('v111-short-fail' in t, f'a 2-token param takes id_nextfail ({t})')
check('v111-short-ok' not in t, 'a 2-token param did not pass')

t = texts(click_npc(a, N_IDX))
check('v111-idx-ok' in t,
      f'a var index above 7 logs and still continues at id_next ({t})')

a.close()
time.sleep(0.6)
v = db_vars()
check('var:9' not in v, f'index 9 wrote nothing (got {v.get("var:9")})')

print()
if fails:
    print(f'{len(fails)} FAILURES'); sys.exit(1)
print('ALL V111 TESTS PASSED')
