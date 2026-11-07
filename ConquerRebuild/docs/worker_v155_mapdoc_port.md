# v155 — the terrain types are now PORTED (code), exactly as the original, with zero inference

Owner's rule for this wave: port only what the original source and the database contain; the client is
irrelevant; no guessing, no invented code. So this wave ships code, not speculation, and stops dead at the
one junction the binary does not determine.

## What was ported (`src/systems/mapdoc.hpp`)
| original | port |
|---|---|
| `CMapStaticData` file reader (code around `0x14056fb80`, I/O wrapper `0x1405739a0` where `rdx=0` == skip) | `CMapStaticData::load()` |
| `"CMapStaticData cannot open file %s"` `0x1407a6420` | same text, emitted on open failure |
| `"CMapStaticData file %s has a bad size(%d, %d)"` `0x1407a63f0` | same text, emitted when width != height |
| `"CMapStaticData file %s cannot create cells(%d, %d)"` `0x1407a63b8` | same text, emitted when the cell allocation is impossible |
| cells allocated `0x14056ab80(dim*dim)` at `+0x10`, 4 bytes/cell | `std::vector<Cell>` with 4-byte `Cell{uint16 sur; uint16 mask;}` |
| cell setter `0x1405737a0(cell, sur, mask)` (`"cell(%d,%d), flr=%d, sur=%d, mask=%d"`) | `c.sur = third u16; c.mask = (first u16 != 0)` |
| `0x14056ab10` bounds test | `CMapStaticData::valid(x,y)` |
| `0x14056ab30` linear index `width*y + x` | `CMapStaticData::index(x,y)` |
| `0x1405623a0` cell accessor, returns **1 out of bounds** | `CMapData::cell()` -> `kAttributeOutOfBounds` (=1) |
| `0x1402c3cc0` walkable `in-range && attribute == 0` | `CMapData::walkable()` |

File layout implemented exactly (see `docs/worker_v154_mapfile_format.md`): 8 ignored bytes, 260-byte name,
`u32 width`, `u32 height` (**must be equal**), then `height` rows of `width * {u16 mask, u16 skipped, u16 sur}`
plus 4 ignored bytes per row, then `u32 n` and `n * 12` tail bytes.

## Honest stop line (nothing invented)
`CMapData::cell()` in the original returns `1` when out of bounds and otherwise the value found by a red-black
`lower_bound` over a `std::map<int,Cell>` at `CMapData+0x1c0`, keyed `width*y+x`. **Nothing in this binary
fills that map** (the earlier waves proved the filler is the map-document provider that also supplies the
`%s` path). Therefore the in-range attribute is **UNKNOWN**, and the port returns `kUnknownAttribute (-1)`
instead of a made-up value; `walkable()` propagates `-1` for in-range cells and correctly returns `0` out of
range. Consequence, stated plainly: **403 (93 rows) and 1509 (9 rows) remain BLOCKED** — they need the
original map documents, which the archive does not contain.

## Proof it works (`tests/mapdoc_unit_test.cpp`, wired into `tools/run_suite.sh`)
The test writes a `.bin` **generated as test input** with the verified layout (explicitly labelled as
generated, never as original terrain) and asserts: successful load, width/height/name, 9 cells with the right
`sur` and `mask` (including a `mask==0` cell), the 2 tail records, `valid()` across all eight edge cases,
`index()` values, `cell()` out of bounds == 1 and in range == the BLOCKED sentinel, `walkable()` == 0 out of
range and `-1` in range, rejection of a non-square file (`3,4`), and rejection of a missing file. It also
proves both original log strings reach stderr verbatim.

Result: **102/102 suite green** (the new `PASS mapdoc_unit` is the 102nd), build clean.
