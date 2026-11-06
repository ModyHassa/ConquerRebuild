# Worker: Component ID 20 of the Root service ("pProvider")

Started 2026-11-05. Target: identify what `FUN_1401181a0()` (getter of component id 0x14) returns.

## Verified fact 1 — the "service object" is the Root.dll singleton (NOT a vtable-bearing C++ class)
`FUN_1401181a0` @0x1401181a0:
```
1401181c0: call *0x5c0c2a(%rip)   # 0x1406d8df0
1401181c6: mov (%rax),%r8
1401181c9: mov $0x14,%edx
1401181ce: mov %rax,%rcx
1401181d1: call *0x20(%r8)
```
`[0x1406d8df0]` is the **first FirstThunk entry of the `Root.dll` import descriptor**
(import dir RVA 0x944788; descriptor for Root.dll has FirstThunk 0x6d8df0, 2 entries):
- `0x1406d8df0` -> `CurrentInstanceGet` (Root.dll)
- `0x1406d8df8` -> `GameCreate` (Root.dll)

So `CurrentInstanceGet()` returns the Root singleton, and `[singleton+0]` (mov (%rax),%r8) is the
pointer the code treats as a vtable; `+0x20` is a pure-virtual-style dispatcher taking
`(this, int id)` and returning the component pointer. 306 `call` sites reference 0x1406d8df0
i.e. `CurrentInstanceGet` is used everywhere in MsgServer.

CHECKF strings at the null-return guard (0x1401181e8..0x14011820c):
- file: `f:\version\cqserver-78.0.11-1204\msgserver\mapgroupkernel\mapgroup.h` (0x1406dc180)
- expression: `pProvider` (0x1406f3cf8), macro `MYASSERT` (0x1406da4c8), line `0x3f6` = 1014.

**Conclusion so far:** id 0x14 is obtained from the mapgroup* kernel's provider/component registry
class declared in `mapgroup.h`, whose member is named `pProvider`. The factory is
`Root::singleton->vtable[0x20/8] = slot 4` — i.e. Root's own `GetComponent/QueryInterface(id)`.

## Next step recorded
Root.dll and root_real.dll are present in ../conquer_source/Source/ -> disassemble CurrentInstanceGet
and the slot +0x20 target to map id 0x14 to a concrete class.

## Verified fact 2 — Root.dll is shipped in the source tree; the singleton is a CGame
`../conquer_source/Source/root.dll` (PE32+ x64, image base 0x141670000, exports:
`CurrentInstanceGet` @0x141671770, `GameCreate` @0x14167aa80, `CRoot::operator=`).

`CurrentInstanceGet` @0x141671770 is a 2-instruction getter:
```
141671770: mov 0x16b39(%rip),%rax   # 0x1416882b0   <-- global CGame* s_pInstance
141671777: ret
```
The only writer is inside `GameCreate` @0x14167abb8: `mov %rbx,0xd6f1(%rip) # 0x1416882b0`.
`GameCreate` allocates 0x1f0 bytes (0x14167aac5), constructs it via 0x14167a8b0, checks
`CGame::IsValidPt(pGame)` (`IF_NOT` @0x14167ab0a, string 0x141681cb0),
file `f:\version\cqserver-78.0.11-1204\root\src\game.cpp` (0x141681280).

=> The object at [0x1406d8df0] is a **CGame** instance (Root.dll). `[CGame+0]` is CGame's vtable,
and `CGame::vtable[0x20]` is a `(this, int componentId) -> void*` accessor.

## Verified fact 3 — `CGame::vtable[0x20]` is NOT a switch: it is a `std::map<unsigned int, T*>` lookup
Primary vtable of CGame = **0x141681bd8** (written at ctor 0x14167a8e4; second base vtable
0x141681bb8 written at 0x14167a8ee, i.e. CGame has 2 vtable pointers at +0/+8).
`vtable[0x20]` = slot 4 = **0x141676e70**:

```
141676e84: mov 0x48(%rcx),%rbx        ; CGame+0x48 = std::map _Myhead  (map starts at +0x48)
141676e88: mov %edx,%edi              ; edi = requested id
loop:      cmp %edx,0x18(%rax)       ; node key at +0x18 (32-bit int)
           mov 0x10(%rax),%rax       ; right
           mov (%rax),%rax           ; left
           cmpb $0x0,0x29(%rax)      ; node colour at +0x29  ==> MSVC std::_Tree node layout
141676f52: mov 0x20(%rbx),%rax       ; return node value (+0x20)
141676f2f: xor %eax,%eax             ; not found -> 0
```
So the accessor is `void* CGame::GetProvider(unsigned int id)` implemented as
`m_mapProviders.find(id)` over a **`std::map<unsigned int, void*>` located at CGame+0x48**.
There is no jump table; the concrete class cannot be read from Root.dll alone — it comes
from whatever module inserted the entry.

sizeof(map)=0x10, and the *next* member is the module map at **CGame+0x58**
(`lea 0x58(%r14),%rcx` at 0x141679de9, insert helper 0x1416793d0) => layout is consistent.

## Verified fact 4 — Root.dll is a DLL module host driven by adapter_cfg.ini
`CGame::Load` @0x141679a80..0x141679e40:
- reads `[Module] Amount` (0x141679ab0 -> CIni::GetData "Amount"),
- for i in 0..Amount-1: key `Module%d` (0x1416819e0/0x1416819ec), lowercased (tolower loop
  0x141679c42), skips name `frontierflagwar` (0x1416819d0, log 0x1416819a8 "GameServer Ignore Load Module[%s]!"),
- `LoadLibraryA`, `GetProcAddress(..., "ModuleCreate")` (0x141681958, error text 0x141681910
  "...ModuleCreate() is not found!"), then `call *%r11` **with (CGame* rcx, int edx)**:
  `141679d68: mov 0x14(%r14),%edx / lea 0x1(%rdx),%eax / mov %eax,0x14(%r14)` -> the module id
  handed to each DLL is `++CGame->m_nextModuleId`, initialised to **0x1388 = 5000** (ctor 0x14167a983).
  So ModuleCreate receives 5000, 5001, ... — NOT the small ids 13/20/30/31 that MsgServer passes.
So ids 0xd/0x14/0x1e/0x1f/0x20 are **provider ids inside the +0x48 map**, filled by the modules,
not the loader counter.

## Verified fact 5 — adapter_cfg.ini module table (32 modules, ../conquer_source/Source/adapter_cfg.ini)
```
Module0=Pigeon.dll   Module1=Training.dll  Module2=Peerage.dll   Module3=Guide.dll
Module4=Flower.dll   Module5=Rank.dll      Module6=Competion.dll Module7=Family.dll
Module8=TaskDetail   Module9=Title.dll     Module10=Lottery.dll  Module11=Storage.dll
Module12=Arenic.dll  Module13=Syndicate    Module14=DetainEquip   Module15=Status.dll
Module16=Totem.dll   Module17=ElitePKArenic Module18=FactionMatch Module19=Sponsor.dll
Module20=Trade.dll   Module21=Booth.dll    Module22=VexillumArenic Module23=LeaveWord
Module24=Wanted.dll  Module25=Relation.dll Module26=ClanPKArenic Module27=PopPkArenic
Module28=Team.dll    Module29=TeamArenic     Module30=FrontierFlagWar Module31=Anticheat
```
(NOTE: index 20 = Trade.dll is a *coincidence candidate only*; the id space must be proven
from a module, see next.)
