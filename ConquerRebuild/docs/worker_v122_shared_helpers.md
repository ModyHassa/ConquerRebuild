# v122 — the shared helpers behind 1043 / 1082 / 1096 / 1098

Register-level evidence (objdump on `../conquer_source/Source/MsgServer.exe`).
This file exists because those four types are blocked on the SAME few helpers, so
naming them once unblocks all four.

## 1. `FUN_1401181a0` — cached singleton component getter (THE linchpin)

```
1401181a0: sub  rsp,0x48
1401181a4: movq [rsp+0x30], -2                 ; once-guard sentinel
1401181ad: mov  eax, [0x140975d10]             ; init flag
1401181b3: test al,1
1401181b5: jne  0x1401181dc                    ; already built -> return cache
1401181b7: or   eax,1
1401181ba: mov  [0x140975d10], eax             ; set flag BEFORE the call
1401181c0: call qword ptr [0x1406d8df0]        ; imported kernel/service getter
1401181c6: mov  r8,[rax]                       ; vtable
1401181c9: mov  edx,0x14                       ; component id = 20
1401181ce: mov  rcx,rax
1401181d1: call qword ptr [r8+0x20]            ; service->vt[0x20](20)
1401181d5: mov  [0x140975d08], rax             ; cache the component
1401181dc: mov  rax,[0x140975d08]              ; return cache
```

So `FUN_1401181a0()` takes **no arguments** and returns a process-wide cached
component: `GetService()->vt[0x20](20)`. Every one of 1043 / 1082 / 1096 / 1098
calls it, so whatever component 20 is, it is the object those handlers act on.

UNKNOWN: the identity of component 20 (needs the enum behind `vt[0x20]`, i.e. the
service's factory switch). The IAT slot `0x1406d8df0` is the imported getter; its
name is not in the string table at the offsets the relocations point at.

## 2. 1096 — exact control flow (body 0x140137fa5)

```
140138068..99:  cmp r14d, [rsp+0x218] / [rsp+0x184] / [rsp+0x210] / [rsp+0x228]
                jl  0x1401381d8                 ; any token < 0 -> fail path
1401380a0: mov r15 -> action object
1401380a3: mov rax,[rcx]; mov edx,4
1401380ab: call [rax+0x10]                     ; pAction->vt[0x10](4) = data column
1401380ae: mov rdx,[rax]; mov rcx,rax
1401380b4: call [rdx+0x48]                     ; column->vt[0x48]() = its int value
1401380b7: mov r12d,eax                        ; r12 = the id
1401380ba: call 0x1401181a0                    ; the cached component (section 1)
1401380bf: mov rdi,[rax]                       ; vtable
1401380c2: mov edx,r12d; mov rcx,rax
1401380c8: call [rdi+0xd8]                     ; component->vt[0xd8](id) -> bool
1401380ce: test al,al ; je 0x140138164         ; "does not know id" -> other path
1401380d6: mov rcx,r13 ; call 0x140165da0      ; precondition(player) -> bool
1401380e0: je  0x14013a786                     ; false -> common fail epilogue
1401380e6: mov ecx,0x10 ; call 0x140511ff0     ; allocate a 16-byte node
140138100: mov [rax],r14d                      ;   +0  = 0
14013811c: mov [rdi+4],r12d                    ;   +4  = the id
140138107..0b: mov [rax+8],r14d / [rax+0xC],r14d ; +8,+0xC = 0
140138127: call [rax+0x8]                      ; hand the node to the player
```

Verdict: **1096 = "queue one entry identified by `cq_action.data` into the
component, if the component recognises the id and the player passes the
precondition"**. The 16-byte node `{0, id, 0, 0}` is the queue record.

## 3. Consequence for the blocked types

- 1043 (`user+0x1110` container): its iteration calls the same
  `FUN_1401181a0`; the container is therefore very likely a **member list of the
  component from section 1**, not an independent type. Closing component 20 closes
  1043's element type as a side effect.
- 1082's 9 helpers include `0x1401181a0` too, so it shares the same root.
- 1096/1098's "provider" (`vt+0xd8` / `vt+0x8`) IS the component from section 1.

Next single step that unblocks four types at once: resolve **component id 20**
(the `vt[0x20]` factory switch in the service object reached through
`[0x1406d8df0]`).
