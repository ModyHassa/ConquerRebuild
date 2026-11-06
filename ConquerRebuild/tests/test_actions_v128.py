#!/usr/bin/env python3
"""Live test: v128 - 1650 (open dialog) and 1652 (close dialog).

1650 (body 0x140138724): gate `dlg_state == 0`, sscanf "%u" (>=1), then ONE CMsgAction
with action 171 (`mov $0xab`) whose 7th argument (wire+0x0C) is the parsed index; on success
dlg_state = 1, dlg_id = the action's `data` column, dlg_target = dlg_kind = 0.
1652 (body 0x140138e49): no gate; sends action 174 (`mov r13d,0xae`) and only on a successful
send resets dlg_state / dlg_target / dlg_kind to 0.

Fixture: V127Skills = cq_user 90 at (437,340). DialogGiver (99020212) runs chain 99020411
(1650, data 5, param "7", next 99020412 / fail 99020413); DialogCloser (99020213) runs
99020415 (1652 -> 99020414).
"""
import socket, struct

HOST, PORT = '127.0.0.1', 5816
PROBE_ID, PROBE_ACC = 90, 100090
NPC_OPEN, NPC_CLOSE = 99020212, 99020213
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
        out.append(struct.unpack_from('<I', d, 0x0C)[0])
    return out

fails = []
def check(cond, msg):
    print(('ok   ' if cond else 'FAIL ') + msg)
    if not cond: fails.append(msg)

sock = socket.create_connection((HOST, PORT))
send_pkt(sock, 1008, struct.pack('<II', PROBE_ACC, 999))
drain_all(sock)
print('V127Skills logged in')

pk = click(sock, NPC_OPEN)
t = texts(pk)
check('v128-1650-ok' in t, f'1650 runs on a fresh state ({t})')
check(actions(pk, 171) == [7], f'action 171 carries the parsed index ({actions(pk, 171)})')

pk = click(sock, NPC_OPEN)
t = texts(pk)
check('v128-1650-gated' in t and 'v128-1650-ok' not in t,
      f'a second 1650 is gated by dlg_state != 0 ({t})')

pk = click(sock, NPC_CLOSE)
t = texts(pk)
check('v128-1652-ok' in t, f'1652 continues the chain ({t})')
check(actions(pk, 174) == [0], f'1652 sends action 174 ({actions(pk, 174)})')

pk = click(sock, NPC_OPEN)
t = texts(pk)
check('v128-1650-ok' in t, f'1652 reset the state, so 1650 opens again ({t})')

print()
if fails:
    print(f'{len(fails)} FAILED')
    raise SystemExit(1)
print('ALL PASS')
