#!/usr/bin/env python3
"""Live test: v52 — 2010 (0x7da) SYSTEM broadcast + 2011 (0x7db) map attr."""
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

def click_option(sock, action_id, text, npc=MAPSAGE):
    send_pkt(sock, 2031, struct.pack('<IIIHH', 0, npc, 0, 0, 0))
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

sql("UPDATE cq_user SET recordmap_id=1002, recordx=400, recordy=300 "
    "WHERE account_id=100001")
sql("UPDATE cq_user SET recordmap_id=1002, recordx=405, recordy=300 "
    "WHERE account_id=100002")

# second account for the broadcast check
gmd_uin = sql("SELECT uin FROM cq_user WHERE account_id=100002")
gmd_uin = int(gmd_uin) if gmd_uin and gmd_uin != 'NULL' else 0
b, _ = login(100002, gmd_uin)   # GmDragon
a, _ = login(100001, 777)       # TestKnight
print(f'GmDragon (uin={gmd_uin}) + TestKnight logged in')

# --- 2010: broadcast reaches BOTH players ---
pkts = click_option(a, 99000782, 'Broadcast 99000782')
tx = texts_of_dialog(pkts)
check(any('V52~BC~OK' in t for t in tx),
      '2010 chain ok branch (TestKnight)')
mine = any(p[1] == 1004 and b'V52BC' in p[2] for p in pkts)
other = any(p[1] == 1004 and b'V52BC' in p[2] for p in drain_all(b, 0.5))
check(mine, '2010 talk reached the sender session')
check(other, '2010 talk reached OTHER player session (GmDragon)')

# --- 2011: set map type, verify server log ---
pkts = click_option(a, 99000786, 'Setmap 99000786')
tx = texts_of_dialog(pkts)
check(any('V52~SM~OK' in t for t in tx)
      and not any('V52~SM~FAIL' in t for t in tx),
      '2011 well-formed -> ok branch')
log = open('/tmp/conquer_mysql.log', errors='replace').read()
check('set map 1002 type=12345' in log, '2011 wrote map type (server log)')

# --- 2011 malformed (2 tokens) -> fail branch ---
pkts = click_option(a, 99000794, 'Setmap 99000794')
tx = texts_of_dialog(pkts)
check(any('V52~BAD~FAIL' in t for t in tx)
      and not any('V52~BAD~OK' in t for t in tx),
      '2011 malformed param -> fail branch only')

print('RESULT: %d FAILURES' % len(fails))
sys.exit(1 if fails else 0)
