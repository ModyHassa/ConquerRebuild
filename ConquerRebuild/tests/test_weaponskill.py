#!/usr/bin/env python3
"""Live test v24: WEAPON SKILL (proficiency) XP - CUser::Attack tail awards
prof exp = capped damage for the equipped weapon family (613129 -> type 613);
AddWeaponSkillExp (FUN_140183e30) levels up when exp >= cq_weapon_skill_up
req (1200 for 613 level 1) and the client is told via CMsgWeaponSkill 1025
[type u4][level u2][exp u4][next_req u4] (builder FUN_1403b4080, client
parser FUN_008202cf).

Fixture: SkillFarmer (cq_user 9) wields 613129 and logs in with a
cq_weapon_skill row at exp 1180/1200 -> ONE pheasant kill (+33 capped dmg)
triggers the level-up. Rows persist on disconnect (record-pool flush).

Expectations:
  - at login a snapshot 1025 arrives: type 613, level 0, exp 1180, next 1200
    (CMsgAction 77 flow / FUN_140162400)
  - after the killing blow a 1025 arrives: type 613, level 1, exp 12/13,
    next_req 68000
  - a SECOND hit (lethal or not, no level-up) triggers CMsgWeaponSkillExp
    1104 [exp:4][nextReq:4][type:2][flag:1] with exp += dealt damage
    (FUN_1403f0020); the hit may be non-lethal (raw roll ~30) so accept
    any gain within (0, 33]
  - after disconnect cq_weapon_skill has owner 9 type 613 level 1 exp = final
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
        mx = struct.unpack_from('<H', raw, 0x6F)[0]
        my = struct.unpack_from('<H', raw, 0x71)[0]
        ids[mid] = (mx, my)
    return ids

def parse_1025(raw):
    """[len:2][type:2][skillType:4][level:2][exp:4][nextReq:4]"""
    wtype = struct.unpack_from('<I', raw, 4)[0]
    level = struct.unpack_from('<H', raw, 8)[0]
    exp   = struct.unpack_from('<I', raw, 0x0C)[0]
    next_ = struct.unpack_from('<I', raw, 0x10)[0]
    return wtype, level, exp, next_

sock = None
try:
    sock = socket.create_connection((HOST, PORT))
    send_pkt(sock, 1008, struct.pack('<II', 100009, int(time.time()) % 100000))
    pkts = drain_all(sock, 2.0)
    mons = monster_ids_from_spawns(pkts)
    assert mons, 'no monsters at login'
    print('logged in, %d monsters visible' % len(mons))
    snap = [parse_1025(p[2]) for p in find(pkts, 1025)]
    print('login snapshot 1025 events: %s' % snap)
    s = [t for t in snap if t[0] == 613 and t[1] == 0]
    assert s and s[0][2] == 1180 and s[0][3] == 1200, \
        'login snapshot should be 613 level 0 exp 1180 next 1200, got %s' % s
    print('PASS: login snapshot 1025 613/0/1180/1200')

    def atk(target):
        ts = int(time.time())
        return struct.pack('<IIIIHHHII', ts, ts, 9, target, 400, 300, 2, 0, 0)

    # ---- 1) kill ONE pheasant -> prof 613 levels 0 -> 1 ----------------
    leveled = []
    dead = set()
    seen = dict(mons)
    kills = 0
    for round_ in range(40):
        spawns = monster_ids_from_spawns(drain_all(sock, 0.2))
        for m in spawns:
            if m in dead: dead.discard(m)
            seen[m] = spawns[m]
        alive = [m for m in seen if m not in dead]
        if not alive:
            time.sleep(0.2); continue
        tid = alive[0]          # one target only, one kill only
        send_pkt(sock, 1022, atk(tid))
        kills += 1
        pkts = drain_all(sock, 0.35)
        died = False
        for p in find(pkts, 10010):
            if struct.unpack_from('<H', p[2], 0x18)[0] == 135:
                dead.add(tid); died = True
        for p in find(pkts, 1025):
            leveled.append(parse_1025(p[2]))
        if died:
            break
        time.sleep(0.1)
    print('kills: %d, 1025 events: %s' % (kills, leveled))
    ups = [t for t in leveled if t[0] == 613 and t[1] == 1]
    assert ups, 'no 1025 level-up for weapon 613'
    wtype, level, exp, next_req = ups[0]
    # 1180 seeded + capped dmg (33, or 32 if the pheasant carries 1 point
    # of BareHand poke damage from the monster test) - 1200 for level 1
    assert exp in (12, 13), 'unexpected exp after level-up: %u' % exp
    assert next_req == 68000, 'next_req should be req_exp(613,2)=68000, got %u' % next_req
    print('PASS: 1025 level-up 613 -> level 1, exp %u, next %u' % (exp, next_req))

    # ---- 2) second hit, no level-up -> CMsgWeaponSkillExp 1104 ---------
    exp1104 = []
    for round_ in range(20):
        spawns = monster_ids_from_spawns(drain_all(sock, 0.2))
        for m in spawns:
            if m in dead: dead.discard(m)
            seen[m] = spawns[m]
        alive = [m for m in seen if m not in dead]
        if not alive:
            time.sleep(0.2); continue
        tid = alive[0]
        send_pkt(sock, 1022, atk(tid))
        pkts = drain_all(sock, 0.35)
        for p in find(pkts, 10010):
            if struct.unpack_from('<H', p[2], 0x18)[0] == 135:
                dead.add(tid)
        for p in find(pkts, 1104):
            # [exp:4@+4][nextReq:4@+8][type:2@+0xC][flag:1@+0xE]
            e4 = struct.unpack_from('<I', p[2], 4)[0]
            n4 = struct.unpack_from('<I', p[2], 8)[0]
            ty = struct.unpack_from('<H', p[2], 0x0C)[0]
            fl = p[2][0x0E]
            exp1104.append((ty, e4, n4, fl))
        if exp1104:
            break
        time.sleep(0.1)
    print('1104 events: %s' % exp1104)
    ev = [t for t in exp1104 if t[0] == 613 and t[3] == 0]
    assert ev, 'no 1104 exp update for 613 after the second hit'
    ty, e4, n4, fl = ev[0]
    assert exp < e4 <= exp + 33, \
        '1104 exp should be levelup exp + raw dmg (max 33), got %u (base %u)' % (e4, exp)
    assert n4 == 68000, '1104 next_req should be 68000, got %u' % n4
    exp = e4
    print('PASS: 1104 exp update 613 exp %u next 68000 flag 0' % exp)

    # ---- 3) disconnect: record-pool flush persists the row -------------
    sock.close(); sock = None
    time.sleep(1.0)
    out = subprocess.run(['mysql', '-uroot', 'cq', '-N', '-e',
        'SELECT level,exp FROM cq_weapon_skill WHERE owner_id=9 AND type=613'],
        capture_output=True, text=True).stdout.strip()
    print('db row after disconnect: %s' % out)
    parts = out.split()
    assert parts and parts[0] == '1' and parts[1] == str(exp), \
        'db row should be level 1 exp %u, got %r' % (exp, out)
    print('PASS: cq_weapon_skill persisted level 1 exp %u' % exp)
    print('TEST test_weaponskill OK')
except AssertionError as e:
    print('FAIL test_weaponskill'); print('   ', e); sys.exit(1)
except Exception as e:
    print('FAIL test_weaponskill'); print('   ', repr(e)); sys.exit(1)
finally:
    if sock: sock.close()
