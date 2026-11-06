#!/usr/bin/env python3
"""Live test: v129 - 802 (lastentertime cooldown) and 1511 (CMsgAction 160).

802 (body 0x1401329bf): sscanf "%d" (>=1), stamp = the keyed "lastentertime" value of the
store at CUser+0x12c0, pass when `stamp == 0 || (int32)(now - stamp) >= parsed`, and only a
pass stores `now`. 1511 (body 0x140137177): CMsgAction **160** to self with the npc id in the
8th helper slot (wire+0x14) and the unresolved npc[0x60] sub-object id (0 here) in the 7th
(wire+0x0C); returns 1 even when the packet build fails.

Fixture: V127Skills = cq_user 90 at (437,340). CooldownSage (99020230) runs 99020460
(802, 5000 ms, next 99020461 'v129-802-ok' / fail 99020462 'v129-802-cool');
LinkSage (99020231) runs 99020463 (1511 -> 99020464 'v129-1511-ok').
"""
import socket, struct

HOST, PORT = '127.0.0.1', 5816
PROBE_ACC = 100090
NPC_COOL, NPC_LINK = 99020230, 99020231
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

def action_fields(pkts, action_id):
    out = []
    for p in pkts:
        if p[1] != 10010 or len(p[2]) < 0x1C: continue
        d = p[2]
        if struct.unpack_from('<H', d, 0x18)[0] != action_id: continue
        out.append((struct.unpack_from('<I', d, 0x0C)[0],   # 7th arg
                    struct.unpack_from('<I', d, 0x14)[0]))  # 8th arg
    return out

fails = []
def check(cond, msg):
    print(('ok   ' if cond else 'FAIL ') + msg)
    if not cond: fails.append(msg)

sock = socket.create_connection((HOST, PORT))
send_pkt(sock, 1008, struct.pack('<II', PROBE_ACC, 999))
drain_all(sock)
print('V127Skills logged in')

pk = click(sock, NPC_COOL)
check('v129-802-ok' in texts(pk), f'first 802 passes (stamp 0) ({texts(pk)})')
pk = click(sock, NPC_COOL)
t = texts(pk)
check('v129-802-cool' in t and 'v129-802-ok' not in t,
      f'second 802 is gated inside the 5000 ms window ({t})')

pk = click(sock, NPC_LINK)
t = texts(pk)
check('v129-1511-ok' in t, f'1511 continues the chain ({t})')
fields = action_fields(pk, 160)
check(len(fields) == 1 and fields[0] == (0, NPC_LINK),
      f'action 160 carries (npc[0x60]=0, npcid={NPC_LINK}) ({fields})')

print()
if fails:
    print(f'{len(fails)} FAILED')
    raise SystemExit(1)
print('ALL PASS')
