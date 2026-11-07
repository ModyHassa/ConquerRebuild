#!/usr/bin/env python3
"""Live test: v132 - action 1107 (FlyMap).

1107 (case 0x60, body 0x140136426) is `sscanf "%u %d %d"` -> (map,x,y) followed by the body's
own CHECK string 'pUser->FlyMap(idMap, nPosX, nPosY) == FLYMAP_NORMAL': the action result is the
FlyMap result code, so an unknown map takes id_nextfail. The port reuses the 1070 FlyMap core
(leave the old screen, join the new map, rewrite the record position, respawn + item snapshot).

Proof that the fly really happened: the NPC-click handler refuses an NPC whose map differs from
the player's (`npc->map_id != p.map_id`), so an NPC that only exists on the destination map is
reachable exactly when the fly worked.

Fixtures (player = V127Skills, cq_user 90, starts on map 1002 at 437,343):
  FlySage    99020240 (1002) -> 99020510 "999999 0 0"    -> 'v132-fly-badmap'
  FlightSage 99020241 (1002) -> 99020513 "3852 410 290"  -> 'v132-fly-ok'
  LandedSage 99020242 (3852) -> 99020516 'v132-fly-landed'
  ReturnSage 99020243 (3852) -> 99020518 "1002 437 343"  -> 'v132-fly-back'
"""
import socket, struct

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

fails = []
def check(cond, msg):
    print(('ok   ' if cond else 'FAIL ') + msg)
    if not cond: fails.append(msg)

sock = socket.create_connection((HOST, PORT))
send_pkt(sock, 1008, struct.pack('<II', PROBE_ACC, 999))
drain_all(sock)
print('V127Skills logged in')

t = texts(click(sock, 99020240))
check('v132-fly-badmap' in t and 'v132-fly-badmap-passed' not in t,
      f'a non-existent map is not FLYMAP_NORMAL ({t})')

t = texts(click(sock, 99020241))
check('v132-fly-ok' in t and 'v132-fly-fail' not in t, f'fly to 3852 succeeds ({t})')

t = texts(click(sock, 99020242))
check('v132-fly-landed' in t,
      f'an NPC that only exists on map 3852 is now reachable ({t})')

t = texts(click(sock, 99020243))
check('v132-fly-back' in t, f'fly back to 1002 succeeds ({t})')

t = texts(click(sock, 99020240))
check('v132-fly-badmap' in t,
      f'back on map 1002: the 1002-only NPC answers again ({t})')

print()
if fails:
    print(f'{len(fails)} FAILED')
    raise SystemExit(1)
print('ALL PASS')
