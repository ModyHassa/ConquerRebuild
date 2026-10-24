#!/usr/bin/env python3
"""Live test v25: ITEM ACTION TYPES in the cq_action chain engine -
  501 award item (ProcessActionItem case 0x1f5: itemtype = DATA column,
  award via AddItem -> 1008 action 1 + 2077 mode 8)
  503 check has item (case 0x1f7: no erase, id_next/id_nextfail)
  502 take item (case 0x1f6: erase one copy; client removal via 2077
  mode 7; DB row deleted)

Fixture: ItemTaker (cq_user 10, account 100010, map 1002 405,300) and
NPC 9943 "ItemSage" at (405,302) with chain 99000001..99000012 and
test itemtype 725015 (DivineHare), seeded by tools/seed_test_accounts.sql.

Flow:
  1) click -> greeting + 2 options
  2) "Give me an item" while EMPTY: 503 fails -> 501 awards ->
     1008 + 2077 arrive, cq_item row exists
  3) "Give me an item" again: 503 succeeds -> "You~have~it." (no award)
  4) "Take my item": 502 erases -> 2077 mode 7 arrives, row gone
  5) "Take my item" again: 503 fails -> falls into the award chain again
"""
import socket, struct, subprocess, sys

HOST, PORT = '127.0.0.1', 5816
NPC = 9943
ITEMTYPE = 725015
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

def find_all(pkts, tid):
    return [p for p in pkts if p[1] == tid]

def find_one(pkts, tid):
    l = find_all(pkts, tid)
    return l[0] if l else None

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

def collect_2032(pkts):
    lines = []
    for p in pkts:
        if p[1] != 2032: continue
        d = parse_2032(p[2])
        d['actionid'] = struct.unpack_from('<H', p[2], 0xC)[0]
        lines.append(d)
    return lines

def reply_2032(sock, action_id, text):
    body = struct.pack('<HHIHBB', 0, 0, action_id, 0, 0, 0x66)
    body += bytes([1, len(text)]) + text.encode()
    send_pkt(sock, 2032, body)

def parse_1008(raw):
    # wire +4 id u4, +8 itemtype u4, +0x10 action u1
    iid = struct.unpack_from('<I', raw, 4)[0]
    itype = struct.unpack_from('<I', raw, 8)[0]
    action = raw[0x10]
    return iid, itype, action

def parse_2077(raw):
    # [count u4@+4] entries 8 dwords from +8: id, mode, pos, amount...
    cnt = struct.unpack_from('<I', raw, 4)[0]
    out = []
    off = 8
    for _ in range(cnt):
        iid, mode, pos, amount = struct.unpack_from('<IIHH', raw, off)
        out.append((iid, mode, pos, amount))
        off += 0x20
    return out

def db_items():
    out = subprocess.run(['mysql', '-uroot', 'cq', '-N', '-e',
        'SELECT id,type FROM cq_item WHERE player_id=10 AND type=%d' % ITEMTYPE],
        capture_output=True, text=True).stdout.strip()
    return out

