#!/usr/bin/env python3
"""Action-type coverage report: which cq_action types the server handles.

Implemented = a `case <type>:` appears in src/systems/actions.hpp (the
ProcessAction port). Rows come from the live cq_action table, so the
report ranks the REMAINING work by real DB weight instead of guesses.
Writes ACTION_COVERAGE.md and prints the top rows.
"""
import re
import subprocess
import sys
from pathlib import Path

ROOT = Path(__file__).resolve().parent.parent
SRC = ROOT / 'src/systems/actions.hpp'
DECOMP = ROOT.parent / 'decompiled/MsgServer.c'
ACTION_SWITCH = (190000, 280000)  # line range of the ProcessAction switch


def db_rows():
    q = ("SELECT type, COUNT(*) FROM cq_action GROUP BY type "
         "ORDER BY COUNT(*) DESC;")
    out = subprocess.run(
        ['mysql', '-h', '127.0.0.1', '-u', 'test', '-ptest', 'cq', '-N', '-e', q],
        capture_output=True, text=True).stdout
    rows = {}
    for line in out.splitlines():
        parts = line.split('\t')
        if len(parts) == 2 and parts[0].isdigit():
            rows[int(parts[0])] = int(parts[1])
    return rows


def implemented():
    src = SRC.read_text(errors='replace')
    return {int(m) for m in re.findall(r'case\s+(\d+)\s*:', src)}


def original_cases():
    """Every `case 0xNNN:` label inside the ProcessAction switch range."""
    lo, hi = ACTION_SWITCH
    out = set()
    with DECOMP.open(errors='replace') as f:
        for i, line in enumerate(f, 1):
            if i < lo:
                continue
            if i > hi:
                break
            for m in re.finditer(r'case\s+0x([0-9a-fA-F]+)\s*:', line):
                out.add(int(m.group(1), 16))
    return out


def main():
    rows = db_rows()
    have = implemented()
    orig = original_cases()
    total = sum(rows.values())
    done_rows = sum(n for t, n in rows.items() if t in have)
    lines = ['# Action-type coverage (generated)', '',
             f'- cq_action rows: **{total}**',
             f'- rows whose type has a `case` in actions.hpp: **{done_rows}** '
             f'({100.0 * done_rows / total:.1f}%)',
             f'- distinct types: **{len(rows)}**, implemented: '
             f'**{len([t for t in rows if t in have])}**', '',
             f'- original ProcessAction cases: **{len(orig)}**', '',
             '| type | rows | status |', '|---:|---:|:---|']
    for t, n in sorted(rows.items(), key=lambda kv: -kv[1]):
        if t in have:
            st = 'OK'
        elif t in orig:
            st = 'TODO (original has the case)'
        else:
            st = 'n/a (no case in the original switch)'
        lines.append(f'| {t} | {n} | {st} |')
    real = [(t, n) for t, n in rows.items() if t not in have and t in orig]
    other = [(t, n) for t, n in rows.items() if t not in have and t not in orig]
    lines += ['', '## Real remaining work (original switches on it)', '']
    for t, n in sorted(real, key=lambda kv: -kv[1]):
        lines.append(f'- type **{t}**: {n} rows')
    lines += ['', '## Not in the original switch (task-engine steps / no-ops)', '',
              f'{len(other)} types, {sum(n for _, n in other)} rows']
    for t, n in sorted(other, key=lambda kv: -kv[1])[:25]:
        lines.append(f'- type {t}: {n} rows')
    report = '\n'.join(lines) + '\n'
    (ROOT.parent / 'ACTION_COVERAGE.md').write_text(report)
    print(f'total rows {total}, covered {done_rows} '
          f'({100.0 * done_rows / total:.1f}%), '
          f'types {len(rows)}, covered {len([t for t in rows if t in have])}, '
          f'original cases {len(orig)}')
    for t, n in sorted(real, key=lambda kv: -kv[1])[:12]:
        print(f'  REAL TODO type {t}: {n} rows')


if __name__ == '__main__':
    sys.exit(main())
