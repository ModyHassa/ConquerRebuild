#pragma once
// v98: the team module (Team.dll, registry index 0x1e). Every rule below is
// taken from docs/team_wire_decode.md, which cites the original per line; no
// behaviour here is invented. Teams are PURELY IN-MEMORY in the original: the
// dump has no cq_team table, the module owns its own map of CTeam objects
// (allocated from the "CTeam" heap tag, Team.c:865/879/896/913/2096/2143).
#include <cstdint>
#include <map>
#include <string>
#include <vector>

#include "protocol/packet.hpp"

namespace conquer {

// CTeam layout proven by the v98 decode: +0x20 member array, +0x28 its end
// (count = (end-start)/4), +0x3c id, +0x40 leader id, +0x44 closed flag,
// +0x45/+0x46/+0x47 flags. The 5-member cap is the clamp in
// FUN_1418e22b0 (Team.c:940-945) confirmed by four "< 5" gates.
struct Team {
    uint32_t id = 0;                 // +0x3c
    uint32_t leader = 0;             // +0x40
    std::vector<uint32_t> members;   // +0x20 .. +0x28
    bool closed = false;             // +0x44
    bool f45 = false;
    bool f46 = false;
    bool f47 = false;
};

class TeamManager {
public:
    static constexpr std::size_t MAX_MEMBERS = 5;

