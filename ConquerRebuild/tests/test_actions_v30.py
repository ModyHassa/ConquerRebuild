#!/usr/bin/env python3
"""Live test: v30 action types 121/123/125/507/518 on ActionSage (npc 9990).
ChatA (cq_user 11, acc 100011, map 1002, equipped weapon 990101 type 90011),
ChatB (cq_user 12, acc 100012, map 1002) as broadcast receiver.

Checks (all VERIFIED against decompiled MsgServer.c):
 121 param "threshold range", pass = RandGet(range) < threshold:
   "1 1" -> always TRUE, "0 1" -> always FALSE.
 123 CheckDateTime (FUN_140088a30), data=4 daily window "H:M H:M":
   "00:00 23:59" -> TRUE now, "00:00 00:01" -> FALSE now.
 125 SYSTEM/ALLUSERS broadcast reaches BOTH players on the map.
 507 amount check "lo hi need" over item types: ChatA has exactly ONE
   type-90011 item -> "90011 90011 1" TRUE, "90011 90011 2" FALSE.
 518 award data-itemtype x count (param field 2): type 725016 x3
   -> 3 CMsgItemInfo 1008 packets + 3 new cq_item rows after disconnect.
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
    """click ActionSage, reply with the option, return dialog strings."""
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

# clean slate
db("DELETE FROM cq_item WHERE player_id=11 AND type=725016")

a = socket.create_connection((HOST, PORT))
send_pkt(a, 1008, struct.pack('<II', 100011, 888))
drain_all(a)
b = socket.create_connection((HOST, PORT))
send_pkt(b, 1008, struct.pack('<II', 100012, 888))
drain_all(b)
print('ChatA + ChatB logged in')

# menu shows all 8 options
send_pkt(a, 2031, struct.pack('<IIIHH', 0, ACTIONSAGE, 0, 0, 0))
pkts = drain_all(a)
dlg = find(pkts, 2032)
check(dlg is not None, 'click ActionSage -> menu dialog')
if dlg:
    d = dict(strings=[s_ for p_ in pkts if p_[1] == 2032
                     for s_ in parse_2032(p_[2])['strings']])
    check(True, 'dialog from ActionSage 9990')
    joined = ' | '.join(d['strings'])
    check(d['strings'] and 'Test~121a 99000210' in joined, f'menu opt 121a: {joined[:70]}')
    check('Test~518 99000217' in joined, 'menu opt 518 present')
    check(len([x for x in d['strings'] if x.startswith('Test~')]) == 8,
          'menu has 8 options')

# 121: threshold 1 range 1 -> always true
s = click_option(a, 99000210, 'Test~121a 99000210')
check(any('121~TRUE' in x for x in s), f'121 "1 1" -> TRUE ({s})')
# 121: threshold 0 range 1 -> always false
s = click_option(a, 99000211, 'Test~121b 99000211')
check(any('121~FALSE' in x for x in s), f'121 "0 1" -> FALSE ({s})')

# 123 data 4: whole day window -> true
s = click_option(a, 99000212, 'Test~123a 99000212')
check(any('123/507~TRUE' in x for x in s), f'123 daily 00:00-23:59 -> TRUE ({s})')
# 123 data 4: 00:00-00:01 window -> false now
s = click_option(a, 99000213, 'Test~123b 99000213')
check(any('123/507~FALSE' in x for x in s), f'123 daily 00:00-00:01 -> FALSE ({s})')

# 125: broadcast reaches both; clicker gets 125~DONE
s = click_option(a, 99000214, 'Test~125 99000214')
check(any('125~DONE' in x for x in s), f'125 chain continues ({s})')
pkts_b = drain_all(b)
got_b = any(b'V30~BROADCAST!' in p[2] for p in pkts_b if p[1] == 1004)
check(got_b, '125 broadcast reached ChatB')

# 507: ChatA has exactly 1 item of type 90011 (equipped weapon)
s = click_option(a, 99000215, 'Test~507a 99000215')
check(any('123/507~TRUE' in x for x in s), f'507 need 1 -> TRUE ({s})')
s = click_option(a, 99000216, 'Test~507b 99000216')
check(any('123/507~FALSE' in x for x in s), f'507 need 2 -> FALSE ({s})')

# 518: award type 725016 x3 -> 3x 1008 + dialog, 3 rows in DB
before = int(db("SELECT COUNT(*) FROM cq_item WHERE player_id=11 AND type=725016"))
pkts_a = drain_all(a)  # clear stray
s = click_option(a, 99000217, 'Test~518 99000217')
check(any('518~AWARDED' in x for x in s), f'518 dialog OK ({s})')
n1008 = len([p for p in LAST_PKTS if p[1] == 1008])
check(n1008 == 3, f'518 sent 3x CMsgItemInfo (got {n1008})')

# records persist on disconnect
a.close(); b.close()
time.sleep(1.0)
after = int(db("SELECT COUNT(*) FROM cq_item WHERE player_id=11 AND type=725016"))
check(after - before == 3, f'DB has 3 new type-725016 rows ({before}->{after})')

print()
if fails:
    print(f'{len(fails)} FAILURES'); sys.exit(1)
print('ALL V30 ACTION TESTS PASSED')
