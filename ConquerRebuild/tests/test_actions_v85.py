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

def talk_strings(data):
    """Pull the printable runs out of a CMsgTalk 1004 payload (sender,
    receiver, words and emotion are length-prefixed strings) - the words
    are what we assert on."""
    out, cur = [], b''
    for b in data:
        if 32 <= b < 127:
            cur += bytes([b])
        else:
            if len(cur) >= 4:
                out.append(cur.decode('ascii'))
            cur = b''
    if len(cur) >= 4:
        out.append(cur.decode('ascii'))
    return out

def talk_blob(pkts):
    parts = []
    for p in pkts:
        if p[1] == 1004:
            parts += talk_strings(p[2])
    return " | ".join(parts)

# the seed registers the scripted NPC on map 1002 next to TestKnight
npc_id = 99001851
uin = int(db("SELECT id FROM cq_user WHERE name='TestKnight' LIMIT 1") or 0)
lookface = int(db("SELECT lookface FROM cq_user WHERE id=%d" % uin) or 0)
rank = db("SELECT rank FROM cq_synattr WHERE id=%d" % uin)

check(int(db("SELECT COUNT(*) FROM cq_npc WHERE id=%d" % npc_id)) == 1,
      'the attribute probe NPC is seeded')
check(db("SELECT datastr FROM cq_npc WHERE id=%d" % npc_id) == 'v85_probe.lua',
      'its datastr names the script')

# clear the hair so the write is unambiguous
db("UPDATE cq_user SET hair=0 WHERE id=%d" % uin)

send_pkt(a, 2031, struct.pack('<IIIHH', 0, npc_id, 0, 0, 0))
pk = drain_all(a, 1.5)
blob = talk_blob(pk)

check('uid=%d' % uin in blob, 'GetUserInt(0,1001) is the current user id (%d)' % uin)
check('lookface_get=-1' in blob,
      'key 1003 answers -1 on GET: the original getter has no case for it'
      ' (only the setter does)')
import re as _re
mhair = _re.search(r'hair=(\d+)', blob)
# the value is whatever the login loaded into Player.hair, so assert the key
# is readable and numeric rather than pinning the row (the test clears the
# DB row after login, which the in-memory player does not see)
check(mhair is not None, 'key 1004 reads hair (%r)' % (mhair.group(0) if mhair else None))
check('guildrank=%s' % rank in blob,
      'key 1036 is the guild rank and reads cq_synattr.rank (%s)' % rank)
check('iterator=-1' in blob,
      'key 1037 is NOT the guild rank; it is the task iterator (no getter'
      ' path here) and answers -1')
check('bogus=-1' in blob, 'an unmapped key answers -1 like the original')
check('sethair=true' in blob and 'hair=42' in blob,
      'SetUserInt(0,1004,42,0) returned a boolean and wrote hair')
stored = db("SELECT hair FROM cq_user WHERE id=%d" % uin)
check(stored == '42', 'the hair write reached cq_user (%r)' % stored)
check('setrank=false' in blob,
      'SetUserInt refuses a key we cannot persist (boolean false)')

print('RESULT: %d FAILURES' % len(fails))
sys.exit(1 if fails else 0)
