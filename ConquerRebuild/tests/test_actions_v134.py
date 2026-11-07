#!/usr/bin/env python3
"""Live test: v134 - action 1023 (claim the account's cq_bonus row).

1023 (case 0x11, body 0x14012fd4a) is one call, 0x140172910(user), whose verified SQL is
`SELECT * FROM cq_bonus WHERE id_account = %u AND flag = 0 LIMIT 1`. It executes the row's
`action` column as an action chain through the router and logs
`gmlog/bonus "AccountID(%u), Player(%u) take bonus(%u)."`.

Fixtures (chain 99020602): 1023 -> 99020603 'v134-bonus-claimed' / 99020604 'v134-bonus-none'.
The seeded row points at chain 99020600, so the claim must also run
'v134-bonus-chain-ran' + 'v134-bonus-chain-done', and cq_bonus.flag must become 1.
"""
import socket, struct, subprocess

HOST, PORT = '127.0.0.1', 5816
PROBE_ACC = 100090
NPC = 99020245
_rcv = {}

def recv_pkt(sock, timeout=4.0):
    sock.settimeout(timeout)
    buf = _rcv.setdefault(sock, b'')
    while True:
        if len(buf) >= 4:
            ln, tp = struct.unpack_from('<HH', buf, 0)
            if len(buf) >= ln:
                pkt = (ln, tp, buf[:ln]); _rcv[sock] = buf[ln:]; return pkt
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
        pkts.append(p); quiet = 0.3
    return pkts

def click(sock, npc_id):
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

def db(sql):
    r = subprocess.run(['mysql', '-uroot', '--batch', '--skip-column-names', 'cq', '-e', sql],
                       capture_output=True, text=True)
    return r.stdout.strip()

fails = []
def check(cond, msg):
    print(('ok   ' if cond else 'FAIL ') + msg)
    if not cond: fails.append(msg)

def login():
    s = socket.create_connection((HOST, PORT))
    send_pkt(s, 1008, struct.pack('<II', PROBE_ACC, 999))
    drain_all(s)
    return s

t = texts(click(login(), NPC))
check('v134-bonus-claimed' in t and 'v134-bonus-none' not in t,
      f'the seeded cq_bonus row is found and claimed ({t})')
check('v134-bonus-chain-ran' in t and 'v134-bonus-chain-done' in t,
      f'the row action runs as a chain through the router ({t})')

flag = db("SELECT flag FROM cq_bonus WHERE action=99020600")
check(flag == '1', f'cq_bonus.flag is marked used after the claim (flag={flag})')

t2 = texts(click(login(), NPC))
check('v134-bonus-none' in t2 and 'v134-bonus-claimed' not in t2,
      f'a spent row is not claimed twice ({t2})')

print()
if fails:
    print(f'{len(fails)} FAILED')
    raise SystemExit(1)
print('ALL PASS')
