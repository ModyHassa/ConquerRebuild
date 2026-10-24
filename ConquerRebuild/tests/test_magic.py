#!/usr/bin/env python3
"""Live test v40: magic casting - CMsgInteract 1022 action 24 (obfuscated
attack spells) + CMsgMagicEffect 1105 + mana/exp/level-up + Cure heal."""
import socket, struct, sys, time, subprocess

HOST, PORT = '127.0.0.1', 5816
MONSTER_ID_BASE = 0xAAE61
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

def drain_all(sock, quiet=0.8):
    pkts = []
    while True:
        p = recv_pkt(sock, timeout=quiet)
        if not p: break
        pkts.append(p)
        quiet = 0.3
    return pkts

def find(pkts, tid):
    return [p for p in pkts if p[1] == tid]

# ---- anti-cheat encode (mirror of the client writer FUN_007a8aaf) ----
def ror16(v, r): return ((v >> r) | (v << (16 - r))) & 0xFFFF
def rol16(v, r): return ((v << r) | (v >> (16 - r))) & 0xFFFF
def rol32(v, r): return ((v << r) | (v >> (32 - r))) & 0xFFFFFFFF

OBF_SET = {1000, 1001, 1002, 1030, 1125, 1150, 1160, 1165}

def encode_cast(uid, ts_low, mt, target, x, y):
    v = ror16((mt - 0x14be) & 0xFFFF, 3)
    mt_enc = (v ^ uid ^ 0x915d) & 0xFFFF
    z = ((target - 0x8b90b51a) & 0xFFFFFFFF) ^ uid ^ 0x5f2d2463
    tgt_enc = rol32(z, 13)
    v = ror16((x - 0xdd12) & 0xFFFF, 1)
    x_enc = (v ^ uid ^ 0x2ed6) & 0xFFFF
    v = ror16((y - 0x76de) & 0xFFFF, 5)
    y_enc = (v ^ uid ^ 0xb99b) & 0xFFFF
    m = ((((ts_low ^ 0x37) & 0xFF) << 8) | 0x21) & 0xFFFF
    if mt_enc in OBF_SET:            # both sides check the RAW wire value
        m ^= 0x6279
    return mt_enc, tgt_enc, x_enc, y_enc, m

def magic_cast(sock, uid, mt, target, bad=False):
    ts = int(time.time()) & 0xFFFFFFFF
    ts_low = ts & 0xFF
    if bad: ts_low ^= 0x01          # forged anti-cheat timestamp
    mt_enc, tgt, x_enc, y_enc, m = encode_cast(uid, ts_low, mt, target, 400, 300)
    skill = (m << 16) | mt_enc
    send_pkt(sock, 1022, struct.pack('<IIIIHHHII',
             ts, ts, uid, tgt, x_enc, y_enc, 24, skill, 0))

def parse_1105(raw):
    caster, target = struct.unpack_from('<II', raw, 4)
    mtype, mlevel = struct.unpack_from('<HH', raw, 0xC)
    count = raw[0x13]
    entries = []
    for i in range(count):
        off = 0x18 + i * 0x20
        eid, dmg, hp = struct.unpack_from('<III', raw, off)
        entries.append((eid, dmg, hp))
    return dict(caster=caster, target=target, type=mtype,
                level=mlevel, count=count, entries=entries)

def parse_1103(raw):
    tick, owner = struct.unpack_from('<II', raw, 4)
    mtype = struct.unpack_from('<I', raw, 0xC)[0]
    level = struct.unpack_from('<H', raw, 0x10)[0]
    exp = struct.unpack_from('<I', raw, 0x18)[0]
    return dict(owner=owner, type=mtype, level=level, exp=exp)

def parse_10017(raw):
    pid, cnt = struct.unpack_from('<II', raw, 8)
    out = []
    for k in range(cnt):
        attr, val, prm = struct.unpack_from('<III', raw, 0x10 + k * 0x1C)
        out.append((attr, val))
    return pid, dict(out)

