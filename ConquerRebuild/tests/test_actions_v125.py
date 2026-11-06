#!/usr/bin/env python3
"""Live test: v125 - the status manager family (1096 grant, 1098 probe/revoke).

1096 (body 0x140137fa5): sscanf "%d %d %d %d %d %d" needs SIX tokens, tokens 2..6 >= 0,
status type = the action's `data` column. Held already -> the check/apply path (result true);
otherwise AddStatus(type, ..., t3 = duration in seconds) and the add's bool is the result.
1098 (body 0x140138322): 1..15 ids, `data` = mode. 0 = OR probe (first hit true, else false);
1 = apply status code for EVERY held id, no early exit, always true; >= 2 = false.

Fixture: V125Status = cq_user 92 / acc 100092 at (437,326); chains 99020340..99020355.
"""
import socket, struct

HOST, PORT = '127.0.0.1', 5816
PROBE_ID, PROBE_ACC = 92, 100092
NPCS = {
    'grant':    99020190,
    'held':     99020191,
    'badparam': 99020192,
    'holds':    99020193,
    'miss':     99020194,
    'mode1':    99020195,
    'mode2':    99020196,
}
_rcv = {}

def recv_pkt(sock, timeout=4.0):
    sock.settimeout(timeout)
    buf = _rcv.setdefault(sock, b'')
    while True:
        if len(buf) >= 4:
            ln, tp = struct.unpack_from('<HH', buf, 0)
            if len(buf) >= ln:
                pkt = (ln, tp, buf[:ln]); _rcv[sock] = buf[ln:]; return pkt
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
        pkts.append(p); quiet = 0.3
    return pkts

def click(sock, npc_id):
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

fails = []
def check(cond, msg):
    print(('ok   ' if cond else 'FAIL ') + msg)
    if not cond: fails.append(msg)

sock = socket.create_connection((HOST, PORT))
send_pkt(sock, 1008, struct.pack('<II', PROBE_ACC, 999))
drain_all(sock)
print('V125Status logged in')

# ---- 1096: grant, then the already-held path -----------------------------
t = texts(click(sock, NPCS['grant']))
check('v125-1096-grant' in t, f'1096 granted status 29 -> id_next ({t})')
t = texts(click(sock, NPCS['held']))
check('v125-1096-held' in t, f'1096 second call takes the held path ({t})')

# ---- 1096: negative token 2 -> fail branch -------------------------------
t = texts(click(sock, NPCS['badparam']))
check('v125-1096-badparam' in t, f'1096 negative token -> id_nextfail ({t})')

# ---- 1098 mode 0: holds 29 -> true; 45/46/48 -> false --------------------
t = texts(click(sock, NPCS['holds']))
check('v125-1098-holds' in t, f'1098 mode 0 with a held id -> id_next ({t})')
t = texts(click(sock, NPCS['miss']))
check('v125-1098-miss' in t, f'1098 mode 0 with none held -> id_nextfail ({t})')

# ---- 1098 mode 1: always true, no early exit -----------------------------
t = texts(click(sock, NPCS['mode1']))
check('v125-1098-mode1' in t, f'1098 mode 1 -> id_next ({t})')

# ---- 1098 mode >= 2: false ----------------------------------------------
t = texts(click(sock, NPCS['mode2']))
check('v125-1098-mode2' in t, f'1098 mode 2 -> id_nextfail ({t})')

print()
if fails:
    print(f'{len(fails)} FAILED')
    raise SystemExit(1)
print('ALL PASS')
