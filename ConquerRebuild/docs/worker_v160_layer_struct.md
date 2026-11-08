# v160 — the layer container and the layer object, measured (no inference)

Reader entry `0x14056f380` = `CMapStaticData::Load(doc, source)`.

## The layer container lives on the SOURCE object
```
0x140571a80:  mov rax,[rcx+0x40] ; sub rax,[rcx+0x38] ; sar rax,4 ; ret
```
= `(this->[+0x40] - this->[+0x38]) / 0x10` -> a **std::vector whose element size is 0x10 bytes**,
i.e. one 16-byte entry per layer. The reader calls this once at 0x14056f3b2 and bails when the
result is <= 0 (`jle 0x14056faf6`).

## One layer object
```
0x140570bd0:  lea rax,[rcx+0x0c] ; ret          -> returns &layer[+0x0C]
0x140570be0:  mov [rcx+0x0c],edx ; mov [rcx+0x10],r8d ; ret   -> setter (width, height)
0x140570bf0:  lea rax,[rcx+0x18] ; ret          -> returns &layer[+0x18]  (sub-struct)
0x140570c00:  mov eax,[rcx+0x20] ; ret          -> dword at [+0x20]
```
So a layer carries **width at +0x0C and height at +0x10**, a sub-structure at +0x18 and a dword at
+0x20. The reader dereferences the pointers returned by `0x140570bd0` / `0x140570bf0`, which is why
every layer can have its own dimensions.

## How a layer is merged into the document (measured in 0x14056f380)
Per layer index i: `0x140572280(source->[0], &out, i)` -> layer; `w = *(0x140570bd0(layer))`,
`h = *(0x140570bf0-based path)`.
For `y` in `[0,h)` and `x` in `[0,w)`:
- guard `x >= 0 && y >= 0 && x < doc->[0] && y < doc->[4]` (document width/height), else skip;
- `0x140570f90(layer, x, y, &cell)` reads the layer cell;
- `0x14056d310(doc, x, y)` supplies the document base index;
- the target cell is `[doc+0x10] + (docWidth*y + x) * 4` — **4-byte cells, index = width*y + x**
  (identical to `CMapData::index`, 0x14056ab30, verified in v152);
- fields written via `0x140570970`, `0x140570980` (+u16 from `0x140570950`), `0x140570990`
  (+u16 from `0x140570960`);
- `0x1405737d0(cell)` is compared with **0xFFFF**; equal -> the range vector at `[doc+0x70]` /
  `[doc+0x78]` is consulted (the `AddTerrainObj` / region path at 0x14056f73d).

## What is therefore still missing (exactly one thing)
Everything from the layer vector inwards is measured. What is NOT yet read is the **file side**:
the parser that fills that 0x10-byte-entry vector (and the sub-struct at layer+0x18) from a `.DMap`.
That is the only unknown left before `walkable()` can be fed real data and 403 (93 rows) / 1509
(9 rows) can be ported.

This is why the v154 flat-size law could never match a `.DMap`: a document is a vector of layers,
not one flat grid, and the flat reader block at 0x14056fb80 reads a *layer block*, not the whole
document.

NO code was changed in this wave: inventing a layer file parser would violate the owner's rule.