    Team* get(uint32_t id) {
        auto it = teams_.find(id);
        return it == teams_.end() ? nullptr : &it->second;
    }
    // registry slot +0x28 = LookupUserTeam(id); 0 means "no team"
    Team* lookup_user_team(uint32_t uid) {
        auto it = by_user_.find(uid);
        return it == by_user_.end() ? nullptr : get(it->second);
    }
    // registry slot +0x50 = GetMemberCount: the count clamped to 5
    std::size_t member_count(const Team& t) const {
        return t.members.size() < MAX_MEMBERS ? t.members.size() : MAX_MEMBERS;
    }
    bool is_member(const Team& t, uint32_t uid) const {
        for (uint32_t m : t.members)
            if (m == uid) return true;
        return false;
    }
    Team* create(uint32_t leader) {
        Team t;
        t.id = next_id_++;
        t.leader = leader;
        t.members.push_back(leader);
        by_user_[leader] = t.id;
        auto [ins, _] = teams_.emplace(t.id, t);
        return &ins->second;
    }
    void remove_member(Team& t, uint32_t uid) {
        for (auto it = t.members.begin(); it != t.members.end(); ++it)
            if (*it == uid) { t.members.erase(it); break; }
        by_user_.erase(uid);
    }
    void add_member(Team& t, uint32_t uid) {
        t.members.push_back(uid);
        by_user_[uid] = t.id;
    }
    void disband(Team& t) {
        for (uint32_t m : t.members) by_user_.erase(m);
        teams_.erase(t.id);
    }
    std::size_t team_count() const { return teams_.size(); }

private:
    std::map<uint32_t, Team> teams_;
    std::map<uint32_t, uint32_t> by_user_;
    uint32_t next_id_ = 1;
};

inline TeamManager& team_manager() {
    static TeamManager m;
    return m;
}

// CMsgTeam 1023 (0x3ff): a fixed 12-byte packet with NO packed string -
// size@+0, type@+2, sub-command@+4 (u16), argument@+8 (u32); builder
// FUN_1418f3900 (Team.c:14348-14355), parser FUN_1418f3970 (Team.c:14327).
inline Packet build_team_1023(uint16_t sub, uint32_t arg) {
    Packet p(1023);
    p.write<uint16_t>(sub);
    p.write<uint16_t>(0);        // the gap at +6 the original never writes
    p.write<uint32_t>(arg);
    p.finalize();
    return p;
}

// CMsgTeamMember 1026 (0x402): builder FUN_1418f3ae0 (Team.c:14393-14410).
// PROVEN layout: size 0x94 @+0, type 0x402 @+2, mode byte 0 @+4 (both call
// sites Team.c:6346/6364 pass 0), constant 1 @+5, then SEVEN dwords copied from
// the team-info struct at +8..+0x20: team_id, leader, member[5]. The bytes from
// +0x24 to 0x94 are left as they are (zero). Sent to the whole team after any
// membership change (manager slot +0x68 = SendToTeam).
inline Packet build_team_1026(const Team& t) {
    Packet p(1026);
    p.write<uint8_t>(0);                 // +0x04 mode (proven 0)
    p.write<uint8_t>(1);                 // +0x05 constant
    p.write<uint16_t>(0);                // pad to the +0x08 dword boundary
    p.write<uint32_t>(t.id);             // +0x08
    p.write<uint32_t>(t.leader);         // +0x0C
    for (std::size_t i = 0; i < TeamManager::MAX_MEMBERS; ++i)   // +0x10 .. +0x20
        p.write<uint32_t>(i < t.members.size() ? t.members[i] : 0);
    while (p.payload.size() + 4 < 0x94) p.write<uint8_t>(0);   // pad to 0x94
    p.finalize();
    return p;
}   // NOTE: +0x24..0x94 are not read by the builder (it only writes 7 dwords).

// ---------------------------------------------------------------- 2045 0x7fd
// CMsgTeamStatus 2045 (0x7fd): ALWAYS 0x14 (20) bytes -
// size u16 @+0, type 0x7FD @+2, sub-command u16 @+4, then up to three dwords.
// Four builders exist in the original and their layouts are PROVEN
// (Team.c:14098-14162); their TRIGGERS are not, so nothing here is sent yet:
//   FUN_1418f34f0: sub u16 @+4, u8 arg @+8            "closed" notice (see note)
//   FUN_1418f3530: sub 1 @+4, d1 @+8, d2 @+0xC, d3 @+0x10   (team status)
//   FUN_1418f3590: sub 3 @+4, d1 @+8, d2 @+0x10, d3 @+0xC   (NOTE the swap)
//   FUN_1418f35f0: sub 4 @+4, d1 @+8                         (single id)
// DEAD CODE FOUND: the only caller of the sub-0 builder sits behind the team's
// +0x47 flag (the "close team" sub-command 8), and +0x47 is NEVER set to 1
// anywhere in Team.c (only cleared, lines 531 and 1598), so the original never
// actually emits it. We therefore do not emit it either.
enum Team2045 : uint16_t {
    TEAM_2045_CLOSED = 0,   // FUN_1418f34f0, u8 payload (dead path)
    TEAM_2045_STATUS = 1,   // FUN_1418f3530, three dwords
    TEAM_2045_SWAPPED = 3,  // FUN_1418f3590, d2/d3 swap
    TEAM_2045_ONE = 4,      // FUN_1418f35f0, one dword
};

inline Packet build_team_2045_u8(uint16_t sub, uint8_t arg) {
    Packet p(2045); p.write<uint16_t>(sub); p.write<uint16_t>(0);
    p.write<uint8_t>(arg); p.write<uint8_t>(0); p.write<uint16_t>(0);
    p.finalize(); return p;
}
inline Packet build_team_2045_3d(uint16_t sub, uint32_t d1, uint32_t d2, uint32_t d3) {
    Packet p(2045); p.write<uint16_t>(sub); p.write<uint16_t>(0);
    p.write<uint32_t>(d1); p.write<uint32_t>(d2); p.write<uint32_t>(d3);
    p.finalize(); return p;
}
// FUN_1418f3590 writes d2 to +0x10 and d3 to +0x0C (the opposite of the other
// three-dword builder) - kept explicit so the swap can never be lost.
inline Packet build_team_2045_sub3(uint32_t d1, uint32_t d2, uint32_t d3) {
    Packet p(2045); p.write<uint16_t>(3); p.write<uint16_t>(0);
    p.write<uint32_t>(d1); p.write<uint32_t>(d3); p.write<uint32_t>(d2);
    p.finalize(); return p;
}
inline Packet build_team_2045_one(uint32_t d1) {
    Packet p(2045); p.write<uint16_t>(4); p.write<uint16_t>(0);
    p.write<uint32_t>(d1); p.write<uint32_t>(0); p.write<uint32_t>(0);
    p.finalize(); return p;
}

}  // namespace conquer
