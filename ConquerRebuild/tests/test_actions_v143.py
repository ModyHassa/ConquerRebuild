#!/usr/bin/env python3
"""Live test: v143 - action 1202 (alias of case byte 0x6e, body 0x1401329bf).

1202 is not a new body: DAT_14013aa9c[1202-1001] = 0x6e, whose body is 0x1401329bf -
the "lastentertime" cooldown gate the rebuild already ships as case 802:
  sscanf "%d" (>=1 else DBERROR 0x257c) ; stored = GetInt(store,"lastentertime")
  pass when stored == 0 || TimeGet(3) - stored >= n ; on pass stamp now ; return 1
So 1202 and 802 share one implementation. The test proves the gate AND the stamp:
the first 1202 "1" passes (empty stamp), the immediately following 1202 "5" must fail.
"""
import socket, struct

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

sock = socket.create_connection((HOST, PORT))
send_pkt(sock, 1008, struct.pack('<II', PROBE_ACC, 999))
drain_all(sock)
print('v143 CooldownProbe logged in')

t = texts(click(sock, 99020252))
check('v143-first-pass' in t and 'v143-first-blocked' not in t,
      f'1202 "1" passes on an empty lastentertime stamp ({t})')
check('v143-second-blocked' in t and 'v143-second-passed' not in t,
      f'the second 1202 sees the stamp the first one wrote and blocks ({t})')

print()
if fails:
    print(f'{len(fails)} FAILED')
    raise SystemExit(1)
print('ALL PASS')
