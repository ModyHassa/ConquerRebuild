#!/usr/bin/env python3
"""Live test: v121 - action types 1095 (cq_magictypeop skill set) and
1048 (attribute timer).

1095: case body 0x140137ef7 is one call FUN_1401763f0(user,1) ->
      FUN_1402f16c0(mgr, id, +0xeda, +0xedb, +0xeee, meto). It walks the
      cq_magictypeop tree (loader FUN_1402f0ab0) and for rows matching
      (rebirth_time == meto) && (profession_ago == +0xeda when meto==1, else
      +0xedb) && (profession_now == profession) applies the 60 skill slots:
      magictype_op 0 -> FUN_140482c80 remove, 1 -> learn flag 0, 2 -> learn
      flag 1, anything else skips the row. The helper returns true when the
      walk finishes, so the chain takes id_next.
1048: sscanf "%d %u" (exactly 2 tokens) -> FUN_140382c50 clamps v1 at 0,
      stores user+0xb74=v1, +0xb78=v2, +0xb7c=time(NULL)/1000, sends one
      CMsgUserAttrib 10017 (key v1, value v2); the body then jumps to the
      FAIL epilogue, so the chain ALWAYS takes id_nextfail.

Fixture (tools/seed_test_accounts.sql): V121Magic = cq_user 95, profession 11,
metempsychosis 1, first_prof 10; cq_magictypeop 9900001 (op 1: learn 1015 +
1115) and 9900002 (op 0: clear 1115) both match that tuple, so one click must
prove both the learn and the remove path.
"""
import socket, struct, subprocess

HOST, PORT = '127.0.0.1', 5816
PROBE_ID, PROBE_ACC = 95, 100095
N_MAGIC, N_TIMER = 99020180, 99020181
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

def magic_types(pkts):
    """1103 CMsgMagicInfo: ownerid@+4 type@+8 level@+0xC."""
    out = {}
    for p in pkts:
        if p[1] != 1103 or len(p[2]) < 0x18: continue
        owner, mtype = struct.unpack_from('<II', p[2], 8)
        lvl = struct.unpack_from('<H', p[2], 0x10)[0]
        if owner == PROBE_ID:
            out[mtype] = lvl
    return out

def attribs(pkts):
    out = {}
    for p in pkts:
        if p[1] != 10017: continue
        d = p[2]
        cnt = struct.unpack_from('<I', d, 12)[0]
        for k in range(cnt):
            off = 0x10 + k * 0x1C
            key, val = struct.unpack_from('<II', d, off)
            out[key] = val
    return out

def q(sql):
    r = subprocess.run(['mysql', '-h', '127.0.0.1', '-u', 'test', '-ptest', 'cq',
                        '-N', '-B', '-e', sql], capture_output=True, text=True)
    return r.stdout.strip()

fails = []
def check(cond, msg):
    print(('ok   ' if cond else 'FAIL ') + msg)
    if not cond: fails.append(msg)

sock = socket.create_connection((HOST, PORT))
send_pkt(sock, 1008, struct.pack('<II', PROBE_ACC, 999))
drain_all(sock)
print('V121Magic logged in')
print('seed cq_magic:', q(f"SELECT type,level FROM cq_magic WHERE ownerid={PROBE_ID}"))

# ---- 1) 1095: the rebirth skill set --------------------------------------
pk = click_npc(sock, N_MAGIC)
t = texts(pk)
check('v121-1095-ok' in t, f'1095 follows id_next ({t})')
sk = magic_types(pk)
print('1103 sent for:', sk)
check(1015 in sk, f'1103 for the granted magic 1015 ({sorted(sk)})')
rows = q(f"SELECT type,level FROM cq_magic WHERE ownerid={PROBE_ID} ORDER BY type")
print('cq_magic after 1095:', repr(rows))
types_now = {int(r.split('\t')[0]) for r in rows.splitlines() if r}
check(1015 in types_now, f'1015 persisted ({types_now})')
check(1115 not in types_now,
      f'1115 removed by the op=0 row (FUN_140482c80 path) ({types_now})')

# ---- 2) 1048: always the fail branch, one 10017 --------------------------
pk = click_npc(sock, N_TIMER)
t = texts(pk)
check('v121-1048-fail' in t, f'1048 takes id_nextfail ({t})')
check('v121-1048-next' not in t, f'1048 never takes id_next ({t})')
at = attribs(pk)
print('attribs:', at)
check(at.get(300) == 60, f'10017 key 300 value 60 ({at.get(300)})')

print()
if fails:
    print(f'{len(fails)} FAILED')
    raise SystemExit(1)
print('ALL PASS')
