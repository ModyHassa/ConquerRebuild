# Guild-manager vtable slots +0x118 / +0x260 — decode v2 (capstone vtable walk)

Status: IN PROGRESS — facts appended below as each is verified.

## 0. Known / given (verbatim from task, to be re-verified against files)

- 715 (decompiled/msgserver_gameaction.c:9239-9266) ends with `FUN_140087ed0()` then slot +0x118(actor_id, param_string) used as a bool.
- 720 (msgserver_gameaction.c:9470-9471) ends with `FUN_140087ed0()` then slot +0x260(param_4 + 0x14d) i.e. byte offset 0xA68 of the action context.
- FUN_140087ed0 (MsgServer.c:99361) caches the manager from CurrentInstanceGet()->vtable+0x20(instance, 0x16).
- Sibling slots: +0x110 set member title, +0x1b0, +0x248, +0x268 get money, +0x270 add money, +0x2e8 has_domain.

## 1. Environment

