#!/usr/bin/env python3
"""Live test: monster system - cq_generator spawn (CMsgPlayer 10014 monster
branch + CMsgAction 134), attack + 10017 HP bar, death (action 135) and
cq_generator rest_secs respawn from the world tick.
Run with the server fresh and TestKnight's record position at (400,300)
(tools/reset_positions.sh + tools/run_suite.sh style restart)."""
import socket, struct, sys, time

HOST, PORT = '127.0.0.1', 5816
_rcv_buf = {}
MONSTER_ID_BASE = 0xAAE61   # 699489

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

def monster_ids_from_spawns(pkts):
    """10014 monster spawns: id at wire+0x0C, lookface at wire+0x67,
    string packer at wire+0x11C: [count:1][len:1][name]."""
    ids = {}
    for ln, tp, raw in find(pkts, 10014):
        if ln < 0x11E: continue
        mid = struct.unpack_from('<I', raw, 0x0C)[0]
        if mid - MONSTER_ID_BASE >= 99999: continue
        look = struct.unpack_from('<I', raw, 0x67)[0]
        mx = struct.unpack_from('<H', raw, 0x6F)[0]
        my = struct.unpack_from('<H', raw, 0x71)[0]
        namelen = raw[0x11D]
        name = raw[0x11E:0x11E+namelen].decode('utf-8', 'replace')
        ids[mid] = (look, name, mx, my)
    return ids

