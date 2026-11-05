#!/usr/bin/env python3
"""Live test: v106 - action type 112 wire correctness.

Proven from the builder body FUN_1403a6400 (MsgServer.c:657813) plus the call
site disassembly (0x140144007-0x14014406x): the 2032 line carries
  wire+0x08 = 0, wire+0x0A = 0, wire+0x0C = param_5 (= 0),
  wire+0x0E = param_4 = (u1)DATA column  (the FACE),
  wire+0x0F = mode = 112,
  wire+0x10 = string packer with the PARAM column.
The previous port put DATA in the reply-id slot and left the face at 0."""
import socket, struct, sys, time

HOST, PORT = '127.0.0.1', 5816
NPC112 = 99001810
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

pkts = click_npc(a, NPC112)
lines = [p for p in pkts if p[1] == 2032 and len(p[2]) > 0x10 and p[2][0x0F] == 112]
check(bool(lines), '112 emits a 2032 dialog line with mode 112')
if lines:
    d = lines[-1][2]
    check(struct.unpack_from('<H', d, 0x0C)[0] == 0,
          '112 reply-id slot (wire+0x0C) is 0, as the original passes param_5 = 0')
    check(d[0x0E] == 42, f'112 face (wire+0x0E) is the DATA column 42 (got {d[0x0E]})')
    check(d[0x0F] == 112, f'112 mode (wire+0x0F) is 112 (got {d[0x0F]})')
t = texts(pkts)
check('v106dialog112' in t, f'112 sends the PARAM column as the text ({t})')
check('v106ok112' in t, '112 continues at id_next')

a.close()
time.sleep(0.3)
print()
if fails:
    print(f'{len(fails)} FAILURES'); sys.exit(1)
print('ALL V106 TESTS PASSED')
