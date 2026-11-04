# Guild-manager vtable slots +0x118 and +0x260 — decode

Status: IN PROGRESS (facts appended as verified)

## Known facts (given, to be verified against tree)
- 715 (`msgserver_gameaction.c:9239-9266`): param non-null, strlen < 0x24, byte-compare against the actor's own name (vtable +0x18) => false on equality; else `FUN_140087ed0()` then slot `+0x118(actor_id, param)` returned as bool.
- 720 (`msgserver_gameaction.c:9470-9471`): `FUN_140087ed0()` then slot `+0x260(param_4 + 0x14d)` where `param_4` is `longlong*` so that is byte offset 0xA68 of the action context.
- `FUN_140087ed0` (`MsgServer.c:99361-99372`) caches a manager from `CurrentInstanceGet()->vtable+0x20(instance, 0x16)`, i.e. registry slot 0x16.
- Other known slots on that manager: `+0x110` set member_title, `+0x1b0`, `+0x248`, `+0x268` get money, `+0x270` add money, `+0x2e8` has_domain (corroborated by case 0x2cd comparing literal strings 'money','member_title','has_domain').

---

## 1. Manager class identity — CONFIRMED: `syndicate::CSyndicate`

### 1a. Registry slot 0x16 is registered by Syndicate.dll
`decompiled/Syndicate.c:73130-73154` (`FUN_14177e890`, module init, called from `ModuleCreate`):

```c
puVar2 = FUN_1417b6210();                                     // Syndicate.c:73130
... 25 register calls (0x3ea,0x3eb,0x452,0x425,0x453,0x458,0x836,0x422,0x835,
    0x427,0x837,0x9ce,0x8b1,0x8b3,0x8b2,0xa3e,0xa49,0xa52 ...)  // vtable+8 = "register actor"
cVar1 = (**(code **)(**(longlong **)(param_1 + 0x420) + 0x18))(*(longlong **)(param_1 + 0x420),0x16,puVar2);  // Syndicate.c:73153
return cVar1 != '\0';
```
The last call is on the module-registry object with `vtable+0x18(registry, 0x16, this_module)`, i.e.
**slot 0x16 of the server registry is bound to the Syndicate module object** — the exact slot
`FUN_140087ed0` reads via `CurrentInstanceGet()->vtable+0x20(instance, 0x16)` (MsgServer.c:99369).
Matches the `+8`/`+0x10`/`+0x18` triple in `FUN_14177e890` (Syndicate.c:73131-73154).

### 1b. The module object is `syndicate::CModule`
`decompiled/Syndicate.c:73199-73203` (`FUN_14177ead0`, ctor called from `ModuleCreate`
Syndicate.c:73256):
```c
*param_1 = gs::IModule::vftable;
*param_1 = syndicate::CModule::vftable;
```
`ModuleCreate` (Syndicate.c:73242-73268) is the sole DLL export (`Syndicate.dll` export #1 =
0x14177ec90, verified from the PE export table). So `CurrentInstanceGet()->vtable+0x20(x,0x16)`
returns **`syndicate::CModule*`**, not `CSyndicate*`.

### 1c. BUT the manager is a distinct object fetched from CModule
`syndicate::CModule` is only a container. `FUN_1417b6210()` is the module-side service locator
(Syndicate.c, used ~11x), and the object whose slots +0x110/+0x248/+0x268/+0x270/+0x2e8 the
action code calls is a **different** class — the one whose ctor installs
`syndicate::CSyndicate::vftable` (`Syndicate.c:98553` and `Syndicate.c:98843`) and which owns the
guild maps (member map, rank map, blacklist). Log strings in that translation unit are all
`CSyndicate::*` (`Syndicate.c:86307, 91800, 94741, 94791, 96939, 191807, 191837, 205689`).
→ **manager class = `CSyndicate` (namespace `syndicate`)**; the registry 0x16 object is
`syndicate::CModule` and `FUN_140087ed0`'s return is the guild manager handle it exposes.