sock = None
socks = []
try:
    sock = socket.create_connection((HOST, PORT))
    send_pkt(sock, 1008, struct.pack("<II", 100003, 777))
    # login reply + own spawn + monsters near (400,300)
    pkts = drain_all(sock, 2.0)
    print('logged in, %d packets at login' % len(pkts))

    # 1) monsters delivered on map entry (cq_generator spawns)
    mons = monster_ids_from_spawns(pkts)
    assert mons, f'no monster spawns at login: {sorted(set(p[1] for p in pkts))}'
    mid, (look, name, _mx, _my) = next(iter(mons.items()))
    print(f'{len(mons)} monsters visible; sample id {mid} ({name}, look {look})')
    # Pheasant facts from cq_monstertype id=1: lookface 104
    assert look == 104, f'lookface {look} != 104'
    assert name == 'Pheasant', name

    # action 134 appear pairs for each spawned monster
    acts = [struct.unpack_from('<H', p[2], 0x18)[0] for p in find(pkts, 10010)]
    assert 134 in acts, f'no action-134 appear: {acts[:6]}'
    print('spawn pair (10014 + action 134) OK')

    # 2) attack: ts, ts2, attacker, target, x, y, action, skill, extra
    def atk(target):
        ts = int(time.time())
        return struct.pack('<IIIIHHHII', ts, ts, 3, target, 400, 300, 2, 0, 0)

    # Pheasant life 33 vs TestKnight atk 1823-2592: one hit kills.
    send_pkt(sock, 1022, atk(mid))
    pkts = drain_all(sock, 0.8)
    attrs = find(pkts, 10017)
    assert attrs, f'no 10017 after hit: {[p[1] for p in pkts]}'
    aid = struct.unpack_from('<I', attrs[0][2], 8)[0]
    assert aid == mid, (aid, mid)
    life = struct.unpack_from('<I', attrs[0][2], 0x10)[0]
    print('monster hit -> 10017 life', life)
    assert life == 0, 'one hit should kill a 33-hp Pheasant'

    # 3) death broadcast: CMsgAction 135 with the monster id
    die = [p for p in find(pkts, 10010)
           if struct.unpack_from('<H', p[2], 0x18)[0] == 135 and
              struct.unpack_from('<I', p[2], 8)[0] == mid]
    assert die, f'no action-135 death packet: {[p[1] for p in pkts]}'
    print('death action 135 OK')

    # 4) attacking a dead monster is ignored
    send_pkt(sock, 1022, atk(mid))
    pkts = drain_all(sock, 0.5)
    assert not find(pkts, 10017), 'dead monster kept taking damage'
    print('dead monster ignored OK')

    # 5) respawn after rest_secs=1..3 (tick runs each second; allow 8s)
    respawn = False
    for _ in range(10):
        time.sleep(1.0)
        pkts = drain_all(sock, 0.4)
        if mid in monster_ids_from_spawns(pkts):
            respawn = True
            break
    assert respawn, 'monster did not respawn'
    print('respawn (rest_secs) OK')

    # 6) jump to the generator 13175 band (436..476, 277..317): new
    # monsters must arrive after the screen crossing
    send_pkt(sock, 10010, struct.pack('<IIIIIHHHHII', int(time.time()), 1,
              (456)|(297<<16), 0, int(time.time()), 0x89, 0, 400, 300, 0, 0xFFFFFFFF))
    pkts = drain_all(sock, 1.2)
    far = monster_ids_from_spawns(pkts)
    assert far, 'no new monsters after jump to a generator band'
    print(f'{len(far)} new monsters after jump OK')

    # ------------------------------------------------------------------
    # 7) MONSTER AI: BareHand (id 4, no equipment -> ~1 dmg/hit) pokes a
    # Pheasant without killing it; the monster must counterattack
    # (1022 with monster as attacker + 10017 hp updates on the player)
    # ------------------------------------------------------------------
    b = socket.create_connection((HOST, PORT)); socks = [b]
    send_pkt(b, 1008, struct.pack('<II', 100004, 777))
    bp = drain_all(b, 2.0)
    bmons = monster_ids_from_spawns(bp)
    assert bmons, 'BareHand saw no monsters at login'
    print('BareHand logged in, %d monsters visible' % len(bmons))

    def atk4(target):
        ts = int(time.time())
        return struct.pack('<IIIIHHHII', ts, ts, 4, target, 400, 300, 2, 0, 0)

    # pick the alive Pheasant nearest to (405,285) so the chase is short
    cands = sorted((abs(pp[2]-405) + abs(pp[3]-285), mm) for mm, pp in bmons.items()
                   if mm != mid)
    assert cands, 'no second monster'
    target = cands[0][1]
    tpos = bmons[target]
    print('AI target: %d at (%d,%d)' % (target, tpos[2], tpos[3]))

    # land two tiles from the monster
    send_pkt(b, 10010, struct.pack('<IIIIIHHHHII', int(time.time()), 1,
              (tpos[2]+2)|(tpos[3]<<16), 0, int(time.time()), 0x89, 0, 400, 300, 0, 0xFFFFFFFF))
    drain_all(b, 1.0)
    # poke it (dmg floors to 1 -> life 33 -> 32)
    send_pkt(b, 1022, atk4(target))
    bp = drain_all(b, 0.8)
    hp = None
    for ln2, tp2, raw in find(bp, 10017):
        pid = struct.unpack_from('<I', raw, 8)[0]
        if pid == target:
            hp = struct.unpack_from('<II', raw, 0x10)[1]
    print('monster hp after poke:', hp)
    assert hp == 32, f'poke should do 1 dmg (got {hp})'

    # wait for the AI: chase + counterattacks (tick 1s, attack 1s)
    n_hits = 0
    hps = []
    for _ in range(15):
        time.sleep(1.0)
        bp = drain_all(b, 0.4)
        for ln2, tp2, raw in find(bp, 1022):
            att, tgt2 = struct.unpack_from('<II', raw, 4 + 8)
            if att == target and tgt2 == 4:
                n_hits += 1
        for ln2, tp2, raw in find(bp, 10017):
            pid = struct.unpack_from('<I', raw, 8)[0]
            if pid == 4:
                hps.append(struct.unpack_from('<II', raw, 0x10)[1])
        if n_hits >= 3:
            break
    print(f'monster landed {n_hits} counterattacks; player hp trace: {hps}')
    assert n_hits >= 3, f'monster never counterattacked (hits={n_hits})'
    # Pheasant atk 2-3 vs def 0: each counter is 2 or 3 damage, hp strictly drops
    for i in range(1, len(hps)):
        assert hps[i] < hps[i-1], f'hp did not drop: {hps}'
    assert hps[-1] <= 500 - 2*3, f'damage too low: {hps}'

    # monster still alive after fighting back
    send_pkt(b, 1022, atk4(target))
    bp = drain_all(b, 0.8)
    mhp = None
    for ln2, tp2, raw in find(bp, 10017):
        if struct.unpack_from('<I', raw, 8)[0] == target:
            mhp = struct.unpack_from('<II', raw, 0x10)[1]
    assert mhp == 31, f'monster should be at 31 hp (got {mhp})'
    print('monster AI counterattack OK')

    print('ALL MONSTER TESTS PASSED')
    sys.exit(0)
except AssertionError as e:
    print('FAIL:', e)
    sys.exit(1)
finally:
    if sock:
        try: sock.close()
        except Exception: pass
