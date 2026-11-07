#!/usr/bin/env python3
"""Live test: v140 - action 1082 (`self add <status> <t1> <t5> <t4>`).

1082 (body 0x14012f025) parses "%s %s %u %d %d %d" (6 conversions required) and
strcmp's the tokens against team/couple/mate/self + add/chk. `self`+`add` calls
GetInstance(0x14) = status::CStatusMgr -> vtable +0x8 = AddStatus with
(arg2 = actor, arg3 = n1, arg4 = n2, arg5 = n3, arg6 = n4, rest 0), whose prologue
proved rec+0x18 = time()+arg8, i.e. the duration arg is literally 0 for the shipped
rows (`self add 7 200 1800 0`) while 1800 lands in t5. Result TRUE.
Anything else (other scopes, `chk`, bad token count) is BLOCKED/unsupported and
must take id_nextfail - `mate add ...` proves that path is not silently accepted.

Fixtures (PROBE_ACC 100090 -> cq_user 90):
  StatusSage 99020249 -> 1098 probe(7) FALSE -> 1082 add 7 -> 1098 probe(7) TRUE
  BadParamSage 99020250 -> 1082 "self add 7 200" (4 tokens) -> fail branch
  ScopeSage  99020251 -> 1082 "mate add 7 200 60 0" -> BLOCKED -> fail branch
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

fails = []
def check(cond, msg):
    print(('ok   ' if cond else 'FAIL ') + msg)
    if not cond: fails.append(msg)

def login():
    s = socket.create_connection((HOST, PORT))
    send_pkt(s, 1008, struct.pack('<II', PROBE_ACC, 999))
    drain_all(s)
    return s

sock = login()
print('v140 StatusProbe logged in')

t = texts(click(sock, 99020249))
check('v140-status-7-held' in t,
      f'self add 7 makes the 1098 probe(7) true afterwards ({t})')
check('v140-pre-held' not in t,
      f'status 7 was NOT held before the add, so the probe is meaningful ({t})')
check('v140-add-failed' not in t and 'v140-status-7-missing' not in t,
      f'the add took id_next (no fail branch reached) ({t})')

s2 = login()
t = texts(click(s2, 99020250))
check('v140-badcount' in t and 'v140-badcount-passed' not in t,
      f'fewer than 6 conversions goes to id_nextfail ({t})')

s3 = login()
t = texts(click(s3, 99020251))
check('v140-blocked-scope' in t and 'v140-blocked-scope-passed' not in t,
      f'unported "mate" scope is refused, not silently accepted ({t})')

print()
if fails:
    print(f'{len(fails)} FAILED')
    raise SystemExit(1)
print('ALL PASS')
