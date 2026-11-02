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

# ---- 332: bit 8 of the row's data ----------------------------------
t = run(99001400, 'bit8set')
check(saw(t, 'V79~BIT~SET.'), '332 with data=256 (bit 8 set) takes id_next')
check(not saw(t, 'V79~BIT~SET~FAIL.'), 'the set bit never fails')

t = run(99001404, 'bit8clear')
check(saw(t, 'V79~BIT~CLEAR.'), '332 with data=0 takes id_nextfail')
check(not saw(t, 'V79~BIT~CLEAR~OK.'), 'the clear bit never passes')

# ---- 721: resolve a guild id by name -------------------------------
t = run(99001408, 'guild721')
check(saw(t, 'V79~GUILD~OK.'), "721 finds the seeded guild 'Test'")
check(not saw(t, 'V79~GUILD~FAIL.'), 'a known guild does not fail')

t = run(99001412, 'noguild721')
check(saw(t, 'V79~NOGUILD~FAIL.'), 'an unknown guild name fails')
check(not saw(t, 'V79~NOGUILD~OK.'), 'an unknown guild never passes')

t = run(99001416, 'longname721')
check(saw(t, 'V79~LONG~FAIL.'),
      'a name of 16+ chars fails before the lookup (the original < 0x10)')

# ---- 722: the seed puts TestKnight in guild 1 (cq_synattr) ---------
# cq_synattr is the member model (id = user id, syn_id, rank), and load_user
# fills Player.guild_id from it, so a member resolves the guild.
t = run(99001420, 'syn722')
check(saw(t, 'V79~SYN~OK.'),
      '722 passes for a character with a cq_synattr row')
check(not saw(t, 'V79~SYN~FAIL.'), 'a member does not take the fail branch')

print('RESULT: %d FAILURES' % len(fails))
sys.exit(1 if fails else 0)
