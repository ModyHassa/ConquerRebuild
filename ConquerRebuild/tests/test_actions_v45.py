#!/usr/bin/env python3
"""Live test: v45 — action type 512 (CMsgItemInfoEx 1116 socket-item
display): gate by item class {1,3,6} + socket range, 1116 broadcast to
screen, fail/stop branches."""
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

def strings_of_2032(p):
    d = p[2]; n = d[0x10]; pos = 0x11; out = []
    for _ in range(n):
        ln = d[pos]; pos += 1
        out.append(d[pos:pos+ln].decode('utf-8','replace')); pos += ln
    return out

def click_option(sock, action_id, text):
    send_pkt(sock, 2031, struct.pack('<IIIHH', 0, ACTIONSAGE, 0, 0, 0))
    pkts = drain_all(sock)
    assert any(p[1] == 2032 for p in pkts), 'no menu'
    body = struct.pack('<HHIHBB', 0, 0, action_id, 0, 0, 0x66)
    body += bytes([1, len(text)]) + text.encode()
    send_pkt(sock, 2032, body)
    return drain_all(sock)

def login(acct, uin):
    s = socket.create_connection((HOST, PORT))
    send_pkt(s, 1008, struct.pack('<II', acct, uin))
    drain_all(s)
    return s

fails = []
def check(cond, msg):
    tag = 'ok  ' if cond else 'FAIL'
    print(f'{tag} {msg}')
    if not cond: fails.append(msg)

a = login(100001, 777)   # TestKnight (player id 1)
b = login(100011, 888)   # ChatA on the same screen (400,300)
time.sleep(0.2); drain_all(b)
print('TestKnight + ChatA logged in')

# --- pass: pos 1 item 90100 (type 900101, class 6), socket 4 in [3,6] ---
pkts = click_option(a, 99000590, 'sock~ok. 99000590')
acts = [p for p in pkts if p[1] == 1116]
check(len(acts) == 1, f'one 1116 to self ({len(acts)})')
if acts:
    w_ = acts[0][2]
    item_id, uid = struct.unpack_from('<II', w_, 4)
    check(item_id == 90100, f'1116 item id 90100 (got {item_id})')
    check(uid == 1, f'1116 uid = knight id 1 (got {uid})')
    typ, = struct.unpack_from('<I', w_, 0x14)
    check(typ == 900101, f'1116 type record col1 = 900101 (got {typ})')
    check(len(acts[0][2]) == 0x52 and struct.unpack_from('<H', acts[0][2], 0)[0] == 0x52,
          f'1116 wire 0x52 = hdr + size-field 0x4E (got {len(acts[0][2])})')
s = [x for p in pkts if p[1] == 2032 for x in strings_of_2032(p)]
check('V45~OK.' in s, f'512 pass chain continued ({s})')

# broadcast: ChatA (same screen) also got the 1116
bp = drain_all(b)
b_acts = [p for p in bp if p[1] == 1116]
check(len(b_acts) == 1, f'1116 broadcast reached screen player ({len(b_acts)})')

# --- gate fail: socket 9 not in [3,6] for class 6 ---
pkts = click_option(a, 99000592, 'sock~gate. 99000592')
s = [x for p in pkts if p[1] == 2032 for x in strings_of_2032(p)]
check('V45~GATE~FAIL.' in s and not any(p[1] == 1116 for p in pkts),
      f'512 bad socket -> id_nextfail, no 1116 ({s})')

# --- no item at position 7 ---
pkts = click_option(a, 99000594, 'sock~noitem. 99000594')
s = [x for p in pkts if p[1] == 2032 for x in strings_of_2032(p)]
check('V45~NOITEM~STOP.' in s and not any(p[1] == 1116 for p in pkts),
      f'512 missing item -> id_nextfail, no 1116 ({s})')

a.close(); b.close()
time.sleep(0.5)
print()
if fails:
    print(f'{len(fails)} FAILURES'); sys.exit(1)
print('ALL V45 TESTS PASSED')
