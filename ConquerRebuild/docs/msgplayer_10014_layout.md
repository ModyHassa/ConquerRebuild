# CMsgPlayer (spawn, packet 10014 / 0x271E) - extracted layout

## Sources
- SERVER builder: MsgServer.c FUN_14039eef0 (CMsgPlayer::Create-ish, 466 lines, full dump in msgplayer_10014_builder.c)
- SERVER ctor: FUN_14039ed70 - fields base B = obj+0x10, fixed struct B+0..0x118,
  tq::CStringPacker buffer at obj+0x128 (= B+0x118), capacity 0x2e8
- CLIENT parser: Conquer.c FUN_008093fe (1146 lines); raw wire copy at obj+4,
  field reads at wire offsets 4..0x11C, string packer at wire 0x11C (buffer 0x2e4)
- CLIENT ctor: FUN_008092f9; type check FUN_14039ee30 server == 0x271e confirms id
- Wire header verified: [len:2 @+0][type:2 @+2] (client FUN_007837a4/FUN_0078379b)

## Wire geometry
wire = [len:2][type:2][fixed struct 0x118 bytes][string packer]
fixed struct starts at wire+4; B+off == wire+(4+off)

## Confirmed field (client+server agree)
- wire+0xC = player id (server B+8 = CUser GetID [vtbl+0x10]; client writes player[0x3c])
- wire+0x8 = status/lookface-family bitfield (client computes /1000%10, /10000000 bits)

## Field write table (server builder, offset -> CUser getter vtable slot, type)
| B+off | wire+off | type | getter vtbl |
| 0x8 | 0xc | undefined4* | +0x10 |
| 0x4 | 0x8 | undefined4* | +0x58 |
| 0x6f | 0x73 | undefined2* | +0x38 |
| 0xc | 0x10 | undefined4* | +0x170 |
| 0x10 | 0x14 | undefined4* | +0x178 |
| 0x14 | 0x18 | ushort* | +0x180 |
| 0x34 | 0x38 | undefined4* | +0x118 |
| 0x30 | 0x34 | undefined4* | +0xf8 |
| 0x38 | 0x3c | undefined4* | +0x100 |
| 0x40 | 0x44 | undefined4* | +0x108 |
| 0x3c | 0x40 | undefined4* | +0x110 |
| 0x72 | 0x76 | undefined4* | +0x60 |
| 0x76 | 0x7a | undefined2* | +0x68 |
| 0x4c | 0x50 | undefined4* | +0x298 |
| 0x63 | 0x67 | uint* | +0x78 |
| 0x63 | 0x67 | undefined4* | +0x78 |
| 0x67 | 0x6b | undefined4* | +0x10 |
| 0x69 | 0x6d | undefined2* | +0x70 |
| 0xd0 | 0xd4 | undefined1* | +0x298 |
| 0x103 | 0x107 | char* | +0x298 |
| 0x7a | 0x7e | undefined2* | +0x10 |
| 0x6b | 0x6f | undefined2* | +0x40 |
| 0x6d | 0x71 | undefined2* | +0x48 |
| 0x71 | 0x75 | undefined1* | +0x50 |
| 0x92 | 0x96 | undefined4* | +0x198 |
| 0x8e | 0x92 | undefined4* | +0x1a0 |
| 0x7e | 0x82 | undefined4* | +0x1a8 |
| 0x7d | 0x81 | undefined1* | +0x1c8 |
| 0x9a | 0x9e | undefined2* | +0x1b0 |
| 0x96 | 0x9a | undefined2* | +0x1b8 |
| 0x98 | 0x9c | undefined2* | +0x1c0 |
| 0xcd | 0xd1 | undefined1* | +0x280 |
| 0xd5 | 0xd9 | undefined4* | +0x128 |
| 0xd1 | 0xd5 | undefined4* | +0x120 |
| 0xdd | 0xe1 | undefined4* | +0x130 |
| 0xd9 | 0xdd | undefined4* | +0x138 |
| 0xe1 | 0xe5 | undefined1* | +0x1d0 |

Notes: fields not listed are written from computed values/flags or zeroed;
see the full builder dump for those cases. String packer order and the
CUser getter -> attribute mapping (level, hair, x, y, map, profession etc.)
is the remaining extraction step.
