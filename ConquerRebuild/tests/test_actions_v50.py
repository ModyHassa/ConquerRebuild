#!/usr/bin/env python3
"""Live test: v50 — 2013 (0x7dd) ground-item removal by itemtype."""
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

sql("DELETE FROM cq_action WHERE id BETWEEN 99000750 AND 99000753")
sql("DELETE FROM cq_item WHERE player_id=1 AND type=152008")
sql("UPDATE cq_user SET recordmap_id=1002, recordx=400, recordy=300 "
    "WHERE id=1")
a, login_pkts = login(100001, 777)   # TestKnight, map 1002
print('TestKnight logged in')

# visible ground items at login (1101 action 1) on our map
piles = {}   # ground id -> itemtype
for p in login_pkts:
    if p[1] == 1101 and len(p[2]) >= 0x13:
        gid = struct.unpack_from('<I', p[2], 4)[0]
        ity = struct.unpack_from('<I', p[2], 8)[0]
        act = p[2][0x12]
        if act == 1 and gid:
            piles[gid] = ity
print(f'visible piles at login: {len(piles)}')

# --- 2013 well-formed (type with no piles) -> TRUE branch ---
pkts = click_option(a, 99000742, 'Rmground 99000742')
tx = texts_of_dialog(pkts)
check(any('V50~RM~OK' in t for t in tx)
      and not any('V50~RM~FAIL' in t for t in tx),
      '2013 well-formed -> ok branch (nothing to remove)')

pkts += drain_all(a, 2.0)   # award 1008/2077 can trail the dialog
n = sql("SELECT COUNT(*) FROM cq_item WHERE player_id=1 AND type=152008")
check(int(n) >= 1, f'2013 awarded item 152008 to map user (rows={n})')
has1008 = any(p[1] == 1008 for p in pkts)
check(has1008, 'item info 1008 broadcast after award')

# --- 2013 malformed (2 tokens) -> FALSE -> fail branch ---
pkts = click_option(a, 99000746, 'Badparam 99000746')
tx = texts_of_dialog(pkts)
check(any('V50~BAD~FAIL' in t for t in tx)
      and not any('V50~BAD~OK' in t for t in tx),
      '2013 malformed param -> fail branch only')

# --- 2013 awards the item to every user on the map (v51 semantics):
# TestKnight is the only user on 1002 -> he gets ONE 152008 copy.
sql("DELETE FROM cq_action WHERE id BETWEEN 99000750 AND 99000753")
sql("DELETE FROM cq_item WHERE player_id=1 AND type=152008")
print('RESULT: %d FAILURES' % len(fails))
sys.exit(1 if fails else 0)
