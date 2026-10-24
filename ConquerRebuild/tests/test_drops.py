#!/usr/bin/env python3
"""Live test v19: DROPS - death-drop chain (FUN_14038dc80 money dispatcher +
FUN_14038afc0 pills) spawns ground objects as CMsgMapItem 1101 action 1,
money pickup (client sends 1101 action 3) grants cq_user.money (10017 key 4,
64-bit) and removes the pile for the screen.

Expectations (Pheasant: level 1, drop_money=5, drop_hp=1000000/drop_mp=1001000,
27% money-drop chance per kill at level<61):
  - after up to 40 one-hit kills at least one 1101 spawn with a money-tier
    itemtype (0x10a1d0..0x10a5cc range) arrives
  - pickup: 10017 key 4 == sum of picked piles, cq_user.money persisted
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

def monster_ids_from_spawns(pkts):
    ids = {}
    for ln, tp, raw in find(pkts, 10014):
        if ln < 0x11E: continue
        mid = struct.unpack_from('<I', raw, 0x0C)[0]
        if mid - MONSTER_ID_BASE >= 99999: continue
        look = struct.unpack_from('<I', raw, 0x67)[0]
        mx = struct.unpack_from('<H', raw, 0x6F)[0]
        my = struct.unpack_from('<H', raw, 0x71)[0]
        ids[mid] = (look, mx, my)
    return ids

def parse_10017(raw):
    rid = struct.unpack_from('<I', raw, 8)[0]
    count = struct.unpack_from('<I', raw, 0x0C)[0]
    attrs = {}
    for i in range(count):
        e = 0x10 + i * 0x1C
        k, lo, hi = struct.unpack_from('<III', raw, e)
        attrs[k] = lo | (hi << 32)
    return rid, attrs

def parse_1101(raw):
    """[len:2][type:2][time:4][id:4][itemtype:4][x:2][y:2][color:2][action:1]"""
    gid  = struct.unpack_from('<I', raw, 8)[0]
    itp  = struct.unpack_from('<I', raw, 0x0C)[0]
    x    = struct.unpack_from('<H', raw, 0x10)[0]
    y    = struct.unpack_from('<H', raw, 0x12)[0]
    act  = raw[0x16]
    return gid, itp, x, y, act

MONEY_TIER_LO, MONEY_TIER_HI = 0x10a1d0, 0x10a5cc

def is_money_tier(itp):
    return MONEY_TIER_LO <= itp <= MONEY_TIER_HI

sock = None
try:
    # baseline: MonsterSlayer (player id 3) starts at money 0
    subprocess.run(['mysql', '-uroot', 'cq', '-e',
                    'UPDATE cq_user SET money=0 WHERE id=3'], check=True)
    sock = socket.create_connection((HOST, PORT))
    send_pkt(sock, 1008, struct.pack('<II', 100003, 777))
    pkts = drain_all(sock, 2.0)
    mons = monster_ids_from_spawns(pkts)
    assert mons, 'no monsters at login'
    print('logged in, %d monsters visible' % len(mons))

    def atk(target):
        ts = int(time.time())
        return struct.pack('<IIIIHHHII', ts, ts, 3, target, 400, 300, 2, 0, 0)

    # ---- 1) kill pheasants until money piles spawn (1101 action 1) ----
    piles = []   # money ground items
    pills = []   # item ground drops (drop_hp/drop_mp itemtypes)
    kills = 0
    dead = set()
    seen = dict(mons)
    for round_ in range(60):
        spawns = monster_ids_from_spawns(drain_all(sock, 0.2))
        for m in spawns:
            if m in dead: dead.discard(m)   # respawned with the same id
            seen[m] = spawns[m]
        alive = [m for m in seen if m not in dead]
        if not alive:
            time.sleep(0.2); continue
        for tid in alive[:3]:
            send_pkt(sock, 1022, atk(tid))
            kills += 1
            pkts = drain_all(sock, 0.35)
            for p in find(pkts, 10010):
                if struct.unpack_from('<H', p[2], 0x18)[0] == 135:
                    dead.add(tid)
            for ln, tp, raw in find(pkts, 1101):
                gid, itp, x, y, act = parse_1101(raw)
                if act == 1 and is_money_tier(itp):
                    piles.append((gid, itp, x, y))
                elif act == 1:
                    pills.append((gid, itp, x, y))
        if piles and pills and kills >= 6:
            break
        time.sleep(0.1)
    print(f'{kills} kills -> {len(piles)} money piles, {len(pills)} item drops')
    assert kills >= 3, 'killed too few monsters'
    assert piles, ('no 1101 money pile ever spawned after %d kills '
                   '(27%%/kill expected)' % kills)

    # money-tier itemtype sanity (FUN_14037cf50 chain).
    # Pick the NEWEST pile: ground items expire (min(amount/25+30,180)s),
    # and the pill hunt can push the loop past the oldest pile's lifetime.
    gid, itp, gx, gy = piles[-1]
    assert is_money_tier(itp), hex(itp)
    print('first pile: id=%d tier=%d at (%d,%d)' % (gid, itp, gx, gy))

    # ---- 2) pickup: stand near the pile and send 1101 action 3 -------
    send_pkt(sock, 10010, struct.pack('<IIIIIHHHHII', int(time.time()), 1,
              (gx+1)|(gy<<16), 0, int(time.time()), 0x89, 0, 400, 300, 0, 0xFFFFFFFF))
    drain_all(sock, 0.6)
    # client sender layout: id@+8, x@+0x10, y@+0x12, action@+0x16
    # wire layout: time@+4, id@+8, checksum@+0xC, x@+0x10, y@+0x12,
    # action@+0x16 (payload = wire-4)
    payload = struct.pack('<IIIHH', int(time.time()), gid, 0, gx, gy)
    payload += b'\x00\x00' + bytes([3])          # action byte @ payload+0x12
    payload += b'\x00' * (24 - len(payload))
    send_pkt(sock, 1101, payload)
    pkts = drain_all(sock, 1.0)
    got_money = None
    for ln, tp, raw in find(pkts, 10017):
        rid, attrs = parse_10017(raw)
        if rid == 3 and 4 in attrs:
            got_money = attrs[4]
    assert got_money is not None, \
        f'no 10017 money update after pickup: {[p[1] for p in pkts]}'
    assert got_money > 0, 'picked money must be positive'
    print('picked money update: %d' % got_money)

    # removal broadcast: another 1101 with action 3 for the same id
    removed = [parse_1101(p[2]) for p in find(pkts, 1101)]
    assert any(r[0] == gid and r[4] == 3 for r in removed), \
        f'pile not removed for the screen: {removed}'
    print('pile removed from screen OK')

    # ---- 3) DB persistence: cq_user.money grew ------------------------
    row = subprocess.run(['mysql', '-uroot', 'cq', '-N', '-e',
                          'SELECT money FROM cq_user WHERE id=3'],
                         capture_output=True, text=True).stdout.strip()
    dbmoney = int(row) if row else 0
    assert dbmoney == got_money, f'DB money {dbmoney} != packet {got_money}'
    print('cq_user.money persisted:', dbmoney)

    # ---- 4) item pickup: pill pile -> CMsgItemInfo 1008 + 2077 ------
    hunt = 0
    while not pills and hunt < 80:
        spawns = monster_ids_from_spawns(drain_all(sock, 0.2))
        for m in spawns: seen[m] = spawns[m]
        alive = [m for m in seen if m not in dead]
        if alive:
            tid = alive[0]
            send_pkt(sock, 1022, atk(tid))
            pkts = drain_all(sock, 0.35)
            for p in find(pkts, 10010):
                if struct.unpack_from('<H', p[2], 0x18)[0] == 135:
                    dead.add(tid)
            for ln, tp, raw in find(pkts, 1101):
                g2, it2, x2, y2, a2 = parse_1101(raw)
                if a2 == 1 and not is_money_tier(it2):
                    pills.append((g2, it2, x2, y2))
        hunt += 1
        time.sleep(0.15)
    assert pills, f'no item drop after {kills+hunt} kills (3%%/kill expected)'
    igid, iitp, ix, iy = pills[-1]
    print('item pile: id=%d type=%d at (%d,%d) after %d extra kills'
          % (igid, iitp, ix, iy, hunt))

    send_pkt(sock, 10010, struct.pack('<IIIIIHHHHII', int(time.time()), 1,
              (ix+1)|(iy<<16), 0, int(time.time()), 0x89, 0, 400, 300, 0, 0xFFFFFFFF))
    drain_all(sock, 0.6)
    payload = struct.pack('<IIIHH', int(time.time()), igid, 0, ix, iy)
    payload += b'\x00\x00' + bytes([3])
    payload += b'\x00' * (24 - len(payload))
    send_pkt(sock, 1101, payload)
    pkts = drain_all(sock, 1.0)

    # CMsgItemInfo 1008: id@+4, type@+8, position@+0xC, action@+0x10,
    # amount@+0x14 (wire offsets; builder FUN_1404587d0)
    infos = find(pkts, 1008)
    assert infos, f'no 1008 item info after item pickup: {[p[1] for p in pkts]}'
    raw = infos[0][2]
    i_id   = struct.unpack_from('<I', raw, 0x04)[0]
    i_type = struct.unpack_from('<I', raw, 0x08)[0]
    i_pos  = struct.unpack_from('<H', raw, 0x0C)[0]
    i_act  = raw[0x10]
    i_amt  = struct.unpack_from('<I', raw, 0x14)[0]
    assert i_type == iitp, f'1008 type {i_type} != pile {iitp}'
    assert i_pos == 0, '1008 position must be 0 (inventory)'
    assert i_act == 1, f'1008 action {i_act} != 1 (add)'
    assert i_amt >= 1, '1008 amount'
    print('1008 item info: id=%d type=%d pos=%d action=%d amount=%d'
          % (i_id, i_type, i_pos, i_act, i_amt))

    # CMsgItemStatus 2077: count@+4, id@+8, mode@+0xC (8 = inventory)
    stats = find(pkts, 2077)
    assert stats, 'no 2077 item status after item pickup'
    raw = stats[0][2]
    assert struct.unpack_from('<I', raw, 4)[0] == 1, '2077 count'
    assert struct.unpack_from('<I', raw, 8)[0] == i_id, '2077 id == 1008 id'
    assert raw[0x0C] == 8, f'2077 mode {raw[0x0C]} != 8'
    print('2077 item status: id=%d mode=8 OK' % i_id)

    # DB row: the 1008 id must be the new cq_item row for this pill
    row = subprocess.run(['mysql', '-uroot', 'cq', '-N', '-e',
                          f'SELECT id FROM cq_item WHERE type={iitp} AND position=0 '
                          'ORDER BY id DESC LIMIT 1'],
                         capture_output=True, text=True).stdout.strip()
    assert row, 'no cq_item row for picked pill'
    assert int(row) == i_id, f'cq_item id {row} != 1008 id {i_id}'
    print('cq_item row persisted: id=%s type=%d' % (row, iitp))

    print('ALL DROP TESTS PASSED')
    sys.exit(0)
except AssertionError as e:
    print('FAIL:', e)
    sys.exit(1)
finally:
    if sock:
        try: sock.close()
        except Exception: pass
