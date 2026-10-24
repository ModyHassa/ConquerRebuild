#!/usr/bin/env python3
"""Login inventory dump test (v21).

ItemDumper (cq_user id 6, account 100006) carries a fixed seeded loadout:
  90011 613129  pos 4 (weapon, equipped)
  90012 112309  pos 3 (armor, equipped)
  90013 150269  pos 6 (ring, equipped)
  90014 1000000 pos 0 (Stancher x3, inventory)
  90015 1001000 pos 0 (Agrypnotic x5, inventory)
On login the server must send one CMsgItemInfo 1008 (len 0x44) per item
(action 1, matching type/position/amount) plus one batched CMsgItemStatus
2077 carrying every entry (mode 3 = equipped).
"""
import socket, struct, subprocess, sys, time

HOST, PORT = '127.0.0.1', 5816

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

try:
    sock = socket.create_connection((HOST, PORT))
    send_pkt(sock, 1008, struct.pack('<II', 100006, 888))
    pkts = drain_all(sock, 2.5)

    # CMsgItemInfo items: fixed 68-byte (0x44) packets. The login dump
    # must mirror cq_item EXACTLY: every row (id,type,position,amount) of
    # player 1 arrives as one 1008 action-1 packet.
    infos = [p for p in pkts if p[1] == 1008 and p[0] == 0x44]
    got = {}
    for ln, tp, raw in infos:
        i_id   = struct.unpack_from('<I', raw, 0x04)[0]
        i_type = struct.unpack_from('<I', raw, 0x08)[0]
        i_pos  = struct.unpack_from('<H', raw, 0x0C)[0]
        i_act  = raw[0x10]
        i_amt  = struct.unpack_from('<I', raw, 0x14)[0]
        assert i_act == 1, f'action {i_act} != 1'
        assert i_id not in got, f'duplicate 1008 for item {i_id}'
        got[i_id] = (i_type, i_pos, i_amt)
        print('item info: id=%d type=%d pos=%d amount=%d' % (i_id, i_type, i_pos, i_amt))

    rows = subprocess.run(['mysql', '-uroot', 'cq', '-N', '-e',
                           'SELECT id,type,amount,position FROM cq_item '
                           'WHERE player_id=6 AND del_time=0 AND position<=8 '
                           'ORDER BY id'],
                          capture_output=True, text=True).stdout.strip()
    db = {}
    for line in rows.splitlines():
        i, ty, am, po = line.split('\t')
        db[int(i)] = (int(ty), int(am), int(po))
    assert db, 'no cq_item rows for player 6'
    assert len(got) == len(db), f'dump has {len(got)} items, DB has {len(db)}'
    for i_id, (ty, am, po) in db.items():
        assert i_id in got, f'item {i_id} missing from the login dump'
        g = got[i_id]
        assert g[0] == ty and g[1] == po and g[2] == am, \
            f'item {i_id}: dump {g} != DB {(ty, po, am)}'
    assert 90011 in got and got[90011] == (613129, 4, 7000), 'weapon 90011'
    assert 90012 in got and got[90012] == (112309, 3, 4000), 'armor 90012'
    assert 90013 in got and got[90013] == (150269, 6, 7000), 'ring 90013'
    assert 90014 in got and got[90014] == (1000000, 0, 3), 'pill 90014'
    assert 90015 in got and got[90015] == (1001000, 0, 5), 'pill 90015'
    assert len(got) == 5, f'expected exactly the 5 seeded items, got {len(got)}'
    print('login dump matches cq_item exactly (%d items)' % len(db))

    # batched 2077: count == item count, ids match, mode 3 equipped / 8 inv
    stats = find(pkts, 2077)
    assert stats, 'no 2077 batch after login'
    raw = stats[0][2]
    cnt = struct.unpack_from('<I', raw, 4)[0]
    assert cnt == len(db), f'2077 count {cnt} != {len(db)}'
    for k, i_id in enumerate(sorted(db)):
        off = 8 + k * 0x20
        e_id = struct.unpack_from('<I', raw, off)[0]
        e_mode = raw[off + 4]
        assert e_id == i_id, f'2077 entry {k}: {e_id} != {i_id}'
        want = 3 if db[i_id][2] != 0 else 8
        assert e_mode == want, f'2077 mode {e_mode} != {want}'
    print('2077 batch OK: count=%d, modes correct' % cnt)

    print('ALL INVENTORY TESTS PASSED')
    sys.exit(0)
except AssertionError as e:
    print('FAIL:', e)
    sys.exit(1)
finally:
    if sock:
        try: sock.close()
        except OSError: pass
