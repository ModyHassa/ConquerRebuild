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

# setup: the actor must be a member and TestGuild must be at a known balance
db("INSERT INTO cq_synattr (id, syn_id, rank, join_date) "
   "VALUES (%d, 999001, 1000, 20261102) "
   "ON DUPLICATE KEY UPDATE syn_id=999001, rank=1000" % uin)
db("UPDATE cq_syndicate SET money=500000, member_title=0 WHERE id=999001")

# ---- no guild id in the param -> falls back to the actor's guild ----
t = run(99001600, 'fallback717')
check(saw(t, 'V82~FALLBACK~OK.'),
      '717 without a guild id resolves the actor guild (money 500000 < 1e6)')
check(not saw(t, 'V82~FALLBACK~FAIL.'), 'the fallback does not take the fail branch')

# ---- and the write path lands on that guild -------------------------
t = run(99001608, 'add717')
check(saw(t, 'V82~ADD~OK.'), '717 money += works through the fallback')
bal = db("SELECT money FROM cq_syndicate WHERE id=999001")
check(int(bal) == 500250, 'TestGuild money went 500000 -> 500250 (got %r)' % bal)

t = run(99001604, 'title717')
check(saw(t, 'V82~TITLE~OK.'), '717 member_title = works through the fallback')
mt = db("SELECT member_title FROM cq_syndicate WHERE id=999001")
check(int(mt) == 9, 'TestGuild member_title became 9 (got %r)' % mt)

# ---- a character with no membership still fails ---------------------
# GuildProbe2 (cq_user 98) is a dedicated guild-less character; using it
# instead of re-logging TestKnight keeps other tests' broadcasts intact.
db("DELETE FROM cq_synattr WHERE id=98")
b2 = socket.create_connection((HOST, PORT))
send_pkt(b2, 1008, struct.pack('<II', 100098, 998))
drain_all(b2, 2.0)
send_pkt(b2, 2031, struct.pack('<IIIHH', 0, MAPSAGE, 0, 0, 0))
drain_all(b2, 1.0)
payload = struct.pack('<HHIHBB', 0, 0, 99001600, 0, 0, 0x66)
payload += bytes([1, 6]) + b'guild!'
send_pkt(b2, 2032, payload)
pk = drain_all(b2, 1.0)
check(saw(texts(pk), 'V82~FALLBACK~FAIL.'),
      'a guild-less actor takes id_nextfail (no guild id in the param)')
b2.close()

db("UPDATE cq_syndicate SET money=500000, member_title=0 WHERE id=999001")

print('RESULT: %d FAILURES' % len(fails))
sys.exit(1 if fails else 0)
