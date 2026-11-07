#!/usr/bin/env python3
"""Live test: v144 - action 1024 = DIVORCE (body 0x14012fd3d -> 0x140173e20).

The original (addresses in the case comment) gives the player one cq_item of type
0x109A02 = 1088002 (cq_itemtype "MeteorTear", position 0, amount 1), sends the
STR_DIVORCE text, clears the mate link with
`UPDATE cq_user SET mateid = 0 WHERE id=%u LIMIT 1` and writes a gmlog/marriage
line. It returns FALSE only when the player's own id is 0.

The test seeds a fake mate link, runs the chain and proves: the id_next line
arrives (TRUE), cq_user.mateid became 0 in the DB, and a MeteorTear row now
exists for that player.
"""
import socket, struct, subprocess

HOST, PORT = '127.0.0.1', 5816
PROBE_ACC = 100090
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
        if p[1] != 2032 or len(p[2]) < 0x12: continue
        d, n, pos = p[2], p[2][0x10], 0x11
        for _ in range(n):
            ln = d[pos]; pos += 1
            out.append(d[pos:pos+ln].decode('utf-8', 'replace')); pos += ln
    return out

def sql(q):
    r = subprocess.run(['mysql', '-uroot', 'cq', '-N', '-B', '-e', q],
                       capture_output=True, text=True)
    return r.stdout.strip()

fails = []
def check(cond, msg):
    print(('ok   ' if cond else 'FAIL ') + msg)
    if not cond: fails.append(msg)

sock = socket.create_connection((HOST, PORT))
send_pkt(sock, 1008, struct.pack('<II', PROBE_ACC, 999))
drain_all(sock)
print('v144 DivorceProbe logged in')

pid = sql(f"SELECT id FROM cq_user WHERE account_id={PROBE_ACC} LIMIT 1")
check(pid.isdigit(), f'probe player id resolved ({pid})')
sql(f"UPDATE cq_user SET mateid=424242 WHERE id={pid}")
before = int(sql(f"SELECT COUNT(*) FROM cq_item WHERE owner_id={pid} AND type=1088002") or 0)

t = texts(click(sock, 99020253))
check('v144-divorced' in t, f'1024 returned TRUE (id_next line arrived: {t})')
check('v144-divorce-failed' not in t, 'the id_nextfail line did not run')

mate = sql(f"SELECT mateid FROM cq_user WHERE id={pid}")
check(mate == '0', f'cq_user.mateid cleared by the action (now {mate})')

after = int(sql(f"SELECT COUNT(*) FROM cq_item WHERE owner_id={pid} AND type=1088002") or 0)
check(after == before + 1, f'a MeteorTear (1088002) row was created ({before} -> {after})')

print()
if fails:
    print(f'{len(fails)} FAILED'); raise SystemExit(1)
print('ALL PASS')
