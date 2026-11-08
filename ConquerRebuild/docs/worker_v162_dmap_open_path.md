# v162 — the `.DMap` open/parse path located: `fopen(path, "rb")` inside 0x1405733c0

## 1. The composed call sequence (measured, in 0x14056ff00..0x14056ffd0)
```
14056ff0b  call 0x1405739a0   ; read 4 bytes -> [rsp+0x3C]        (dword A)
14056ff21  call 0x1405739a0   ; read 4 bytes -> [rsp+0x44]        (dword B)
14056ff36  call 0x1405733c0   ; build the SOURCE  (rcx=&[rsp+0x60], rdx=&[rsp+0xC0], r8d=0)
14056ff3c  rcx = [rsp+0x60]   ; the source object
14056ff44  je  0x140570156    ; source == 0  -> failure path
14056ff4a  rax = [rcx] ; r8d = [rsp+0x44] ; edx = [rsp+0x3C]
14056ff56  call [rax+0x8]     ; SOURCE->vt[0x8](dwordA, dwordB)
14056ff66..  shared_ptr copy into [rsp+0x50] (refcount at +0x10 / +0x14, lock add/sub)
14056ffcb  call 0x14056f380   ; the LAYER COMPOSER (v159/v160) with doc=rbx, source=&[rsp+0x50]
14056ffd0  test al,al ; je 0x1405700ED   ; composition result drives success/failure
```
So the two dwords read from the document file (A, B) are both handed to `source->vt[0x8]`,
and only then is the layer vector composed into the document grid.

## 2. `0x1405733c0` is the file opener/parser — verified by its own body
```
1405733c0  mov rax,rsp ; mov [rax+8],rcx           ; home-store (rcx = path buffer)
1405733c7.. push rsi,rdi,r12..r14 ; sub rsp,0x80
1405733ea  mov r13,rdx                             ; rdx = the second argument
1405733ed  mov rsi,rcx                             ; rcx = path buffer
1405733f8  lea rdx,[rip+0x1946d9]  -> 0x140707AD8  ; the literal is **"rb"**
1405733ff  mov rcx,r13
140573402  call qword [0x1406D8B00]                ; **fopen(path, "rb")**
```
`0x1406D8B00` is an imported CRT function and the literal at `0x140707AD8` is the two characters
`"rb"`, so this is `fopen(path, "rb")`. The same routine then allocates a 0x80-byte frame and
parses; its output is the refcounted **source** handed to the composer.

## 3. What this fixes in the picture
- The `.DMap` document file is opened **by this path** (binary mode), not by the flat reader of
  v155 — consistent with v159/v161 ("flat law matches no `.DMap`").
- The layer source is a **shared_ptr-managed object** (refcount at `+0x10`, weak/other at `+0x14`),
  constructed by `0x1405733c0` and then told to load via the virtual `vt[0x8](A, B)`.
- The two header dwords `A`, `B` are *inputs to the source*, not the document size — another reason
  the old "A must equal B = square dims" reading (v154) does not describe `.DMap`.

## 4. Remaining probe (single, precise)
Read `0x1405733c0` in full from 0x1405733c0 to its `ret`: its `fread` calls give the exact `.DMap`
layer record (and the meaning of A/B), then `source->vt[0x8]` (vtable slot 8 of the object the
composer consumes at `[rdx]`) closes the loop. After that `walkable()` (fully specified in
v151/v152) is fed real data and **403 (93 rows) + 1509 (9 rows)** unblock.

No code changed in this wave: nothing executable was promoted and no parser was invented.
Suite stays 102/102 because the change set is documentation only.
