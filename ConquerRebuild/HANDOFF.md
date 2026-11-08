
### v159 terrain state (read this before touching 403/1509)
- Map documents are **layer stacks**: reader entry `0x14056f380`; layer count `0x140571a80`, layer `0x140572280`, layer w/h `0x140570bd0/0x140570bf0`, layer cell `0x140570f90`, doc index `0x14056d310`, store = `[doc+0x10] + (width*y + x)*4`.
- The v155 flat reader in `src/systems/mapdoc.hpp` is correct for a flat block file but is NOT the .DMap path; do not extend it with a flat parser.
- Remaining before 403/1509: (a) vtable of the layer source object (`source->[0]`) to get the on-disk layer record, (b) `0x14056f73d..0x14056f9ba` where `CMapData::AddTerrainObj` applies ranges/terrain objects.
