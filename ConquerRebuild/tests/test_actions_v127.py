#!/usr/bin/env python3
"""Live test: v127 - 1043 (weapon-skill unlearn reset) and 1046 (action 126).

1043 (body 0x140135433 = tail call into 0x140162620): for every CUserWeaponSkill of the
player, `old = +0x19`, `level = +0x18`; ONLY when level < old the old_level is set to
level; then the +0x1a byte is set, the element is erased and ONE CMsgAction 10010 with
action 110 (`mov $0x6e`) is sent to that client, carrying the element nType in the dword7
slot = wire+0x0C. 1046 = CMsgAction 10010 action 126 (`mov $0x7e`) carrying the action's
`data` column in the same slot.

Fixture: V127Skills = cq_user 90 / acc 100090 at (437,340) with skills 421 (level 5,
old_level 9) and 422 (level 7, old_level 7); chains 99020390/99020392.
"""
import socket, struct

HOST, PORT = '127.0.0.1', 5816
PROBE_ID, PROBE_ACC = 90, 100090
NPC_1043, NPC_1046 = 99020210, 99020211
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

def actions(pkts, action_id):
    out = []
    for p in pkts:
        if p[1] != 10010 or len(p[2]) < 0x1C: continue
        d = p[2]
        if struct.unpack_from('<H', d, 0x18)[0] != action_id: continue
        out.append(struct.unpack_from('<I', d, 0x0C)[0])   # wire+0x0C = dword7
    return out

fails = []
def check(cond, msg):
    print(('ok   ' if cond else 'FAIL ') + msg)
    if not cond: fails.append(msg)

sock = socket.create_connection((HOST, PORT))
send_pkt(sock, 1008, struct.pack('<II', PROBE_ACC, 999))
drain_all(sock)
print('V127Skills logged in')

pk = click(sock, NPC_1043)
t = texts(pk)
check('v127-1043-ok' in t, f'1043 continues the chain ({t})')
act110 = sorted(actions(pk, 110))
check(act110 == [421, 422], f'one action 110 per skill carrying its type ({act110})')

pk = click(sock, NPC_1046)
t = texts(pk)
check('v127-1046-ok' in t, f'1046 continues the chain ({t})')
act126 = actions(pk, 126)
check(act126 == [777], f'action 126 carries the data column ({act126})')

print()
if fails:
    print(f'{len(fails)} FAILED')
    raise SystemExit(1)
print('ALL PASS')
