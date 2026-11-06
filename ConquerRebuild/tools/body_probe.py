#!/usr/bin/env python3
"""Probe action bodies: resolve each type's body from the router tables and dump the
facts that decide semantics fast: the sscanf format string, the string literals it
compares against, and the call targets.

    python3 tools/body_probe.py 1023 1024 1025 ...
"""
import re, struct, subprocess, sys, os

HERE = os.path.dirname(os.path.abspath(__file__))
EXE = os.path.join(HERE, '..', '..', 'conquer_source', 'Source', 'MsgServer.exe')
IMG = 0x140000000
IMGEXE = os.path.join(HERE, '..', '..', 'conquer_source', 'Source', 'MsgServer.exe')

def load():
    d = open(IMGEXE, 'rb').read()
    lf = struct.unpack_from('<I', d, 0x3C)[0]
    n = struct.unpack_from('<H', d, lf + 6)[0]
    hdr = struct.unpack_from('<H', d, lf + 20)[0]
    off = lf + 24 + hdr
    secs = []
    for i in range(n):
        name, vsz, vma, rsz, rma = struct.unpack_from('<8sIIII', d, off + i * 40)
        secs.append((vma, max(vsz, rsz), rma))
    return d, secs

D, SECS = load()

def roff(va):
    rva = va - IMG
    for vma, vsz, rma in SECS:
        if vma <= rva < vma + vsz:
            return rma + (rva - vma)
    return None

def cstr(va, n=96):
    o = roff(va)
    if o is None: return None
    s = D[o:o+n].split(b'\0')[0]
    try: return s.decode('ascii')
    except Exception: return None

BMAP, TABLE = 0x13AA9C, 0x13A7AC

def body(t):
    idx = t - 1001
    case = D[roff(IMG + BMAP) + idx]
    rel = struct.unpack_from('<i', D, roff(IMG + TABLE) + case * 4)[0]
    return IMG + rel, case

def dis(va, n=0x260):
    return subprocess.run(['objdump', '-d', '--start-address=%d' % va,
                           '--stop-address=%d' % (va + n), IMGEXE],
                          capture_output=True, text=True).stdout

def probe(t):
    va, case = body(t)
    txt = dis(va)
    fmts = re.findall(r'# (0x1407[0-9a-fA-F]+)', txt)
    lits, calls = [], []
    for a in dict.fromkeys(fmts):
        s = cstr(int(a, 16))
        if s: lits.append(s)
    calls = re.findall(r'call\s+([0-9a-f]+)\s', txt)
    print(f'--- {t} case {case:#04x} body {va:#x}')
    for s in lits[:8]:
        print(f'    lit: {s!r}')
    print(f'    calls: {", ".join("0x"+c for c in dict.fromkeys(calls))[:180]}')

if __name__ == '__main__':
    for a in sys.argv[1:]:
        probe(int(a))
