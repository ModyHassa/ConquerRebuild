#!/usr/bin/env python3
"""Live test: v122 - action type 1072 (1101 marker on the player's own cell).

Body 0x14012d507 (router: case = byte_map[0x13aa9c+(type-1001)],
body = 0x140000000 + u32[0x13a7ac+case*4]):
  identity = the action's `data` column   (pAction->vt[0x10](4))
  SetInfo() returns false for id 0        -> nothing sent for data=0
  coords   = the PLAYER's own cell        (CUser vt +0x40 = X, +0x48 = Y)
  packet   = CMsgMapItem 1101, action 0x0D, data/ext zeroed
  target   = the executing player only    (vt +0x350), never the screen
  result   = true -> id_next

Fixture (tools/seed_test_accounts.sql): V122MapItem = cq_user 94 / acc 100094 at
(437,321). MarkerSage's chain carries data=99001330; MarkerSage2's carries data=0.
"""
import socket, struct, subprocess

HOST, PORT = '127.0.0.1', 5816
PROBE_ID, PROBE_ACC = 94, 100094
PX, PY = 437, 321
N_MARK, N_ZERO = 99020184, 99020185
IDENT = 99001330
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

def click_npc(sock, npc_id):
    _rcv[sock] = b''
    send_pkt(sock, 2031, struct.pack('<IIIHH', 0, npc_id, 0, 0, 0))
    return drain_all(sock)

def texts(pkts):
    out = []
    for p in pkts:
        if p[1] != 2032: continue
        d = p[2]
        if len(d) < 0x12: continue
        n, pos = d[0x10], 0x11
        for _ in range(n):
            ln = d[pos]; pos += 1
            out.append(d[pos:pos+ln].decode('utf-8', 'replace')); pos += ln
    return out

def map_items(pkts):
    """1101: identity@+8, data@+0xC, x@+0x10, y@+0x12, action@+0x16 (wire)."""
    out = []
    for p in pkts:
        if p[1] != 1101 or len(p[2]) < 0x18: continue
        gid, dat = struct.unpack_from('<II', p[2], 8)
        x, y = struct.unpack_from('<HH', p[2], 0x10)
        act = p[2][0x16]
        out.append((gid, dat, x, y, act))
    return out

fails = []
def check(cond, msg):
    print(('ok   ' if cond else 'FAIL ') + msg)
    if not cond: fails.append(msg)

sock = socket.create_connection((HOST, PORT))
send_pkt(sock, 1008, struct.pack('<II', PROBE_ACC, 999))
drain_all(sock)
print('V122MapItem logged in')

# ---- 1) data=99001330 -> one 1101 action 0x0D at the player's own cell ----
pk = click_npc(sock, N_MARK)
t = texts(pk)
check('v122-1072-ok' in t, f'1072 takes id_next ({t})')
mi = map_items(pk)
print('1101 events:', mi)
mine = [m for m in mi if m[0] == IDENT]
check(bool(mine), f'a 1101 carrying the data column ({IDENT}) arrived ({mi})')
if mine:
    gid, dat, x, y, act = mine[0]
    check(act == 0x0D, f'action byte 0x0D ({act:#x})')
    check(dat == 0, f'data field zeroed ({dat})')
    check((x, y) == (PX, PY), f'placed on the player cell ({x},{y}) vs ({PX},{PY})')
check(len(mine) == 1, f'exactly one marker ({len(mine)})')

# ---- 2) data=0 -> silent no-op, still id_next ------------------------------
pk = click_npc(sock, N_ZERO)
t = texts(pk)
check('v122-1072-zero' in t, f'data=0 still takes id_next ({t})')
mi = map_items(pk)
check(not [m for m in mi if m[4] == 0x0D],
      f'no 0x0D marker for data=0 ({mi})')

print()
if fails:
    print(f'{len(fails)} FAILED')
    raise SystemExit(1)
print('ALL PASS')
