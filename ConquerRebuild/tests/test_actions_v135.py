#!/usr/bin/env python3
"""Live test: v135 - action 1094 (profession-TIER gate).

Body 0x140137f06, verified instruction by instruction:
    if (level < 2) return FALSE
    bucket = (profession / 10) * 10           ; CUser+0xEEE = profession
    if (data != 0 && data != bucket) return FALSE
    if ((old_prof   / 10) * 10 != bucket) return FALSE    ; +0xEDB
    return ((first_prof / 10) * 10 == bucket)             ; +0xEDA, sete al

Fixtures: V127Skills (cq_user 90) is seeded with profession 10 / old_prof 12 / first_prof 18,
so all three buckets are 10. TierSage (99020246) runs 1094 with data 0, TierSage10 (99020247) with
data 10 and TierSage20 (99020248) with data 20. The last part mutates cq_user.old_prof to 25 and
re-logs in (Player fields are loaded at login) to prove the bucket comparison really gates.
"""
import socket, struct, subprocess

HOST, PORT = '127.0.0.1', 5816
PROBE_ACC = 100090
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
    return subprocess.run(['mysql', '-uroot', '--batch', '--skip-column-names', 'cq', '-e', sql],
                          capture_output=True, text=True).stdout.strip()

fails = []
def check(cond, msg):
    print(('ok   ' if cond else 'FAIL ') + msg)
    if not cond: fails.append(msg)

def login():
    s = socket.create_connection((HOST, PORT))
    send_pkt(s, 1008, struct.pack('<II', PROBE_ACC, 999))
    drain_all(s)
    return s

print('professions:', db("SELECT profession,old_prof,first_prof FROM cq_user WHERE id=90"))

t = texts(click(login(), 99020246))
check('v135-tier0-ok' in t and 'v135-tier0-no' not in t,
      f'data 0 passes when all three professions share bucket 10 ({t})')

t = texts(click(login(), 99020247))
check('v135-tier10-ok' in t and 'v135-tier10-no' not in t,
      f'data 10 (the shared bucket) passes ({t})')

t = texts(click(login(), 99020248))
check('v135-tier20-no' in t and 'v135-tier20-ok' not in t,
      f'data 20 (a different bucket) fails ({t})')

db("UPDATE cq_user SET old_prof=25 WHERE id=90")
t = texts(click(login(), 99020246))
check('v135-tier0-no' in t and 'v135-tier0-ok' not in t,
      f'old_prof 25 breaks the bucket match, so data 0 fails ({t})')
db("UPDATE cq_user SET old_prof=12 WHERE id=90")

print()
if fails:
    print(f'{len(fails)} FAILED')
    raise SystemExit(1)
print('ALL PASS')
