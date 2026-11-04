#!/usr/bin/env python3
"""Live test: v105 - action type 402 (old-engine case 0x192, MsgServer.c:207733).
sscanf "%s %s %s %d" needs exactly 4 tokens; the subject picks a CRoleManager
counter (CountAllNpc / CountFurnitureNpc / CountNpcByName / CountNpcByType per
the binary's own catch handlers) and the gate is
  op "<"  && count <  value -> id_next
  op "==" && count == value -> id_next
  else -> id_nextfail.
Shipped content uses only "type" and "name"; "all"/"furniture" have no rows and
their furniture predicate is UNKNOWN, so they take the fail branch."""
import socket, struct, sys, time

HOST, PORT = '127.0.0.1', 5816
N_EQ, N_LT, N_FURN, N_TYPE = 99001896, 99001897, 99001898, 99001899
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

# two seeded NPCs named V104Count / type 7777 live on map 1002
t = texts(click_npc(a, N_EQ))
check('v104ok402' in t, f'402 "name V104Count == 2" passes with count 2 ({t})')
check('v104fail402' not in t, '402 equality did not take the fail branch')

t = texts(click_npc(a, N_LT))
check('v104fail402b' in t, f'402 "name V104Count < 2" fails at count 2 ({t})')
check('v104ok402b' not in t, '402 less-than did not pass')

t = texts(click_npc(a, N_TYPE))
check('v104ok402d' in t, f'402 "type 7777 == 2" counts by npc type ({t})')
check('v104fail402d' not in t, '402 type count did not pass')

t = texts(click_npc(a, N_FURN))
check('v104fail402c' in t,
      f'402 "furniture" subject stays UNKNOWN and takes id_nextfail ({t})')
check('v104ok402c' not in t, '402 furniture subject did not silently pass')

a.close()
time.sleep(0.3)
print()
if fails:
    print(f'{len(fails)} FAILURES'); sys.exit(1)
print('ALL V105 TESTS PASSED')
