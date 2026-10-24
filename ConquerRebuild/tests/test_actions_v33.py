#!/usr/bin/env python3
"""Live test: v33 DynaNpc system — action 301 (create dyna npc from
context npc), 201 (dyna var ops: data0..3/datastr/ownerid), 302
(map_user counts). ChatA (cq_user 11, acc 100011) + ChatB (cq_user 12)
both on map 1002.

301 param "5000 406 301" -> INSERT into cq_dynanpc + CMsgPlayer 10014
broadcast to map players (original FUN_1402bda30).
201 npcid 0 = chain context (the dyna just created); writes persist to
cq_dynanpc immediately; checks on the REAL record 100010 (AwarderWoo)
cross-verify DB round-trip.
302 counts users on the current map.
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

def db(q):
    r = subprocess.run(['mysql', '-N', '-B', 'cq', '-e', q],
                       capture_output=True, text=True)
    return r.stdout.strip()

def click_option(sock, action_id, text):
    send_pkt(sock, 2031, struct.pack('<IIIHH', 0, ACTIONSAGE, 0, 0, 0))
    pkts = drain_all(sock)
    assert any(p[1] == 2032 for p in pkts), f'no menu after click: {[p[1] for p in pkts]}'
    reply_2032(sock, action_id, text)
    pkts = drain_all(sock)
    s_ = []
    for p_ in pkts:
        if p_[1] == 2032:
            s_.extend(parse_2032(p_[2])['strings'])
    return s_

def spawn_10014_fields(pkt):
    """wire: +0x08 lookface u4, +0x0C id u4, +0x6F x u2, +0x71 y u2."""
    d = pkt[2]
    lookface, oid = struct.unpack_from('<II', d, 8)
    x, y = struct.unpack_from('<HH', d, 0x6F)
    return lookface, oid, x, y

fails = []
def check(cond, msg):
    tag = 'ok  ' if cond else 'FAIL'
    print(f'{tag} {msg}')
    if not cond: fails.append(msg)

# clean slate: previous v33 dyna rows
db("DELETE FROM cq_dynanpc WHERE ownerid=11 AND lookface=5000")

a = socket.create_connection((HOST, PORT))
send_pkt(a, 1008, struct.pack('<II', 100011, 888))
drain_all(a)
b = socket.create_connection((HOST, PORT))
send_pkt(b, 1008, struct.pack('<II', 100012, 888))
drain_all(b)
print('ChatA + ChatB logged in')

# --- 301 create: dyna spawned, broadcast to ChatB, DB row with data0=8 ---
s = click_option(a, 99000270, '301~create. 99000270')
check(any('V33~DYN~OK.' in x for x in s), f'301 create + 201 ops chain ({s})')

row = db("SELECT id, data0, cellx, celly, mapid, ownerid FROM cq_dynanpc "
         "WHERE ownerid=11 AND lookface=5000 ORDER BY id DESC LIMIT 1")
check(bool(row), f'cq_dynanpc row created ({row})')
dyna_id = int(row.split('\t')[0]) if row else 0
if row:
    parts = row.split('\t')
    check(parts[1] == '8', f'data0 == 8 after set+=1 (got {parts[1]})')
    check(parts[2] == '406' and parts[3] == '301' and parts[4] == '1002',
          f'dyna at map 1002 (406,301) (got {parts[2]},{parts[3]},{parts[4]})')

# ChatB received the 10014 spawn of the new dyna
pkts_b = drain_all(b)
spawns = [spawn_10014_fields(p) for p in pkts_b if p[1] == 10014]
got = [f for f in spawns if f[1] == dyna_id and f[0] == 5000]
check(bool(got), f'ChatB saw 10014 dyna spawn id={dyna_id} lf=5000 '
      f'(spawns={spawns[:3]})')

# --- 302: map_user >= 1 (ChatA + ChatB on map) ---
s = click_option(a, 99000280, '302~mapuser. 99000280')
check(any('V33~MAP~OK.' in x for x in s), f'302 map_user>=1 TRUE ({s})')

# --- 201 on real record 100010: write-through + read-back ---
s = click_option(a, 99000282, '201~slots. 99000282')
check(any('V33~SLOT~OK.' in x for x in s), f'201 set+check on 100010 ({s})')
d1 = db("SELECT data1 FROM cq_dynanpc WHERE id=100010")
check(d1 == '55', f'data1 persisted to 55 in DB (got {d1})')

# --- 201 datastr set + stricmp compare ---
s = click_option(a, 99000288, '201~datastr. 99000288')
check(any('V33~STR~OK.' in x for x in s), f'201 datastr ops ({s})')
ds = db("SELECT datastr FROM cq_dynanpc WHERE id=100010")
check(ds == 'V33TEST', f'datastr persisted (got {ds})')

# --- login sync: a fresh login sees the dyna on the map ---
a.close(); time.sleep(0.6)
a = socket.create_connection((HOST, PORT))
send_pkt(a, 1008, struct.pack('<II', 100011, 888))
pkts = drain_all(a, quiet=1.5)
spawns = [spawn_10014_fields(p) for p in pkts if p[1] == 10014]
got = [f for f in spawns if f[1] == dyna_id and f[0] == 5000]
check(bool(got), f'fresh login sees dyna 10014 id={dyna_id} ({spawns[:4]})')

a.close(); b.close()
time.sleep(0.5)
print()
if fails:
    print(f'{len(fails)} FAILURES'); sys.exit(1)
print('ALL V33 DYNANPC TESTS PASSED')
