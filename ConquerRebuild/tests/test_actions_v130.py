#!/usr/bin/env python3
"""Live test: v130 - 1041 (one CMsgTalk on channel 2105 to the acting player).

Body 0x14013556b is `user->vt[0x150](0x839, param)` and `return 1`: no parse, no gate, no
state. vt+0x150 is the CUser text-send slot (it is called with 2000/2003/2005 elsewhere), so
the port sends ONE CMsgTalk 1004 with channel 2105 carrying the action's param as the text.

Fixture: V127Skills = cq_user 90. TalkSage (99020232) runs 99020470 (1041, param
"v130linkline" -> 99020471 marker 'v130-1041-ok').
"""
import socket, struct

HOST, PORT = '127.0.0.1', 5816
PROBE_ACC = 100090
NPC_TALK = 99020232
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

def talks(pkts, channel):
    """CMsgTalk 1004: channel word at wire+0x0C, then the 4-string packer at +0x21."""
    out = []
    for p in pkts:
        if p[1] != 1004 or len(p[2]) < 0x25: continue
        d = p[2]
        if struct.unpack_from('<H', d, 0x0C)[0] != channel: continue
        pos, strs = 0x21, []
        if d[pos] == 4:
            pos += 1
            for _ in range(4):
                ln = d[pos]; pos += 1
                strs.append(d[pos:pos+ln].decode('utf-8', 'replace')); pos += ln
        out.append(strs)
    return out

fails = []
def check(cond, msg):
    print(('ok   ' if cond else 'FAIL ') + msg)
    if not cond: fails.append(msg)

sock = socket.create_connection((HOST, PORT))
send_pkt(sock, 1008, struct.pack('<II', PROBE_ACC, 999))
drain_all(sock)
print('V127Skills logged in')

pk = click(sock, NPC_TALK)
t = texts(pk)
check('v130-1041-ok' in t, f'1041 continues the chain ({t})')
lines = talks(pk, 2105)
check(len(lines) == 1, f'exactly one CMsgTalk on channel 2105 ({len(lines)})')
if lines:
    check('v130linkline' in lines[0][3] or 'v130linkline' in ''.join(lines[0]),
          f'the param travels as the talk text ({lines[0]})')

print()
if fails:
    print(f'{len(fails)} FAILED')
    raise SystemExit(1)
print('ALL PASS')
