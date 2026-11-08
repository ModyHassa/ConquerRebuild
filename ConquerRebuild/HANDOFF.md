
### v159 terrain state (read this before touching 403/1509)
- Map documents are **layer stacks**: reader entry `0x14056f380`; layer count `0x140571a80`, layer `0x140572280`, layer w/h `0x140570bd0/0x140570bf0`, layer cell `0x140570f90`, doc index `0x14056d310`, store = `[doc+0x10] + (width*y + x)*4`.
- The v155 flat reader in `src/systems/mapdoc.hpp` is correct for a flat block file but is NOT the .DMap path; do not extend it with a flat parser.
- Remaining before 403/1509: (a) vtable of the layer source object (`source->[0]`) to get the on-disk layer record, (b) `0x14056f73d..0x14056f9ba` where `CMapData::AddTerrainObj` applies ranges/terrain objects.

### v160
- Layer container/object offsets measured (see docs/worker_v160_layer_struct.md). SINGLE remaining unknown: the .DMap parser that fills the 0x10-byte layer-entry vector.

### v161
- Puzzle is a separate file (blocksize = PuzzleGridSize). Only one caller of the layer composer: 0x14056ffcb. Start the next wave there to reach the .DMap layer parser (then walkable() unblocks 403 + 1509).

### v162
- .DMap open path = 0x1405733c0 -> fopen(path,"rb") (literal at 0x140707AD8, IAT 0x1406D8B00); two header dwords A/B are inputs to the layer source, then source->vt[0x8](A,B), then composer 0x14056f380. Start the next wave by reading 0x1405733c0's fread sequence.

### v163
- 0x1405733c0 = CTerrainObj file loader ("CTerrainObj cannot open file %s" 0x1407a6c98, "CTerrainObj cannot create terrain data" 0x1407a6c70). Layers = CTerrainObjPart. Next wave: read 0x1405733c0 in full to get the terrain-object file format and what A/B mean.

### v164
- CTerrainObj loader = 0x1405733c0 (fopen "rb" @0x140573402). Cell accessors @0x1405737c0/7d0/7e0: u16@+0, u16@+2, u8@+0. Next: read the parse sub-steps 0x140571170 / 0x140570d20 / 0x140573260 for the record layout.
