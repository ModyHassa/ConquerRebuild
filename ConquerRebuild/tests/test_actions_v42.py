#!/usr/bin/env python3
"""Live test: v42 — dialog menu remapper (FUN_14039d300): the 2032 u2
reply-id slot carries the INDEX into a per-user 20-entry menu list, so
action ids > 65535 survive the round trip. Plus action 120 (dialog ack:
mode 100, face=index, empty packer) and 2004 (alias of the 2003
substituted condition). TestKnight on ActionSage 9990."""
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

def collect_2032(pkts):
    lines = []
    for p in pkts:
        if p[1] != 2032: continue
        d = {}
        d['pic1'], d['pic2'] = struct.unpack_from('<HH', p[2], 8)
        d['actionid'] = struct.unpack_from('<H', p[2], 0xC)[0]
        d['face'] = p[2][0xE]
        d['mode'] = p[2][0xF]
        n = p[2][0x10]
        strs, pos = [], 0x11
        for _ in range(n):
            ln = p[2][pos]; pos += 1
            strs.append(p[2][pos:pos+ln].decode('utf-8','replace')); pos += ln
        d['strings'] = strs
        lines.append(d)
    return lines

def reply_2032(sock, action_id, text):
    body = struct.pack('<HHIHBB', 0, 0, action_id, 0, 0, 0x66)
    body += bytes([1, len(text)]) + text.encode()
    send_pkt(sock, 2032, body)

def click_option(sock, action_id, text):
    send_pkt(sock, 2031, struct.pack('<IIIHH', 0, ACTIONSAGE, 0, 0, 0))
    pkts = drain_all(sock)
    assert any(p[1] == 2032 for p in pkts), f'no menu: {[p[1] for p in pkts]}'
    reply_2032(sock, action_id, text)
    return collect_2032(drain_all(sock))

def db(q):
    r = subprocess.run(['mysql', '-h', '127.0.0.1', '-u', 'test', '-ptest',
                        '-N', '-B', 'cq', '-e', q],
                       capture_output=True, text=True)
    return r.stdout.strip()

fails = []
def check(cond, msg):
    tag = 'ok  ' if cond else 'FAIL'
    print(f'{tag} {msg}')
    if not cond: fails.append(msg)

a = socket.create_connection((HOST, PORT))
send_pkt(a, 1008, struct.pack('<II', 100001, 777))
drain_all(a)
print('TestKnight logged in')

# --- 1) 102 with an id > 65535: wire id = menu index, reply maps back ---
lines = click_option(a, 99000540, 'bigid~button. 99000540')
btn = [l for l in lines if l['mode'] == 2 and any('BigId~button.' in x for x in l['strings'])]
check(bool(btn), f'102 button line present ({[l["strings"] for l in lines]})')
if btn:
    check(btn[0]['actionid'] == 0,
          f"remapper: wire id is menu INDEX 0 (got {btn[0]['actionid']})")
# the real client replies with the index -> server maps to 99000544
reply_2032(a, 0, 'BigId~button. 99000544')
s = [x for l in collect_2032(drain_all(a)) for x in l['strings']]
check('V42~BIGID~OK.' in s, f'index reply mapped to the big id ({s})')

# raw big id still passes through (back-compat)
lines = click_option(a, 99000540, 'bigid~button. 99000540')
reply_2032(a, 99000544, 'BigId~button. 99000544')
s = [x for l in collect_2032(drain_all(a)) for x in l['strings']]
check('V42~BIGID~OK.' in s, f'raw big id reply still works ({s})')

# --- 2) 120 ack dialog: mode 100, face=menu index, empty packer ---
lines = click_option(a, 99000546, 'ack~dialog. 99000546')
ack = [l for l in lines if l['mode'] == 100]
check(bool(ack), f'120 mode-100 line present (modes: {[l["mode"] for l in lines]})')
if ack:
    check(ack[0]['actionid'] == 0, f"120 reply id 0 (got {ack[0]['actionid']})")
    check(ack[0]['face'] == 0, f"120 face = menu index 0 (got {ack[0]['face']})")
    check(ack[0]['strings'] == [], f"120 empty packer (got {ack[0]['strings']})")
check(any('V42~ACK~PROMPT.' in x for l in lines for x in l['strings']),
      f'chain continued at id_next after 120 ({[l["strings"] for l in lines]})')
# client replies with the face index -> maps to 99000548
reply_2032(a, 0, 'ack')
s = [x for l in collect_2032(drain_all(a)) for x in l['strings']]
check('V42~ACK~OK.' in s, f'ack index reply ran menu id 99000548 ({s})')

# --- 3) 2004: substituted condition alias of 2003 ---
lines = click_option(a, 99000550, 'cond. 99000550')
s = [x for l in lines for x in l['strings']]
check('V42~COND~OK.' in s, f'2004 true branch on %user_map_id == 1002 ({s})')
check(not any('V42~COND~FAIL.' in x for x in s), '2004 must not hit fail branch')

a.close()
time.sleep(0.5)
print()
if fails:
    print(f'{len(fails)} FAILURES'); sys.exit(1)
print('ALL V42 TESTS PASSED')
