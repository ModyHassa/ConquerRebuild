#!/usr/bin/env python3
"""Live test: player death + revive (v22).
Doomed (cq_user 7: 9 life, no gear) pokes a Pheasant until the AI
counterattack kills it:
  - 10017 life drops to 0
  - the victim alone gets CMsgAction 94 (0x5E) data 3 = revive dialog
  - ghost attacks are ignored by the server (original: dead CUser attack
    path is unreachable)
  - monsters drop the dead target (no further counterattacks)
  - revive: client answers 10010 action 94 data 0 (city) -> server
    restores life and re-appears the player at the record position
  - after revive the player can fight again (counterattack resumes)."""
import socket, struct, sys, time

HOST, PORT = '127.0.0.1', 5816
_rcv_buf = {}
MONSTER_ID_BASE = 0xAAE61
DOOMED_ID = 7

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
    ids = set()
    for ln, tp, raw in find(pkts, 10014):
        if ln < 0x11E: continue
        mid = struct.unpack_from('<I', raw, 0x0C)[0]
        if mid - MONSTER_ID_BASE < 99999:
            ids.add(mid)
    return ids

sock = None
try:
    sock = socket.create_connection((HOST, PORT))
    send_pkt(sock, 1008, struct.pack("<II", 100007, 777))
    pkts = drain_all(sock, 2.0)
    assert find(pkts, 1008), f'login failed: {[p[1] for p in pkts]}'
    print('Doomed logged in (9 hp, no gear)')

    mons = monster_ids_from_spawns(pkts)
    assert mons, 'no monsters at login'
    assert len(mons) >= 2, f'need 2 monsters (poke + post-revive), got {len(mons)}'
    # closest monster to (398,298): whatever - the AI chases its target
    target = next(iter(mons))
    alt = sorted(mons)[1]
    print(f'{len(mons)} monsters visible; poking {target} (alt {alt})')

    def atk(t):
        ts = int(time.time())
        return struct.pack('<IIIIHHHII', ts, ts, DOOMED_ID, t,
                           398, 298, 2, 0, 0)

    # 1) poke until death: Pheasant hits 2-3 vs 9 life -> 3-5 swings
    died_at = None
    hp_seen = []
    deadline = time.time() + 90
    while time.time() < deadline:
        send_pkt(sock, 1022, atk(target))
        pkts = drain_all(sock, 1.6)
        for ln, tp, raw in find(pkts, 10010):
            act = struct.unpack_from('<H', raw, 0x18)[0]
            if act == 94:
                data = struct.unpack_from('<I', raw, 0x0C)[0]
                aid = struct.unpack_from('<I', raw, 8)[0]
                assert data == 3, f'revive dialog data {data} != 3'
                assert aid == DOOMED_ID, (aid, DOOMED_ID)
                died_at = time.time()
        for ln, tp, raw in find(pkts, 10017):
            aid = struct.unpack_from('<I', raw, 8)[0]
            key = struct.unpack_from('<I', raw, 0x10)[0]
            if aid == DOOMED_ID and key == 0:   # attrib 0 = life
                hp_seen.append(struct.unpack_from('<I', raw, 0x14)[0])
        if died_at:
            break
    assert died_at, f'no death within 90s (hp seen: {hp_seen[-6:]})'
    assert hp_seen and hp_seen[-1] == 0, f'last hp not 0: {hp_seen[-6:]}'
    print(f'death after {90 - (deadline - time.time()):.0f}s; hp trail {hp_seen}')
    print('CMsgAction 94 data 3 (revive dialog) received OK')

    # 2) ghost attacks are ignored: no counterattack after death
    time.sleep(2.0)
    pkts = drain_all(sock, 0.5)
    quiet_end = time.time() + 3.0
    while time.time() < quiet_end:
        pkts += drain_all(sock, 0.5)
    hits_after = [p for p in find(pkts, 10017)
                  if struct.unpack_from('<I', p[2], 8)[0] == DOOMED_ID]
    assert not hits_after, f'dead player kept taking hits: {hits_after}'
    send_pkt(sock, 1022, atk(target))
    pkts = drain_all(sock, 1.0)
    assert not [p for p in find(pkts, 10017)
                if struct.unpack_from('<I', p[2], 8)[0] == DOOMED_ID], \
        'dead player counterattacked while attacking'
    mon_hits = [p for p in find(pkts, 10017)
                if struct.unpack_from('<I', p[2], 8)[0] == target]
    assert not mon_hits, 'ghost attack damaged a monster'
    print('ghost attacks ignored + no counterattacks OK')

    # 3) revive in city: 10010 action 94 data 0
    def revive(data):
        ts = int(time.time())
        return struct.pack('<IIIIIHHHHII', ts, DOOMED_ID, data, 0, ts,
                           94, 0, 398, 298, 0, 0)
    send_pkt(sock, 10010, revive(0))
    pkts = drain_all(sock, 1.5)
    rest = [p for p in find(pkts, 10017)
            if struct.unpack_from('<I', p[2], 8)[0] == DOOMED_ID and
               struct.unpack_from('<I', p[2], 0x10)[0] == 0]
    assert rest, f'no hp restore after revive: {[p[1] for p in pkts]}'
    life = struct.unpack_from('<I', rest[0][2], 0x14)[0]
    assert life == 9, f'revived hp {life} != 9'
    print('revive: life restored to 9 OK')
    # re-appear broadcast at the record position (398,298)
    sp = [p for p in find(pkts, 10014)
          if struct.unpack_from('<I', p[2], 0x0C)[0] == DOOMED_ID]
    assert sp, f'no re-spawn 10014 after revive: {[p[1] for p in pkts]}'
    sx = struct.unpack_from('<H', sp[0][2], 0x6F)[0]
    sy = struct.unpack_from('<H', sp[0][2], 0x71)[0]
    assert (sx, sy) == (398, 298), (sx, sy)
    print(f're-spawn 10014 at record pos ({sx},{sy}) OK')

    # 4) alive again: attack a FRESH monster -> counterattack resumes
    time.sleep(1.0)
    send_pkt(sock, 1022, atk(alt))
    hit = []
    # the alt pheasant may be several tiles away: the AI chases at
    # move_speed, so allow up to ~20s for it to close in and hit
    end = time.time() + 20
    while time.time() < end and not hit:
        for ln, tp, raw in find(drain_all(sock, 1.0), 10017):
            if (struct.unpack_from('<I', raw, 8)[0] == DOOMED_ID and
                    struct.unpack_from('<I', raw, 0x10)[0] == 0):
                hit.append(raw)
    assert hit, 'no counterattack within 20s after revive'
    hp = struct.unpack_from("<I", hit[0], 0x14)[0]
    assert hp < 9, f'no damage taken after revive (hp {hp})'
    print(f'revived player fights again (counterattack -> hp {hp}) OK')

    print('TEST DEATH: ALL OK')
except AssertionError as e:
    print('TEST DEATH FAILED:', e)
    sys.exit(1)
finally:
    if sock:
        sock.close()