sock = None
try:
    sock = socket.create_connection((HOST, PORT))
    send_pkt(sock, 1008, struct.pack('<II', 100010, 999))
    drain_all(sock)
    print('ItemTaker logged in')
    assert db_items() == '', 'fixture not clean: %r' % db_items()

    # 1) greeting
    send_pkt(sock, 2031, struct.pack('<IIIHH', 0, NPC, 0, 0, 0))
    pkts = drain_all(sock)
    dlg = find_one(pkts, 2032)
    assert dlg, 'no 2032 after NPC click: %s' % [p[1] for p in pkts]
    d = dict(strings=[x for l in collect_2032(pkts) for x in l['strings']])
    print('greeting:', d)
    assert 'Welcome,~item~tester!' in d['strings'], d['strings']
    assert 'Give~me~an~item 99000004' in d['strings'], d['strings']
    assert 'Take~my~item 99000010' in d['strings'], d['strings']

    # 2) empty -> 503 fail -> 501 award
    reply_2032(sock, 99000004, 'Give~me~an~item 99000004')
    pkts = drain_all(sock)
    dlg = find_one(pkts, 2032)
    assert dlg, 'no award dialog: %s' % [p[1] for p in pkts]
    d = dict(strings=[x for l in collect_2032(pkts) for x in l['strings']])
    assert 'There~you~go.' in d['strings'], d['strings']
    i1008 = find_all(pkts, 1008)
    assert i1008, 'no CMsgItemInfo 1008 after 501 award'
    iid, itype, action = parse_1008(i1008[0][2])
    assert itype == ITEMTYPE and action == 1, (iid, itype, action)
    i2077 = find_all(pkts, 2077)
    assert i2077, 'no CMsgItemStatus 2077 after 501 award'
    entries = parse_2077(i2077[0][2])
    assert entries and entries[0][0] == iid and entries[0][1] == 8, entries
    row = db_items()
    assert row != '', 'cq_item row missing after 501 award'
    db_id = int(row.split()[0])
    assert db_id == iid, '1008 id %d != db id %d' % (iid, db_id)
    print('PASS: 501 awarded type %u as cq_item id %d (1008+2077)' % (itype, iid))

    # 3) now has it: 503 true -> "You have it."
    reply_2032(sock, 99000004, 'Give~me~an~item 99000004')
    pkts = drain_all(sock)
    dlg = find_one(pkts, 2032)
    assert dlg, 'no dialog after re-check'
    d = dict(strings=[x for l in collect_2032(pkts) for x in l['strings']])
    assert 'You~have~it.' in d['strings'], d['strings']
    assert not find_all(pkts, 1008), 'unexpected second award'
    print('PASS: 503 check true branch (no re-award)')

    # 4) 502 take
    reply_2032(sock, 99000010, 'Take~my~item 99000010')
    pkts = drain_all(sock)
    dlg = find_one(pkts, 2032)
    assert dlg, 'no dialog after take'
    d = dict(strings=[x for l in collect_2032(pkts) for x in l['strings']])
    assert 'Thanks~for~the~item.' in d['strings'], d['strings']
    i2077 = find_all(pkts, 2077)
    assert i2077, 'no 2077 removal after 502 take'
    entries = parse_2077(i2077[0][2])
    assert entries and entries[0][0] == iid and entries[0][1] == 7, entries
    assert db_items() == '', 'cq_item row not deleted after 502 take'
    print('PASS: 502 took the item (2077 mode 7 + row deleted)')

    # 4b) 121/122 random types: "Roll dice" -> always-true 121 ->
    #     always-false 121 -> 122 jump of 8 -> "Dice landed."
    send_pkt(sock, 2031, struct.pack('<IIIHH', 0, NPC, 0, 0, 0))
    pkts = drain_all(sock)
    dlg = find_one(pkts, 2032)
    assert dlg, 'no greeting (dice)'
    d = dict(strings=[x for l in collect_2032(pkts) for x in l['strings']])
    assert 'Roll~dice 99000021' in d['strings'], d['strings']
    reply_2032(sock, 99000021, 'Roll~dice 99000021')
    pkts = drain_all(sock)
    dlg = find_one(pkts, 2032)
    assert dlg, 'no dice dialog: %s' % [p[1] for p in pkts]
    d = dict(strings=[x for l in collect_2032(pkts) for x in l['strings']])
    assert 'Dice~landed.' in d['strings'], d['strings']
    assert 'ERROR:' not in d['strings'], d['strings']
    print('PASS: 121 both branches + 122 random jump (8 ids)')

    # 5) empty again: take-option falls into the award chain
    reply_2032(sock, 99000010, 'Take~my~item 99000010')
    pkts = drain_all(sock)
    dlg = find_one(pkts, 2032)
    assert dlg, 'no dialog after empty take'
    d = dict(strings=[x for l in collect_2032(pkts) for x in l['strings']])
    assert 'There~you~go.' in d['strings'], d['strings']
    assert db_items() != '', '501 fallback did not re-award'
    # cleanup: leave the re-awarded row (seed deletes it on next run)
    print('PASS: 503 fail -> 501 fallback re-award')
    print('TEST test_itemaction OK')
except AssertionError as e:
    print('FAIL test_itemaction'); print('   ', e); sys.exit(1)
except Exception as e:
    print('FAIL test_itemaction'); print('   ', repr(e)); sys.exit(1)
finally:
    if sock: sock.close()
