#!/usr/bin/env python3
"""Live test: v48 — 543 consume-pack (case 0x21f) + default-route
coverage (types with no original handler -> id_nextfail)."""
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

a = login(100010, 999)   # ItemTaker (player id 10)
print('ItemTaker logged in')

# give the player one +1MaroonSteedPack (723855, ident=0)
sql("DELETE FROM cq_item WHERE player_id=10 AND type=723855")
sql("INSERT INTO cq_item (player_id,owner_id,type,amount,amount_limit,"
    "position) VALUES (10,10,723855,1,1,0)")

# --- 543 consume with the item present -> ok branch ---
pkts = click_option(a, 99000702, 'Consume~pack 99000702')
tx = texts_of_dialog(pkts)
check(any('V48~CONSUME~OK' in t for t in tx)
      and not any('V48~CONSUME~FAIL' in t for t in tx),
      '543 consume -> ok marker')
cnt = sql("SELECT COUNT(*) FROM cq_item WHERE player_id=10 AND type=723855")
check(cnt == '0', f'pack erased from DB (count={cnt})')
check(any(p[1] == 2077 for p in pkts), 'erase-notify 2077 sent')

# --- 543 again, item gone -> fail branch ---
pkts = click_option(a, 99000702, 'Consume~pack 99000702')
tx = texts_of_dialog(pkts)
check(any('V48~CONSUME~FAIL' in t for t in tx)
      and not any('V48~CONSUME~OK' in t for t in tx),
      '543 missing item -> fail branch only')

# --- 401: no case in the original old-engine switch -> default
#     DBERROR + false -> id_nextfail (NOT id_next) ---
pkts = click_option(a, 99000706, 'Default~route 99000706')
tx = texts_of_dialog(pkts)
check(any('V48~DEFAULT~FAIL' in t for t in tx)
      and not any('V48~DEFAULT~NEXT' in t for t in tx),
      'unhandled type 401 -> id_nextfail only')

# --- 543 with DATA=0: itemtype lookup null -> fail branch ---
pkts = click_option(a, 99000709, 'badtype~0 99000709')
tx = texts_of_dialog(pkts)
check(any('V48~BADTYPE~FAIL' in t for t in tx)
      and not any('V48~BADTYPE~OK' in t for t in tx),
      '543 DATA=0 -> fail branch only')

print('RESULT: %d FAILURES' % len(fails))
sys.exit(1 if fails else 0)
