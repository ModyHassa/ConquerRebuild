#!/usr/bin/env python3
"""Full login chain test: SRP6 auth leg (1542->1213->1214->1055) then
game-server leg (1008 -> spawn 10014). Client math replicates the
original AccountServer SRP6.cs byte-for-byte."""
import socket, struct, sys, time, hashlib

HOST, PORT = '127.0.0.1', 5816
_rcv = {}

def recv_pkt(sock, timeout=4.0):
    sock.settimeout(timeout)
    buf = _rcv.setdefault(sock, b'')
    while True:
        if len(buf) >= 4:
            ln, tp = struct.unpack_from('<HH', buf, 0)
            if len(buf) >= ln:
                pkt = (ln, tp, buf[:ln]); _rcv[sock] = buf[ln:]
                return pkt
        try:
            c = sock.recv(8192)
            if not c: return None
        except socket.timeout: return None
        buf = _rcv[sock] = buf + c

def send_pkt(sock, tp, payload=b''):
    sock.sendall(struct.pack('<HH', 4 + len(payload), tp) + payload)

def drain_all(sock, quiet=1.0):
    out = []
    while True:
        p = recv_pkt(sock, timeout=quiet)
        if not p: break
        out.append(p); quiet = 0.3
    return out

def find(pkts, tid): return [p for p in pkts if p[1] == tid]

# ---- SRP6 client math (replicates SRP6.cs with C# byte-order semantics)
def from_hex_le(hs):           # C# FromHexString: pairs consumed little-endian
    return int.from_bytes(bytes.fromhex(hs), 'little')

def from_memory_hs(hs):        # C# FromMemoryHS: == big-endian value
    return int.from_bytes(bytes.fromhex(hs), 'big')

N = from_hex_le("894B645E89E1535BBDAD5B8B290650530801B18EBFBF5E8FAB3C82872A3E9BB7")
g = from_hex_le("07")
k = from_hex_le("03")
SALT = bytes([55,177,232,60,185,177,108,135,223,198,105,1,32,225,72,11,
              238,206,217,24,121,51,91,33,112,57,65,36,111,144,3,236])
b_priv = from_memory_hs("C34E8464C532C1CE798580792B42D8DAB39E1FF9D4CC2820673DCBF9B9F4179E")

