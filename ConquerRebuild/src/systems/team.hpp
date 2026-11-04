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

}  // namespace conquer
