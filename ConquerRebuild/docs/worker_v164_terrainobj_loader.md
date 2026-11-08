# v164 — CTerrainObj loader (0x1405733c0): what is verified, what is still UNKNOWN

## Verified by disassembly
- `0x1405733c0` = the `CTerrainObj` file loader (failure literals `0x1407a6c98` "CTerrainObj cannot open file %s", `0x1407a6c70` "CTerrainObj cannot create terrain data").
- Opens the document with `fopen(path, "rb")` at `0x140573402` (mode literal "rb" at `0x140707ad8`, IAT `0x1406d8b00`); on failure it logs and returns null via the cleanup helper `0x140571d30`.
- Allocation helpers in the body: `0x1404fa1f0`, `0x140511ff0`; parse sub-steps: `0x140573160`, `0x140571f00`, `0x140571170`, `0x140570d20`, `0x140573260`, `0x14055f8d0`.
- **Terrain cell accessors are byte-exact** (0x1405737c0/7d0/7e0):
  - `movzx eax, WORD PTR [rcx]`      -> u16 field at cell+0x00
  - `movzx eax, WORD PTR [rcx+0x2]`  -> u16 field at cell+0x02
  - `movzx edx, BYTE PTR [rcx]`      -> u8  field at cell+0x00
  so a terrain cell is 4 bytes {u16, u16} with a byte view of the first field, which matches the 4-byte memory stride measured in v152 (`[doc+0x10] + (width*y+x)*4`) and the `cell(%d,%d), flr=%d, sur=%d, mask=%d` debug string.
- `imul ebx, r9d` at `0x14057384a` = the index multiply inside the part loop.

## Still UNKNOWN (do not guess)
- The on-disk record layout of the terrain document (header dwords A/B, part count, per-part width/height, per-cell encoding).
- Which of the two u16s is `sur` and which is `mask`, and how `flr` is derived from the byte view.

## Next probe (exact)
Read `0x140571170`, `0x140570d20`, `0x140573260` (the parse sub-steps) and the reads around `0x14057384a` with their `fread` size/count arguments; that yields the record layout. Then feed `walkable()` (0x1402c3cc0 + 0x14056ab10/ab30 + 0x1405623a0) real data and unblock 403 (93 rows) + 1509 (9 rows).
