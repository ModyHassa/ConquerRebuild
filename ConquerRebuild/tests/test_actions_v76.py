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

def run(aid, tag):
    return texts(click_option(a, aid, tag))

def saw(t, s):
    return any(s in x for x in t)

# ---- a generator row on a real map passes and creates the NPC -------
db("DELETE FROM cq_dynanpc WHERE name='V76~gate'")
pk = click_option(a, 99001300, 'gen2007')
t = texts(pk)
check(saw(t, 'V76~GEN~OK.'), '2007 continues on a map that exists')
check(not saw(t, 'V76~GEN~FAIL.'), 'no fail branch for a valid map')

row = db("SELECT id, mapid, cellx, celly, lookface, ownerid, type, itemid"
         " FROM cq_dynanpc WHERE name='V76~gate' LIMIT 1")
check(bool(row.strip()), '2007 wrote the cq_dynanpc row (%r)' % row)
if row.strip():
    nid, rmap, rx, ry, rlook, rowner = [int(v) for v in row.split()[:6]]
    check(rmap == 1002, 'field 7 is the map, got %d' % rmap)
    check((rx, ry) == (400, 300), 'fields 8/9 are x/y, got (%d,%d)' % (rx, ry))
    check(rlook == 241, 'field 5 is the itemType/lookface, got %d' % rlook)
    check(rowner == 1, 'field 1 is the idOwner, got %d' % rowner)
    vals = [int(v) for v in row.split()[:8]]
    check(vals[6] == 26, 'field 4 is persisted as cq_dynanpc.type, got %d'
          % vals[6])
    check(vals[7] == 241, 'field 5 is persisted as cq_dynanpc.itemid, got %d'
          % vals[7])
    # 10014 monster-style layout: id at +0x0C, look at +0x67,
    # x at +0x6F, y at +0x71 (same offsets the drop test uses)
    hits = []
    for pkt in pk:
        if pkt[1] != 10014 or len(pkt[2]) < 0x120:
            continue
        body = pkt[2]
        sid = struct.unpack_from('<I', body, 0x0C)[0]
        slook = struct.unpack_from('<I', body, 0x67)[0]
        sx = struct.unpack_from('<H', body, 0x6F)[0]
        sy = struct.unpack_from('<H', body, 0x71)[0]
        if sid == nid:
            hits.append((slook, sx, sy))
    check(bool(hits), 'the spawn broadcast carries the new id %d' % nid)
    if hits:
        check(hits[0] == (241, 400, 300),
              'the spawn carries lookface 241 at (400,300), got %r' % (hits[0],))

# ---- an unknown map takes the CNpc::Create fail path ---------------
t = run(99001304, 'gen2007bad')
check(saw(t, 'V76~MAP~FAIL.'),
      "2007 with an unknown map takes the original's CNpc::Create fail")
check(not saw(t, 'V76~MAP~OK.'), 'an unknown map never passes')

# ---- fewer than nine fields is a DBERROR ---------------------------
t = run(99001308, 'gen2007short')
check(saw(t, 'V76~SHORT~FAIL.'), '2007 with 3 fields takes id_nextfail')
check(not saw(t, 'V76~SHORT~OK.'), 'a short 2007 never passes')

db("DELETE FROM cq_dynanpc WHERE name='V76~gate'")

print('RESULT: %d FAILURES' % len(fails))
sys.exit(1 if fails else 0)
