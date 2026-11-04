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
npc_id = 99001860
check(int(db("SELECT COUNT(*) FROM cq_npc WHERE id=%d" % npc_id)) == 1,
      'the Effect probe NPC is seeded')

send_pkt(a, 2031, struct.pack('<IIIHH', 0, npc_id, 0, 0, 0))
pk = drain_all(a, 2.0)
blob = talk_blob(pk)
fx = [p for p in pk if p[1] == 1015]


def parse_1015(raw):
    # wire: +0x0C mode u1, +0x0D packer count, +0x0E len, +0x0F name
    mode = raw[0x0C]
    n = raw[0x0E]
    name = raw[0x0F:0x0F + n].decode('latin1')
    return mode, name


modes = [parse_1015(r)[0] for _, _, r in fx]
names = [parse_1015(r)[1] for _, _, r in fx]
check('add=true' in blob, 'Effect(0,self,angelwing,add) answers true')
check('del=true' in blob, 'Effect(0,self,angelwing,del) answers true')
check(10 in modes, 'an add effect was sent with mode 10 (%s)' % modes)
check(24 in modes, 'a del effect was sent with mode 24 (%s)' % modes)
check(names.count('angelwing') >= 2,
      'the effect name travelled as the packer string (%s)' % names)
check('empty=false' in blob, 'an empty effect name is refused')
check('other=false' in blob,
      'a target we do not model (mate/couple) answers false instead of'
      ' pretending')

print('RESULT: %d FAILURES' % len(fails))
sys.exit(1 if fails else 0)
