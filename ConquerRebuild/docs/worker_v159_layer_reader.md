# v159 — the real map-document reader: it COMPOSES LAYERS
# (this is why the flat-file law of v154 never matched any .DMap)

I re-read the loader from its true entry instead of from the middle of the function.

## 1. Entry point
Reader entry = **`0x14056f380`** (`mov [rsp+0x10],rdx / mov [rsp+0x8],rcx` home-store prologue,
then push rbx/rbp/rsi/rdi/r12..r15, `sub rsp,0x148`).
The block I had been reading before (`0x14056fb80`) is **inside** this function, not its start.

Signature, from use:
- `rcx` -> `r15` = the **document** (CMapStaticData): `[r15]` = width, `[r15+4]` = height,
  `[r15+0x10]` = cell array (stride 4), `[r15+0x70]`/`[r15+0x78]` = a vector of ranges.
- `rdx` -> `r14` = the **source** (an interface object); `[rdx]` = the source's inner object.

## 2. It iterates LAYERS
```
14056f3af  mov rcx,[rdx]                  ; source->inner
14056f3b2  call 0x140571a80               ; -> LAYER COUNT ; stored [rsp+0x50]
14056f3c7  test eax,eax / jle 0x14056faf6 ; <=0 -> bail (nothing to load)
14056f3e0 (outer loop) r8d = layer index
14056f3eb  call 0x140572280               ; GetLayer(source->inner, &out, index)
14056f3f6  call 0x140570bd0               ; layer WIDTH  (value at [rax])
14056f40b  call 0x140570bf0               ; layer HEIGHT (value at [rax])
14056f41e  test ebp,ebp / jle             ; height <= 0 -> next layer
```
So **each layer carries its own width and height** — a document is a stack of layers of
different sizes, composed into one grid.

## 3. Per-cell composition (inner loops)
```
   y in [0,layerHeight)  ([rsp+0x58] = rbp)
   x in [0,layerWidth)   ([rsp+0x5c])
14056f450  x<0 -> skip   14056f458  y<0 -> skip
14056f461  cmp ebx,[r15]     ; x < DOC.width   else skip
14056f46a  cmp r12d,[r15+4]  ; y < DOC.height  else skip
14056f484  call 0x140570f90(layer, x, y, &cellOut)   ; get the LAYER cell
14056f4b0  call 0x14056d310(doc, x, y)               ; -> base index (dword)
14056f4c7  call 0x140570970(...)  ; target-cell setter #1 (base + returned value)
14056f4db  call 0x140570950(layerCell) -> u16 ; 0x140570980(target) = setter #2
14056f4f5  call 0x140570960(layerCell) -> u16 ; 0x140570990(target) = setter #3
14056f505  imul r11d,[r15]  ; doc.width * y
14056f509  add  r11d,ebx    ; + x
14056f50f  rax = [r15+0x10] + idx*4          <-- CELL STRIDE 4, index = width*y + x
14056f522  call 0x1405737d0(targetCell) -> value compared with 0xFFFF
14056f52c  jne 0x14056f73d                  ; != 0xFFFF -> the other branch
14056f532  rcx = [r15+0x78] - [r15+0x70]    ; otherwise a RANGE/span vector is consulted
```

## 4. What this proves and what it corrects
- The document cell layout matches v152 exactly: **4-byte cell, `index = width*y + x`**.
- The reader is a **layer composer**: every layer is walked and its cells are merged into the
  document grid, guarded by the document's own bounds.
- **v154's "flat file" model was the wrong frame**: the law
  `276 + dim*(6*dim+4) + 4 + 12n` could never match a `.DMap` because a `.DMap` stores
  **layers** (each with its own width/height), not one flat square grid. The flat reader that
  v155 ported still exists and is still faithful for the block it parses, but it is **not** the
  DMap path — the DMap path is this layer composer.
- Cell fields still match the binary's own debug string
  `cell(%d,%d), flr=%d, sur=%d, mask=%d`: three fields, written by the three setters
  (`0x140570970/0x140570980/0x140570990`), two of them u16 inputs.

## 5. Exact next probes (nothing else blocks 403/1509)
1. `0x140571a80`, `0x140572280` = the layer source interface. Resolve its **vtable** with the
   v150 RTTI technique and read the concrete class that parses the file (its `GetLayerCount` /
   `GetLayer`), which yields the on-disk layer record.
2. `0x14056f73d .. 0x14056f9ba` = the `!= 0xFFFF` branch plus the end-of-layer handling; this is
   where terrain objects/ranges (`[r15+0x70]..[r15+0x78]`) are applied (`CMapData::AddTerrainObj`
   lives on the same path — 403's furniture entry point).
3. `0x14056d310` = the doc-cell base index helper; confirm it is the `width*y + x` formula used
   by the store, not a per-layer offset.

Until (1) and (2) are read, **403 (93 rows) and 1509 (9 rows) stay BLOCKED**. No parser was
written on the old flat assumption.
