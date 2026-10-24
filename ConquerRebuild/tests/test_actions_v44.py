#!/usr/bin/env python3
"""Live test: v44 — action types 112 (patch-news dialog mode 112), 124
(CMsgAction 10010 action 0x74 with magic-type data), 126 (world event
record + optional 10010 action 0x9f), 2005 (bad row -> fail branch)."""
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

fails = []
def check(cond, msg):
    tag = 'ok  ' if cond else 'FAIL'
    print(f'{tag} {msg}')
    if not cond: fails.append(msg)

a = socket.create_connection((HOST, PORT))
send_pkt(a, 1008, struct.pack('<II', 100001, 777))
drain_all(a)
print('TestKnight logged in')

# --- 112: mode-112 dialog line, wire id = DATA(7), then chain runs ---
pkts = click_option(a, 99000580, 'news~112. 99000580')
d112 = [p for p in pkts if p[1] == 2032 and p[2][0xF] == 112]
check(len(d112) == 1, f'one mode-112 line ({len(d112)})')
if d112:
    wire_id = struct.unpack_from('<H', d112[0][2], 0xC)[0]
    check(wire_id == 7, f"112 wire id = DATA column 7 (got {wire_id})")
    check(strings_of_2032(d112[0]) == ['V44~PATCH~NEWS.'],
          f"112 text (got {strings_of_2032(d112[0])})")
s = [x for p in pkts if p[1] == 2032 for x in strings_of_2032(p)]
check('V44~NEWS~OK.' in s, f'112 chain continued id_next ({s})')

# --- 124: 10010 action 0x74, data = DATA(1190), actor = self ---
pkts = click_option(a, 99000582, 'fx~124. 99000582')
acts = [p for p in pkts if p[1] == 10010]
check(len(acts) == 1, f'one 10010 packet ({len(acts)})')
if acts:
    w = acts[0][2]
    actor, data = struct.unpack_from('<II', w, 8)
    action, = struct.unpack_from('<H', w, 0x18)
    check(action == 0x74, f"124 10010 action 0x74 (got {hex(action)})")
    check(data == 1190, f"124 10010 data = DATA 1190 (got {data})")
    check(actor == 1, f"124 10010 actor = self id 1 (got {actor})")
s = [x for p in pkts if p[1] == 2032 for x in strings_of_2032(p)]
check('V44~MAGICFX~OK.' in s, f'124 chain continued id_next ({s})')

# --- 126: 3 numeric fields, 3rd == 0 -> no 10010, chain continues ---
pkts = click_option(a, 99000584, 'event~126. 99000584')
check(not any(p[1] == 10010 for p in pkts),
      f'126 3rd field 0 -> no 10010 (got {[p[1] for p in pkts]})')
s = [x for p in pkts if p[1] == 2032 for x in strings_of_2032(p)]
check('V44~EVENT~OK.' in s, f'126 chain continued id_next ({s})')

# --- 2005: text param (not 7 numbers) -> fail branch ---
pkts = click_option(a, 99000586, 'bad~2005. 99000586')
s = [x for p in pkts if p[1] == 2032 for x in strings_of_2032(p)]
check('V44~BAD~FAIL.' in s and 'V44~BAD~RAN.' not in s,
      f'2005 bad row -> id_nextfail ({s})')

a.close()
time.sleep(0.5)
print()
if fails:
    print(f'{len(fails)} FAILURES'); sys.exit(1)
print('ALL V44 TESTS PASSED')
