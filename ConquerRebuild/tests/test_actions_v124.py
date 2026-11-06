#!/usr/bin/env python3
"""Live test: v124 - action type 3701 and the 3701..3798 chain rule.

3701 (handler FUN_14011dcb0, branch `iVar8 - 0xe75U < 0x62` at MsgServer.c:223710):
  sscanf(param, "%d %s %d") must consume exactly 3 ints/strings; int A <= 0 -> no work;
  dead (status bit0) -> STR_DIE notice only; otherwise the +0x130..+0x140 stamp block is
  cleared, the manager gets (uid, 0x56) and ONE CMsgAction 10010 is broadcast to the whole
  map with action 0xA4, dir 1, x=y=0, ext 0, payload+0x08 = int B, payload+0x20 = int A,
  and an EMPTY packed string.
  The dispatcher DISCARDS the handler's return value and returns 1 (MsgServer.c:223714), so
  3701 AND every unsupported sibling in 3702..3798 take id_next.

Fixture (tools/seed_test_accounts.sql): V124Stamps = cq_user 93 / acc 100093 at (437,323);
chains 99020320 ("5 hi 9"), 99020322 ("0 hi 9") and a 3750 row 99020324.
"""
import socket, struct

HOST, PORT = '127.0.0.1', 5816
PROBE_ID, PROBE_ACC = 93, 100093
N_OK, N_ZERO, N_FAMILY = 99020186, 99020187, 99020188
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

def actions_10010(pkts, action):
    """WIRE offsets (p[2] includes the 4-byte header): time@4 actor@8 data@0xC
    +0x10 +0x14 action@0x18 dir@0x1A x@0x1C y@0x1E ext@0x20 target2@0x24"""
    out = []
    for p in pkts:
        if p[1] != 10010 or len(p[2]) < 0x28: continue
        d = p[2]
        act = struct.unpack_from('<H', d, 0x18)[0]
        if act != action: continue
        actor, data = struct.unpack_from('<II', d, 8)
        dirv, x, y = struct.unpack_from('<HHH', d, 0x1A)
        ext, t2 = struct.unpack_from('<Ii', d, 0x20)
        out.append(dict(actor=actor, data=data, dir=dirv, x=x, y=y,
                        ext=ext, target2=t2))
    return out

fails = []
def check(cond, msg):
    print(('ok   ' if cond else 'FAIL ') + msg)
    if not cond: fails.append(msg)

sock = socket.create_connection((HOST, PORT))
send_pkt(sock, 1008, struct.pack('<II', PROBE_ACC, 999))
drain_all(sock)
print('V124Stamps logged in')

# ---- 1) 3701 with "5 hi 9" -> one 10010 action 0xA4 ----------------------
pk = click_npc(sock, N_OK)
t = texts(pk)
check('v124-3701-ok' in t, f'3701 takes id_next ({t})')
acts = actions_10010(pk, 0xA4)
print('10010 0xA4 events:', acts)
check(len(acts) == 1, f'exactly one action 0xA4 broadcast ({len(acts)})')
if acts:
    a = acts[0]
    check(a['actor'] == PROBE_ID, f'actor = player id ({a["actor"]})')
    check(a['data'] == 9, f'wire+0x0C = int B = 9 ({a["data"]})')
    check(a['target2'] == 5, f'wire+0x24 = int A = 5 ({a["target2"]})')
    check(a['dir'] == 1, f'dir = 1 ({a["dir"]})')
    check((a['x'], a['y']) == (0, 0), f'x=y=0 ({a["x"]},{a["y"]})')
    check(a['ext'] == 0, f'ext = 0 ({a["ext"]})')

# ---- 2) int A <= 0 -> no packet, still id_next ---------------------------
pk = click_npc(sock, N_ZERO)
t = texts(pk)
check('v124-3701-zero' in t, f'3701 with A<=0 takes id_next ({t})')
check(not actions_10010(pk, 0xA4), 'no action 0xA4 for A<=0')

# ---- 3) unsupported 3750 sibling -> id_next -----------------------------
pk = click_npc(sock, N_FAMILY)
t = texts(pk)
check('v124-3701-family' in t,
      f'3702..3798 unsupported still takes id_next ({t})')

print()
if fails:
    print(f'{len(fails)} FAILED')
    raise SystemExit(1)
print('ALL PASS')
