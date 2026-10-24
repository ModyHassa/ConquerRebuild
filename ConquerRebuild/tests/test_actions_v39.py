#!/usr/bin/env python3
"""Live test: v39 — dialog WIRE rewrite + action types 103 (input
dialog), 104 (pic dialog), 105 (message box). ChatA (cq_user 11, acc
100011) on map 1002, NPC ActionsSage 9990.

v39 discovery (server FUN_140142db0 cases 0x67/0x68/0x69 + msgdialog.cpp
FUN_1403a6340/6400/6510 + client FUN_007d8432):
  * EACH 101/102/103/104/105 row builds its OWN CMsgDialog 2032 and
    sends it immediately — the client accumulates lines. A single
    multi-string packet (our old format) would show text but NO
    option buttons on the real client (client reads exactly ONE
    packer string per packet).
  * 2032 server->client wire: +4 tick u4, +8 u2 pic1, +0xA u2 pic2,
    +0xC u2 reply-action id, +0xE u1 face, +0xF u1 mode, +0x10 packer.
    Modes: 1 text line, 2 option button (reply id at +0xC), 3 input
    box, 4 pic (pics at +8/+0xA), 6 message box ("Confirm" reply
    re-enters the chain at the action id from +0xC).
  * 103 param "face aid <text> [flag]": sscanf "%d %u %s %d".
  * 104 param "pic1 pic2 aid": sscanf "%d %d %u %u" (>=3 fields).
  * 105: CUser clears the open dialog, then a mode-6 line; face =
    DATA column, action id = id_next; the chain ALSO continues
    server-side at id_next (original return-true semantics).
"""
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

def find(pkts, tid):
    for p in pkts:
        if p[1] == tid: return p
    return None

def parse_2032(data):
    # v39 wire: +8 u2 pic1 | +0xA u2 pic2 | +0xC u2 action id
    #          | +0xE u1 face | +0xF u1 mode | +0x10 packer
    pic1, pic2, aid = struct.unpack_from('<HHH', data, 8)
    mode, face = data[0xF], data[0xE]
    pos = 0x10
    count = data[pos]; pos += 1
    strs = []
    for _ in range(count):
        n = data[pos]; pos += 1
        strs.append(data[pos:pos+n].decode('utf-8', 'replace')); pos += n
    return dict(pic1=pic1, pic2=pic2, actionid=aid, mode=mode,
                face=face, strings=strs)

def collect_2032(pkts):
    return [parse_2032(p[2]) for p in pkts if p[1] == 2032]

def reply_2032(sock, action_id, text):
    # reply wire: [u2@+4][u2@+6][actionId u4@+8][u2@+0xC]
    #             [mode u1@+0xE][face 0x66 u1@+0xF][packer]
    body = struct.pack('<HHIHBB', 0, 0, action_id, 0, 0, 0x66)
    body += bytes([1]) + bytes([len(text)]) + text.encode()
    send_pkt(sock, 2032, body)

def click_option(sock, action_id, text):
    send_pkt(sock, 2031, struct.pack('<IIIHH', 0, ACTIONSAGE, 0, 0, 0))
    pkts = drain_all(sock)
    assert any(p[1] == 2032 for p in pkts), \
        f'no menu after click: {[p[1] for p in pkts]}'
    ALL_PKTS.extend(pkts)
    reply_2032(sock, action_id, text)
    pkts = drain_all(sock)
    ALL_PKTS.extend(pkts)
    s_ = []
    for p_ in pkts:
        if p_[1] == 2032:
            s_.extend(parse_2032(p_[2])['strings'])
    return s_

def db(q):
    r = subprocess.run(['mysql', '-N', '-B', 'cq', '-e', q],
                       capture_output=True, text=True)
    return r.stdout.strip()

fails = []
def check(cond, msg):
    tag = 'ok  ' if cond else 'FAIL'
    print(f'{tag} {msg}')
    if not cond: fails.append(msg)

ALL_PKTS = []

a = socket.create_connection((HOST, PORT))
send_pkt(a, 1008, struct.pack('<II', 100011, 888))
drain_all(a)
print('ChatA logged in')

# --- 0) menu carries the 5 new v39 options, one button per packet ---
ALL_PKTS.clear()
send_pkt(a, 2031, struct.pack('<IIIHH', 0, ACTIONSAGE, 0, 0, 0))
pkts = drain_all(a)
ALL_PKTS.extend(pkts)
lines = collect_2032(pkts)
strs = [x for l in lines for x in l['strings']]
for t in ['103~input. 63900', '104~pic. 63902',
          '105~msgbox. 63904', '103~flag. 63906',
          '104~bad. 63908']:
    check(t in strs, f'menu has option "{t}"')
opt_lines = [l for l in lines if l['mode'] == 2]
check(all(len(l['strings']) == 1 for l in opt_lines),
      f'per-line wire: ONE option string per 2032 ({opt_lines[:2]})')
