#!/usr/bin/env python3
"""Live test: v53 — existing 2005 (0x7d5) fail-branch semantics."""
import socket, struct, sys

HOST, PORT = '127.0.0.1', 5816
MAPSAGE = 9945
_rcv = {}

def recv_pkt(sock, timeout=4.0):
    sock.settimeout(timeout)
    buf = _rcv.setdefault(sock, b'')
    while True:
        if len(buf) >= 4:
            ln, tp = struct.unpack_from('<HH', buf, 0)
            if len(buf) >= ln:
                pkt = (ln, tp, buf[:ln])
                _rcv[sock] = buf[ln:]
                return pkt
        try:
            chunk = sock.recv(4096)
            if not chunk: return None
        except socket.timeout:
            return None
        buf = _rcv[sock] = buf + chunk

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

def strings_of_2032(p):
    d = p[2]; n = d[0x10]; pos = 0x11; out = []
    for _ in range(n):
        ln = d[pos]; pos += 1
        out.append(d[pos:pos+ln].decode('utf-8','replace')); pos += ln
    return out

def click_option(sock, action_id, text):
    send_pkt(sock, 2031, struct.pack('<IIIHH', 0, MAPSAGE, 0, 0, 0))
    pkts = drain_all(sock)
    assert any(p[1] == 2032 for p in pkts), 'no menu'
    body = struct.pack('<HHIHBB', 0, 0, action_id, 0, 0, 0x66)
    body += bytes([1, len(text)]) + text.encode()
    send_pkt(sock, 2032, body)
    return drain_all(sock)

def texts_of_dialog(pkts):
    out = []
    for p in pkts:
        if p[1] == 2032:
            out += strings_of_2032(p)
    return out

def login(acct, uin):
    s = socket.create_connection((HOST, PORT))
    send_pkt(s, 1008, struct.pack('<II', acct, uin))
    return s, drain_all(s)

def sql(q):
    import subprocess
    return subprocess.run(
        f"mysql -h 127.0.0.1 -u test -ptest cq -N -B -e \"{q}\"",
        shell=True, capture_output=True, text=True).stdout.strip()

fails = []
def check(cond, msg):
    tag = 'ok  ' if cond else 'FAIL'
    print(f'{tag} {msg}')
    if not cond: fails.append(msg)

# cq_user resets MUST use account_id (cq_user.id is 1/2!)
sql("UPDATE cq_user SET recordmap_id=1002, recordx=400, recordy=300 "
    "WHERE account_id=100001")
a, _ = login(100001, 777)
print('TestKnight logged in')

import subprocess

def db(sql):
    return subprocess.run(
        ['mysql', '-h', '127.0.0.1', '-u', 'test', '-ptest', 'cq', '-N', '-e', sql],
        capture_output=True, text=True).stdout.strip()

def texts(pkts):
    out = []
    for p in pkts:
        if p[1] == 2032:
            out += strings_of_2032(p)
    return out

uin = int(db("SELECT id FROM cq_user WHERE name='TestKnight' LIMIT 1") or 0)
check(uin != 0, 'TestKnight has a cq_user id')

def texts(pkts):
    out = []
    for p in pkts:
        if p[1] == 2032:
            out += strings_of_2032(p)
    return out

SEEDED = 90001                      # the combat test's ShadowFlyingKnife
def equip_seeded():
    # restore the exact seeded equipment so combat damage stays put
    db("UPDATE cq_item SET position=0 WHERE player_id=%d AND position=4 AND id<>%d"
       % (uin, SEEDED))
    db("UPDATE cq_item SET position=4, amount_limit=7000, data=0 WHERE id=%d" % SEEDED)
def slot4():
    return db("SELECT id, type FROM cq_item WHERE player_id=%d AND position=4 LIMIT 1" % uin)

equip_seeded()
row = slot4()
check(row.split()[:1] == [str(SEEDED)], 'seeded weapon is the only slot-4 item (%s)' % row)
wtype = int(row.split()[1])

# ---- 542: empty param -> a plain copy of the worn weapon, colour 3 ----
before = set(db("SELECT id FROM cq_item WHERE player_id=%d AND type=%d" % (uin, wtype)).split())
t = texts(click_option(a, 99000960, 'copy'))
check(any('V71~COPY~OK.' in s for s in t), '542 with an empty param continues')
after = set(db("SELECT id FROM cq_item WHERE player_id=%d AND type=%d" % (uin, wtype)).split())
copies = sorted(int(x) for x in (after - before))
check(len(copies) == 1, '542 created exactly one item of type %d' % wtype)
if copies:
    amt, col = [int(v) for v in db("SELECT amount, color FROM cq_item WHERE id=%d" % copies[0]).split()[:2]]
    check(amt == 1, 'copy amount defaults to 1, got %d' % amt)
    check(col == 3, 'absent field 6 leaves colour at the default 3, got %d' % col)

