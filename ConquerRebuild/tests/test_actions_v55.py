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

def run_chain(action_id):
    pkts = click_option(a, action_id, f'Chain {action_id}')
    return texts_of_dialog(pkts)

def expect(action_id, ok_marker, fail_marker, desc, want_ok=True):
    tx = run_chain(action_id)
    got_ok = any(ok_marker in t for t in tx)
    got_fail = any(fail_marker in t for t in tx)
    if want_ok:
        check(got_ok and not got_fail, desc)
    else:
        check(got_fail and not got_ok, desc)

# 0) make sure the isolated map 9999 exists (v54's 2009 chain creates it
#    via get_or_create; the 2006 map gate needs a real map record)
run_chain(99000830)

# 1) no V55Ghost on the map yet
expect(99000842, 'V55~PRE0~OK', 'V55~PRE0~FAIL',
       '2008 pre-check: no V55Ghost on map 9999')

# 2) 2006 creates a named monster at (410,311)
expect(99000846, 'V55~SPAWN~OK', 'V55~SPAWN~FAIL',
       '2006 spawn (map 9999, gen 0, type 1, name V55Ghost) -> ok')

# 3) exactly one now exists (name override + registration both proved)
expect(99000850, 'V55~POST1~OK', 'V55~POST1~FAIL',
       '2008 after spawn: exactly one V55Ghost alive')

# 4) unknown monstertype -> fail branch
expect(99000854, 'V55~BADTYPE~OK', 'V55~BADTYPE~FAIL',
       '2006 unknown monstertype 65530 -> fail branch', want_ok=False)

# 5) nonexistent map -> fail branch (CheckBornPoint map gate)
expect(99000857, 'V55~NOMAP~OK', 'V55~NOMAP~FAIL',
       '2006 map 8888 (missing) -> fail branch', want_ok=False)

# 6) malformed param (3 fields < 7) -> DBERROR + fail branch
expect(99000860, 'V55~MALFORMED~OK', 'V55~MALFORMED~FAIL',
       '2006 3-field param -> fail branch', want_ok=False)

# 7) name longer than 0x24 -> fail branch
expect(99000863, 'V55~LONGNAME~OK', 'V55~LONGNAME~FAIL',
       '2006 name > 0x24 chars -> fail branch', want_ok=False)

# server log: exactly one real 2006 spawn
log = open('/tmp/conquer_mysql.log', errors='replace').read()
check(log.count('2006 spawn type 1') == 1,
      'exactly one 2006 spawn in the server log')

print('RESULT: %d FAILURES' % len(fails))
sys.exit(1 if fails else 0)
