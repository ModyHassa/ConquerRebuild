#!/usr/bin/env python3
"""Live test: v47 — 1004 SetRecordPos + 1070 Relive/FlyMap."""
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

a = login(100001, 777)   # TestKnight (player id 1)
print('TestKnight logged in')

# reset record position to the seed default first
sql("UPDATE cq_user SET recordmap_id=1002, recordx=400, recordy=300 "
    "WHERE id=1")

# --- 1004 valid: set record pos to map 1011 (400,400) ---
pkts = click_option(a, 99000662, 'Set~record 99000662')
tx = texts_of_dialog(pkts)
check(any('V47~REC~OK' in t for t in tx), '1004 valid -> ok marker')
row = sql("SELECT recordmap_id,recordx,recordy FROM cq_user WHERE id=1")
check(row == '1011\t400\t400',
      f'cq_user record pos persisted (got {row!r})')

# --- 1004 invalid map: must take the fail branch ---
pkts = click_option(a, 99000663, 'bad~record 99000663')
tx = texts_of_dialog(pkts)
check(any('V47~REC2~FAIL' in t for t in tx)
      and not any('V47~REC2~OK' in t for t in tx),
      '1004 unknown map -> fail branch only')
row = sql("SELECT recordmap_id,recordx,recordy FROM cq_user WHERE id=1")
check(row == '1011\t400\t400',
      'record pos unchanged after failed 1004')

# --- 1070 valid: relive to map 1015 (500,500) ---
pkts = click_option(a, 99000665, 'Relive~me 99000665')
tx = texts_of_dialog(pkts)
check(any('V47~RELIVE~OK' in t for t in tx), '1070 -> ok marker')
# spawn broadcast includes self (the v47 map-membership fix)
spawn = [p for p in pkts if p[1] == 10014
         and struct.unpack_from('<I', p[2], 0xC)[0] == 1]
check(len(spawn) >= 1, 'respawn 10014 visible to the mover')
row = sql("SELECT recordmap_id,recordx,recordy FROM cq_user WHERE id=1")
check(row == '1015\t500\t500',
      f'cq_user record pos = relive target (got {row!r})')
# item snapshot resend (original mode 3)
check(any(p[1] == 1008 for p in pkts), 'item snapshot 1008 resent')

print('RESULT: %d FAILURES' % len(fails))
sys.exit(1 if fails else 0)
