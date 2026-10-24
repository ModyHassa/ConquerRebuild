#!/usr/bin/env python3
"""Live test: CMsgAction 10010 - jump relay/pos update, relay set, ignored set."""
import socket, struct, sys, time

HOST, PORT = '127.0.0.1', 5816
_rcv_buf = {}

def recv_pkt(sock, timeout=4.0):
    sock.settimeout(timeout)
    buf = _rcv_buf.setdefault(sock, b'')
    while True:
        if len(buf) >= 4:
            ln, tp = struct.unpack_from('<HH', buf, 0)
            if len(buf) >= ln:
                pkt = (ln, tp, buf[:ln]); _rcv_buf[sock] = buf[ln:]
                return pkt
        try:
            c = sock.recv(4096)
            if not c: return None
        except socket.timeout: return None
        buf = _rcv_buf[sock] = buf + c

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

def find(pkts, tid):
    for p in pkts:
        if p[1] == tid: return p
    return None

def action_payload(actor, data, action, dir_, x, y, ext=0, target2=0xFFFFFFFF):
    # wire+4 onwards
    return struct.pack('<IIIIIHHHHII', int(time.time()), actor, data,
                       0, int(time.time()), action, dir_, x, y, ext, target2)

def parse_action(data):
    ts, actor, data32, slot, ts2 = struct.unpack_from('<IIIII', data, 4)
    action, dir_, x, y = struct.unpack_from('<HHHH', data, 0x18)
    ext, tgt2 = struct.unpack_from('<II', data, 0x20)
    return dict(actor=actor, data=data32, action=action, dir=dir_,
                x=x, y=y, ext=ext, tgt2=tgt2)

socks = []
try:
    a = socket.create_connection((HOST, PORT)); socks.append(a)
    send_pkt(a, 1008, struct.pack('<II', 100001, 777))
    drain_all(a)
    b = socket.create_connection((HOST, PORT)); socks.append(b)
    send_pkt(b, 1008, struct.pack('<II', 100002, 777))
    drain_all(b)
    drain_all(a)
    print('A+B logged in')

    # 1) JUMP 0x89: from (400,300) jump north-east landing (410,290).
    #    data = x2 | y2<<16, current x,y at +0x1C/+0x1E.
    data = (410 & 0xFFFF) | (290 << 16)
    send_pkt(a, 10010, action_payload(1, data, 0x89, 0, 400, 300))
    pkts_b = drain_all(b)
    jmp = find(pkts_b, 10010)
    assert jmp, f'B got no jump relay: {[p[1] for p in pkts_b]}'
    j = parse_action(jmp[2])
    print('jump relay:', j)
    assert j['action'] == 0x89 and j['data'] == data, j
    assert j['actor'] == 1 and j['dir'] == 0 and (j['x'], j['y']) == (400, 300), j

    # 2) Relay-set action: 0x85 (emote-ish) -> B must receive it.
    send_pkt(a, 10010, action_payload(1, 0, 0x85, 0, 410, 290))
    pkts_b = drain_all(b)
    em = find(pkts_b, 10010)
    assert em, 'relay-set action 0x85 not broadcast'
    e = parse_action(em[2])
    assert e['action'] == 0x85, e
    print('relay-set action 0x85 broadcast OK')

    # 3) Non-relayed action: 0x123 -> B must NOT receive 10010.
    send_pkt(a, 10010, action_payload(1, 0, 0x123, 0, 410, 290))
    pkts_b = drain_all(b)
    bad = find(pkts_b, 10010)
    assert not bad, f'action 0x123 should not relay: {parse_action(bad[2])}'
    print('non-relayed action 0x123 correctly ignored')

    # 4) Fresh relogin (same uin) to read A's server-side position.
    c = socket.create_connection((HOST, PORT)); socks.append(c)
    send_pkt(c, 1008, struct.pack("<II", 100002, 777))
    pkts_c = drain_all(c)
    spawn = find(pkts_c, 10014)
    assert spawn, 'relogin saw no spawn'
    x, y = struct.unpack_from('<HH', spawn[2], 0x6F)
    assert (x, y) == (410, 290), f'server pos after jump {x},{y} != 410,290'
    print(f'server adopted jump landing pos ({x},{y})')

    print('ALL ACTION TESTS PASSED')
except Exception as e:
    print('TEST FAILED:', e); sys.exit(1)
finally:
    for s in socks: s.close()
