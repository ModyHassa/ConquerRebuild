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


def main():
    rows = db_rows()
    have = implemented()
    total = sum(rows.values())
    done_rows = sum(n for t, n in rows.items() if t in have)
    lines = ['# Action-type coverage (generated)', '',
             f'- cq_action rows: **{total}**',
             f'- rows whose type has a `case` in actions.hpp: **{done_rows}** '
             f'({100.0 * done_rows / total:.1f}%)',
             f'- distinct types: **{len(rows)}**, implemented: '
             f'**{len([t for t in rows if t in have])}**', '',
             '| type | rows | status |', '|---:|---:|:---|']
    for t, n in sorted(rows.items(), key=lambda kv: -kv[1]):
        lines.append(f'| {t} | {n} | {"OK" if t in have else "TODO"} |')
    missing = [(t, n) for t, n in rows.items() if t not in have]
    lines += ['', '## Remaining by weight', '']
    for t, n in sorted(missing, key=lambda kv: -kv[1]):
        lines.append(f'- type **{t}**: {n} rows')
    report = '\n'.join(lines) + '\n'
    (ROOT.parent / 'ACTION_COVERAGE.md').write_text(report)
    print(f'total rows {total}, covered {done_rows} '
          f'({100.0 * done_rows / total:.1f}%), '
          f'types {len(rows)}, covered {len([t for t in rows if t in have])}')
    for t, n in sorted(missing, key=lambda kv: -kv[1])[:10]:
        print(f'  TODO type {t}: {n} rows')


if __name__ == '__main__':
    sys.exit(main())
