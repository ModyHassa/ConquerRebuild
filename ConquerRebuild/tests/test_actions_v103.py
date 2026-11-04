#!/usr/bin/env python3
"""Live test: v103 - action type 401 (old-engine case 0x191, MsgServer.c
~207682). Proven down to the instructions (disasm 0x14011a5ff..0x14011a7a5):
  sscanf "%u %d %d %d %d"  and `cmp eax,4` -> needs >= 4 tokens;
  1st field is the next task id, 0 -> CHECKF fail branch, else it lands on
  the user's +0xa34 (Player.next_task_id);
  then the user's task name is cleared and a 2031 CMsgNpc goes to SELF with
  wire +0x08 = 5th field, +0x0C = 4th field, +0x10 = 5 (constant),
  +0x12 = 2nd field; the 3rd field is parsed but never read."""
import socket, struct, sys, time

HOST, PORT = '127.0.0.1', 5816
NPC_OK, NPC_ZERO = 99001890, 99001891
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

pkts = click_npc(a, NPC_OK)
mine = [p for p in pkts if p[1] == 2031]
check(bool(mine), '401 emits a 2031 CMsgNpc to self')
if mine:
    d = mine[-1][2]
    check(len(d) == 0x14, f'401 2031 wire length is 0x14 ({len(d):#x})')
    check(struct.unpack_from('<I', d, 0x08)[0] == 11, '5th param -> wire+0x08')
    check(struct.unpack_from('<I', d, 0x0C)[0] == 9, '4th param -> wire+0x0C')
    check(struct.unpack_from('<H', d, 0x10)[0] == 5, 'constant 5 -> wire+0x10')
    check(struct.unpack_from('<H', d, 0x12)[0] == 7, '2nd param -> wire+0x12')
t = texts(pkts)
check('v103ok401' in t, f'401 with a non-zero task id follows id_next ({t})')
check('v103fail401' not in t, '401 did not take the fail branch')

pkts = click_npc(a, NPC_ZERO)
t = texts(pkts)
check('v103fail401b' in t, f'401 with task id 0 takes id_nextfail ({t})')
check('v103ok401b' not in t, '401 with task id 0 did not follow id_next')
# the zero-id branch must not emit the laynpc push
check(not any(p[1] == 2031 and len(p[2]) == 0x14 and
              struct.unpack_from('<H', p[2], 0x10)[0] == 5 for p in pkts),
      '401 with task id 0 emits no EVENT_LAYNPC push')

a.close()
time.sleep(0.3)
print()
if fails:
    print(f'{len(fails)} FAILURES'); sys.exit(1)
print('ALL V103 TESTS PASSED')
