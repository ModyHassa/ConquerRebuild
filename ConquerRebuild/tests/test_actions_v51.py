#!/usr/bin/env python3
"""Live test: v51 — 2012 (0x7dc) mass teleport."""
import socket, struct, sys

HOST, PORT = '127.0.0.1', 5816
MAPSAGE = 9945
PHARM = 127  # cq_npc MineAssistant on map 1000 (has task0)
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
    "WHERE id=1")
a, lp = login(100001, 777)   # TestKnight, map 1002
print('TestKnight logged in')

# --- 2012 mass teleport: everyone on 1002 flies to 1000 (318,330) ---
pkts = click_option(a, 99000762, 'Flyme 99000762')
tx = texts_of_dialog(pkts)
check(any('V51~FLY~OK' in t for t in tx)
      and not any('V51~FLY~FAIL' in t for t in tx),
      '2012 well-formed -> ok branch')

# --- verify the map change server-side via 2003 %user_map_id ---
pkts = click_option(a, 99000766, 'Whereami 99000766', npc=PHARM)
tx = texts_of_dialog(pkts)
check(any('V51~MAP~OK' in t for t in tx)
      and not any('V51~MAP~FAIL' in t for t in tx),
      '2003 %user_map_id == 1000 after chgmap (teleport took effect)')

# --- 2012 malformed (2 tokens) -> fail branch ---
pkts = click_option(a, 99000770, 'Flyme 99000770', npc=PHARM)
tx = texts_of_dialog(pkts)
check(any('V51~BAD~FAIL' in t for t in tx)
      and not any('V51~BAD~OK' in t for t in tx),
      '2012 malformed param -> fail branch only')

# --- state cleanup: fly back so the disconnect save persists 1002 ---
pkts = click_option(a, 99000775, 'Flyme 99000775', npc=PHARM)
tx = texts_of_dialog(pkts)
check(any('V51~BACK~OK' in t for t in tx), '2012 fly back to 1002 (cleanup)')

print('RESULT: %d FAILURES' % len(fails))
sys.exit(1 if fails else 0)
