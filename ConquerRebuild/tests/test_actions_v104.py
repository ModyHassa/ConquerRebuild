#!/usr/bin/env python3
"""Live test: v104 - action type 1071 (old-engine case 0x3D, MsgServer.c
~15416). sscanf "%u %u %hu" needs all three tokens. FUN_1401a9b00 pushes
{id=v1, time, num=v2, ""} into user+0x330 when v2 != 0; when v3 != 0 the case
sends a 10010 CMsgAction to SELF with payload +8 = v1, +0x10 = v3, +0x14 =
0x9F (action 159), i.e. wire +0x0C = v1, +0x14 = v3, +0x18 = 159. The original
writes size 0x26 (payload) so the wire packet is 0x2A long."""
import socket, struct, sys, time

HOST, PORT = '127.0.0.1', 5816
NPC_OK, NPC_NOTIFY = 99001892, 99001893
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

fails = []
def check(cond, msg):
    print(('ok   ' if cond else 'FAIL ') + msg)
    if not cond: fails.append(msg)

a = socket.create_connection((HOST, PORT))
send_pkt(a, 1008, struct.pack('<II', 100001, 777))
drain_all(a)
print('TestKnight logged in')

# v3 = 7 -> the 10010 action 159 must be emitted
pkts = click_npc(a, NPC_OK)
acts = [p for p in pkts if p[1] == 10010 and len(p[2]) >= 0x1A and
        struct.unpack_from('<H', p[2], 0x18)[0] == 0x9F]
check(bool(acts), '1071 emits a 10010 CMsgAction (action 159) when field3 != 0')
if acts:
    d = acts[-1][2]
    check(len(d) == 0x2A, f'10010 wire length is the canonical 0x2A ({len(d):#x})')
    check(struct.unpack_from('<I', d, 0x0C)[0] == 99010002,
          'field1 -> wire+0x0C')
    check(struct.unpack_from('<I', d, 0x14)[0] == 7, 'field3 -> wire+0x14')
    check(struct.unpack_from('<H', d, 0x18)[0] == 0x9F, 'action 159 -> wire+0x18')
    check(struct.unpack_from('<H', d, 0x1A)[0] == 0, 'dir is zero')
    check(struct.unpack_from('<I', d, 0x08)[0] == 1, 'sender is the player id')
t = texts(pkts)
check('v104ok1071' in t, f'1071 follows id_next ({t})')
check('v104fail1071' not in t, '1071 did not take the fail branch')

# v3 = 0 -> no notification packet, the record is still pushed
pkts = click_npc(a, NPC_NOTIFY)
t = texts(pkts)
check('v104ok1071b' in t, f'1071 with field3 = 0 still follows id_next ({t})')
check(not any(p[1] == 10010 and len(p[2]) >= 0x1A and
              struct.unpack_from('<H', p[2], 0x18)[0] == 0x9F for p in pkts),
      '1071 with field3 = 0 emits no CMsgAction')

a.close()
time.sleep(0.3)
print()
if fails:
    print(f'{len(fails)} FAILURES'); sys.exit(1)
print('ALL V104 TESTS PASSED')