# reset CasterA magic rows + knight hp (a previous green run persists exp)
subprocess.run(['mysql', 'cq', '-e',
    "DELETE FROM cq_magic WHERE ownerid=14; "
    "INSERT INTO cq_magic (ownerid,type,level,exp) VALUES "
    "(14,1000,0,1998),(14,1001,0,0),(14,1005,0,0); "
    "UPDATE cq_user SET life=2000 WHERE id=1;"],
    check=True)

socks = []
try:
    K = socket.create_connection((HOST, PORT)); socks.append(K)
    send_pkt(K, 1008, struct.pack('<II', 100001, 777))
    drain_all(K)
    C = socket.create_connection((HOST, PORT)); socks.append(C)
    send_pkt(C, 1008, struct.pack('<II', 100014, 777))
    pk_c0 = drain_all(C)
    drain_all(K)
    print('Knight + CasterA logged in')

    # 0) login magic snapshot: one 1103 per known spell (v37 dump loop)
    snaps = [parse_1103(p[2]) for p in find(pk_c0, 1103)]
    thunder = [s for s in snaps if s['type'] == 1000]
    assert thunder and thunder[0]['level'] == 0 and thunder[0]['exp'] == 1998, snaps
    known = sorted(s['type'] for s in snaps)
    assert known == [1000, 1001, 1005], known
    print('1103 snapshot OK:', snaps)

    # find a Pheasant (lookface 104) from the login spawn dump
    pheas = []
    for ln, tp, raw in find(pk_c0, 10014):
        mid = struct.unpack_from('<I', raw, 0xC)[0]
        if mid >= MONSTER_ID_BASE and raw[0x67] == 104:
            pheas.append(mid)
    assert pheas, 'no pheasant visible at spawn'
    target_mon = pheas[0]
    print('pheasant target:', target_mon)

    # 1) anti-cheat reject: forged ts -> NO effect packets at all
    magic_cast(C, 14, 1000, 1, bad=True)
    pk_k = drain_all(K, 0.6); pk_c = drain_all(C, 0.6)
    assert not find(pk_k, 1105) and not find(pk_c, 1103), \
        f'forged cast leaked: K={[p[1] for p in pk_k]} C={[p[1] for p in pk_c]}'
    print('anti-cheat forged cast dropped OK')

    # 2) Thunder cast #1 + immediate back-to-back recast (Thunder delay 0 -> 1s floor; both sent instantly so the
    # recast is guaranteed inside the cooldown window)
    magic_cast(C, 14, 1000, 1)
    magic_cast(C, 14, 1000, 1)          # must be dropped (cooldown)
    pk_k = drain_all(K); pk_c = drain_all(C)
    eff = find(pk_k, 1105)
    assert eff, f'Knight saw no 1105: {[p[1] for p in pk_k]}'
    e = parse_1105(eff[0][2])
    print('1105 @K:', e)
    assert e['caster'] == 14 and e['target'] == 1 and e['type'] == 1000 \
        and e['level'] == 0 and e['count'] == 1, e
    eid, dmg, hp = e['entries'][0]
    assert eid == 1 and 1 <= dmg <= 7 and hp < 2000, e['entries']
    attrs = [parse_10017(p[2]) for p in find(pk_k, 10017)]
    k_hp = dict(attrs).get(1, {})
    assert 0 in k_hp and k_hp[0] == hp, attrs
    cattrs = [parse_10017(p[2]) for p in find(pk_c, 10017)]
    c_mana = dict(cattrs).get(14, {})
    assert 2 in c_mana and c_mana[2] == 299, cattrs   # mana 300 - 1
    up = [parse_1103(p[2]) for p in find(pk_c, 1103) if p[2] is not None]
    assert any(s['type'] == 1000 and s['exp'] == 1999 and s['level'] == 0
               for s in up), up
    print('Thunder cast 1: dmg %d, Knight hp %d, exp 1999' % (dmg, hp))

    # 3) the recast was dropped by the cooldown: exactly one 1105
    assert len(eff) == 1, 'cooldown not enforced'
    print('cooldown gate OK')
    time.sleep(1.2)
    magic_cast(C, 14, 1000, 1)
    pk_k = drain_all(K); pk_c = drain_all(C)
    eff2 = find(pk_k, 1105)
    assert eff2, 'cast 2 produced no 1105'
    e2 = parse_1105(eff2[0][2])
    assert e2['entries'] and e2['entries'][0][0] == 1, e2['entries']
    k_hp_before = e2['entries'][0][2]      # Knight hp after both Thunder hits
    up = [parse_1103(p[2]) for p in find(pk_c, 1103)]
    lv = [s for s in up if s['type'] == 1000]
    assert lv and lv[0]['level'] == 1 and lv[0]['exp'] == 0, up
    print('Thunder LEVELED UP to 1 (Knight hp %d):' % k_hp_before, lv[0])

    # 4) unknown spell (1190, obfuscated like every action-24 cast)
    magic_cast(C, 14, 1190, 1)
    pk_k = drain_all(K, 0.6); pk_c = drain_all(C, 0.6)
    assert not find(pk_k, 1105) and not find(pk_c, 1103), 'unknown spell leaked'
    print('unknown spell 1190 dropped OK')

    # 5) unknown OBFUSCATED spell (1030 decodes fine, then dropped)
    magic_cast(C, 14, 1030, 1)
    pk_k = drain_all(K, 0.6)
    assert not find(pk_k, 1105), 'unknown obf spell leaked'
    print('unknown obfuscated spell (1030) decoded + dropped OK')

    # 6) Fire (1001, obfuscated) on a pheasant until it dies
    died = False
    for attempt in range(8):
        time.sleep(1.2)
        magic_cast(C, 14, 1001, target_mon)
        pk_c = drain_all(C); pk_k = drain_all(K, 0.4)
        eff = find(pk_c, 1105)
        if not eff:
            print('  (cast produced no 1105 - mana or target gone)'); break
        e = parse_1105(eff[0][2])
        print('Fire cast %d: %s' % (attempt + 1, e['entries']))
        if e['entries'] and e['entries'][0][2] == 0:
            # death: CMsgAction 135 broadcast + respawn later
            died = True
            break
    assert died, 'pheasant did not die within 8 Fire casts'
    print('pheasant %u killed by Fire' % target_mon)

    # 7) Cure (1005, obfuscated like every action-24 cast) heals the
    # Thunder damage on the Knight (hp tracked from cast 2's 1105 entry)
    time.sleep(1.2)
    magic_cast(C, 14, 1005, 1)      # Cure: obfuscated like all action-24
    pk_k = drain_all(K)
    heals = [parse_10017(p[2]) for p in find(pk_k, 10017)
             if struct.unpack_from('<I', p[2], 8)[0] == 1]
    assert heals, 'Knight saw no Cure 10017'
    k_hp_after = heals[-1][1].get(0, 0)
    assert k_hp_after > k_hp_before, (k_hp_before, k_hp_after)
    assert k_hp_after <= 2000, k_hp_after
    print('Cure healed Knight: %d -> %d' % (k_hp_before, k_hp_after))

    # 8) DB persistence: close CasterA's session first (disconnect flush)
    C.close(); socks.remove(C)
    time.sleep(1.0)
    row = subprocess.run(
        ['mysql', '-B', 'cq', '-e',
         'SELECT type,level,exp FROM cq_magic WHERE ownerid=14'],
        capture_output=True, text=True).stdout.strip().splitlines()[1:]
    rows = {int(r.split('\t')[0]): (int(r.split('\t')[1]), int(r.split('\t')[2]))
            for r in row}
    assert rows.get(1000) == (1, 0), rows      # leveled + exp reset saved
    print('cq_magic persisted:', rows)

    print('ALL MAGIC TESTS PASSED')
finally:
    for s in socks:
        try: s.close()
        except Exception: pass
