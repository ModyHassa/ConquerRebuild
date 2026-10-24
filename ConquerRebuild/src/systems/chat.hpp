#pragma once
// CMsgTalk — packet 1004 (0x3EC) — the REAL chat/talk packet.
//
// IMPORTANT protocol correction: an earlier note claimed "chat=1001,
// 1004 is character movement" (from the fake TQServer skeleton). The
// real binaries prove otherwise:
//   server MsgServer.c world_kernel::CMsgTalk ctor FUN_14007a560 +
//     Create FUN_14007a620 (msgtalk.cpp): type written = 0x3EC (1004),
//     packer at wire-obj+0x1D capacity 0x3E1, stored len = packersize+0x1F.
//     (mapgroupkernel twin: ctor FUN_14015b240, Create FUN_14015b4a0.)
//   client Conquer.c ctor FUN_007ddf49 (wire at obj+4, packer buf at
//     obj+0x25 = wire+0x21 cap 0x3DD), client Create FUN_007de04a:
//     type 0x3EC, recv gate FUN_007de02e-region checks type==0x3EC.
//
// Create param semantics (server chatkernel chatmsgtalk.cpp log string):
//   Create(szSender, szReceiver, szWords, szEmotion, dwWordsColor,
//          unTxtAttribute, unTxtStyle, dwLookFace, GetAllOfficial, GetSex)
// Server wire writes (Create FUN_14007a620, base = obj+0x10 buffer):
//   buf+0 u4 TimeGet, +4 color, +8 attr u2, +A style u2, +C SysTime u4,
//   +14 lookface u4, +18 official u4, +1C sex u1, +1D packer
//   [sender][receiver][emotion][words] (that AddString order).
// Client Create (FUN_007de04a) sends on-wire:
//   +4 tick u4, +8 color u4, +C channel u2, +E style u2, +10 id u4,
//   +14 u4, +18 u4, +21 packer of SEVEN strings: [p1][p2][p4][p3(text)]
//   ["" ""][p10] — i.e. [sender][receiver][emotion][words][][][suffix].
// Server buffer base obj+0x10 = on-wire+4 (fields line up 1:1 with the
// client Create writes; packer on-wire+0x21 both sides).
//
// Channels (server chatkernel switch, MsgServer.c ~46695 + client chat
// window 0x7d1/0x7d2/0x962 cases):
//   2000 (0x7D0) team-ish, 2001 (0x7D1) normal TALK (500ms flood guard,
//     broadcast to screen), 2002 (0x7D2) whisper (5s spam gate client-side,
//     direct to receiver), 2003 (0x7D3), 2402 (0x962) horn item broadcast,
//   6002 (0x1772) gm/shield path. unTxtAttribute doubles as the display
//   channel on outbound packets.
#include "protocol/packet.hpp"
#include "protocol/ids.hpp"
#include <cstdint>
#include <string>
#include <vector>

namespace conquer {

// Build an outbound CMsgTalk (1004).
// channel here = unTxtAttribute slot (the client routes display by it).
inline Packet build_talk_1004(const std::string& sender,
                               const std::string& receiver,
                               const std::string& words,
                               const std::string& emotion,
                               uint32_t color,
                               uint16_t channel,
                               uint16_t style,
                               uint32_t lookface,
                               uint32_t official,
                               uint8_t sex) {
    Packet p(MSG_1004);
    p.write<uint32_t>(0);            // wire+0x04 tick (TimeGet) — cosmetic
    p.write<uint32_t>(color);       // wire+0x08 words color
    p.write<uint16_t>(channel);     // wire+0x0C unTxtAttribute / channel
    p.write<uint16_t>(style);       // wire+0x0E unTxtStyle
    p.write<uint32_t>(0);           // wire+0x10 time/id
    p.write<uint32_t>(0);            // wire+0x14 (client unwritten)
    p.write<uint32_t>(lookface);    // wire+0x18 dwLookFace
    p.write<uint32_t>(official);    // wire+0x1C GetAllOfficial
    p.write<uint8_t>(sex);          // wire+0x20 sex
    // wire+0x21 string packer: [sender][receiver][emotion][words]
    std::vector<uint8_t> pk;
    pk.push_back(4);
    auto put = [&pk](const std::string& s) {
        uint8_t n = static_cast<uint8_t>(s.size() > 255 ? 255 : s.size());
        pk.push_back(n);
        pk.insert(pk.end(), s.begin(), s.begin() + n);
    };
    put(sender); put(receiver); put(emotion); put(words);
    p.payload.insert(p.payload.end(), pk.begin(), pk.end());
    p.finalize();
    return p;
}

struct TalkPacket {
    uint32_t color = 0;
    uint16_t channel = 2001;
    uint16_t style = 0;
    uint32_t sender_id = 0;
    uint32_t lookface = 0;
    std::vector<std::string> strings; // [sender][receiver][emotion][words]...
    std::string sender() const { return strings.size() > 0 ? strings[0] : ""; }
    std::string receiver() const { return strings.size() > 1 ? strings[1] : ""; }
    std::string emotion() const { return strings.size() > 2 ? strings[2] : ""; }
    std::string words() const { return strings.size() > 3 ? strings[3] : ""; }
};

// Parse an inbound CMsgTalk (full wire bytes incl header).
inline TalkPacket parse_talk_1004(const uint8_t* d, size_t dsize) {
    TalkPacket t;
    if (dsize < 0x22) return t;
    t.color      = *reinterpret_cast<const uint32_t*>(d + 0x08);
    t.channel    = *reinterpret_cast<const uint16_t*>(d + 0x0C);
    t.style      = *reinterpret_cast<const uint16_t*>(d + 0x0E);
    t.sender_id  = *reinterpret_cast<const uint32_t*>(d + 0x10);
    t.lookface   = *reinterpret_cast<const uint32_t*>(d + 0x18);
    // packer at wire+0x21: [count u1][ [len u1][bytes] ]...
    size_t off = 0x21;
    if (off >= dsize) return t;
    uint8_t count = d[off++];
    t.strings.reserve(count);
    for (uint8_t i = 0; i < count && off + 1 < dsize; ++i) {
        uint8_t len = d[off++];
        if (off + len > dsize) break;
        t.strings.emplace_back(reinterpret_cast<const char*>(d + off), len);
        off += len;
    }
    return t;
}

} // namespace conquer
