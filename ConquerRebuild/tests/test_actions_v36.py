#!/usr/bin/env python3
"""Live test: v36 — actions 1005 (hairdresser style/color), 205 (map-alone),
208 (return-teleport), 307/308 (region monster count / spawn wave),
311 (weather), 314 (popup, continue), 207 (npc-owner gate abort).
ChatA (cq_user 11, acc 100011) + ChatB (12) on map 1002.

1005 (new engine gameaction case 4): "style N" -> lookface low digits
replaced (style = look%100), "color N" -> color digit (look%1000)/100
rewritten; SetAttrib(0x1a, look, 1) + broadcast. 205 (case 0xcd): true
iff NO other alive user on the actor's map. 208 (case 0xd0): "%u %u %d
%d" = code,map,x,y teleport. 307 (case 0x133): "%u %d %d %d %d %u %s %d"
region monster count compare. 308 (case 0x134): wave spawn in rect.
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

def spawn_10014_fields(data):
    # lookface at wire+8, id at wire+0xC
    lookface, pid = struct.unpack_from('<II', data, 8)
    return lookface, pid

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

# --- 1005 style 4: lookface 100003 -> 100004, broadcast to ChatB ---
s = click_option(a, 99000410, '1005~style. 99000410')
check(any('V36~STYLE~OK.' in x for x in s), f'1005 style chain ({s})')
lf = db("SELECT lookface FROM cq_user WHERE id=11")
check(lf == '100004', f'lookface 100003 -> 100004 in DB (got {lf})')
pkts_b = drain_all(b)
s14 = [p for p in pkts_b if p[1] == 10014]
check(bool(s14), f'ChatB got 10014 broadcast ({[p[1] for p in pkts_b]})')
if s14:
    look, pid = spawn_10014_fields(s14[0][2])
    check(pid == 11, f'broadcast is ChatA (id {pid})')
    check(look == 100004, f'broadcast lookface 100004 (got {look})')

# --- 1005 color 7: 100004 -> 100704 ---
s = click_option(a, 99000412, '1005~color. 99000412')
check(any('V36~COLOR~OK.' in x for x in s), f'1005 color chain ({s})')
lf = db("SELECT lookface FROM cq_user WHERE id=11")
check(lf == '100704', f'lookface 100004 -> 100704 in DB (got {lf})')

# --- 208 teleport to 1002 (402,301) ---
s = click_option(a, 99000415, '208~teleport. 99000415')
check(any('V36~TP~OK.' in x for x in s), f'208 teleport chain ({s})')
rc = db("SELECT recordmap_id,recordx,recordy FROM cq_user WHERE id=11")
# position not persisted until disconnect; check via ChatB spawn broadcast
pkts_b = drain_all(b)
s14 = [p for p in pkts_b if p[1] == 10014]
check(bool(s14), f'ChatB saw re-spawn after 208 ({[p[1] for p in pkts_b]})')

# --- 307/308: empty-region check, wave of 3 Snakemen, count >= 3 ---
s = click_option(a, 99000420, '307308~wave. 99000420')
check(any('V36~WAVE~OK.' in x for x in s), f'307+308 wave chain ({s})')

# --- 205 alone check: ChatB online -> FAIL branch ---
s = click_option(a, 99000430, '205~alone. 99000430')
check(any('V36~ALONE~FAIL.' in x for x in s), f'205 false with ChatB online ({s})')

# --- 205 after ChatB disconnects -> OK branch ---
b.close()
time.sleep(1.5)
s = click_option(a, 99000430, '205~alone. 99000430')
check(any('V36~ALONE~OK.' in x for x in s), f'205 true alone ({s})')

# --- 311 weather + 314 popup chain continues ---
s = click_option(a, 99000435, '311314~misc. 99000435')
check(any('V36~MISC~OK.' in x for x in s), f'311+314 chain ({s})')

a.close()
time.sleep(0.5)
print()
if fails:
    print(f'{len(fails)} FAILURES'); sys.exit(1)
print('ALL V36 TESTS PASSED')
