#!/usr/bin/env python3
"""Map action types 1001..1729 to their case label + body address.

PROVEN mechanism (HANDOFF v38): FUN_14012a6e0 checks
`if (0x2d8 < type - 0x3e9) return;` then
`switch((&DAT_14013aa9c)[type - 0x3e9])`, i.e. the byte map at VA
0x14013aa9c is indexed by (type - 1001) and its VALUE is the case label.
Case bodies come from a relative jump table at .text 0x13a7ac.

    python3 tools/newengine_map.py 1040 1086 1095        # given types
    python3 tools/newengine_map.py --anchors             # verify vs known ports
"""
import struct
import sys

EXE = "../conquer_source/Source/MsgServer.exe"
IMAGE_BASE = 0x140000000
MAP_RVA = 0x13AA9C          # DAT_14013aa9c
TABLE_RVA = 0x13A7AC        # relative jump table
FUNC_START = 0x14012A6E0
FUNC_END = 0x14013B000      # generous upper bound for the body span

# case labels we already ported, used to VERIFY the tool
ANCHORS = {1075: 0x41, 1076: 0x42, 1077: 0x43, 1080: 0x46, 1081: 0x47,
           1085: 0x4B}


def sections(data):
    lfanew = struct.unpack_from("<I", data, 0x3C)[0]
    nsec = struct.unpack_from("<H", data, lfanew + 6)[0]
    opt_size = struct.unpack_from("<H", data, lfanew + 0x14)[0]
    base = lfanew + 24 + opt_size
    out = []
    for i in range(nsec):
        off = base + i * 40
        name = data[off:off + 8].rstrip(b"\0").decode("latin1")
        vsize, va, rsize, raw = struct.unpack_from("<IIII", data, off + 8)
        out.append((name, va, vsize, raw, rsize))
    return out


class Pe:
    def __init__(self, path):
        self.data = open(path, "rb").read()
        self.secs = sections(self.data)

    def read(self, va, n):
        rva = va - IMAGE_BASE
        for name, sva, vsize, raw, rsize in self.secs:
            if sva <= rva < sva + max(vsize, rsize):
                off = raw + (rva - sva)
                return self.data[off:off + n]
        raise ValueError(f"VA {va:#x} not in any section")

    def u8(self, va):
        return self.read(va, 1)[0]

    def u32(self, va):
        return struct.unpack("<I", self.read(va, 4))[0]


def case_of(pe, type_):
    if not (1001 <= type_ <= 1729):
        return None
    return pe.u8(IMAGE_BASE + MAP_RVA + (type_ - 1001))


def body_of(pe, case):
    # VERIFIED convention (objdump 0x14012a827): the table entry is an RVA-style
    # addend against the IMAGE BASE (`lea rdx,[rip]=0x140000000; mov ecx,[rdx+rax*4+0x13a7ac];
    # add rcx,rdx; jmp rcx`), so body = IMAGE_BASE + entry. Anchor check: 1075 -> 0x14012c33f.
    rel = pe.u32(IMAGE_BASE + TABLE_RVA + case * 4)
    return (IMAGE_BASE + rel) & 0xFFFFFFFFFFFFFFFF


def main(argv):
    pe = Pe(EXE)
    if "--anchors" in argv:
        ok = 0
        for t, want in sorted(ANCHORS.items()):
            got = case_of(pe, t)
            va = body_of(pe, got) if got is not None else None
            flag = "OK " if got == want else "BAD"
            ok += got == want
            print(f"{flag} type {t} -> case {got:#04x} (want {want:#04x}) "
                  f"body {va and hex(va)}")
        print(f"anchors ok: {ok}/{len(ANCHORS)}")
        return 0 if ok == len(ANCHORS) else 1
    for a in argv:
        if not a.isdigit():
            continue
        t = int(a)
        c = case_of(pe, t)
        if c is None:
            print(f"type {t}: outside the 1001..1729 range of this engine")
            continue
        va = body_of(pe, c)
        print(f"type {t}: case {c:#04x} body {hex(va) if va else 'UNRESOLVED'}")
    return 0


if __name__ == "__main__":
    sys.exit(main(sys.argv[1:]))
