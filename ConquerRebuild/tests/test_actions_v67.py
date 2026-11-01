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

# 1) full 9-field row: amount + the gem/magic attribute slots
pkts = click_option(a, 99000890, 'gen')
t = texts(pkts)
check(any('V67~GEN~OK.' in s for s in t), '528 with 9 fields continues to id_next')
check(not any('V67~GEN~FAIL.' in s for s in t), '528 did not take the fail branch')

row = db("SELECT amount,amount_limit,gem1,gem2,magic1,magic2,magic3 "
         "FROM cq_item WHERE type=750000 AND player_id=%d AND id>%s "
         "ORDER BY id DESC LIMIT 1" % (uin, before))
parts = row.split('\t') if row else []
check(len(parts) == 7, '528 inserted exactly one cq_item row (got %r)' % (row,))
if len(parts) == 7:
    got = [int(x) for x in parts]
    check(got[0] == 7, 'amount = field 1 (attr 4) -> %d' % got[0])
    check(got[1] == 2, 'amount_limit = field 2 (attr 5) -> %d' % got[1])
    check(got[2] == 55, 'gem1 = field 8 (attr 8) -> %d' % got[2])
    check(got[3] == 44, 'gem2 = field 7 (attr 9) -> %d' % got[3])
    check(got[4] == 33, 'magic1 = field 6 (attr 10) -> %d' % got[4])
    check(got[5] == 22, 'magic2 = field 5 (attr 11) -> %d' % got[5])
    check(got[6] == 11, 'magic3 = field 4 (attr 12) -> %d' % got[6])

# 2) a row with fewer than 9 fields takes the fail branch, no item created
before2 = db("SELECT IFNULL(MAX(id),0) FROM cq_item WHERE type=750000")
pkts2 = click_option(a, 99000894, 'gen')
t2 = texts(pkts2)
check(any('V67~BAD~FAIL.' in s for s in t2),
      '528 with 3 fields takes id_nextfail')
after2 = db("SELECT IFNULL(MAX(id),0) FROM cq_item WHERE type=750000")
check(before2 == after2, '528 with 3 fields creates no item')

print('RESULT: %d FAILURES' % len(fails))
sys.exit(1 if fails else 0)
