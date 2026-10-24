#!/usr/bin/env python3
"""Live test: CMsgTalk (packet 1004) chat system.
Phases:
  1) ChatA talks (channel 2001) -> ChatB (and A's own relay) receive the
     talk with the server-authoritative sender name.
  2) ChatA whispers (channel 2002, receiver by name) -> ChatB only-ish.
  3) cq_action type 123 -> SYSTEM/ALLUSERS broadcast reaches both.
  4) cq_action type 105 -> NPC bubble (channel 6) reaches both.
Wire (extracted from world_kernel::CMsgTalk Create FUN_14007a620 +
client Create FUN_007de04a; see src/systems/chat.hpp):
  +0 len u2, +2 type u2, +4 tick u4, +8 color u4, +0xC channel u2,
  +0xE style u2, +0x10 id u4, +0x14 u4, +0x18 u4, +0x21 packer
  (outbound 4 strings [sender][receiver][emotion][words];
   inbound 7 strings [sender][receiver][emotion][words][][][suffix]).
"""
import socket, struct, sys

HOST, PORT = '127.0.0.1', 5816
ITEMSAGE = 9943
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
    return [p for p in pkts if p[1] == tid]

def build_talk(channel, color, sender, receiver, emotion, words, suffix=''):
    # payload after 4-byte header: 24 bytes fields + 5 pad + packer
    body = struct.pack('<IIHHIII', 0, color, channel, 0, 0, 0, 0) + b'\0' * 5
    strs = [sender, receiver, emotion, words, '', '', suffix]
    pk = bytes([len(strs)])
    for s in strs:
        b = s.encode()
        pk += bytes([len(b)]) + b
    return body + pk

def parse_1004(data):
    color, = struct.unpack_from('<I', data, 0x08)
    channel, = struct.unpack_from('<H', data, 0x0C)
    pos = 0x21
    count = data[pos]; pos += 1
    strs = []
    for _ in range(count):
        n = data[pos]; pos += 1
        strs.append(data[pos:pos+n].decode('utf-8', 'replace')); pos += n
    return dict(color=color, channel=channel, strings=strs)

def reply_2032(sock, action_id, text):
    body = struct.pack('<HHIHBB', 0, 0, action_id, 0, 0, 0x66)
    body += bytes([1, len(text)]) + text.encode()
    send_pkt(sock, 2032, body)

def parse_10017(raw):
    rid = struct.unpack_from('<I', raw, 8)[0]
    count = struct.unpack_from('<I', raw, 0x0C)[0]
    attrs = {}
    for i in range(count):
        e = 0x10 + i * 0x1C
        k, lo, hi = struct.unpack_from('<III', raw, e)
        attrs[k] = lo | (hi << 32)
    return rid, attrs

fails = 0
def check(cond, msg):
    global fails
    if cond:
        print('PASS:', msg)
    else:
        fails += 1
        print('FAIL:', msg)

