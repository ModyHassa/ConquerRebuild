# v154 — the server map-file format, read instruction by instruction

## Where it is read
`CMapStaticData` file reader (contains `0x14056fb80`, the error strings live at
`0x1407a6420` / `0x1407a63f0` / `0x1407a63b8`). I/O goes through the wrapper `0x1405739a0`
(`rcx` = file object at `rsp+0x30`, `rdx` = destination, `r8d` = count, `r9d` = element size;
`rdx = 0` means **skip** those bytes).

## Verified read sequence
| step | call | meaning |
|---|---|---|
| 1 | `0x140573ea0` / `0x140573980` | open + success test; fail -> `"CMapStaticData cannot open file %s"` |
| 2 | skip 8 bytes | unknown 8-byte header (not used by the code) |
| 3 | read 1 x **0x104 (260)** bytes into a name buffer | the map document's own name/path string |
| 4 | read 4 bytes -> `[rbx]` | **dimension A** |
| 5 | read 4 bytes -> `[rbx+4]` | **dimension B** |
| 6 | `cmp A,B; je ok` | if different -> `"CMapStaticData file %s has a bad size(%d, %d)"` + fail => **the grid MUST be square** |
| 7 | `0x14056ab80(dim*dim)` (cells at `[rbx+0x10]`) | allocate the cell array; fail -> `"CMapStaticData file %s cannot create cells(%d, %d)"` |
| 8 | double loop `y` in `[0..B)`, `x` in `[0..A)` | per cell: read **u16 A**, **skip u16**, read **u16 C**; then `mask = (A != 0)`, `sur = C`, `idx = A_dim*y + x`, and `0x1405737a0(&cells[idx], sur, mask)` |
| 9 | after every row: skip **4** bytes | per-row trailer/padding |
| 10 | after all rows: read u32 `n`, then `n` x **12** bytes | a trailing record list (objects/regions - consumer not yet read) |

## The cell record (from the binary's own debug format)
`0x14073d840  "cell(%d,%d), flr=%d, sur=%d, mask=%d"` -> a cell has **flr, sur, mask**.
The reader stores `sur` and a `mask` boolean and skips one u16 (the `flr` half of the file record but not
consumed by this path), so the **file cell is 6 bytes**: `[u16 (mask!=0)][u16 (skipped)][u16 sur]`.
In memory the cell array is **4 bytes per cell** (`lea rcx,[cells + idx*4]`), indexed `dim*y + x`, which is
exactly `CMapData::index()` from v152 (`width*y + x`).

## Consequence (this closes the v149/v150/v151 question)
```
header = 8 + 260 + 4 + 4 = 276 bytes
rows   = dim * (6*dim + 4)
tail   = 4 + 12*n
=> file size == 276 + dim*(6*dim+4) + 4 + 12n
```
I scanned **the whole archive** (`conquer_source`, every file) for that layout with `dim` in `[50,4000]` and
the two u32s at `+268/+272` equal to `dim`: **0 matches**. The 187 `map/map/*.DMap` files are therefore
**not** the server format (they are the editor/client documents), so:
- the **format is now fully known** and the loader can be ported faithfully, but
- the **server map documents themselves are not in the archive** - 403 (93 rows) and 1509 (9 rows) stay
  BLOCKED on that data, not on code, and nothing was invented.
Legitimate ways forward (both documented, none guessed): obtain the server-side map documents from a v6159
install, or generate **fixture** map documents for tests using this verified layout (fixtures = authored
data, clearly labelled, never presented as original terrain).
