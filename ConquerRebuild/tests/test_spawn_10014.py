#!/usr/bin/env python3
"""Live test: two logins -> wire-accurate 10014 spawn exchange."""
import socket, struct, sys

HOST, PORT = '127.0.0.1', 5816

_rcv_buf = {}
def recv_pkt(sock, timeout=4.0):
    sock.settimeout(timeout)
    buf = _rcv_buf.setdefault(sock, b'')
    while True:
        if len(buf) >= 4:
            ln, tp = struct.unpack_from('<HH', buf, 0)
            if len(buf) >= ln:
                pkt = (ln, tp, buf[:ln], buf[ln:])
                _rcv_buf[sock] = buf[ln:]
                return pkt
        try:
            chunk = sock.recv(4096)
            if not chunk: return None
        except socket.timeout:
            return None
        buf = _rcv_buf[sock] = buf + chunk

def send_pkt(sock, tp, payload=b''):
    sock.sendall(struct.pack('<HH', 4 + len(payload), tp) + payload)

def parse_10014(data):
    ln, tp = struct.unpack_from('<HH', data, 0)
    assert tp == 10014, f'type {tp} != 10014'
    lookface, pid = struct.unpack_from('<II', data, 8)
    x, y = struct.unpack_from('<HH', data, 0x6F)
    packed = struct.unpack_from('<H', data, 0x73)[0]
    pos = 0x11C
    count = data[pos]; pos += 1
    strs = []
    for _ in range(count):
        n = data[pos]; pos += 1
        strs.append(data[pos:pos+n].decode('utf-8', 'replace')); pos += n
    return dict(len=ln, lookface=lookface, id=pid, x=x, y=y, packed=packed, strings=strs)

socks = []
def login(acct):
    s = socket.create_connection((HOST, PORT)); socks.append(s)
    send_pkt(s, 1008, struct.pack('<II', acct, 777))
    return s

def drain_all(sock, quiet_secs=1.0):
    pkts = []
    while True:
        pkt = recv_pkt(sock, timeout=quiet_secs)
        if not pkt: break
        pkts.append(pkt)
        quiet_secs = 0.3
    return pkts

def find(pkts, want_id):
    for p in pkts:
        if p[1] == want_id: return p
    return None

try:
    a = login(100001)
    pkts_a = drain_all(a)
    # the dev login reply is the 32-byte 1008; the item dump also sends
    # 68-byte CMsgItemInfo 1008s per carried item
    login_a = [p for p in pkts_a if p[1] == 1008 and p[0] == 0x20]
    assert login_a and login_a[0][2][4] == 0, f'client A login reply: {[p[1] for p in pkts_a]}'
    print('A login OK (code 0)')

    b = login(100002)
    pkts_b = drain_all(b)
    login_b = [p for p in pkts_b if p[1] == 1008 and p[0] == 0x20]
    assert login_b and login_b[0][2][4] == 0, f'client B login reply: {[p[1] for p in pkts_b]}'
    print('B login OK (code 0)')
    b_sees_a = find(pkts_b, 10014)
    assert b_sees_a, f'B never received A spawn; got {[p[1] for p in pkts_b]}'
    info_b = parse_10014(b_sees_a[2])
    print('B received A spawn:', info_b)
    assert info_b['id'] == 1 and info_b['x'] == 400 and info_b['y'] == 300, info_b  # A's seeded record pos
    assert info_b['strings'][0] == 'TestKnight', info_b['strings']
    assert len(info_b['strings']) == 5, info_b['strings']

    pkts_a = drain_all(a)
    a_sees_b = find(pkts_a, 10014)
    assert a_sees_b, f'A never received B spawn; got {[p[1] for p in pkts_a]}'
    info = parse_10014(a_sees_b[2])
    print('A received B spawn:', info)
    assert info['id'] == 2, f'spawn id {info["id"]} != 2'
    assert info['x'] == 405 and info['y'] == 300, f'bad pos {info["x"]},{info["y"]}'  # B's seeded record pos
    assert info['strings'][0] == 'GmDragon' and len(info['strings']) == 5, info['strings']

    # Disconnect cleanup: close A, relogin same account; must not see stale self.
    socks[0].close()
    import time; time.sleep(0.7)
    c = login(100001)
    pkts_c = drain_all(c)
    login_c = [p for p in pkts_c if p[1] == 1008 and p[0] == 0x20]
    assert login_c and login_c[0][2][4] == 0, f'C relogin failed: {[p[1] for p in pkts_c]}'
    spawns_c = [p for p in pkts_c if p[1] == 10014]
    ids_c = [parse_10014(p[2])['id'] for p in spawns_c]
    assert 1 not in ids_c, f'dead session A still visible to C: {ids_c}'
    print('C relogin spawns:', ids_c, '(dead A removed; live B expected)')

    print('ALL 10014 SPAWN TESTS PASSED')
except Exception as e:
    print('TEST FAILED:', e); sys.exit(1)
finally:
    for s in socks: s.close()
