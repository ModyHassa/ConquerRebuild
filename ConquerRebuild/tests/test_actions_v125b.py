#!/usr/bin/env python3
"""Live test: v125b - 1028 (user flag word at CUser+0xf24) and 1053 (var compare).

1028 body 0x14012ef16: sscanf "%s %d" must be exactly 2 tokens, index <= 0x1F.
  chk -> `bt idx,[user+0xf24]` (clear bit takes the fail branch); add/clr -> set/clear,
  always true; anything else -> the shared DBERROR fail path.
1053 body 0x14012e4f5: sscanf "var(%d) %s %I64d" == 3 on the same var store as 1064:
  ">" setg, ">=" setge, fallthrough sete (==), "+=" accumulates.

Fixture: V125Flags = cq_user 91 / acc 100091 at (437,334); chains 99020360..99020380.
"""
import socket, struct

HOST, PORT = '127.0.0.1', 5816
PROBE_ID, PROBE_ACC = 91, 100091
NPCS = {'flag': 99020200, 'guard': 99020201, 'gt': 99020202,
        'eq': 99020203, 'plus': 99020204}
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
print('V125Flags logged in')

t = texts(click(sock, NPCS['flag']))
check('v125-chk5-clear' in t,
      f'1028 bit 5 starts clear, add/chk/clr/chk walks the chain ({t})')

t = texts(click(sock, NPCS['guard']))
check('v125-idx-guard' in t, f'1028 index > 0x1F takes the fail path ({t})')

t = texts(click(sock, NPCS['gt']))
check('v125-gt-false' in t,
      f'1053 ">" true then false on the same var ({t})')

t = texts(click(sock, NPCS['eq']))
check('v125-eq-false' in t,
      f'1053 ">=" and "==" true, "== 8" false ({t})')

t = texts(click(sock, NPCS['plus']))
check('v125-plus-eq' in t, f'1053 "+=" accumulates ({t})')

print()
if fails:
    print(f'{len(fails)} FAILED')
    raise SystemExit(1)
print('ALL PASS')
