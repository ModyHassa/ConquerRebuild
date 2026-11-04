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


import subprocess

def db(sql):
    return subprocess.run(
        ['mysql', '-h', '127.0.0.1', '-u', 'test', '-ptest', 'cq', '-N', '-e', sql],
        capture_output=True, text=True).stdout.strip()

def texts(pkts):
    out = []
    for p in pkts:
        if p[1] == 2032:
            out += strings_of_2032(p)
    return out

uin = int(db("SELECT id FROM cq_user WHERE name='TestKnight' LIMIT 1") or 0)
check(uin != 0, 'TestKnight has a cq_user id')

def talk_strings(data):
    """Pull the printable runs out of a CMsgTalk 1004 payload (sender,
    receiver, words and emotion are length-prefixed strings) - the words
    are what we assert on."""
    out, cur = [], b''
    for b in data:
        if 32 <= b < 127:
            cur += bytes([b])
        else:
            if len(cur) >= 4:
                out.append(cur.decode('ascii'))
            cur = b''
    if len(cur) >= 4:
        out.append(cur.decode('ascii'))
    return out

def talk_blob(pkts):
    """Strings from chat (1004) AND dialog lines (2032): these fixtures are
    cq_action chains, so their text arrives as 2032 dialogs, not chat."""
    parts = []
    for p in pkts:
        if p[1] == 1004:
            parts += talk_strings(p[2])
        elif p[1] == 2032:
            parts += [t.replace('~', ' ') for t in strings_of_2032(p)]
    return " | ".join(parts)

# the seed registers the scripted NPC on map 1002 next to TestKnight
knight = int(db("SELECT id FROM cq_user WHERE name='TestKnight' LIMIT 1") or 0)
chata = int(db("SELECT id FROM cq_user WHERE name='ChatA' LIMIT 1") or 0)
check(knight > 0 and chata > 0, 'both fixture characters exist')

a, _ = login(100001, 777)          # TestKnight - team leader
b, _ = login(100011, 888)          # ChatA      - the joiner
print('two sessions logged in')


def send_team(sock, sub, arg):
    """1023 CMsgTeam: size@0, type@2, sub u16@4, gap u16@6, arg u32@8, so the
    8-byte payload is (sub, gap, arg)."""
    send_pkt(sock, 1023, struct.pack('<HHI', sub, 0, arg))


def count_of(sock):
    """Ask the v98 lua probe NPC for GetUserInt(0, 1013) = team member count."""
    send_pkt(sock, 2031, struct.pack('<IIIHH', 0, 99001880, 0, 0, 0))
    return talk_blob(drain_all(sock, 2.0))


# --- sub 0: create -------------------------------------------------------
send_team(a, 0, 0)
drain_all(a, 0.8)
check('team_count=1' in count_of(a),
      '1023 sub 0 creates a team with the actor as its only member')
send_team(a, 0, 0)
drain_all(a, 0.8)
check('team_count=1' in count_of(a), 'a second sub 0 does not create a second team')

# --- sub 4: invite ------------------------------------------------------
send_team(a, 4, chata)
pk = drain_all(b, 1.6)
inv = [p for p in pk if p[1] == 1023]
check(len(inv) == 1, 'sub 4 delivers exactly one 1023 to the invitee')
if inv:
    sub, _gap, arg = struct.unpack_from('<HHI', inv[0][2], 4)
    check(sub == 4, 'the invitation carries sub-command 4')
    check(arg == knight, 'and the inviter id in the argument slot')

# --- sub 3: the invitee joins the team led by `arg` ----------------------
send_team(b, 3, knight)
drain_all(b, 0.8)
check('team_count=2' in count_of(a), 'after sub 3 the leader sees 2 members')
check('team_count=2' in count_of(b), 'and the joiner sees 2 members')

# --- sub 8: close to applications, sub 9 re-opens -----------------------
send_team(a, 8, 0)
drain_all(a, 0.6)
send_team(a, 9, 0)
drain_all(a, 0.6)

# --- sub 7: kick --------------------------------------------------------
send_team(a, 7, chata)
pk = drain_all(b, 1.6)
kick = [p for p in pk if p[1] == 1023]
check(len(kick) == 1, 'sub 7 notifies the kicked member with a 1023')
check('team_count=1' in count_of(a), 'the team is back to 1 member')
check('team_count=0' in count_of(b), 'the kicked member is team-less')

# --- sub 6: disband -----------------------------------------------------
send_team(a, 6, 0)
drain_all(a, 0.8)
check('team_count=0' in count_of(a), 'sub 6 disbands the team')

# --- sub 2: a leader leaving dissolves the team (documented deviation) ---
send_team(a, 0, 0)
drain_all(a, 0.8)
send_team(a, 2, 0)
drain_all(a, 0.8)
check('team_count=0' in count_of(a),
      'sub 2 from the leader leaves no team (successor rule UNKNOWN)')

print('RESULT: %d FAILURES' % len(fails))
sys.exit(1 if fails else 0)
