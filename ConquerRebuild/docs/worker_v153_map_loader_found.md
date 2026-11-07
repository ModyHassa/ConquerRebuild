# v153 — the SERVER map loader exists: `"load map %d from file %s, gridsize=%d"`

## 1. The decisive string (this corrects v149/v150's "the server never names a map file")
`MsgServer.exe` contains **two format strings that were missed** because they contain neither `.dmap` nor
`.pul`:
```
0x1407a5768  "load map %d from file %s, gridsize=%d"
0x1407a5758  "CMapData cannot load map %d from file %s, gridsize=%d"
```
So the server **does** read the map from a file, the path arrives as an **argument** (%s, which is why no
path literal exists), and the file carries a **grid size** - i.e. a gridded cell map.

## 2. The verified call chain (each link read in the disassembly)
```
factory @ ~0x140568d60   (args: ecx = mapId, rdx = file, r8d = gridsize)
   ├─ call 0x140570300   (rsp+0x30 <- returned shared_ptr; args: edx=mapId, r8=file, r9d=gridsize)
   │     └─ the actual loader; on failure logs 0x1407a5758, on success the 0x1407a5768 message
   ├─ if handle == 0 -> log 0x1407a5758 and return 0
   └─ new(0x1d0)                       <- **CMapData object size = 0x1D0 bytes** (matches +0x1C0/+0x1C8)
      shared_ptr copy via 0x14055f840
      call 0x140568960               <- **CMapData ctor** (only caller in the whole binary: 0x140568e1c)
```
`0x140568960` (CMapData ctor) verified body: stores base vtable `0x1407a4638`, then `CMapData` vtable
**`0x1407a5698`**, then initialises an embedded std::map at `this+0x30` (head node + `_Myhead` via 0x14055fff0).
Its only caller is the factory, so **the factory is the single entry point that creates a loaded map**.
Upward: `0x140568bd0` is called from exactly one place, `0x14056907f`; the chain continues above that, and the
**path provider sits further up** (it is the code that turns a `mapdoc`/map id into that `%s`).

## 3. Why the earlier "client-only" conclusion was wrong (recorded so it is not repeated)
v149 measured the archive's `.DMap` files (they embed `map\...\<Name>.pul` client paths) and v150 noted no
`.DMap`/`.pul` literal exists in the server -> concluded "server-side format unknown, client-only". The real
facts are: the server reads a file whose path comes from configuration/DB, and the loader logs
`map_id + file + gridsize`. The `gridsize` term also means the cell grid is **chunked**, which explains why
v151's `.DMap` byte counts did not factor as a plain `width*height`.

## 4. Next probe (single, precise)
Walk up from `0x14056907f`/`0x140568bd0` to the function that supplies `%s` (follow the `file` argument back to
its `std::string`/`char*` source). That call site is where the server derives the on-disk name from the map /
mapdoc, and it will settle (a) the directory + extension, (b) whether the shipped `.DMap` files are the server
format, and (c) the `gridsize` value used per map. Only then can `walkable()` (fully specified in v151/v152)
be ported, unblocking 403 (93 rows) and 1509 (9 rows).
