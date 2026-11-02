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

import time

def login_as(acct, uin):
    s = socket.create_connection((HOST, PORT))
    send_pkt(s, 1008, struct.pack('<II', acct, uin))
    return s, drain_all(s, 2.0)

def click(sock, action_id, text):
    send_pkt(sock, 2031, struct.pack('<IIIHH', 0, MAPSAGE, 0, 0, 0))
    drain_all(sock, 1.0)
    body = struct.pack('<HHIHBB', 0, 0, action_id, 0, 0, 0x66)
    body += bytes([1, len(text)]) + text.encode()
    send_pkt(sock, 2032, body)
    return drain_all(sock, 1.0)

def saw(pkts, needle):
    for p in pkts:
        if p[1] == 2032:
            for x in strings_of_2032(p):
                if needle in x:
                    return True
    return False

# ---- GuildProbe has no cq_synattr row, so 722 must fail --------------
# (a probe account nobody else uses: this test re-logs in, and a re-login
# leaves the map's player object stale for the next test)
b, pkts = login_as(100099, 999)
check(any(p[1] == 10014 for p in pkts), 'GuildProbe logged in and spawned')
gid = db("SELECT COALESCE((SELECT syn_id FROM cq_synattr WHERE id=99),0)")
check(int(gid or 0) == 0, 'GuildProbe has no guild row (%r)' % gid)

pk = click(b, 99001420, 'syn722b')
check(saw(pk, 'V79~SYN~FAIL.'),
      '722 takes id_nextfail for a guild-less character')
check(not saw(pk, 'V79~SYN~OK.'),
      'a guild-less character never passes 722')

# ---- and once a member row exists the same chain passes ------------
db("INSERT INTO cq_synattr (id, syn_id, rank, join_date) "
   "VALUES (99, 3, 500, 20261102)")
b.close()
time.sleep(1.5)
b, pkts = login_as(100099, 999)
check(any(p[1] == 10014 for p in pkts), 'GuildProbe logged in again')
pk = click(b, 99001420, 'syn722b2')
check(saw(pk, 'V79~SYN~OK.'),
      'after joining guild 3 the same 722 chain passes')
check(not saw(pk, 'V79~SYN~FAIL.'), 'no fail branch for a member')

db("DELETE FROM cq_synattr WHERE id=99")
b.close()

print('RESULT: %d FAILURES' % len(fails))
sys.exit(1 if fails else 0)
