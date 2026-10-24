#!/usr/bin/env python3
"""Live test: v43 — module-gated + caseless action types: 9001 (dev-id
gate, ProcessActionOS), family-module types 218/219/3501-family (no clan
system -> id_nextfail, matching the original's absent-module branch),
and caseless types 3001-3008/3010/498/20001/20002."""
import socket, struct, sys, time

HOST, PORT = '127.0.0.1', 5816
ACTIONSAGE = 9990
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

def click_option(sock, action_id, text):
    send_pkt(sock, 2031, struct.pack('<IIIHH', 0, ACTIONSAGE, 0, 0, 0))
    pkts = drain_all(sock)
    assert any(p[1] == 2032 for p in pkts), 'no menu'
    body = struct.pack('<HHIHBB', 0, 0, action_id, 0, 0, 0x66)
    body += bytes([1, len(text)]) + text.encode()
    send_pkt(sock, 2032, body)
    pkts = drain_all(sock)
    s_ = []
    for p_ in pkts:
        if p_[1] == 2032:
            d = p_[2]
            n = d[0x10]; pos = 0x11
            for _ in range(n):
                ln = d[pos]; pos += 1
                s_.append(d[pos:pos+ln].decode('utf-8','replace')); pos += ln
    return s_

fails = []
def check(cond, msg):
    tag = 'ok  ' if cond else 'FAIL'
    print(f'{tag} {msg}')
    if not cond: fails.append(msg)

a = socket.create_connection((HOST, PORT))
send_pkt(a, 1008, struct.pack('<II', 100001, 777))
drain_all(a)
print('TestKnight logged in')

# 9001: id gate — TestKnight id 1 < 0xee69a15e -> fail branch
s = click_option(a, 99000560, 'os~gate. 99000560')
check('V43~OS~GATE~FAIL.' in s and 'V43~OS~GATE~PASS.' not in s,
      f'9001 dev-id gate fails for a normal player ({s})')

# 3501 family attr: no clan module -> fail branch
s = click_option(a, 99000563, 'family~rank. 99000563')
check('V43~FAMILY~NORUN.' in s and 'V43~FAMILY~RAN.' not in s,
      f'3501 family module absent -> id_nextfail ({s})')

# 3001 caseless -> fail branch
s = click_option(a, 99000566, 'no~case. 99000566')
check('V43~NOCASE~FAIL.' in s and 'V43~NOCASE~RAN.' not in s,
      f'3001 no-case type -> id_nextfail ({s})')

# 498 caseless item type -> fail branch
s = click_option(a, 99000569, 'item~498. 99000569')
check('V43~ITEM498~FAIL.' in s and 'V43~ITEM498~RAN.' not in s,
      f'498 no-case item type -> id_nextfail ({s})')

a.close()
time.sleep(0.5)
print()
if fails:
    print(f'{len(fails)} FAILURES'); sys.exit(1)
print('ALL V43 TESTS PASSED')
