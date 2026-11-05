#!/usr/bin/env python3
"""Audit every recorded router fact against the binary itself.

Two tables drive the new engine's action dispatch (FUN_14012a6e0):

    case = byte_map[0x13aa9c + (type - 1001)]        # .data VA 0x13aa9c
    body = 0x140000000 + u32[0x13a7ac + case*4]      # rel jump table

The ported code is only faithful if those two steps are recomputed, never copied.
This tool recomputes them for the whole 1001..1729 range and then CHECKS the
places where the same fact was written down by hand:

  1. tools/newengine_map.py  ANCHORS  (case label per type)
  2. docs/newengine_router.md rows with a hex case column
  3. src/systems/actions.hpp `case N:` labels (every ported type must resolve to
     a real body inside the router span, and no two types may share a body)
  4. uniqueness of the resolved bodies (a duplicated body means bad table math)

Exit code 1 on any mismatch, so it can gate a wave.

    python3 tools/router_audit.py            # full audit
    python3 tools/router_audit.py -v         # + every mismatch detail
"""
import os
import re
import struct
import sys

HERE = os.path.dirname(os.path.abspath(__file__))
ROOT = os.path.dirname(HERE)
EXE = os.path.join(ROOT, '..', 'conquer_source', 'Source', 'MsgServer.exe')

IMAGE_BASE = 0x140000000
MAP_RVA = 0x13AA9C
TABLE_RVA = 0x13A7AC
FIRST_TYPE, LAST_TYPE = 1001, 1729
FUNC_START, FUNC_END = 0x14012A6E0, 0x14013B000


def load_pe():
    data = open(EXE, 'rb').read()
    lfanew = struct.unpack_from('<I', data, 0x3C)[0]
    nsec = struct.unpack_from('<H', data, lfanew + 6)[0]
    hdr = struct.unpack_from('<H', data, lfanew + 20)[0]
    secs = []
    off = lfanew + 24 + hdr
    for i in range(nsec):
        name, vsz, vma, rsz, rma = struct.unpack_from('<8sIIII', data, off + i * 40)
        secs.append((name.rstrip(b'\0').decode(), vma, vsz, rma, rsz))
    return data, secs


def va_to_off(secs, va):
    rva = va - IMAGE_BASE
    for _, vma, vsz, rma, rsz in secs:
        if vma <= rva < vma + max(vsz, rsz):
            return rma + (rva - vma)
    return None


def table(data, secs):
    """type -> (case label, body VA or None)"""
    # both tables are RVAs inside the mapped image (the byte map sits in the
    # read-only tail of .text: RVA 0x13aa9c -> raw 0x1396bc), so resolve them
    # with the image base added.
    mo = va_to_off(secs, IMAGE_BASE + MAP_RVA)
    to = va_to_off(secs, IMAGE_BASE + TABLE_RVA)
    assert mo is not None and to is not None, 'router tables outside the image'
    out = {}
    for t in range(FIRST_TYPE, LAST_TYPE + 1):
        case = data[mo + (t - FIRST_TYPE)]
        rel = struct.unpack_from('<i', data, to + case * 4)[0]
        body = IMAGE_BASE + rel if rel else None
        out[t] = (case, body)
    return out


def audit(mapping, verbose):
    problems = []

    # 1) the tool's own anchor table
    sys.path.insert(0, HERE)
    import newengine_map as nm
    for t, case in sorted(getattr(nm, 'ANCHORS', {}).items()):
        if t not in mapping:
            problems.append(f'ANCHORS: type {t} is outside the router range')
        elif mapping[t][0] != case:
            problems.append(
                f'ANCHORS: type {t} recorded case {case:#04x}, binary says '
                f'{mapping[t][0]:#04x} (body {mapping[t][1] and hex(mapping[t][1])})')

    # 2) docs/newengine_router.md rows carrying a hex case
    doc = os.path.join(ROOT, 'docs', 'newengine_router.md')
    n_doc = 0
    if os.path.exists(doc):
        for line in open(doc, encoding='utf-8'):
            m = re.match(r'\|\s*(\d{3,4})\s*\|\s*[\d,]+\s*\|\s*[^|]+\|\s*(0x[0-9a-fA-F]{2})\s*\|',
                         line)
            if not m:
                continue
            t, case = int(m.group(1)), int(m.group(2), 16)
            if t not in mapping:
                continue
            n_doc += 1
            if mapping[t][0] != case:
                problems.append(
                    f'docs/newengine_router.md: type {t} recorded case {case:#04x}, '
                    f'binary says {mapping[t][0]:#04x}')

    # 3) ported cases in actions.hpp
    src = os.path.join(ROOT, 'src', 'systems', 'actions.hpp')
    ported = set()
    for line in open(src, encoding='utf-8'):
        for m in re.finditer(r'case (\d{3,4}):', line):
            t = int(m.group(1))
            if FIRST_TYPE <= t <= LAST_TYPE:
                ported.add(t)
    for t in sorted(ported):
        case, body = mapping[t]
        if body is None:
            problems.append(f'actions.hpp: type {t} resolves to NO body (case {case:#04x})')
        elif not (FUNC_START <= body <= FUNC_END):
            problems.append(
                f'actions.hpp: type {t} body {body:#x} is outside the router span')

    # 4) body uniqueness among the ported types
    seen = {}
    for t in sorted(ported):
        body = mapping[t][1]
        if body is None:
            continue
        if body in seen:
            problems.append(
                f'bodies: types {seen[body]} and {t} share body {body:#x}')
        else:
            seen[body] = t

    print(f'router span {FIRST_TYPE}..{LAST_TYPE}: {len(mapping)} types resolved')
    print(f'ported types in actions.hpp: {len(ported)} '
          f'({len(seen)} distinct bodies)')
    print(f'docs/newengine_router.md rows cross-checked: {n_doc}')
    if problems:
        print(f'\n{len(problems)} PROBLEM(S):')
        for p in (problems if verbose else problems[:12]):
            print('  -', p)
        if not verbose and len(problems) > 12:
            print(f'  ... and {len(problems) - 12} more (use -v)')
        return 1
    print('\nALL ROUTER FACTS MATCH THE BINARY')
    return 0


def main(argv):
    verbose = '-v' in argv
    data, secs = load_pe()
    return audit(table(data, secs), verbose)


if __name__ == '__main__':
    sys.exit(main(sys.argv[1:]))
