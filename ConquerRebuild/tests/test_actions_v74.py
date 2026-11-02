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

# ---- data=0 defines a descriptor ------------------------------------
t = run(99001100, 'petdef')
check(saw(t, 'V74~PETDEF~OK.'), 'data=0 defines descriptor 1 and passes')
check(not saw(t, 'V74~PETDEF~FAIL.'), 'no fail branch on the first define')

# ---- the same id cannot be defined twice ----------------------------
t = run(99001104, 'petdup')
check(saw(t, 'V74~PETDUP~FAIL.'), 'a second define of id 1 takes id_nextfail')
check(not saw(t, 'V74~PETDUP~OK.'), 'a duplicate id never reports success')

# ---- six-field form: three (field, op, value) triples --------------
t = run(99001116, 'petdef2')
check(saw(t, 'V74~PETDEF2~OK.'),
      'a define with three triples also passes')

# ---- data=1 releases an existing descriptor ------------------------
t = run(99001108, 'petrel')
check(saw(t, 'V74~PETREL~OK.'), 'data=1 releases an existing descriptor')
check(not saw(t, 'V74~PETREL~FAIL.'), 'the release does not fail while it exists')

# ---- releasing it again finds nothing ------------------------------
t = run(99001112, 'petfree')
check(saw(t, 'V74~PETFREE~FAIL.'),
      'releasing an already released id takes id_nextfail')
check(not saw(t, 'V74~PETFREE~OK.'), 'a missing descriptor never passes')

# ---- and the freed id can be defined again -------------------------
t = run(99001100, 'petdef_again')
check(saw(t, 'V74~PETDEF~OK.'),
      'the id is free again after the release, so define passes')

# ---- empty param on the define branch ------------------------------
print('descriptor count check skipped (registry is server-side)')

print('RESULT: %d FAILURES' % len(fails))
sys.exit(1 if fails else 0)
