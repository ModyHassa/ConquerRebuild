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

def find_trap(pkts):
    for p in pkts:
        if p[1] == 1101 and len(p[2]) > 0x16 and p[2][0x16] == 10:
            return p[2]
    return None

# ---- 2101: create a trap from cq_traptype 51 on map 1002 -----------
pkts = click_option(a, 99000940, 'trap')
t = texts(pkts)
check(any('V70~TRAP~OK.' in s for s in t), '2101 with 9 fields continues')
body = find_trap(pkts)
check(body is not None, '2101 broadcast a 1101 with action byte 10')
if body is not None:
    tid   = struct.unpack_from('<I', body, 8)[0]
    x     = struct.unpack_from('<H', body, 0xc)[0]
    y     = struct.unpack_from('<H', body, 0x10)[0]
    look  = struct.unpack_from('<H', body, 0x14)[0]
    owner = struct.unpack_from('<I', body, 0x17)[0]
    name  = body[0x35:0x35+15].split(b'\x00')[0].decode('ascii', 'ignore')
    check(tid != 0, '1101 trap id is allocated (%d)' % tid)
    check((x, y) == (400, 300), 'trap coordinates (400,300), got (%d,%d)' % (x, y))
    # cq_traptype 51 has look=11 and the param carries 11, so the tens digit
    # comes from the type and the ones digit from the param -> 11
    check(look == 11, 'trap lookface = 11 (type tens + param ones), got %d' % look)
    check(owner == uin, 'trap owner is the acting player (%d)' % owner)
    check(name == 'trap', 'trap name copied from cq_traptype, got %r' % name)

# ---- unknown trap type -> id_nextfail, no broadcast -----------------
pkts2 = click_option(a, 99000944, 'trap2')
t2 = texts(pkts2)
check(any('V70~TRAP2~FAIL.' in s for s in t2),
      '2101 with an unknown traptype takes id_nextfail')
check(find_trap(pkts2) is None, 'no 1101 is broadcast for an unknown traptype')

# ---- 5 fields -> id_nextfail ---------------------------------------
pkts3 = click_option(a, 99000948, 'trap3')
t3 = texts(pkts3)
check(any('V70~TRAP3~FAIL.' in s for s in t3),
      '2101 with 5 fields takes id_nextfail')

print('RESULT: %d FAILURES' % len(fails))
sys.exit(1 if fails else 0)
