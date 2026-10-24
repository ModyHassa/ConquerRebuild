#!/usr/bin/env python3
"""Live test: REAL cq_action chain engine via CMsgNpc 2031 / CMsgTaskDialog
2032. Walks CaptainLi (npc 43, map 1002) chain 15100..15124:
greeting -> jail offer -> pay 1000 silver -> teleport to map 6000."""
import socket, struct, sys

HOST, PORT = '127.0.0.1', 5816
CAPTAIN = 43
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
    # v39 per-line CMsgDialog wire: mode u1@+0xF, face u1@+0xE,
    # reply-action id u2@+0xC, packer = exactly ONE string per packet
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

def attribs_10017(raw, who):
    # [count u4 @wire+0x0C] entries [key u4 @+0x10][val u4 @+0x14]
    out = {}
    cnt = struct.unpack_from('<I', raw, 0x0C)[0]
    off = 0x10
    for _ in range(cnt):
        key, val = struct.unpack_from('<II', raw, off)
        out[key] = val
        off += 8
    return out

try:
    s = socket.create_connection((HOST, PORT))
    send_pkt(s, 1008, struct.pack('<II', 100008, 888))
    drain_all(s)
    print('NpcWalker logged in')

    # 1) Click CaptainLi (npc 43) via CMsgNpc 2031
    send_pkt(s, 2031, struct.pack('<IIIHH', 0, CAPTAIN, 0, 0, 0))
    pkts = drain_all(s)
    lines = collect_2032(pkts)
    assert lines, f'no 2032 after NPC click: {[p[1] for p in pkts]}'
    strs = [x for l in lines for x in l['strings']]
    print('greeting lines:', [l['strings'] for l in lines])
    assert lines[0]['mode'] == 1, lines[0]      # text line first
    assert 'What~can~I~do~for~you?' in strs[0], strs
    assert 'Visit~the~jail. 15110' in strs, strs
    assert 'Just~passing~by. 0' in strs, strs
    opt_lines = [l for l in lines if l['mode'] == 2]
    assert len(opt_lines) == 2, len(opt_lines)
    # v42: wire reply ids are MENU INDEXES (FUN_14039d300 remapper),
    # not raw action ids
    assert [l['actionid'] for l in opt_lines] == [0, 1], opt_lines

    # 2) "Just passing by." (action 0) -> dialog closes, no new dialog
    reply_2032(s, 1, 'Just~passing~by. 0')   # index 1 -> menu id 0 (close)
    pkts = drain_all(s)
    assert find(pkts, 2032) is None, f'unexpected dialog on close: {pkts}'

    # 3) Re-click -> greeting again, choose "Visit the jail." (15110)
    send_pkt(s, 2031, struct.pack('<IIIHH', 0, CAPTAIN, 0, 0, 0))
    pkts = drain_all(s)
    lines = collect_2032(pkts)
    assert lines, 'no re-greeting'
    strs = [x for l in lines for x in l['strings']]
    assert 'What~can~I~do~for~you?' in strs[0], strs
    reply_2032(s, 15110, 'Visit~the~jail. 15110')
    pkts = drain_all(s)
    lines = collect_2032(pkts)
    assert lines, f'no jail offer dialog: {[p[1] for p in pkts]}'
    strs = [x for l in lines for x in l['strings']]
    assert 'Give~me~1000~silver,~I~will~teleport~you~there.' in strs[0], strs
    assert 'Here~are~1000~silver. 15120' in strs, strs
    print('jail offer dialog OK')

    # 4) Pay: action 15120 -> 1001 "money += -1000" + 1003 teleport 6000
    reply_2032(s, 15120, 'Here~are~1000~silver. 15120')
    pkts = drain_all(s)
    money_pkt = [p for p in pkts if p[1] == 10017 and attribs_10017(p[2], 8).get(4) == 4000]
    assert money_pkt, f'no money=4000 update: {[p[1] for p in pkts]}'
    spawn = find(pkts, 10014)
    assert spawn, f'no self 10014 spawn after teleport: {[p[1] for p in pkts]}'
    x, y = struct.unpack_from('<HH', spawn[2], 0x6F)
    print(f'teleport spawn at ({x},{y})')
    assert (x, y) == (29, 72), (x, y)
    assert find(pkts, 2032) is None, 'unexpected dialog after teleport'
    print('paid 1000, teleported to jail OK')

    # 5) DB check: money persisted = 4000
    import subprocess
    r = subprocess.run(['mysql', '-N', '-e',
        'SELECT money FROM cq.cq_user WHERE id=8'],
        capture_output=True, text=True)
    assert r.stdout.strip() == '4000', f'DB money {r.stdout.strip()} != 4000'
    print('DB money 4000 OK')

    # 6) click CaptainLi from jail map -> wrong map, no dialog
    send_pkt(s, 2031, struct.pack('<IIIHH', 0, CAPTAIN, 0, 0, 0))
    pkts = drain_all(s)
    assert find(pkts, 2032) is None, 'npc on other map should not talk'

    print('TEST NPC ACTION CHAIN: ALL OK')
except Exception as e:
    import traceback; traceback.print_exc()
    print('TEST NPC ACTION CHAIN FAILED:', e); sys.exit(1)
finally:
    s.close()