try:
    a = socket.create_connection((HOST, PORT))
    send_pkt(a, 1008, struct.pack('<II', 100011, 888))
    drain_all(a)
    b = socket.create_connection((HOST, PORT))
    send_pkt(b, 1008, struct.pack('<II', 100012, 888))
    drain_all(b)
    print('ChatA + ChatB logged in')
    # clear any cross-traffic from B's login reaching A
    drain_all(a, 0.5)

    # ---- phase 1: normal talk 2001 ----
    send_pkt(a, 1004, build_talk(2001, 0xFFFFFF, 'ChatA', '', '',
                                 'Hello~there!'))
    pa = drain_all(a); pb = drain_all(b)
    ta = [parse_1004(p[2]) for p in find(pa, 1004)]
    tb = [parse_1004(p[2]) for p in find(pb, 1004)]
    t = [x for x in tb if x['strings'][3:4] == ['Hello~there!']]
    check(len(t) == 1, f'B receives talk 2001 (got {tb})')
    if t:
        check(t[0]['channel'] == 2001, 'talk relayed on channel 2001')
        check(t[0]['strings'][0] == 'ChatA',
              f'server-authoritative sender (got {t[0]["strings"][0]})')
        check(t[0]['color'] == 0xFFFFFF, 'color relayed')
    t = [x for x in ta if x['strings'][3:4] == ['Hello~there!']]
    check(len(t) >= 1, 'sender also gets the screen relay')

    # ---- phase 2: whisper 2002 ----
    send_pkt(a, 1004, build_talk(2002, 0xFFFFFF, 'ChatA', 'ChatB', '',
                                 'psst~secret'))
    pa = drain_all(a); pb = drain_all(b)
    tb = [parse_1004(p[2]) for p in find(pb, 1004)]
    t = [x for x in tb if x['strings'][3:4] == ['psst~secret']]
    check(len(t) == 1, f'B receives whisper (got {tb})')
    if t:
        check(t[0]['channel'] == 2002, 'whisper channel 2002')
        check(t[0]['strings'][0] == 'ChatA' and t[0]['strings'][1] == 'ChatB',
              f'whisper sender/receiver ({t[0]["strings"][:2]})')
    ta = [parse_1004(p[2]) for p in find(pa, 1004)]
    check(any(x['strings'][3:4] == ['psst~secret'] for x in ta),
          'sender gets whisper echo')

    # ---- phase 3: cq_action 123 SYSTEM broadcast ----
    send_pkt(a, 2031, struct.pack('<IIIHH', 0, ITEMSAGE, 0, 0, 0))
    pkts = drain_all(a)
    dlg = find(pkts, 2032)
    assert dlg, f'no ItemSage greeting: {[p[1] for p in pkts]}'
    reply_2032(a, 99000031, 'Shout~something 99000031')
    pa = drain_all(a); pb = drain_all(b)
    ta = [parse_1004(p[2]) for p in find(pa, 1004)]
    tb = [parse_1004(p[2]) for p in find(pb, 1004)]
    ok_a = [x for x in ta if x['strings'][3:4] == ['Server~wide~hello!']]
    ok_b = [x for x in tb if x['strings'][3:4] == ['Server~wide~hello!']]
    check(len(ok_b) == 1, f'B receives SYSTEM broadcast (got {tb})')
    if ok_b:
        check(ok_b[0]['strings'][0] == 'SYSTEM' and
              ok_b[0]['strings'][1] == 'ALLUSERS',
              f'SYSTEM/ALLUSERS sender ({ok_b[0]["strings"][:2]})')
    check(len(ok_a) == 1, f'A also receives the broadcast (got {ta})')
    check(any(p[1] == 2032 for p in pa), 'chain continues to 101 dialog')

    # ---- phase 4: cq_action 105 MESSAGE BOX (v39: verified case 0x69 =
    # CUser clears the dialog + mode-6 CMsgDialog 2032 to SELF, action id
    # = converted id_next; NOT a talk broadcast) ----
    send_pkt(a, 2031, struct.pack('<IIIHH', 0, ITEMSAGE, 0, 0, 0))
    pkts = drain_all(a)
    dlg = find(pkts, 2032)
    assert dlg, 'no re-greeting for box phase'
    reply_2032(a, 99000033, 'Hear~the~sage 99000033')
    pa = drain_all(a); pb = drain_all(b)
    mb = [p for p in find(pa, 2032)
          if b'The~sage~speaks.' in p[2]]
    check(len(mb) == 1, f'msgbox 2032 arrives at A only ({len(mb)})')
    if mb:
        mode = mb[0][2][0xF]
        aid = struct.unpack_from('<H', mb[0][2], 0xC)[0]
        check(mode == 6, f'msgbox wire mode (got {mode})')
        check(aid == 0, f'msgbox reply action id = id_next (row id_next=0, got {aid})')
    check(not find(pb, 2032), 'msgbox is self-only (B got one)')

    # ---- phase 5: cq_action 1010 message box + 1085 gmlog pass-through ----
    send_pkt(a, 2031, struct.pack('<IIIHH', 0, ITEMSAGE, 0, 0, 0))
    pkts = drain_all(a)
    dlg = find(pkts, 2032)
    assert dlg, 'no re-greeting for box phase'
    reply_2032(a, 99000036, 'Get~a~box 99000036')
    pa = drain_all(a)
    talks = [parse_1004(p[2]) for p in find(pa, 1004)]
    ok = [x for x in talks if x['strings'][3:4] == ['Box~time!']]
    check(len(ok) == 1, f'1010 system message arrives (got {talks})')
    if ok:
        check(ok[0]['channel'] == 2005,
              f'1010 uses channel from data column (got {ok[0]["channel"]})')
        check(ok[0]['strings'][0] == 'SYSTEM',
              f'1010 sender is SYSTEM (got {ok[0]["strings"][0]})')
    boxes = [p for p in find(pa, 2032)]
    ok = [p for p in boxes if b'Logged~and~boxed.' in p[2]]
    check(len(ok) == 1, 'chain passes through 1085 gmlog to the 101 text')

    # ---- phase 6: stc/dataN/var + 2003 %-condition ----
    send_pkt(a, 2031, struct.pack('<IIIHH', 0, ITEMSAGE, 0, 0, 0))
    pkts = drain_all(a)
    dlg = find(pkts, 2032)
    assert dlg, 'no re-greeting for var phase'
    reply_2032(a, 99000040, 'Var~tests 99000040')
    pa = drain_all(a)
    final = [p for p in find(pa, 2032)]
    check(any(b'All~vars~passed.' in p[2] for p in final) and
          not any(b'VAR~FAIL' in p[2] for p in final),
          f'stc/dataN/var/2003 chain all green (dialogs={len(final)})')

    # ---- phase 7: 801 dropitem + 518 award ----
    # (ChatA logged out in this phase's var-persist flow below; reuse the
    # still-connected socket order: run BEFORE the close)
    send_pkt(a, 2031, struct.pack('<IIIHH', 0, ITEMSAGE, 0, 0, 0))
    pkts = drain_all(a)
    dlg = find(pkts, 2032)
    assert dlg, 'no re-greeting for drop phase'
    reply_2032(a, 99000051, 'Drop~n~award 99000051')
    pa = drain_all(a)
    final = [p for p in find(pa, 2032)]
    check(any(b'Dropped~and~awarded.' in p[2] for p in final),
          f'801->518 chain completes (dialogs={len(final)})')
    spawns = [p for p in pa if p[1] == 1101]
    check(len(spawns) >= 1, f'1101 ground-item spawn broadcast (got {len(spawns)})')
    import struct as s2
    it = s2.unpack('<I', spawns[0][2][0x0C:0x10])[0] if spawns else 0
    check(it == 725015, f'dropped itemtype is 725015 (got {it})')
    awards = [p for p in pa if p[1] == 1008]
    check(len(awards) >= 1, f'518 award sends 1008 (got {len(awards)})')

    # ---- phase 8: 508 space check + 1056 isexit ----
    # (ChatA holds the 725015 award from phase 7 and has free slots)
    send_pkt(a, 2031, struct.pack('<IIIHH', 0, ITEMSAGE, 0, 0, 0))
    pkts = drain_all(a)
    dlg = find(pkts, 2032)
    assert dlg, 'no re-greeting for space phase'
    reply_2032(a, 99000061, 'Space~check 99000061')
    pa = drain_all(a)
    final = [p for p in find(pa, 2032)]
    check(any(b'Space~and~item~OK.' in p[2] for p in final) and
          not any(b'Space~FAIL' in p[2] for p in final),
          f'508 space + 1056 isexit both pass (dialogs={len(final)})')

    # 508 negative branch: fill the inventory to 40, then re-click
    import subprocess as sp
    rows = ','.join(f"(NULL,725016,11,11,1,0)" for _ in range(40))
    sp.run(['mysql', 'cq', '-e',
            f"INSERT INTO cq_item (id,type,owner_id,player_id,amount,"
            f"position) VALUES {rows}"],
           capture_output=True)
    send_pkt(a, 2031, struct.pack('<IIIHH', 0, ITEMSAGE, 0, 0, 0))
    drain_all(a)
    reply_2032(a, 99000061, 'Space~check 99000061')
    pa = drain_all(a)
    final = [p for p in find(pa, 2032)]
    check(any(b'Space~FAIL' in p[2] for p in final) and
          not any(b'Space~and~item~OK' in p[2] for p in final),
          '508 fails when inventory is full (40+2 >= 41)')
    sp.run(['mysql', 'cq', '-e',
            "DELETE FROM cq_item WHERE player_id=11 AND type=725016"],
           capture_output=True)

    # ---- phase 9: 1027 user effect (1015 add/del) ----
    send_pkt(a, 2031, struct.pack('<IIIHH', 0, ITEMSAGE, 0, 0, 0))
    drain_all(a)
    reply_2032(a, 99000071, 'Effect~test 99000071')
    pa = drain_all(a)
    # full wire p[2]: [len:2][type:2] then body; body = [tick:4][id:4][mode:1][packer]
    effs = find(pa, 1015)
    check(len(effs) == 2, f'1027 chain sent two 1015 packets (got {len(effs)})')
    if len(effs) == 2:
        for p in effs:
            check(p[0] == 0xF + 9, f'1015 wire len 15+namelen (got {p[0]:#x})')
            mode = p[2][0xC]
            assert p[2][0xD] == 1, 'packer count'
            nlen = p[2][0xE]
            name = p[2][0xF:0xF + nlen].decode()
            tgt = struct.unpack_from('<I', p[2], 8)[0]
            if p is effs[0]:
                check(mode == 10 and name == 'angelwing',
                      f'1015 add: mode={mode} name={name!r}')
                check(tgt == 11, f'1015 add targets player 11 (got {tgt})')
            else:
                check(mode == 24 and name == 'angelwing',
                      f'1015 del: mode={mode} name={name!r}')
    dlg = [p for p in find(pa, 2032)]
    check(any(b'Effect~flow~done.' in p[2] for p in dlg),
          'chain continues to 101 after both effects')

    # ---- phase 8: v28 action suite (1002 heal / 1060-1063 vars /
    #      1058 task time / keyed 1057 / 1065 equipped sort) ----
    send_pkt(a, 2031, struct.pack('<IIIHH', 0, ITEMSAGE, 0, 0, 0))
    pkts = drain_all(a)
    assert find(pkts, 2032), 'no greeting for v28 phase'
    reply_2032(a, 99000081, 'V28~suite')
    pa = drain_all(a)
    healed = [parse_10017(p[2]) for p in find(pa, 10017)]
    check(any(attrs.get(0) == 2000 for _, attrs in healed),
          f'1002 restores life to max 2000 (got {healed})')
    dlg = [p for p in find(pa, 2032)]
    check(any(b'V28~ALL~PASSED.' in p[2] for p in dlg),
          'v28 chain passes all checks (1002/1060/1062/1063/1058/1057/1065)')
    check(not any(b'V28~FAIL.' in p[2] for p in dlg), 'v28 chain never fails')

    # var persistence: disconnect ChatA, vars must hit the sidecar
    import time, subprocess
    a.close()
    time.sleep(1.0)
    out = subprocess.run(
        ['mysql', '-N', 'cq', '-e',
         "SELECT val FROM cq_user_script_var WHERE player_id=11 "
         "AND var='var:7'"], capture_output=True, text=True).stdout.strip()
    check(out == '400', f'var(7) persisted to DB with map x 400 (got {out!r})')
    out = subprocess.run(
        ['mysql', '-N', 'cq', '-e',
         "SELECT val FROM cq_user_script_var WHERE player_id=11 "
         "AND var='stc:77:7'"], capture_output=True, text=True).stdout.strip()
    check(out == '5', f'stc(77,7) persisted with 5 (got {out!r})')
    # v28: task record + var array persistence
    for varname, want in (('var:3', '5'), ('task:3001:d3', '41')):
        out = subprocess.run(
            ['mysql', '-N', 'cq', '-e',
             f"SELECT val FROM cq_user_script_var WHERE player_id=11 "
             f"AND var='{varname}'"], capture_output=True,
            text=True).stdout.strip()
        check(out == want, f'{varname} persisted as {want} (got {out!r})')
    out = subprocess.run(
        ['mysql', '-N', 'cq', '-e',
         "SELECT val FROM cq_user_script_var WHERE player_id=11 "
         "AND var='task:3003:d7'"], capture_output=True,
        text=True).stdout.strip()
    check(out.isdigit() and int(out) > 1700000000,
          f'1058 time set persists accept time (got {out!r})')

except Exception as e:
    fails += 1
    print('EXCEPTION:', repr(e))

print('RESULT:', 'PASS' if fails == 0 else f'{fails} FAILURES')
sys.exit(0 if fails == 0 else 1)
