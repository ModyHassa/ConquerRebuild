#!/usr/bin/env python3
"""Live test: v133 - dialog answer 1651 with the chain's second text parameter.

1651 (case 0xa6, body 0x140138889): gate `state == 2`; `sscanf "%u"` on the SECOND text param
(exactly one conversion) = the selected entity id; then dispatch on the action's `data`:
 1 -> compare the FIRST param ("%s") with the 0x1040 (NPC) name,
 2 -> compare a value with the 0x1002 object, 3 -> with the 0x1001 object,
 anything else fails. Mismatch -> state 1 + CMsgAction 175, fail. Match -> state 3,
 +0x96c=0, +0x970=selected id, +0x974=datacolumn, success.

Our engine fills `chain_param2` from the click's wire+0x0C (the selection id) and performs the
select step (state 1 -> 2) there; see docs/second_text_param.md (ENGINE MAPPING).

Fixture: AskSage (99020244, map 1002) -> chain 99020520:
  1651 data=1 param "AskSage"  -> match: 99020521 -> 1652 (close) -> 'v133-closed'
                              -> no match: 99020523 = 1650 (open) -> 'v133-opened'
Click 1 with selection 0 opens the dialog; click 2 with selection = the NPC id answers it.
"""
import socket, struct

HOST, PORT = '127.0.0.1', 5816
PROBE_ACC = 100090
NPC = 99020244
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

def click(sock, npc_id, sel=0):
    _rcv[sock] = b''
    send_pkt(sock, 2031, struct.pack('<IIIHH', 0, npc_id, sel, 0, 0))
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

def actions_10010(pkts):
    """CMsgAction 10010: the action word is at wire+0x18, the payload dword at +0x0C."""
    out = []
    for p in pkts:
        if p[1] != 10010 or len(p[2]) < 0x1A: continue
        out.append((struct.unpack_from('<I', p[2], 0x0C)[0],
                    struct.unpack_from('<H', p[2], 0x18)[0]))
    return out

fails = []
def check(cond, msg):
    print(('ok   ' if cond else 'FAIL ') + msg)
    if not cond: fails.append(msg)

sock = socket.create_connection((HOST, PORT))
send_pkt(sock, 1008, struct.pack('<II', PROBE_ACC, 999))
drain_all(sock)
print('V127Skills logged in')

pk1 = click(sock, NPC, 0)
t1 = texts(pk1)
a1 = [w for _pl, w in actions_10010(pk1)]
check('v133-opened' in t1 and 'v133-1651-match' not in t1,
      f'first click: 1651 refuses (state 0), 1650 opens ({t1})')
check(171 in a1, f'1650 sent CMsgAction 171 ({a1})')

pk2 = click(sock, NPC, NPC)
t2 = texts(pk2)
a2 = [w for _pl, w in actions_10010(pk2)]
check('v133-1651-match' in t2,
      f'second click: the selected id matches the NPC name -> state 3 ({t2})')
check('v133-closed' in t2, f'1652 then closes the dialog ({t2})')
check(174 in a2, f'1652 sent CMsgAction 174 ({a2})')

print()
if fails:
    print(f'{len(fails)} FAILED')
    raise SystemExit(1)
print('ALL PASS')
