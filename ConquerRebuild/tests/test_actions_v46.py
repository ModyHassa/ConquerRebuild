#!/usr/bin/env python3
"""Live test: v46 — 1026 lookface status-digit gate, 1064 var(N)
arithmetic, 1081 interval(N,M,K) stc-timestamp compare, 150 dyna-npc
data ops (context dyna created by 301)."""
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

def strings_of_2032(p):
    d = p[2]; n = d[0x10]; pos = 0x11; out = []
    for _ in range(n):
        ln = d[pos]; pos += 1
        out.append(d[pos:pos+ln].decode('utf-8','replace')); pos += ln
    return out

def click_option(sock, action_id, text):
    send_pkt(sock, 2031, struct.pack('<IIIHH', 0, ACTIONSAGE, 0, 0, 0))
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
    drain_all(s)
    return s

fails = []
def check(cond, msg):
    tag = 'ok  ' if cond else 'FAIL'
    print(f'{tag} {msg}')
    if not cond: fails.append(msg)

a = login(100001, 777)   # TestKnight (player id 1)
d = login(100006, 888)   # ItemDumper (player id 6, lookface 101003)
print('TestKnight + ItemDumper logged in')

# --- 1026: pass on digit==1 (ItemDumper), fail on TestKnight (100003) ---
pkts = click_option(d, 99000600, 'look~ok. 99000600')
tx = texts_of_dialog(pkts)
check(any('V46~LOOK~OK' in t for t in tx), '1026 digit==1 passes')
pkts = click_option(a, 99000602, 'look~bad. 99000602')
tx = texts_of_dialog(pkts)
check(any('V46~LOOK~FAIL' in t for t in tx), '1026 digit!=1 fails')

# --- 1064 chain A: +=, *=, mod= ---
pkts = click_option(a, 99000643, 'math~a. 99000643')
tx = texts_of_dialog(pkts)
check(any('V46~MATH~OK' in t for t in tx), '1064 += * mod == 1')

# --- 1064 chain B: +=, -=, |=, &= ---
pkts = click_option(a, 99000644, 'math~b. 99000644')
tx = texts_of_dialog(pkts)
check(any('V46~BIT~OK' in t for t in tx), '1064 bit ops == 9')

# --- 1064 chain C: ^= ---
pkts = click_option(a, 99000645, 'math~c. 99000645')
tx = texts_of_dialog(pkts)
check(any('V46~XOR~OK' in t for t in tx), '1064 xor ops == 5')

# --- 1064 bad op -> fail branch ---
pkts = click_option(a, 99000622, 'math~bad. 99000622')
tx = texts_of_dialog(pkts)
check(any('V46~BADOP~FAIL' in t for t in tx), '1064 unknown op fails')

# --- 1081 day-mode true (>= 0 since epoch day 0) ---
pkts = click_option(a, 99000624, 'intv~day. 99000624')
tx = texts_of_dialog(pkts)
check(any('V46~INTV~OK' in t for t in tx), '1081 day >= 0 passes')

# --- 1081 day-mode == 5 fails ---
pkts = click_option(a, 99000627, 'intv~eq. 99000627')
tx = texts_of_dialog(pkts)
check(any('V46~INTV~EQFAIL' in t for t in tx), '1081 day == 5 fails')

# --- 1081 unset key fails ---
pkts = click_option(a, 99000630, 'intv~no. 99000630')
tx = texts_of_dialog(pkts)
check(any('V46~INTV~NOROW' in t for t in tx), '1081 unset stc fails')

# --- 1081 normal-mode (seconds) passes with negative val ---
pkts = click_option(a, 99000632, 'intv~sec. 99000632')
tx = texts_of_dialog(pkts)
check(any('V46~INTV~SEC~OK' in t for t in tx), '1081 seconds >= big-negative passes')

# --- 150 dyna ops after 301 creates the context dyna ---
pkts = click_option(a, 99000635, 'dyna~ops. 99000635')
tx = texts_of_dialog(pkts)
# chain by design ends at 99000640 (0 data >= 100 -> false) whose
# id_nextfail is the DYNA~FAIL marker: both true gates (==5, ==3)
# must have passed to reach it
check(any('V46~DYNA~FAIL' in t for t in tx),
      '150 set/+=/==/>= on 301-created dyna (fail-branch end)')

# newest dyna row persisted with data0=5, data1=3
import subprocess
q = ("mysql -h 127.0.0.1 -u test -ptest cq -N -e "
     "\"SELECT data0,data1 FROM cq_dynanpc WHERE ownerid=1 AND lookface=5001 "
     "ORDER BY id DESC LIMIT 1\"")
out = subprocess.run(q, shell=True, capture_output=True, text=True).stdout.strip()
check(out == '5\t3', f'cq_dynanpc persisted data0=5 data1=3 (got {out!r})')

for s in (a, d):
    try: s.close()
    except Exception: pass
print('PASS test_actions_v46' if not fails else
      f'FAIL test_actions_v46 ({len(fails)} failures)')
sys.exit(1 if fails else 0)
