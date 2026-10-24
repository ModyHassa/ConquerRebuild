#pragma once
// Minimal protobuf WIRE codec (varint-based) - no external dependency.
// Needed because the 6159 client (cq2client-78.6) parses several game
// messages as protobuf (e.g. network/msgwalk.cpp + msgwalk.pb.cc found
// in the decompiled Conquer.exe). Field numbers per message still need
// tag verification against the client's pb parse functions.
#include <cstdint>
#include <string>
#include <vector>

namespace conquer::pb {

inline void write_varint(std::vector<uint8_t>& out, uint64_t v) {
    while (v > 0x7F) { out.push_back((uint8_t)((v & 0x7F) | 0x80)); v >>= 7; }
    out.push_back((uint8_t)v);
}
inline uint64_t read_varint(const uint8_t* d, size_t& pos, size_t end) {
    uint64_t v = 0; int shift = 0;
    while (pos < end) {
        uint8_t b = d[pos++];
        v |= (uint64_t)(b & 0x7F) << shift;
        if (!(b & 0x80)) break;
        shift += 7;
    }
    return v;
}
inline void write_field_varint(std::vector<uint8_t>& out, uint32_t field, uint64_t v) {
    write_varint(out, ((uint64_t)field << 3) | 0); // wire type 0
    write_varint(out, v);
}
inline void write_field_str(std::vector<uint8_t>& out, uint32_t field, const std::string& s) {
    write_varint(out, ((uint64_t)field << 3) | 2); // wire type 2
    write_varint(out, s.size());
    out.insert(out.end(), s.begin(), s.end());
}
// Reader: iterate over (field, wire) pairs.
struct Field {
    uint32_t number; uint32_t wire; uint64_t varint;
    const uint8_t* bytes; size_t len;
};
inline bool next_field(const uint8_t* d, size_t& pos, size_t end, Field& f) {
    if (pos >= end) return false;
    uint64_t key = read_varint(d, pos, end);
    f.number = (uint32_t)(key >> 3);
    f.wire   = (uint32_t)(key & 7);
    f.varint = 0; f.bytes = nullptr; f.len = 0;
    switch (f.wire) {
        case 0: f.varint = read_varint(d, pos, end); break;
        case 1: f.bytes = d + pos; f.len = 8;  pos += 8; break;
        case 2: {
            uint64_t len = read_varint(d, pos, end);
            f.bytes = d + pos; f.len = (size_t)len; pos += (size_t)len;
            break;
        }
        case 5: f.bytes = d + pos; f.len = 4; pos += 4; break;
        default: pos = end; return false; // unknown wire type: bail
    }
    return pos <= end;
}

} // namespace conquer::pb
