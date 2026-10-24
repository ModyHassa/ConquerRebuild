#!/usr/bin/env python3
"""Live test: login A+B, A walks (10005 pb), B receives relay + server tracks pos."""
import socket, struct, sys, time

HOST, PORT = '127.0.0.1', 5816

def recv_pkt(sock, timeout=4.0):
    sock.settimeout(timeout)
    buf = _rcv_buf.setdefault(sock, b'')
    while True:
        if len(buf) >= 4:
            ln, tp = struct.unpack_from('<HH', buf, 0)
            if len(buf) >= ln:
                pkt = (ln, tp, buf[:ln])
                _rcv_buf[sock] = buf[ln:]
                return pkt
        try:
            chunk = sock.recv(4096)
            if not chunk: return None
        except socket.timeout:
            return None
        buf = _rcv_buf[sock] = buf + chunk

_rcv_buf = {}

def send_pkt(sock, tp, payload=b''):
    sock.sendall(struct.pack('<HH', 4 + len(payload), tp) + payload)

def pb_varint(n):
    out = b''
    while True:
        b = n & 0x7F
        n >>= 7
        if n: out += bytes([b | 0x80])
        else: return out + bytes([b])

def pb_field(num, value):
    return bytes([(num << 3) | 2 & 0xFF if False else (num << 3)]) + pb_varint(value)

def drain_all(sock, quiet=1.0):
    pkts = []
    while True:
        p = recv_pkt(sock, timeout=quiet)
        if not p: break
        pkts.append(p)
        quiet = 0.3
    return pkts

def find(pkts, tid):
    for p in pkts:
        if p[1] == tid: return p
    return None

def login(acct):
    s = socket.create_connection((HOST, PORT))
    send_pkt(s, 1008, struct.pack('<II', acct, 777))
    return s

socks = []
try:
    a = login(100001); socks.append(a)
    drain_all(a)
    b = login(100002); socks.append(b)
    drain_all(b)
    drain_all(a)
    print('A+B logged in, spawns exchanged')

    # A walks north (dir 0), 1 step: field1 = dir(0) | steps<<3 = 0
    walk = pb_field(1, 0) + pb_field(2, 1) + pb_field(3, 0) + pb_field(4, int(time.time())) + pb_field(5, 0)
    send_pkt(a, 10005, walk)
    pkts_b = drain_all(b)
    relay = find(pkts_b, 10005)
    assert relay, f'B never received walk relay: {[p[1] for p in pkts_b]}'
    body = relay[2][4:]
    # verify relayed pb body identical
    assert body == walk, f'relay body differs: {body.hex()} vs {walk.hex()}'
    print('B received A walk relay (pb body identical)')

    # walk east (dir 2)
    walk2 = pb_field(1, 2) + pb_field(2, 1) + pb_field(3, 0) + pb_field(4, int(time.time())) + pb_field(5, 0)
    send_pkt(a, 10005, walk2)
    pkts_b = drain_all(b)
    relay2 = find(pkts_b, 10005)
    assert relay2 and relay2[2][4:] == walk2, 'second walk relay missing/differs'
    print('B received second walk relay')

    # server position check: relogin B on a NEW socket must show A at (401, 299)
    # (north = y-1 from 400,300; east = x+1)
    drain_all(a)
    c = login(100002); socks.append(c)
    pkts_c = drain_all(c)
    spawn_a = [p for p in pkts_c if p[1] == 10014]
    assert spawn_a, 'C never saw A spawn'
    data = spawn_a[0][2]
    x, y = struct.unpack_from('<HH', data, 0x6F)
    assert (x, y) == (401, 299), f'A server pos {x},{y} != expected 401,299'
    print(f'server tracked A at ({x},{y}) after 2 walks')

    print('ALL WALK TESTS PASSED')
except Exception as e:
    print('TEST FAILED:', e); sys.exit(1)
finally:
    for s in socks: s.close()
