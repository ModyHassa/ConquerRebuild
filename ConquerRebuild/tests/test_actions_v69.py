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
check(uin != 0, 'TestKnight has a cq_user id in the DB')

before = db("SELECT IFNULL(MAX(id),0) FROM cq_item WHERE type=750000")

import struct

uin = int(db("SELECT id FROM cq_user WHERE name='TestKnight' LIMIT 1") or 0)
check(uin != 0, 'TestKnight has a cq_user id')

def texts(pkts):
    out = []
    for p in pkts:
        if p[1] == 2032:
            out += strings_of_2032(p)
    return out

# ---- 131: a 10010 action packet at (x,y) with data 162 -------------
pkts = click_option(a, 99000920, 'act')
t = texts(pkts)
check(any('V69~ACT~OK.' in s for s in t), '131 with 3 fields continues')
act = None
for p in pkts:
    if p[1] == 10010:
        act = p
        break
check(act is not None, '131 emitted a 10010 packet')
if act is not None:
    bodyb = act[2]
    # body convention (see test_action_10010.py): frame prefix is the
    # first 4 bytes, payload starts at 4 -> ts 4, actor 8, data 0xC,
    # action 0x18, dir 0x1A, x 0x1C, y 0x1E
    did = struct.unpack_from('<I', bodyb, 8)[0]
    data = struct.unpack_from('<I', bodyb, 0xc)[0]
    x = struct.unpack_from('<H', bodyb, 0x1c)[0]
    y = struct.unpack_from('<H', bodyb, 0x1e)[0]
    check(did == uin, '10010 carries the actor id (%d)' % did)
    check(data == 162, '10010 data slot = 0xa2 (162), got %d' % data)
    check(x == 195 and y == 205,
          '10010 coordinates = (195,205), got (%d,%d)' % (x, y))

# a 2-field 131 takes the fail branch (original needs 3 or 4)
pkts2 = click_option(a, 99000924, 'act2')
t2 = texts(pkts2)
check(any('V69~ACT2~FAIL.' in s for s in t2),
      '131 with 2 fields takes id_nextfail')

# ---- 519: remove ALL carried items of one type ---------------------
db("DELETE FROM cq_item WHERE type=750000 AND player_id=%d" % uin)
db("INSERT INTO cq_item (type,owner_id,player_id,amount,position,del_time) "
   "VALUES (750000,%d,%d,5,0,0),(750000,%d,%d,3,0,0)" % (uin, uin, uin, uin))
check(db("SELECT COUNT(*) FROM cq_item WHERE type=750000 AND player_id=%d" % uin) == '2',
      'two stacks of the type exist before 519')
pkts3 = click_option(a, 99000930, 'del')
t3 = texts(pkts3)
check(any('V69~DEL~OK.' in s for s in t3), '519 with items continues')
check(db("SELECT COUNT(*) FROM cq_item WHERE type=750000 AND player_id=%d" % uin) == '0',
      '519 removed BOTH stacks, not just one')
pkts4 = click_option(a, 99000930, 'del')
t4 = texts(pkts4)
check(any('V69~DEL~FAIL.' in s for s in t4),
      '519 with no matching item takes id_nextfail')

print('RESULT: %d FAILURES' % len(fails))
sys.exit(1 if fails else 0)
