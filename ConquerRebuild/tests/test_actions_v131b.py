#!/usr/bin/env python3
"""Live test: v131 - action 1557 (days-since-last-logout bookkeeping).

1557 (case 0x9c, body 0x140139ebb): sscanf "%u" must give exactly 1 token.
  edi = day-stamp(last_logout_3) when last_logout_3 != 0, else the RAW last_login.
  a->data == 0 -> pure predicate "u1 <= today": u1 >= 1e8 fails, so does edi > u1
                  or edi == 0.
  a->data != 0 -> u1 must be 0..7; the qword slot at CUser+0x2F0+u1*8 gets
                  today - edi when edi is a real past day, else 0; true only then.

Fixtures (Chainz 1000012, last_logout_3 = 2026-11-03 12:00):
  DateSage  99020236 -> 99020490 (data 5, "2")  -> slot write, expect ok
  PredSage  99020237 -> 99020493 (data 0, 99999999) -> predicate true
  RangeSage 99020238 -> 99020496 (data 5, "9")  -> u1 out of range, expect fail
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

def login():
    s = socket.create_connection((HOST, PORT))
    send_pkt(s, 1008, struct.pack('<II', PROBE_ACC, 999))
    drain_all(s)
    return s

fails = []
def check(cond, msg):
    print(('ok   ' if cond else 'FAIL ') + msg)
    if not cond: fails.append(msg)

t = texts(click(login(), 99020236))
check('v131-1557-slot-ok' in t and 'v131-1557-slot-fail' not in t,
      f'past last_logout_3 stores a day count and passes ({t})')

t = texts(click(login(), 99020237))
check('v131-1557-pred-ok' in t and 'v131-1557-pred-fail' not in t,
      f'data==0 predicate "u1 <= today" passes for 99999999 ({t})')

t = texts(click(login(), 99020238))
check('v131-1557-range-failed' in t and 'v131-1557-range-passed' not in t,
      f'u1 = 9 is outside the 0..7 slot range ({t})')

print()
if fails:
    print(f'{len(fails)} FAILED')
    raise SystemExit(1)
print('ALL PASS')
