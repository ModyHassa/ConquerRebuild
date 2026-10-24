#!/usr/bin/env python3
"""Live test: combat - CMsgInteract 1022 attack + CMsgUserAttrib 10017 HP."""
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
    return [p for p in pkts if p[1] == tid]

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

    # attack payload: wire+4..: ts, ts2, attacker, target, x, y, action, skill, extra
    def atk(attacker, target, action=2, x=400, y=300):
        ts = int(time.time())
        return struct.pack('<IIIIHHHII', ts, ts, attacker, target,
                           x, y, action, 0, 0)
    # note: skill is u4 at +0x1C and extra u4 at +0x20; the server reads
    # skill as u4 (payload+0x18). len payload = 0x24 -> total 0x28.

    # 1) A attacks B -> B gets 10017 with reduced life; attacker also gets it.
    send_pkt(a, 10010, struct.pack('<IIIIIHHHHII', int(time.time()), 1, (410)|(290<<16), 0, int(time.time()), 0x89, 0, 400, 300, 0, 0xFFFFFFFF))
    drain_all(b)  # jump relay
    drain_all(a)
    send_pkt(a, 1022, atk(1, 2))
    pk_b = drain_all(b)
    pk_a = drain_all(a)

    ints_b = find(pk_b, 1022)
    attrs_b = find(pk_b, 10017)
    assert ints_b, f'B saw no attack relay: {[p[1] for p in pk_b]}'
    i = struct.unpack_from('<IIIIHHHII', ints_b[0][2], 4)
    print('attack relay to B:', dict(att=i[2], tgt=i[3], action=i[6]))
    assert i[2] == 1 and i[3] == 2 and i[6] == 2, i
    assert attrs_b, f'B saw no 10017: {[p[1] for p in pk_b]}'
    pid = struct.unpack_from('<I', attrs_b[0][2], 8)[0]
    cnt = struct.unpack_from('<I', attrs_b[0][2], 12)[0]
    pairs = []
    for k in range(cnt):
        off = 0x10 + k * 0x1C
        attr, val, prm = struct.unpack_from('<III', attrs_b[0][2], off)
        pairs.append((attr, val))
    print('B attribs:', pid, pairs)
    assert pid == 2, pid
    # ported ProcAttack pipeline vs real DB stats:
    #   TestKnight: weapon 613129 (523-643) + ring 150269 (1300-1949)
    #     -> atk 1823-2592, extra 769; GmDragon armor 112309 -> def 1056.
    #   dmg = max(rand(769)+1823 - 1056, 0) + max(769 - 0, 0)
    #       = [767,1536] + 769 = [1536, 2305] (min-damage floor n/a)
    assert pairs[0][0] == 0, pairs
    life1 = pairs[0][1]
    assert 3000 - 2305 <= life1 <= 3000 - 1536, pairs
    assert pairs[1][0] == 1 and pairs[1][1] == 3000, pairs
    # A also received the HP update for B
    attrs_a = find(pk_a, 10017)
    assert attrs_a, 'attacker saw no 10017'

    # 2) second hit kills B (life left [695,1464] < min dmg 1536), third ignored.
    send_pkt(a, 1022, atk(1, 2))
    pk_b = drain_all(b)
    attrs_b = find(pk_b, 10017)
    assert attrs_b, 'no attrib after kill hit'
    attr, val, prm = struct.unpack_from('<III', attrs_b[-1][2], 0x10)
    print('B life after kill hit:', val)
    assert val == 0, (attr, val)
    send_pkt(a, 1022, atk(1, 2))
    pk_b = drain_all(b)
    assert not find(pk_b, 10017), 'dead player kept receiving damage'
    print('death state respected (no further damage)')
    drain_all(a); drain_all(b)  # clear relays from previous hits

    # 3) spoof prevention: B sends attack claiming attacker id 1 -> ignored.
    send_pkt(b, 1022, atk(1, 2))
    pk_a = drain_all(a)
    assert not find(pk_a, 1022), 'spoofed attacker id was accepted!'
    print('spoofed attacker id rejected OK')

    # 4) unknown target ignored
    send_pkt(a, 1022, atk(1, 9999))
    pk_b = drain_all(b)
    assert not find(pk_b, 1022), 'attack on missing target relayed'
    print('unknown target ignored OK')

    print('ALL COMBAT TESTS PASSED')
except Exception as e:
    print('TEST FAILED:', e); sys.exit(1)
finally:
    for s in socks: s.close()
