#!/usr/bin/env python3
"""Live test: v38 — action types 1075 (client-action send via CMsgAction
10010), 1077 (raw SQL select -> svar), 1080 (verified timestamp ops),
and the default unhandled-type routing (original logs a DBERROR and
follows id_nextfail). ChatA (cq_user 11, acc 100011) + ChatB (cq_user
12, acc 100012) on map 1002, NPC ActionsSage 9990.

Sources (new-engine FUN_14012a6e0, case map from the byte table at
.text off 0x139e9c; case 0x41 disassembled at 0x14012c33f):
  1075 = case 0x41 "send <action> <data>": sscanf "%s %d %d" ->
         CMsgAction 10010 [action=num2@wire+0x18][data=num3@wire+0xC]
         [id=actor@wire+0x8] at the actor position; cmd=="send" ->
         packet to SELF only (session vtbl +0x350), any other cmd ->
         broadcast (+0x348, flag 1); sscanf != 3 -> DBERROR + fail.
  1077 = case 0x43: param (templates substituted) executed as SQL
         SELECT, first column of the first row -> svar[data]
         (FUN_1401645e0, idx < 8); empty/failed -> fail branch.
  1080 = case 0x46 "timestamp(N,M) OP V": set (V==0 -> now), +=,
         >=, >, ==; verified in gameaction.c ~15660.
  1076 = NO case (0 rows in real DB): default path logs a DBERROR
         and returns false -> id_nextfail (verified at the dispatch
         default 0x14013a751).
"""
import socket, struct, sys, subprocess, time

HOST, PORT = '127.0.0.1', 5816
ACTIONSAGE = 9990
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

def find(pkts, tid):
    for p in pkts:
        if p[1] == tid: return p
    return None

def parse_2032(data):
    npc_id, optcount, task_id = struct.unpack_from('<HHH', data, 8)
    mode, face = data[0xF], data[0xE]
    pos = 0x10
    count = data[pos]; pos += 1
    strs = []
    for _ in range(count):
        n = data[pos]; pos += 1
        strs.append(data[pos:pos+n].decode('utf-8', 'replace')); pos += n
    return dict(npc=npc_id, opts=optcount, task=task_id, mode=mode,
                face=face, strings=strs)

def reply_2032(sock, action_id, text):
    body = struct.pack('<HHIHBB', 0, 0, action_id, 0, 0, 0x66)
    body += bytes([1, len(text)]) + text.encode()
    send_pkt(sock, 2032, body)

ALL_PKTS = []
def click_option(sock, action_id, text):
    send_pkt(sock, 2031, struct.pack('<IIIHH', 0, ACTIONSAGE, 0, 0, 0))
    pkts = drain_all(sock)
    assert any(p[1] == 2032 for p in pkts), f'no menu after click: {[p[1] for p in pkts]}'
    ALL_PKTS.extend(pkts)
    reply_2032(sock, action_id, text)
    pkts = drain_all(sock)
    ALL_PKTS.extend(pkts)
    s_ = []
    for p_ in pkts:
        if p_[1] == 2032:
            s_.extend(parse_2032(p_[2])['strings'])
    return s_

def parse_10010(data):
    # our builder: [len u2][type u2] ts@+4 id@+8 data@+0xC ...
    # action u2@+0x18 x@+0x1C y@+0x1E
    ts, pid, dat = struct.unpack_from('<III', data, 4)
    action = struct.unpack_from('<H', data, 0x18)[0]
    return dict(ts=ts, id=pid, data=dat, action=action)

def db(q):
    r = subprocess.run(['mysql', '-N', '-B', 'cq', '-e', q],
                       capture_output=True, text=True)
    return r.stdout.strip()

fails = []
def check(cond, msg):
    tag = 'ok  ' if cond else 'FAIL'
    print(f'{tag} {msg}')
    if not cond: fails.append(msg)

a = socket.create_connection((HOST, PORT))
send_pkt(a, 1008, struct.pack('<II', 100011, 888))
drain_all(a)
b = socket.create_connection((HOST, PORT))
send_pkt(b, 1008, struct.pack('<II', 100012, 888))
drain_all(b)
print('ChatA + ChatB logged in')

# --- 1075 "send 1000 1": CMsgAction 10010 to SELF, action=1000 data=1 ---
ALL_PKTS.clear()
s = click_option(a, 99000480, '1075~self. 99000480')
check(any('V38~SEND~OK.' in x for x in s), f'1075 send chain ({s})')
act = [p for p in ALL_PKTS if p[1] == 10010]
check(bool(act), '10010 CMsgAction received on self-send')
if act:
    f = parse_10010(act[0][2])
    check(f['action'] == 1000, f"10010 action=1000 (got {f['action']})")
    check(f['data'] == 1, f"10010 data=1 (got {f['data']})")
    check(f['id'] == 11, f"10010 actor id=11 (got {f['id']})")

# --- 1075 non-"send" cmd: broadcast to everyone on screen (ChatB) ---
ALL_PKTS.clear()
b_before = len([p for p in _rcv.get(b, b'') if False])
s = click_option(a, 99000482, '1075~shout. 99000482')
check(any('V38~SHOUT~OK.' in x for x in s), f'1075 shout chain ({s})')
bpkts = drain_all(b, quiet=1.0)
bact = [p for p in bpkts if p[1] == 10010]
check(bool(bact), f'ChatB received the broadcast 10010 ({[p[1] for p in bpkts]})')
if bact:
    f = parse_10010(bact[0][2])
    check(f['action'] == 205 and f['data'] == 1,
          f"ChatB 10010 action=205 data=1 (got {f['action']},{f['data']})")
    check(f['id'] == 11, f"ChatB 10010 actor id=11 (got {f['id']})")

# --- 1077: select name -> svar(6), then 1062 stricmp-compare ---
s = click_option(a, 99000484, '1077~sql. 99000484')
check(any('V38~SQL~OK.' in x for x in s), f'1077 sql chain ({s})')

# --- 1080: set 100 then == 100 (true) ---
s = click_option(a, 99000488, '1080~ts. 99000488')
check(any('V38~TS~OK.' in x for x in s), f'1080 set+== chain ({s})')

# --- unhandled type 1076: original default -> id_nextfail ---
s = click_option(a, 99000492, 'unhandled~type. 99000492')
check(any('V38~FAILBRANCH.' in x for x in s),
      f'unhandled 1076 -> id_nextfail branch ({s})')
check(not any('V38~NEXT~OK.' in x for x in s),
      'unhandled 1076 must NOT follow id_next')

a.close()
b.close()
time.sleep(0.5)
print()
if fails:
    print(f'{len(fails)} FAILURES'); sys.exit(1)
print('ALL V38 TESTS PASSED')
