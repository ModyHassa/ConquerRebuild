#!/usr/bin/env python3
"""Live test: v32 action types 127 (raw SQL execute) + 1080 (timestamp
(N,M) set V) on ActionSage (npc 9990). ChatA (cq_user 11, acc 100011).

127 = original case 0x7f: param goes straight to ExecuteSQL; good SQL
-> id_next, bad SQL -> "ACTION %u: bad SQL" DBERROR + id_nextfail.
1080 = "timestamp(N,M) set X" — stored in the user-var map (original
0x438 handler is not in the MsgServer decompile; all 780 DB rows are
"set", ~97% set 0). Bad param -> fail branch.
"""
import socket, struct, sys, subprocess, time

HOST, PORT = '127.0.0.1', 5816
ACTIONSAGE = 9990
_rcv = {}
LAST_PKTS = []

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
    LAST_PKTS.clear(); LAST_PKTS.extend(pkts)
    s_ = []
    for p_ in pkts:
        if p_[1] == 2032:
            s_.extend(parse_2032(p_[2])['strings'])
    return s_

fails = []
def check(cond, msg):
    tag = 'ok  ' if cond else 'FAIL'
    print(f'{tag} {msg}')
    if not cond: fails.append(msg)

# clean slate: previous fixture log rows
db("DELETE FROM cq_log WHERE task_id IN (99000240)")

a = socket.create_connection((HOST, PORT))
send_pkt(a, 1008, struct.pack('<II', 100011, 888))
drain_all(a)
print('ChatA logged in')

# menu now carries the v32 options (v30's 8 + 4 new)
send_pkt(a, 2031, struct.pack('<IIIHH', 0, ACTIONSAGE, 0, 0, 0))
pkts = drain_all(a)
dlg = find(pkts, 2032)
check(dlg is not None, 'click ActionSage -> menu dialog')
if dlg:
    d = dict(strings=[s_ for p_ in pkts if p_[1] == 2032
                     for s_ in parse_2032(p_[2])['strings']])
    joined = ' | '.join(d['strings'])
    check('127~good~SQL. 99000240' in joined, f'v32 menu has 127 option ({joined[:60]}...)')
    check('1080~bad~param. 99000243' in joined, 'v32 menu has 1080bad option')

# 127 good: INSERT INTO cq_log ... -> OK text + row really in the DB
s = click_option(a, 99000240, '127~good~SQL. 99000240')
check(any('V32~SQL127~OK.' in x for x in s), f'127 good SQL -> OK ({s})')
rows = db("SELECT COUNT(*) FROM cq_log WHERE task_id=99000240 AND user_id=11")
check(rows == '1', f'cq_log row inserted via 127 (got {rows})')

# 127 bad: invalid SQL -> fail branch
s = click_option(a, 99000241, '127~bad~SQL. 99000241')
check(any('V32~SQL127~FAIL.' in x for x in s), f'127 bad SQL -> FAIL ({s})')

# 1080 set: chain continues to OK text
s = click_option(a, 99000242, '1080~timestamp~set. 99000242')
check(any('V32~TS1080~OK.' in x for x in s), f'1080 "set V" -> OK ({s})')

# 1080 garbage param -> fail branch
s = click_option(a, 99000243, '1080~bad~param. 99000243')
check(any('V32~TS1080~FAIL.' in x for x in s), f'1080 bad param -> FAIL ({s})')

a.close()
time.sleep(0.5)

print()
if fails:
    print(f'{len(fails)} FAILURES'); sys.exit(1)
print('ALL V32 ACTION TESTS PASSED')
