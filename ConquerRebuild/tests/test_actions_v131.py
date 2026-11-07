#!/usr/bin/env python3
"""Live test: v131 - action 1083 on the packed god_status date.

1083 (case 0x49, body 0x14012becb): `sscanf "%s %d"` must give 2 tokens, then
  "<"   -> 0x140382960(user,2,0) <  u          (whole hours left)
  "=="  -> == u
  "+="  -> 0x140382b00(user,u): re-base on the start of the current hour when the
           stored value is absent/expired, add u*3600, re-pack to YYMMDDHH and
           flush (0x140372710 -> cq_user.god_status); result true.
  "chk" -> u == 0 ? (bitmap(0x1C) || seconds left > 0) : bitmap(0x1B)
anything else fails. The value lives at CUser+0xF38 = date container +0xC0, whose
DB column name is literally "god_status" (key string at 0x14075a428).

Fixtures (Chainz = cq_user 1000012, god_status reset to 0 by the seed):
  GodSage  99020233 -> 99020480 "+= 5" -> 99020481 "< 6" -> ok/fail
  ChkSage  99020234 -> 99020487 "junk 7" -> fail branch must win
  Chk2Sage 99020235 -> 99020484 "chk 1"  -> bitmap 0x1B clear, so fail
"""
import socket, struct, subprocess

HOST, PORT = '127.0.0.1', 5816
PROBE_ACC = 100090
_rcv = {}

def recv_pkt(sock, timeout=4.0):
    sock.settimeout(timeout)
    buf = _rcv.setdefault(sock, b'')
    while True:
        if len(buf) >= 4:
            ln, tp = struct.unpack_from('<HH', buf, 0)
            if len(buf) >= ln:
                pkt = (ln, tp, buf[:ln]); _rcv[sock] = buf[ln:]; return pkt
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
        pkts.append(p); quiet = 0.3
    return pkts

def click(sock, npc_id):
    _rcv[sock] = b''
    send_pkt(sock, 2031, struct.pack('<IIIHH', 0, npc_id, 0, 0, 0))
    return drain_all(sock)

def texts(pkts):
    out = []
    for p in pkts:
        if p[1] != 2032: continue
        d = p[2]
        if len(d) < 0x12: continue
        n, pos = d[0x10], 0x11
        for _ in range(n):
            ln = d[pos]; pos += 1
            out.append(d[pos:pos+ln].decode('utf-8', 'replace')); pos += ln
    return out

def db(sql):
    r = subprocess.run(['mysql', '-uroot', '--batch', '--skip-column-names', 'cq', '-e', sql],
                       capture_output=True, text=True)
    return r.stdout.strip()

fails = []
def check(cond, msg):
    print(('ok   ' if cond else 'FAIL ') + msg)
    if not cond: fails.append(msg)

def login():
    s = socket.create_connection((HOST, PORT))
    send_pkt(s, 1008, struct.pack('<II', PROBE_ACC, 999))
    drain_all(s)
    return s

sock = login()
print('V127Skills logged in')

t = texts(click(sock, 99020233))
check('v131-god-ok' in t and 'v131-god-fail' not in t,
      f'"+= 5" then "< 6" passes (5 whole hours left) ({t})')

gs = int(db("SELECT god_status FROM cq_user WHERE id=90") or 0)
check(gs > 0, f'god_status persisted to cq_user ({gs})')
yy, mm, dd, hh = gs // 1000000, (gs // 10000) % 100, (gs // 100) % 100, gs % 100
check(20 <= yy <= 99 and 1 <= mm <= 12 and 1 <= dd <= 31 and 0 <= hh <= 23 and gs < 100000000,
      f'packed YYMMDDHH = 20{yy}-{mm:02d}-{dd:02d} {hh:02d}:00 ({gs})')

s2 = login()
t = texts(click(s2, 99020234))
check('v131-junk-failed' in t and 'v131-junk-passed' not in t,
      f'unknown op goes to id_nextfail ({t})')

s3 = login()
t = texts(click(s3, 99020235))
check('v131-chk1-fail' in t and 'v131-chk1-ok' not in t,
      f'"chk 1" is false while status bitmap 0x1B is clear ({t})')

print()
if fails:
    print(f'{len(fails)} FAILED')
    raise SystemExit(1)
print('ALL PASS')
