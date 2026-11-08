# v158 — the IMapData registry source found: `ini/GameMap.ini` (original data, now ported)

## 1. The file that fills the registry
`conquer_source/Source/ini/GameMap.ini` (98 lines of header + 115 sections, 470 lines
total; sibling `GameMap.dat` is the compiled form). It is the missing half of v156/v157:
the record fields we could not source are right here.

```
Amount=115
[Map1000]
File=map/map/desert.DMap
PuzzleGridSize=256
[Map1002]
File=map/map/newplain.DMap
PuzzleGridSize=256
...
[Map1626]
File=map/map/Easter.DMap
PuzzleGridSize=256
```

Mapping to what the binary does (v156): the section key is the **mapdoc id**, `File=` is
the pointer handed to the factory as `rdx` (`&record+0x20`), and `PuzzleGridSize=` is
`[record+0x1c]`, i.e. the `gridsize` printed by
`"load map %d from file %s, gridsize=%d"`. No invention was needed: the registry is an
INI table.

## 2. CORRECTION of v154 (the `.DMap` files ARE the server documents)
v154 concluded the 187 `Source/map/map/*.DMap` files were client/editor documents,
because no file satisfied the flat size law `276 + dim*(6*dim+4) + 4 + 12n`.
`PuzzleGridSize=256` explains the misfit: the document is stored as a **grid of 256x256
puzzle blocks**, so a single flat `dim*dim` cell array can never fit. The INI proves the
server reads `map/map/<name>.DMap` (and `Source/map/` is the server's `map/` root: it
also holds `data/map/mapobj`, the same relative layout), so these files are the original
documents after all. The per-block reader must be re-read at `0x14056fa80` with the
256x256 chunk layout in mind; that is the next step, and 403/1509 stay BLOCKED until it
is read (no parser is being guessed).

## 3. What was ported this wave (code, not notes)
`src/systems/mapdoc.hpp`, appended to the v155 terrain port:
- `struct MapDocEntry { int mapdoc; std::string file; int puzzle_grid_size; }`
- `struct MapDocRegistry { int amount; std::vector<MapDocEntry> entries; find(mapdoc); }`
- `bool load_game_map_ini(path, out)` — section/`Amount`/`File`/`PuzzleGridSize` parsing
  with the original INI reader's case-insensitivity; malformed lines are skipped.
- The data file is vendored **verbatim** at `data/game_map.ini`
  (md5 `b5428ceee64b30fa20d3e87d01dffbf8`, byte-identical to the shipped one).

`tests/mapdoc_unit_test.cpp` section 6 now parses the vendored INI and asserts:
`amount == 115`, `entries.size() == 115`, Map1002 -> `map/map/newplain.DMap` with
gridsize 256, Map1000 -> `map/map/desert.DMap`, Map1626 -> `map/map/Easter.DMap`,
and `find(999999) == nullptr`. Suite: **102/102 green**.

## 4. Next
Re-read the block reader (0x14056fa80..0x14056fdb0) against a real `newplain.DMap`
with 256x256 blocks: locate the chunk index table and the per-chunk cell stride, then
`walkable()` (0x1402c3cc0, already fully specified in v151) becomes live and 403
(93 rows) + 1509 (9 rows) unblock.
