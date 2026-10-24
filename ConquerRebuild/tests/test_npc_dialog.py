#!/usr/bin/env python3
"""Live test: NPC dialog flow over wire-accurate 2031/2032."""
import socket, struct, sys

HOST, PORT = '127.0.0.1', 5816
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
    # payload starts wire+4
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

try:
    s = socket.create_connection((HOST, PORT))
    send_pkt(s, 1008, struct.pack('<II', 100001, 777))
    drain_all(s)
    print('logged in')

    # 1) Click NPC 1000 (TwinCityGuide) via CMsgNpc 2031.
    #    wire: +4 u4 | +8 npc id u4 | +0xC task id u4 | +0x10 action u2 | +0x12 subtype u2
    send_pkt(s, 2031, struct.pack('<IIIHH', 0, 1000, 0, 0, 0))
    pkts = drain_all(s)
    lines = collect_2032(pkts)
    assert lines, f'no 2032 dialog after NPC click: {[p[1] for p in pkts]}'
    print('greeting lines:', [l['strings'] for l in lines])
    assert lines[0]['mode'] == 1, lines[0]
    strs = [x for l in lines for x in l['strings']]
    assert 'TwinCityGuide' in strs[0], strs
    assert len([l for l in lines if l['mode'] == 2]) == 2, lines

    # 2) Choose "Where am I?" (client echoes choice as first packer string).
    body = struct.pack('<HHHHHBB', 0, 0, 1000, 1, 0, 0, 0)
    body += bytes([1]) + bytes([len('Where am I?')]) + b'Where am I?'
    send_pkt(s, 2032, body)
    pkts = drain_all(s)
    lines = collect_2032(pkts)
    assert lines, f'no follow-up dialog: {[p[1] for p in pkts]}'
    strs = [x for l in lines for x in l['strings']]
    print('follow-up lines:', [l['strings'] for l in lines])
    assert '1002' in strs[0], strs

    # 3) "Thanks!" closes the dialog: expect CMsgNpc 2031 (close action).
    body = struct.pack('<HHHHHBB', 0, 0, 1000, 1, 1, 0, 0)
    body += bytes([1]) + bytes([6]) + b'Thanks!'
    send_pkt(s, 2032, body)
    pkts = drain_all(s)
    close = find(pkts, 2031)
    assert close, f'no 2031 close: {[p[1] for p in pkts]}'
    _, npc_id, task_id, action, subtype = struct.unpack_from('<IIIHH', close[2], 4)
    print(f'close npc msg: npc={npc_id} task={task_id} action={action} sub={subtype}')
    assert npc_id == 1000 and action == 2, (npc_id, action)

    print('ALL NPC DIALOG TESTS PASSED')
except Exception as e:
    print('TEST FAILED:', e); sys.exit(1)
finally:
    s.close()