# ---- 542: the 14-field live shape writes the attributes --------------
before2 = set(db("SELECT id FROM cq_item WHERE player_id=%d AND type=%d" % (uin, wtype)).split())
t = texts(click_option(a, 99000964, 'copy2'))
check(any('V71~COPY2~OK.' in s for s in t), '542 with 14 fields continues')
after2 = set(db("SELECT id FROM cq_item WHERE player_id=%d AND type=%d" % (uin, wtype)).split())
copies += sorted(int(x) for x in (after2 - before2))
new2 = sorted(int(x) for x in (after2 - before2))
check(len(new2) == 1, '542 14-field form created one item')
if new2:
    r = db("SELECT color, add_life, reduce_dmg, magic1, magic2, magic3, gem1 FROM cq_item WHERE id=%d" % new2[0])
    col, life, rdmg, m1, m2, m3, g1 = [int(v) for v in r.split()[:7]]
    check(col == 0, 'field 6 present as 0 -> colour 0, got %d' % col)
    check(life == 6, 'field 8 -> add_life (attr 15) = 6, got %d' % life)
    check(rdmg == 62, 'field 9 -> reduce_dmg (attr 14) = 62, got %d' % rdmg)
    check(m3 == 63, 'field 10 -> magic3 (attr 12) = 63, got %d' % m3)
    check(m2 == 184, 'field 11 -> magic2 (attr 11) = 184, got %d' % m2)
    check(m1 == 0, 'field 12 is 0 -> magic1 (attr 10) stays 0, got %d' % m1)
    check(g1 == 0, 'field 14 = 4079544 does not fit cq_item.gem1 (tinyint), got %d' % g1)

# ---- 529: a dedicated weapon is consumed when the gate passes --------
# the seeded knife is never touched: equip an isolated test weapon instead
db("UPDATE cq_item SET position=0 WHERE player_id=%d AND position=4" % uin)
db("DELETE FROM cq_item WHERE player_id=%d AND type=900999" % uin)
db("INSERT INTO cq_item (type,owner_id,player_id,amount,amount_limit,position,data,del_time)"
   " VALUES (900999,%d,%d,1,7,4,0,0)" % (uin, uin))
tid = db("SELECT id FROM cq_item WHERE player_id=%d AND type=900999 LIMIT 1" % uin)
check(tid.isdigit(), 'dedicated 529 test weapon created (%s)' % tid)
t = texts(click_option(a, 99000968, 'gate'))
check(any('V71~GATE~OK.' in s for s in t), '529 consumes the weapon when the gate passes')
check(db("SELECT COUNT(*) FROM cq_item WHERE id=%s" % tid) == '0',
      'the gated weapon row was removed')

# ---- 529: wrong amount_limit / missing user var / one field -> fail --
t = texts(click_option(a, 99000972, 'gate2'))
check(any('V71~GATE2~FAIL.' in s for s in t),
      '529 with a non-matching gate takes id_nextfail')
t = texts(click_option(a, 99000976, 'gate3'))
check(any('V71~GATE3~FAIL.' in s for s in t),
      '529 with a single field takes id_nextfail')

# ---- 542 without a weapon -> fail branch ----------------------------
db("UPDATE cq_item SET position=0 WHERE player_id=%d AND position=4" % uin)
t = texts(click_option(a, 99000960, 'copy3'))
check(any('V71~COPY~FAIL.' in s for s in t),
      '542 without an equipped weapon takes id_nextfail')

# ---- cleanup: drop the copies, restore the seeded equipment ---------
if copies:
    db("DELETE FROM cq_item WHERE id IN (%s)" % ','.join(str(c) for c in copies))
db("DELETE FROM cq_item WHERE player_id=%d AND type=900999" % uin)
equip_seeded()
check(slot4().split()[:1] == [str(SEEDED)],
      'seeded weapon is back at slot 4 for the combat test (%s)' % slot4())

print('RESULT: %d FAILURES' % len(fails))
sys.exit(1 if fails else 0)
