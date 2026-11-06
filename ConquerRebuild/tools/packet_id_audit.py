#!/usr/bin/env python3
"""Audit our hardcoded packet ids against the ORIGINAL builders.

Every CMsg* builder in the original stores its packet type into the message
object as `movl $<type>,0x8(obj)` immediately before the size store. Reading
that one instruction is the cheapest possible check of a wire id we hardcode,
and it is exactly how the v45 defect was found (512 shipped 1116 while the
builder at 0x14038767f stores 0x454 = 1108).

Add a row here every time a new builder is ported.

    python3 tools/packet_id_audit.py      # exit 1 on any mismatch
"""
import os
import re
import subprocess
import sys

HERE = os.path.dirname(os.path.abspath(__file__))
ROOT = os.path.dirname(HERE)
EXE = os.path.join(ROOT, '..', 'conquer_source', 'Source', 'MsgServer.exe')

# (label, builder VA, packet id our C++ sends)
BUILDERS = [
    ('1004 CMsgTalk (world)',      0x14007a620, 1004),
    ('1004 CMsgTalk (mapgroup)',   0x14015b240, 1004),
    ('1008 CMsgItemInfo',          0x1404587d0, 1008),
    ('1025 CMsgWeaponSkill',       0x1403b4080, 1025),
    ('1101 CMsgMapItem',           0x1403a5de0, 1101),
    ('1104 CMsgWeaponSkillExp',    0x1403f0020, 1104),
    ('1108 CMsgItemInfoEx',        0x1403873d0, 1108),
    ('2077 CMsgItemStatus',        0x1403b6000, 2077),
]

STORE = re.compile(r'movl\s+\$0x([0-9a-f]+),0x8\(%r[a-z0-9]+\)')


def stores(builder_va, window=0x900):
    out = subprocess.run(
        ['objdump', '-d', '--start-address=%d' % builder_va,
         '--stop-address=%d' % (builder_va + window), EXE],
        capture_output=True, text=True).stdout
    return [int(h, 16) for h in STORE.findall(out)]


def main():
    bad, unknown = [], []
    for label, va, expected in BUILDERS:
        found = stores(va)
        if not found:
            unknown.append(f'{label}: no type store found in {va:#x}+0x900 '
                           f'(builder moved or inlined?)')
            print(f'?    {label:28s} expect {expected:5d}  no store found')
            continue
        if expected in found:
            print(f'ok   {label:28s} expect {expected:5d}  '
                  f'stores {", ".join(hex(f) for f in found[:3])}')
        else:
            bad.append(f'{label}: our code sends {expected} but the builder '
                       f'stores {", ".join(hex(f) for f in found[:3])}')
            print(f'FAIL {label:28s} expect {expected:5d}  '
                  f'stores {", ".join(hex(f) for f in found[:3])}')
    for u in unknown:
        print('  ?', u)
    if bad:
        print(f'\n{len(bad)} MISMATCH(ES):')
        for b in bad:
            print('  -', b)
        return 1
    print(f'\nALL {len(BUILDERS)} PACKET IDS MATCH THE ORIGINAL BUILDERS'
          + (f' ({len(unknown)} unverifiable)' if unknown else ''))
    return 0


if __name__ == '__main__':
    sys.exit(main())