mine = [l for l in opt_lines if l['strings'] == ['103~input. 63900']]
check(bool(mine), 'v39 option present as its own button line')
if mine:
    # v42: this option sits at index 37 of the 42-option fixture menu,
    # past the original's 20-entry cap -> documented overflow value
    check(mine[0]['actionid'] == 0xFFFF,
          f"v42 remapper overflow: past-cap option sends 0xFFFF (got {mine[0]['actionid']})")
# v42: the u2 slot is the menu index (remapper FUN_14039d300), so
# big ids no longer truncate - they get their own slot
v30 = [l for l in opt_lines if l['strings'] == ['Test~121a 99000210']]
if v30:
    check(v30[0]['actionid'] == 0,
          f"first option = menu index 0 (got {v30[0]['actionid']})")

# --- 1) 103 input dialog: mode 3, face 15, reply id in the wire ---
ALL_PKTS.clear()
s = click_option(a, 63900, '103~input. 63900')
inl = [l for l in collect_2032(ALL_PKTS) if l['mode'] == 3]
check(len(inl) == 1, f'one mode-3 input line ({len(inl)})')
if inl:
    check(inl[0]['face'] == 15, f"103 face=15 (got {inl[0]['face']})")
    check(inl[0]['actionid'] == 0,
          f"103 reply id = menu index 0 (got {inl[0]['actionid']})")
    check(inl[0]['strings'] == ['Enter~your~name:'],
          f"103 text token (got {inl[0]['strings']})")
# the client would answer with the typed text; chain runs at 63901
reply_2032(a, 63901, 'Mahmoud')
pkts = drain_all(a)
s2 = [x for l in collect_2032(pkts) for x in l['strings']]
check('V39~INPUT~OK.' in s2, f'input reply chain ran ({s2})')

# --- 2) 104 pic dialog: mode 4, pics at +8/+0xA ---
ALL_PKTS.clear()
s = click_option(a, 63902, '104~pic. 63902')
picl = [l for l in collect_2032(ALL_PKTS) if l['mode'] == 4]
check(len(picl) == 1, f'one mode-4 pic line ({len(picl)})')
if picl:
    check((picl[0]['pic1'], picl[0]['pic2']) == (10, 10),
          f"104 pics 10/10 (got {picl[0]['pic1']},{picl[0]['pic2']})")
    check(picl[0]['actionid'] == 0,
          f"104 reply id = menu index 0 (got {picl[0]['actionid']})")
reply_2032(a, 63903, 'Confirm')
pkts = drain_all(a)
s3 = [x for l in collect_2032(pkts) for x in l['strings']]
check('V39~PIC~OK.' in s3, f'pic reply chain ran ({s3})')

# --- 3) 105 msgbox: mode 6, face=DATA(7), action id=id_next; the chain
#        ALSO continued server-side (original return-true semantics) ---
ALL_PKTS.clear()
s = click_option(a, 63904, '105~msgbox. 63904')
mbl = [l for l in collect_2032(ALL_PKTS) if l['mode'] == 6]
check(len(mbl) == 1, f'one mode-6 msgbox line ({len(mbl)})')
if mbl:
    check(mbl[0]['strings'] == ['V39~MSGBOX.'],
          f"105 text (got {mbl[0]['strings']})")
    check(mbl[0]['face'] == 7, f"105 face=DATA=7 (got {mbl[0]['face']})")
    check(mbl[0]['actionid'] == 63905,
          f"105 raw reply id = id_next, no remap (got {mbl[0]['actionid']})")
check(any('V39~AFTER~BOX.' in x for x in s),
      f'chain continued at id_next after 105 ({s})')

# --- 4) 103 with the 4th field: face += 0x100 truncated to the u1 slot ---
ALL_PKTS.clear()
s = click_option(a, 63906, '103~flag. 63906')
inl = [l for l in collect_2032(ALL_PKTS) if l['mode'] == 3]
check(len(inl) == 1, f'flagged input line ({len(inl)})')
if inl:
    check(inl[0]['face'] == 15,
          f"103 flag +0x100 truncates in the u1 slot (got {inl[0]['face']})")
    check(inl[0]['actionid'] == 0,
          f"flagged reply id = menu index 0 (got {inl[0]['actionid']})")
reply_2032(a, 63907, 'MyGuild')
pkts = drain_all(a)
s4 = [x for l in collect_2032(pkts) for x in l['strings']]
check('V39~FLAG~OK.' in s4, f'flag reply chain ran ({s4})')

# --- 5) 104 bad param: <3 fields -> id_nextfail, NO mode-4 line ---
ALL_PKTS.clear()
s = click_option(a, 63908, '104~bad. 63908')
picl = [l for l in collect_2032(ALL_PKTS) if l['mode'] == 4]
check(not picl, f'bad 104 emits no pic line ({picl})')
check(any('V39~PICBAD~OK.' in x for x in s),
      f'bad 104 followed id_nextfail ({s})')

a.close()
print()
if fails:
    print(f'{len(fails)} FAILURES')
    sys.exit(1)
print('ALL V39 TESTS PASSED')
