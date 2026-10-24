#!/usr/bin/env python3
"""Live test: v49 — 2008 (0x7d8) named-entity count check."""
import socket, struct, sys, time

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
    drain_all(s)
    return s

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

# v47's relive test may have left the record pos on map 1015 —
# restore the seed default so MapSage (map 1002) is reachable
sql("UPDATE cq_user SET recordmap_id=1002, recordx=400, recordy=300 "
    "WHERE id=1")
a = login(100001, 777)   # TestKnight (player id 1, map 1002)
print('TestKnight logged in')

# --- 2008 "<": Pheasant count on map 1002 < 999 -> true ---
pkts = click_option(a, 99000722, 'Mobcount 99000722')
tx = texts_of_dialog(pkts)
check(any('V49~CNT~LT~OK' in t for t in tx)
      and not any('V49~CNT~LT~FAIL' in t for t in tx),
      '2008 "<" real mob count -> ok branch')

# --- 2008 "==": nonexistent monster count == 0 -> true ---
pkts = click_option(a, 99000726, 'mobcount 99000726')
tx = texts_of_dialog(pkts)
check(any('V49~CNT~EQ~OK' in t for t in tx)
      and not any('V49~CNT~EQ~FAIL' in t for t in tx),
      '2008 "==" zero count -> ok branch')

# --- 2008 "==": Pheasant count == 0 is false -> fail branch ---
pkts = click_option(a, 99000731, 'mobcount 99000731')
tx = texts_of_dialog(pkts)
check(any('V49~CNT~EQZ~FAIL' in t for t in tx)
      and not any('V49~CNT~EQZ~OK' in t for t in tx),
      '2008 "==" nonzero count -> fail branch only')

# --- 2008 invalid mode -> false outright -> fail branch ---
pkts = click_option(a, 99000730, 'Badmode 99000730')
tx = texts_of_dialog(pkts)
check(any('V49~BADMODE~FAIL' in t for t in tx)
      and not any('V49~BADMODE~OK' in t for t in tx),
      '2008 invalid mode -> fail branch only')

print('RESULT: %d FAILURES' % len(fails))
sys.exit(1 if fails else 0)
