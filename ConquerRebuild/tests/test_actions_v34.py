#!/usr/bin/env python3
"""Live test: v34 — action 303 (SYSTEM/ALLUSERS broadcast ch 2005),
304 (runtime monster spawn "%u %u %d %d"), 306 (MAP_ATTRIB ops).
ChatA (cq_user 11, acc 100011) + ChatB (12) on map 1002.

303 case 0x12f: CMsgTalk("SYSTEM","ALLUSERS",param) channel 2005 white,
%templates substituted (v33 fixture proves subst engine).
304 case 0x130: spawns a CMonster (Pheasant type 1) at exact coords and
broadcasts the enter-screen pair 10014 + 10010/134 to map players.
306 case 0x132: "<var> <op> <val> [mapid]" named map attribs + mapuser.
"""
import socket, struct, sys, time

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

def parse_talk_1004(data):
    tick, color = struct.unpack_from('<II', data, 4)
    channel, style = struct.unpack_from('<HH', data, 0xC)
    pos = 0x21
    count = data[pos]; pos += 1
    strs = []
    for _ in range(count):
        n = data[pos]; pos += 1
        strs.append(data[pos:pos+n].decode('utf-8', 'replace')); pos += n
    return dict(tick=tick, color=color, channel=channel, style=style,
                strings=strs)

def spawn_10014_fields(pkt):
    d = pkt[2]
    lookface, oid = struct.unpack_from('<II', d, 8)
    x, y = struct.unpack_from('<HH', d, 0x6F)
    return lookface, oid, x, y

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

# --- 303: broadcast with %user_name template ---
s = click_option(a, 99000300, '303~bcast. 99000300')
check(any('V34~BCAST~OK.' in x for x in s), f'303 chain ok ({s})')
pkts_b = drain_all(b)
talks = [parse_talk_1004(p[2]) for p in pkts_b if p[1] == 1004]
got = [t for t in talks if t['channel'] == 2005 and
       t['strings'] and t['strings'][0] == 'SYSTEM']
check(bool(got), f'ChatB got SYSTEM talk ch 2005 ({talks[:2]})')
if got:
    words = got[0]['strings'][3] if len(got[0]['strings']) > 3 else ''
    check(words == 'V34~BROADCAST~from~ChatA',
          f'%user_name substituted: "{words}"')

# --- 304: runtime pheasant spawn at (407,302), pair 10014+10010 ---
s = click_option(a, 99000310, '304~spawn. 99000310')
check(any('V34~SPAWN~OK.' in x for x in s), f'304 chain ok ({s})')
pkts_b = drain_all(b)
spawns = [spawn_10014_fields(p) for p in pkts_b if p[1] == 10014]
pheas = [f for f in spawns if f[0] == 104 and f[2] == 407 and f[3] == 302]
check(bool(pheas), f'ChatB saw pheasant 10014 lf=104 at (407,302) '
      f'(spawns={spawns[:3]})')
acts = [p for p in pkts_b if p[1] == 10010]
check(len(acts) >= 1, f'ChatB got the 10010/134 appear action too')

# --- 306: attrib set + compare + mapuser ---
s = click_option(a, 99000320, '306~attrib. 99000320')
check(any('V34~ATTR~OK.' in x for x in s), f'306 set+==+mapuser ok ({s})')
s = click_option(a, 99000327, '306~attrib. 99000327')
check(not any('V34~ATTR2~OK.' in x for x in s) and
      any('V34~ATTR2~FAIL.' in x for x in s),
      f'306 res_lev==99 false branch ({s})')

a.close(); b.close()
time.sleep(0.5)
print()
if fails:
    print(f'{len(fails)} FAILURES'); sys.exit(1)
print('ALL V34 TESTS PASSED')
