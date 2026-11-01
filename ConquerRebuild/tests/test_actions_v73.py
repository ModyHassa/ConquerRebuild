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

def mapitems(pkts):
    """Unique (trap id, action byte) from every MSGMAPITEM 1101.

    The payload carries a 4-byte prefix, so the id sits at +8 and the action
    byte at +0x16 (same convention as the v70 trap test). The actor receives
    each trap packet twice (map broadcast + the direct send in the original),
    so consecutive duplicates are collapsed."""
    out = []
    for p in pkts:
        if p[1] == 1101 and len(p[2]) > 0x18:
            tid = struct.unpack_from('<I', p[2], 0x08)[0]
            item = (tid, p[2][0x16])
            if not out or out[-1] != item:
                out.append(item)
    return out

# ---- clear any trap another wave left on this cell -------------------
# The trap registry lives in the server process, so an earlier test may have
# dropped a trap exactly where TestKnight stands. 2102 always resolves the
# first trap at the actor's cell, so purge the leftovers first and the ids
# below become deterministic.
cleared = 0
for _ in range(6):
    pk = click_option(a, 99001006, 'trapdel0')
    if any('V73~AGAIN~FAIL.' in s for s in texts(pk)):
        break
    cleared += 1
print('purged %d leftover trap(s)' % cleared)

# ---- 2101 creates the trap, 2102 removes it in the same chain -------
pk = click_option(a, 99001000, 'trapdel')
items = mapitems(pk)
check(len(items) == 2, 'saw exactly the create and the remove, got %r' % (items,))
if len(items) == 2:
    create, delete = items[0], items[1]
    check(create[1] == 10, 'first 1101 carries action 10 (cast), got %d' % create[1])
    check(delete[1] == 12, 'second 1101 carries action 0xc (remove), got %d' % delete[1])
    check(create[0] == delete[0],
          'the removal names the same trap id (%d vs %d)' % (create[0], delete[0]))
t = texts(pk)
check(any('V73~TRAPDEL~OK.' in s for s in t),
      '2102 removed the trap and continued to id_next')

# ---- second 2102 finds nothing -> id_nextfail ------------------------
pk = click_option(a, 99001006, 'trapdel2')
t = texts(pk)
check(any('V73~AGAIN~FAIL.' in s for s in t),
      '2102 on an empty cell takes id_nextfail')
check(not any('V73~AGAIN~OK.' in s for s in t),
      '2102 did not report success twice')
items = mapitems(pk)
check(len(items) == 0, 'no map item packet when there is nothing to remove, got %r'
      % (items,))

print('RESULT: %d FAILURES' % len(fails))
sys.exit(1 if fails else 0)
