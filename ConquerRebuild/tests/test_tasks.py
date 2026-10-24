#!/usr/bin/env python3
"""Live test: v29 cq_task SYSTEM (original dual-task model).
TaskMaster (npc 9945, map 1002 @406,304), QuestTaker (cq_user 13,
account 100013, 1000 silvers, map 1002 @407,300).

Flow under test (CMsgNpc 2031 click + CMsgTaskDialog 2032 reply):
 1. click TaskMaster -> task 990109 (menu task, client_active=0) is the
    first QUALIFYING task -> run task.id_next chain 99000110/11/17
    -> dialog "Bring me 500 silver..." with options linking ACCEPT
    tasks 990110 / 990111 (cq_task ids echoed back by the client).
 2. reply 990110 -> accept: qualification (money 1000 >= 500) PASS
    -> run task.id_next chain: 1057 records (complete=1, data1=7) +
    101 "V29 QUEST ACCEPTED."
 3. assert cq_user_script_var has task:990110:complete=1, :d1=7.
 4. reply 990111 -> qualification FAIL (money < 99999) -> id_nextfail
    chain -> 101 "V29 NOT QUALIFIED."
 5. money must be unchanged (qualification does not deduct).
"""
import socket, struct, sys, subprocess

HOST, PORT = '127.0.0.1', 5816
TASKMASTER = 9995
_rcv_buf = {}

def recv_pkt(sock, timeout=4.0):
    sock.settimeout(timeout)
    buf = _rcv_buf.setdefault(sock, b'')
    while True:
        if len(buf) >= 4:
            ln, tp = struct.unpack_from('<HH', buf, 0)
            if len(buf) >= ln:
                pkt = (ln, tp, buf[:ln])
                _rcv_buf[sock] = buf[ln:]
                return pkt
        try:
            chunk = sock.recv(4096)
            if not chunk: return None
        except socket.timeout:
            return None
        buf = _rcv_buf[sock] = buf + chunk

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
    # wire: +4 u2 | +6 u2 | +8 npc u2 | +0xA count u2 | +0xC task u2
    #      | +0xE mode u1 | +0xF face u1 | +0x10 packer
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

def collect_2032(pkts):
    lines = []
    for p in pkts:
        if p[1] != 2032: continue
        d = parse_2032(p[2])
        d['actionid'] = struct.unpack_from('<H', p[2], 0xC)[0]
        lines.append(d)
    return lines

def reply_2032(sock, action_id, text):
    # client answer: [u2@+4][u2@+6][action id u4@+8][u2@+0xC]
    # [mode u1@+0xE][face u1@+0xF=0x66][packer: option text]
    body = struct.pack('<HHIHBB', 0, 0, action_id, 0, 0, 0x66)
    body += bytes([1, len(text)]) + text.encode()
    send_pkt(sock, 2032, body)

def db(q):
    r = subprocess.run(['mysql', '-N', '-B', 'cq', '-e', q],
                       capture_output=True, text=True)
    return r.stdout.strip()

fails = []
def check(cond, msg):
    tag = 'ok  ' if cond else 'FAIL'
    print(f'{tag} {msg}')
    if not cond: fails.append(msg)

# clean slate for the task records
db("DELETE FROM cq_user_script_var WHERE player_id=13 AND var LIKE 'task:990110%'")

s = socket.create_connection((HOST, PORT))
send_pkt(s, 1008, struct.pack('<II', 100013, 888))
drain_all(s)
print('QuestTaker logged in')

# --- 1. click TaskMaster: menu task flow ---
send_pkt(s, 2031, struct.pack('<IIIHH', 0, TASKMASTER, 0, 0, 0))
pkts = drain_all(s)
dlg = find(pkts, 2032)
check(dlg is not None, f'click -> 2032 dialog ({[p[1] for p in pkts]})')
if dlg:
    d = dict(strings=[x for l in collect_2032(pkts) for x in l['strings']])
    joined = ' | '.join(d['strings'])
    check(dlg is not None, 'dialog from TaskMaster')
    check('Bring~me~500~silver' in joined, f'menu text shown: {joined[:90]}')
    check('Take~the~quest. 990110' in joined, 'option links accept task 990110')
    check('Impossible~quest. 990111' in joined, 'option links accept task 990111')

# --- 2. reply 990110 (accept, qualifies: 1000 >= 500) ---
reply_2032(s, 990110, 'Take~the~quest. 990110')
pkts = drain_all(s)
dlg = find(pkts, 2032)
check(dlg is not None, 'accept -> response dialog')
if dlg:
    d = dict(strings=[x for l in collect_2032(pkts) for x in l['strings']])
    joined = ' | '.join(d['strings'])
    check('V29~QUEST~ACCEPTED' in joined, f'accept chain ran: {joined[:90]}')

# --- 3. task records persisted (script_var saves on disconnect) ---
s.close()
import time; time.sleep(1.0)
c = db("SELECT COUNT(*) FROM cq_user_script_var WHERE player_id=13 AND var='task:990110:complete' AND val=1")
check(c == '1', 'script_var task:990110:complete = 1')
c = db("SELECT COUNT(*) FROM cq_user_script_var WHERE player_id=13 AND var='task:990110:d1' AND val=7")
check(c == '1', 'script_var task:990110:d1 = 7')

# --- 4. reply 990111 (accept, NOT qualified: money < 99999) ---
s = socket.create_connection((HOST, PORT))
send_pkt(s, 1008, struct.pack('<II', 100013, 888))
drain_all(s)
send_pkt(s, 2031, struct.pack('<IIIHH', 0, TASKMASTER, 0, 0, 0))
drain_all(s)
reply_2032(s, 990111, 'Impossible~quest. 990111')
pkts = drain_all(s)
dlg = find(pkts, 2032)
check(dlg is not None, 'unqualified -> response dialog')
if dlg:
    d = dict(strings=[x for l in collect_2032(pkts) for x in l['strings']])
    joined = ' | '.join(d['strings'])
    check('V29~NOT~QUALIFIED' in joined, f'id_nextfail chain ran: {joined[:90]}')

# --- 5. money unchanged (qualification never deducts) ---
m = db("SELECT money FROM cq_user WHERE id=13")
check(m == '1000', f'money unchanged (={m})')

s.close()
print()
if fails:
    print(f'{len(fails)} FAILURES'); sys.exit(1)
print('ALL TASK SYSTEM TESTS PASSED')
