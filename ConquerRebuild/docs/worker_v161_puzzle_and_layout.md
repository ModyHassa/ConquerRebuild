# v161 — puzzle files are a separate class, and the map root layout (measured)

## 1. Two more original strings name the puzzle loader
Both live in `MsgServer.exe` and had been missed because they contain neither
`.dmap` nor `.pul` as a literal:

- **`CMapStaticData cannot open puzzle file %s`**
- **`CMapStaticData map %d (%s) cannot load puzzle %s, blocksize=%d`**

So a map document and its **puzzle** are two different files, and the puzzle is
loaded with a **blocksize** — exactly the `PuzzleGridSize=256` value that
`ini/GameMap.ini` carries per `[Map<mapdoc>]` (v158). The argument list of the
message is `(mapid, name, puzzlePath, blocksize)`.

## 2. The map root layout, as shipped in the archive (`Source/map/`)
```
Source/map/            <- the server's map root
  *.DMap               <- map documents at the root
  map/*.DMap           <- the documents GameMap.ini points at ("File=map/map/x.DMap")
  puzzle/*.pul         <- 300 puzzle files
  Scene/  ScenePart/   <- scene descriptors
  data/map/mapobj/     <- textures used by the map editor
```

## 3. Two measured negative results (do not redo them)
- The **flat reader law** `276 + A*(6A+4) + 4 + 12n` matches **none** of the 187
  `*.DMap` files (tested at every offset 0..1200 with A==B in 100..3000) and **none**
  of the sampled `puzzle/*.pul` files (6 files, 3..5 KB each, A in 50..3000).
- The `.pul` files are 3-5 KB, i.e. tile/puzzle descriptors, not cell grids, so they
  cannot be the walkability source.

**Consequence:** the flat block reader that v155 ports is a *different* file class
(the `mapdata` one) and must stay scoped to that; the walkability cells come from
the document's layer composer (`0x14056f380`, v159/v160).

## 4. The composer has exactly one caller
`grep 'call 0x14056f380'` over the whole of `MsgServer.exe` returns a single site:
**`0x14056ffcb`**. That caller is the only place where the layer source object is
built, so it is the entry point for the still-unread `.DMap` layer parser: it will
show (a) the source object's construction, (b) the file open/parse, and (c) the
vector of 0x10-byte layer entries measured in v160.

## Status
403 (93 rows) and 1509 (9 rows) remain **BLOCKED** on that one parser. No code was
changed in this wave: every statement above is a reading of the binary or of the
shipped data, and inventing a `.DMap` parser now would violate the project's
no-guessing rule. Suite remains 102/102 green because nothing executable changed.
