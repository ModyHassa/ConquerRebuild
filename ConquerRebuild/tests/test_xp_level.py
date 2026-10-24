#!/usr/bin/env python3
"""Live test: XP + level-up (v18) - Newbie (cq_user id 4, account 100004)
starts at exp 117 of the 120 needed for level 1->2 (cq_levexp). One
Pheasant kill (+3 exp by the monstertype formula) must trigger:
  - 10017 key 5 (64-bit exp) = 0 after the level-up loop
  - 10017 key 10 (attribute points) = +3 for the single level
  - full heal keys 0/1 = 524 (500 base + 24 growth)
  - cq_user row persisted: level=2, exp=0
Run with a fresh server (tools/run_suite.sh)."""
import socket, struct, subprocess, sys, time

HOST, PORT = '127.0.0.1', 5816
MONSTER_ID_BASE = 0xAAE61

def recv_pkt(sock, timeout=4.0):
    sock.settimeout(timeout)
    buf = recv_pkt.buf.setdefault(sock, b'')
    while True:
        if len(buf) >= 4:
            ln, tp = struct.unpack_from('<HH', buf, 0)
            if len(buf) >= ln:
                pkt = (ln, tp, buf[:ln]); recv_pkt.buf[sock] = buf[ln:]
                return pkt
        try:
            c = sock.recv(4096)
            if not c: return None
        except socket.timeout: return None
        buf = recv_pkt.buf[sock] = buf + c
recv_pkt.buf = {}

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

def pheasant_ids(pkts):
    ids = []
    for ln, tp, raw in find(pkts, 10014):
        if ln < 0x11E: continue
        mid = struct.unpack_from('<I', raw, 0x0C)[0]
        if mid - MONSTER_ID_BASE >= 99999: continue
        look = struct.unpack_from('<I', raw, 0x67)[0]
        if look == 104:
            ids.append(mid)
    return ids

def parse_10017(raw):
    """[len:2][type:2][id:4][count:4][entries 0x1C: type:4, lo:4, hi:4]"""
    rid = struct.unpack_from('<I', raw, 8)[0]
    count = struct.unpack_from('<I', raw, 0x0C)[0]
    attrs = {}
    for i in range(count):
        e = 0x10 + i * 0x1C
        k, lo, hi = struct.unpack_from('<III', raw, e)
        attrs[k] = lo | (hi << 32)
    return rid, attrs

sock = None
try:
    sock = socket.create_connection((HOST, PORT))
    send_pkt(sock, 1008, struct.pack("<II", 100005, 777))
    pkts = drain_all(sock, 2.0)
    ok = [p for p in find(pkts, 1008) if p[2][4] == 0]
    assert ok, f'login rejected: {[hex(p[2][4]) for p in find(pkts, 1008)]}'
    print('Newbie logged in, %d packets at login' % len(pkts))

    pheas = pheasant_ids(pkts)
    assert pheas, 'no Pheasant spawns at login'
    mid = pheas[0]
    print(f'{len(pheas)} Pheasants visible; attacking id {mid}')

    # one hit: Newbie's 613129 knife (523-643) vs 33-hp Pheasant
    ts = int(time.time())
    send_pkt(sock, 1022, struct.pack('<IIIIHHHII', ts, ts, 5, mid, 400, 300, 2, 0, 0))

    # collect: monster hp bar + death 135 + player xp packets
    pkts = drain_all(sock, 1.2)
    die = [p for p in find(pkts, 10010)
           if struct.unpack_from('<H', p[2], 0x18)[0] == 135]
    assert die, f'no death packet: {[p[1] for p in pkts]}'
    print('Pheasant died (action 135) OK')

    # player-attrib 10017s (id = 4): must carry key 5 (exp, 64-bit)
    mine = []
    for ln, tp, raw in find(pkts, 10017):
        rid, attrs = parse_10017(raw)
        if rid == 5:
            mine.append(attrs)
    assert mine, f'no player 10017 after kill (id 5): {[p[1] for p in pkts]}'
    merged = {}
    for a in mine: merged.update(a)
    print('player 10017 keys:', {k: merged[k] for k in sorted(merged)})
    assert 5 in merged, 'no exp (key 5) update'
    assert merged[5] == 0, f'exp should be 0 after 117+3>=120 level-up, got {merged[5]}'
    assert merged.get(10) == 3, f'attribute points key 10 should be 3, got {merged.get(10)}'
    assert merged.get(0) == 524 and merged.get(1) == 524, \
        f'full-heal life keys should be 524, got {merged.get(0)}/{merged.get(1)}'
    print('10017: exp=0, +3 points, full heal 524 OK')

    # persisted to cq_user
    out = subprocess.run(
        ['mysql', '-uroot', 'cq', '-N', '-e',
         'SELECT level,exp FROM cq_user WHERE id=5'],
        capture_output=True, text=True).stdout.strip()
    print('DB row (level,exp):', out)
    assert out == '2\t0', f'expected level=2 exp=0, got {out!r}'
    print('DB persistence OK')
    print('XP_LEVEL_TEST PASS')
except AssertionError as e:
    print('XP_LEVEL_TEST FAIL:', e)
    sys.exit(1)
finally:
    if sock: sock.close()
