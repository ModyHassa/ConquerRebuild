#!/usr/bin/env python3
"""Live test: v35 — action 312 (CMsgName 1015 kind-9 broadcast),
509 (item ops down_one_lev/recover_dur), 510 (item attrib checks).
ChatA (cq_user 11, acc 100011) + ChatB (12) on map 1002.

312 case 0x138 ~220007: "%u %d %d %s" = map,x,y,name -> CMsgName 1015
[tick u4][x u2][y u2][kind u1=9][packer] broadcast in range.
509 case 0x1fd: item at cq_item.position; level=(type%1000)/10,
quality=type%10 (FUN_1400fee00/FUN_1401011d0); down_one_lev = type-10;
recover_dur restores itemtype.amount (FUN_14032c310, cost path skipped).
510 case 0x1fe: "<pos> <level|quality|durability|max_dur> <op> <val>".
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

# --- 509: down_one_lev on weapon (90011 -> 90001), 510 level check ---
s = click_option(a, 99000340, '509~downlev. 99000340')
check(any('V35~DOWN~OK.' in x for x in s), f'509 down_one_lev chain ({s})')
t = db("SELECT type FROM cq_item WHERE id=990101")
check(t == '90001', f'weapon type 90011->90001 in DB (got {t})')

# --- 510: quality digit check ---
s = click_option(a, 99000350, '510~check. 99000350')
check(any('V35~QUAL~OK.' in x for x in s), f'510 quality == 1 ({s})')

# --- 509 recover_dur on pos 5 (725015, amount 1 -> itemtype 100) ---
s = click_option(a, 99000355, '312~fx. 99000355')
check(any('V35~DUR~OK.' in x for x in s), f'509 recover_dur chain ({s})')
amt = db("SELECT amount FROM cq_item WHERE id=990901")
check(amt == '100', f'amount restored to itemtype amount 100 (got {amt})')

# --- 312: CMsgName kind 9 broadcast at (406,301) ---
s = click_option(a, 99000360, '312~fx. 99000360')
check(any('V35~FX~OK.' in x for x in s), f'312 chain ok ({s})')
pkts_b = drain_all(b)
fx = [p for p in pkts_b if p[1] == 1015]
check(bool(fx), f'ChatB got CMsgName 1015 ({[p[1] for p in pkts_b]})')
if fx:
    d = fx[0][2]
    tick, = struct.unpack_from('<I', d, 4)
    x, y = struct.unpack_from('<HH', d, 8)
    kind = d[12]
    cnt = d[13]; ln = d[14]
    name = d[15:15+ln].decode('utf-8', 'replace')
    check(kind == 9, f'kind 9 (got {kind})')
    check(x == 406 and y == 301, f'x,y = (406,301) (got {x},{y})')
    check(name == 'V35FX', f'packer name V35FX (got {name})')

a.close(); b.close()
time.sleep(0.5)
print()
if fails:
    print(f'{len(fails)} FAILURES'); sys.exit(1)
print('ALL V35 TESTS PASSED')
