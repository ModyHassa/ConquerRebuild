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

# ---- 130 on an id that does not exist -> id_nextfail ---------------
t = run(99001208, 'petmiss')
check(saw(t, 'V75~MISS~FAIL.'), '130 on a missing object takes id_nextfail')
check(not saw(t, 'V75~MISS~OK.'), 'a missing object never passes')

# ---- 129 defines it, then 130 updates it --------------------------
t = run(99001200, 'petdef3')
check(saw(t, 'V75~DEF~OK.'), '129 defined object 3')

t = run(99001204, 'petupd')
check(saw(t, 'V75~UPD~OK.'), '130 updates the existing object')
check(not saw(t, 'V75~UPD~FAIL.'), 'the update does not fail while it exists')

# ---- updating twice is allowed (it is an update, not a create) -----
t = run(99001204, 'petupd2')
check(saw(t, 'V75~UPD~OK.'), 'a second 130 on the same object still passes')

# ---- fewer than 21 fields -> id_nextfail --------------------------
t = run(99001212, 'petshort')
check(saw(t, 'V75~SHORT~FAIL.'),
      '130 with only 4 fields takes id_nextfail')
check(not saw(t, 'V75~SHORT~OK.'), 'a short 130 never passes')

# ---- 129 refuses a duplicate id, so the descriptor is still there --
t = run(99001200, 'petdef3again')
check(saw(t, 'V75~DEF~FAIL.'),
      'object 3 still exists, so re-defining it fails')

print('RESULT: %d FAILURES' % len(fails))
sys.exit(1 if fails else 0)
