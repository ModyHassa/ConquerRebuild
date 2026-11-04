#!/usr/bin/env python3
"""Action-type coverage report for ConquerRebuild.

Reads cq_action from the real DB and diffs the types that actually have rows
against the types the engine handles (the `case N:` labels in src/systems).
Report only: it never fails a build, so run_suite stays green.

    python3 tools/coverage.py            # summary + top unported
    python3 tools/coverage.py --all      # every unported type with its row count
"""
import os
import re
import subprocess
import sys

DB = dict(host=os.environ.get("CQ_DB_HOST", "127.0.0.1"),
          user=os.environ.get("CQ_DB_USER", "test"),
          pw=os.environ.get("CQ_DB_PASS", "test"),
          name=os.environ.get("CQ_DB_NAME", "cq"))


def query(sql):
    r = subprocess.run(["mysql", "-h", DB["host"], "-u", DB["user"],
                        f"-p{DB['pw']}", DB["name"], "-N", "-B", "-e", sql],
                       capture_output=True, text=True)
    if r.returncode != 0:
        sys.exit(f"mysql failed: {r.stderr.strip()}")
    return r.stdout


def handled_types():
    """Every `case <number>:` in the systems/script sources. Approximate on
    purpose: a type counts as handled when a case label for it exists."""
    out = set()
    for root, _dirs, files in os.walk("src"):
        for f in files:
            if not f.endswith((".hpp", ".cpp")):
                continue
            if not any(k in root for k in ("systems", "script", "handlers")):
                continue
            text = open(os.path.join(root, f), errors="ignore").read()
            for m in re.finditer(r"case\s+(\d+)\s*:", text):
                out.add(int(m.group(1)))
    return out


def main():
    rows = {}
    total = 0
    for line in query("SELECT type, COUNT(*) FROM cq_action GROUP BY type").splitlines():
        parts = line.split()
        if len(parts) != 2 or not parts[0].isdigit():
            continue
        t, c = parts
        rows[int(t)] = int(c)
        total += int(c)
    have = handled_types()
    missing = sorted(((c, t) for t, c in rows.items() if t not in have),
                     reverse=True)
    miss_rows = sum(c for c, _ in missing)
    print(f"action types in DB      : {len(rows)}")
    print(f"types with a case label : {len(have & set(rows))}")
    print(f"unported types          : {len(missing)}")
    print(f"rows covered            : {total - miss_rows} / {total} "
          f"= {100.0 * (total - miss_rows) / total:.2f}%")
    limit = len(missing) if "--all" in sys.argv else 15
    print("\ntop unported types by row count:")
    for c, t in missing[:limit]:
        print(f"  type {t:<6} {c:>6} rows")
    return 0


if __name__ == "__main__":
    sys.exit(main())