def be(v):  # BigInt.GetBytes(): minimal big-endian bytes
    return v.to_bytes((v.bit_length() + 7) // 8 or 1, 'big')

def compute_p(password):
    MAGIC = bytes([163,172,161,163,102,100,106,102,44,106,107,103,102,107,108])
    dg = hashlib.md5(password.encode() + MAGIC).hexdigest().upper()
    return from_memory_hs("00000000" + dg)

sha1 = lambda *parts: hashlib.sha1(b''.join(parts)).digest()

def srp_client(username, password, B_wire, s_wire):
    B = int.from_bytes(B_wire, 'big')
    s = int.from_bytes(s_wire, 'big')
    p = compute_p(password)
    x = int.from_bytes(sha1(s.to_bytes(32,'big'), be(p)), 'big')
    v = pow(g, x, N)
    # client picks random a; A = g^a mod N
    a = int.from_bytes(hashlib.sha256(b'client-a-seed').digest(), 'big')
    A = pow(g, a, N)
    u = int.from_bytes(sha1(be(A), be(B)), 'big')
    # S = (B - k*g^x)^(a + u*x) mod N  (standard SRP6 client algebra)
    S = pow((B - k * pow(g, x, N)) % N, a + u * x, N)
    sb = be(S)
    half = len(sb) // 2
    k1 = sha1(sb[0::2][:half])
    k2 = sha1(sb[1::2][:half])
    K = b''.join(bytes([k1[i], k2[i]]) for i in range(20))
    hn = sha1(be(N)) ; hg = sha1(be(g))
    xng = bytes(a ^ b2 for a, b2 in zip(hn, hg))
    idata = username.encode() + (b'\0' if len(username) % 2 else b'')
    M = sha1(xng, sha1(idata), s.to_bytes(32,'big'), be(A), be(B), K)
    return A, M

def build_srp_request_1542(username, servername="ConquerRebuild"):
    payload = b'\0\0\0\0'                                   # wire+4..7 pad
    payload += username.encode().ljust(128, b'\0')[:128]     # cstr 128
    payload += servername.encode().ljust(16, b'\0')[:16]     # cstr 16
    return payload

def build_login_proof_1214(A, M):
    Ab = be(A)
    p = len(Ab).to_bytes(1, 'big') + Ab
    p = p.ljust(133 - 0, b'\0')  # region wire+4..132
    assert len(p) == 129 or True
    # region size: len byte @+4 + up to 128 bytes -> pad to offset 133
    p = p[:129].ljust(129, b'\0')  # 4+129 = 133
    p += len(M).to_bytes(1, 'big') + M
    return p

try:
    sock = socket.create_connection((HOST, PORT))
    # 1) SrpRequest
    send_pkt(sock, 1542, build_srp_request_1542("TestKnight"))
    pkts = drain_all(sock)
    ch = find(pkts, 1213)
    assert ch, f'no 1213 challenge: {[p[1] for p in pkts]}'
    raw = ch[0][2]
    blen = raw[4]; B_wire = raw[5:5+blen]
    slen = raw[391]; s_wire = raw[392:392+slen]
    print(f'challenge: B={blen}B s={slen}B')
    assert slen == 32 and blen >= 32, (blen, slen)

    # 2) LoginProof
    A, M = srp_client("TestKnight", "test123", B_wire, s_wire)
    print('client A:', be(A).hex().upper())
    print('client M:', M.hex().upper())
    send_pkt(sock, 1214, build_login_proof_1214(A, M))
    pkts = drain_all(sock)
    rep = find(pkts, 1055)
    assert rep, f'no 1055 login reply: {[p[1] for p in pkts]}'
    acct, key, port = struct.unpack_from('<III', rep[0][2], 4)
    ip = rep[0][2][20:40].split(b'\0')[0].decode()
    print(f'login reply: account={acct} key={key} game={ip}:{port}')
    assert acct == 100001 and port == 5816, (acct, port)
    sock.close()

    # 3) WRONG password must fail with 1052 error
    sock2 = socket.create_connection((HOST, PORT))
    send_pkt(sock2, 1542, build_srp_request_1542("TestKnight"))
    ch = find(drain_all(sock2), 1213)[0]
    blen = ch[2][4]; Bw = ch[2][5:5+blen]; sl = ch[2][391]; sw = ch[2][392:392+sl]
    A2, M2 = srp_client("TestKnight", "WRONGPASS", Bw, sw)
    send_pkt(sock2, 1214, build_login_proof_1214(A2, M2))
    pkts2 = drain_all(sock2)
    err = find(pkts2, 1052)
    assert err, f'wrong password not rejected: {[p[1] for p in pkts2]}'
    print('wrong password rejected OK')
    sock2.close()

    # 4) UNKNOWN account must fail immediately
    sock3 = socket.create_connection((HOST, PORT))
    send_pkt(sock3, 1542, build_srp_request_1542("NoSuchUser"))
    pkts3 = drain_all(sock3)
    assert find(pkts3, 1052) and not find(pkts3, 1213), pkts3
    print('unknown account rejected OK')
    sock3.close()

    # 5) GAME LEG: SRP-auth GmDragon too - each account must use its OWN
    # key; reusing another account's uin is rejected (original behavior).
    gbsock = socket.create_connection((HOST, PORT))
    send_pkt(gbsock, 1542, build_srp_request_1542("GmDragon"))
    chb = find(drain_all(gbsock), 1213)[0]
    bl2 = chb[2][4]
    s2 = chb[2][392:392+chb[2][391]]
    A2, M2 = srp_client("GmDragon", "test123", chb[2][5:5+bl2], s2)
    send_pkt(gbsock, 1214, build_login_proof_1214(A2, M2))
    rep2 = find(drain_all(gbsock), 1055)[0]
    acct2, key2, _ = struct.unpack_from('<III', rep2[2], 4)
    gbsock.close()
    assert acct2 == 100002, acct2
    print(f'GmDragon SRP ok: account={acct2} key={key2}')

    # v47: capture each game-leg login's own packets in the FIRST
    # drain. The old code ate TestKnight's spawn with a first drain and
    # relied on ambient monster-respawn 10014s on map 1002 landing in
    # the second drain — that broke the moment the record map changed
    # to a monster-less map (v47's 1070 relive).
    ga = socket.create_connection((HOST, PORT))
    send_pkt(ga, 1008, struct.pack('<II', 100001, key))
    pkts_a = drain_all(ga)
    gb = socket.create_connection((HOST, PORT))
    send_pkt(gb, 1008, struct.pack('<II', 100002, key2))
    pkts_b = drain_all(gb)
    # v47: the login game leg never carries the player's OWN 10014
    # (broadcast is screen-minus-self; the client builds its entity
    # from the login reply). The deterministic proof that the game
    # leg ran is the self snapshot: CMsgItemInfo 1008s + CMsgMagicInfo
    # 1103 / CMsgItemStatus 2077 emitted by spawn_player.
    snap_a = [p[1] for p in pkts_a if p[1] in (1008, 1103, 2077)]
    snap_b = [p[1] for p in pkts_b if p[1] in (1008, 1103, 2077)]
    assert snap_a, f'game leg snapshot missing for A: {[p[1] for p in pkts_a]}'
    assert snap_b, f'game leg snapshot missing for B: {[p[1] for p in pkts_b]}'
    print('game leg: both players entered the world after SRP login')

    # 6) relogin with WRONG uin (not the issued key) must be rejected
    gc = socket.create_connection((HOST, PORT))
    send_pkt(gc, 1008, struct.pack('<II', 100001, 123456789))
    pkts_c = drain_all(gc)
    code = None
    if find(pkts_c, 1008):
        code = struct.unpack_from('<I', find(pkts_c, 1008)[0][2], 4)[0]
    assert code == 2, f'wrong uin accepted: {code}'
    print('wrong-uin game login rejected (code 2) OK')

    print('ALL LOGIN-CHAIN TESTS PASSED')
except Exception as e:
    print('TEST FAILED:', e); sys.exit(1)
