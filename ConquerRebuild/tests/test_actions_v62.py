#!/usr/bin/env python3
"""Live test: v53 — existing 2005 (0x7d5) fail-branch semantics."""
import socket, struct, sys

HOST, PORT = '127.0.0.1', 5816
MAPSAGE = 9945
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

def strings_of_2032(p):
    d = p[2]; n = d[0x10]; pos = 0x11; out = []
    for _ in range(n):
        ln = d[pos]; pos += 1
        out.append(d[pos:pos+ln].decode('utf-8','replace')); pos += ln
    return out

def click_option(sock, action_id, text):
    send_pkt(sock, 2031, struct.pack('<IIIHH', 0, MAPSAGE, 0, 0, 0))
    pkts = drain_all(sock)
    assert any(p[1] == 2032 for p in pkts), 'no menu'
    body = struct.pack('<HHIHBB', 0, 0, action_id, 0, 0, 0x66)
    body += bytes([1, len(text)]) + text.encode()
    send_pkt(sock, 2032, body)
    return drain_all(sock)

def texts_of_dialog(pkts):
    out = []
    for p in pkts:
        if p[1] == 2032:
            out += strings_of_2032(p)
    return out

def login(acct, uin):
    s = socket.create_connection((HOST, PORT))
    send_pkt(s, 1008, struct.pack('<II', acct, uin))
    return s, drain_all(s)

def sql(q):
    import subprocess
    return subprocess.run(
        f"mysql -h 127.0.0.1 -u test -ptest cq -N -B -e \"{q}\"",
        shell=True, capture_output=True, text=True).stdout.strip()

fails = []
def check(cond, msg):
    tag = 'ok  ' if cond else 'FAIL'
    print(f'{tag} {msg}')
    if not cond: fails.append(msg)

# cq_user resets MUST use account_id (cq_user.id is 1/2!)
sql("UPDATE cq_user SET recordmap_id=1002, recordx=400, recordy=300 "
    "WHERE account_id=100001")
a, _ = login(100001, 777)
print('TestKnight logged in')

def parse_2032(d):
    # d = the FULL packet (len u2, type u2, then payload)
    mode, face = d[0xF], d[0xE]
    aid = struct.unpack_from('<H', d, 0xC)[0]
    n = d[0x10]
    pos = 0x11
    ss = []
    for _ in range(n):
        ln = d[pos]; pos += 1
        ss.append(d[pos:pos + ln].decode('utf-8', 'replace')); pos += ln
    return dict(mode=mode, face=face, actionid=aid, strings=ss)

def run_chain(action_id, text='go'):
    pkts = click_option(a, action_id, text)
    return [parse_2032(p[2]) for p in pkts if p[1] == 2032]

# 1) the styled notice line: mode 0x70, reply id = the DATA column, param text
lines = run_chain(99000870)
notice = [l for l in lines if l['mode'] == 0x70]
check(len(notice) == 1, '112 emits exactly one mode-0x70 line')
if notice:
    check(notice[0]['actionid'] == 0,
          '112 reply action id is 0 (proven param_5 = 0)')
    check(notice[0]['face'] == 1,
          '112 FACE carries the DATA column (corrected in v106)')
    check(any('112~notice~line.' in s for s in notice[0]['strings']),
          '112 text is the param string')

# 2) the chain continues past the notice row
check(any('V62~NOTICE~OK.' in s for l in lines for s in l['strings']),
      '112 chain continues to id_next')

# 3) an empty param still builds the (empty) notice line
lines2 = run_chain(99000874)
notice2 = [l for l in lines2 if l['mode'] == 0x70]
check(len(notice2) == 1, '112 empty param still emits the line')
check(any('V62~EMPTY~OK.' in s for l in lines2 for s in l['strings']),
      '112 empty param continues to id_next')

print('RESULT: %d FAILURES' % len(fails))
sys.exit(1 if fails else 0)
