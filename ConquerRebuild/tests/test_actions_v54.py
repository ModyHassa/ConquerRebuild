#!/usr/bin/env python3
"""Live test: v54 — 2009 (0x7d9) arm live event monster."""
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

def arm(action_id, label):
    pkts = click_option(a, action_id, label)
    tx = texts_of_dialog(pkts)
    return tx

# 1) arm Pheasant on 1002 -> OK first time
tx = arm(99000822, 'Armmonster 99000822')
check(any('V54~OK1' in t for t in tx)
      and not any('V54~FAIL1' in t for t in tx),
      '2009 arm Pheasant first click -> ok branch')

# 2) same again -> already armed -> fail branch
tx = arm(99000822, 'Armmonster 99000822')
check(any('V54~FAIL1' in t for t in tx)
      and not any('V54~OK1' in t for t in tx),
      '2009 second click -> already armed -> fail branch')

# 3) wrong name -> fail
tx = arm(99000826, 'Armmonster 99000826')
check(any('V54~FAIL2' in t for t in tx)
      and not any('V54~OK2' in t for t in tx),
      '2009 name mismatch -> fail branch')

# 4) map without monsters -> fail
tx = arm(99000830, 'Armmonster 99000830')
check(any('V54~FAIL3' in t for t in tx)
      and not any('V54~OK3' in t for t in tx),
      '2009 monster not on map -> fail branch')

# 5) malformed (1 token) -> fail
tx = arm(99000834, 'Armmonster 99000834')
check(any('V54~FAIL4' in t for t in tx)
      and not any('V54~OK4' in t for t in tx),
      '2009 malformed param -> fail branch')

# server log must show exactly ONE arm
log = open('/tmp/conquer_mysql.log', errors='replace').read()
check(log.count('armed event monster') == 1,
      'exactly one monster armed (server log)')

print('RESULT: %d FAILURES' % len(fails))
sys.exit(1 if fails else 0)
