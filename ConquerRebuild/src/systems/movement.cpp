#include "systems/movement.hpp"
#include "core/pb.hpp"
#include "protocol/ids.hpp"
#include <cstdio>
#include <algorithm>

namespace conquer {

bool MovementSystem::process_walk(Player& p, const std::vector<uint8_t>& payload,
                                  World& world, Packet& out_relay) {
    // Decode the protobuf walk payload (CMsgWalkPB, fields 1..5 verified
    // against the decompiled client serializer).
    WalkMsg w;
    size_t pos = 0, end = payload.size();
    pb::Field f;
    while (pb::next_field(payload.data(), pos, end, f)) {
        switch (f.number) {
            case 1: w.direction_steps = (uint32_t)f.varint; break;
            case 2: w.id              = (uint32_t)f.varint; break;
            case 3: w.mode            = (uint32_t)f.varint; break;
            case 4: w.timestamp       = (uint32_t)f.varint; break;
            case 5: w.key             = (uint32_t)f.varint; break;
            default: break; // unknown fields ignored (protobuf rule)
        }
    }

    const uint32_t dir = w.direction_steps & 7;
    const uint32_t steps = w.direction_steps >> 3;
    (void)steps;

    // Server-side authority: move the player one tile in the walk
    // direction (the client sends one walk packet per tile step; run
    // mode packs additional steps into field 1's high bits).
    int dx = 0, dy = 0;
    dir_delta(dir, dx, dy);
    int nx = (int)p.pos.x + dx;
    int ny = (int)p.pos.y + dy;
    if (nx < 0 || ny < 0 || nx > 2048 || ny > 1536) {
        std::printf("[walk] %s rejected dir %u from (%u,%u)\n",
                    p.name.c_str(), dir, p.pos.x, p.pos.y);
        return false;
    }
    p.pos.x = (uint16_t)nx;
    p.pos.y = (uint16_t)ny;

    // Rebroadcast the ORIGINAL pb body to everyone in range, wrapped in a
    // 10005 header - the same relay pattern the original server uses.
    Packet out(MSG_WALK_10005);
    out.payload = payload;
    out.finalize();
    out_relay = out;

    GameMap& m = world.get_or_create_map(p.map_id);
    world.broadcast_to_screen(m, p.pos, out, p.session);
    std::printf("[walk] %s dir=%u -> (%u,%u) mode=%u\n",
                p.name.c_str(), dir, p.pos.x, p.pos.y, w.mode);
    return true;
}

} // namespace conquer
