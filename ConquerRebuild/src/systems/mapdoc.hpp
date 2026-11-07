// src/systems/mapdoc.hpp
// FAITHFUL PORT of the original v6159 terrain types. Every constant below is read from
// MsgServer.exe; nothing here is inferred:
//   CMapStaticData::Load          - reader around 0x14056fb80 (I/O wrapper 0x1405739a0, rdx=0 == skip)
//   "CMapStaticData cannot open file %s"                        0x1407a6420
//   "CMapStaticData file %s has a bad size(%d, %d)"             0x1407a63f0
//   "CMapStaticData file %s cannot create cells(%d, %d)"        0x1407a63b8
//   cell setter 0x1405737a0(cell, sur, mask)   debug string "cell(%d,%d), flr=%d, sur=%d, mask=%d" 0x14073d840
//   allocate cells 0x14056ab80(count)
//   CMapData::valid  0x14056ab10   0 <= x < width && 0 <= y < height
//   CMapData::index  0x14056ab30   width*y + x        (row major, x is the fast axis)
//   CMapData::cell   0x1405623a0   returns 1 when out of bounds
//   walkable         0x1402c3cc0   in-range && attribute == 0
//
// EXACTLY as the original, the file is:
//   [8 bytes ignored][260-byte name][u32 width][u32 height]  (width MUST equal height)
//   then height rows of: width * {u16 mask, u16 skipped, u16 sur} followed by 4 ignored bytes
//   then u32 n followed by n * 12-byte records.
//
// PORT CHECKLIST for the rest of the module (strings are from mapdata.cpp itself, see
// docs/worker_v156_mapdata_module.md): IMapData::CreateNew, IMapData::Create (cannot create map %d from
// file %s, gridsize=%d), IMapData find (cannot find map %d), IMapData open (cannot open file %s),
// CMapData layer data (cannot create layer data), CMapData per-owner items (cannot create item from file
// %s for owner %u), CMapData item lookup (cannot find item %d, key %s, field %s), and AddTerrainObj
// (3 guards: layer data / item from file / file name is null, owner:%u). None of those are ported yet -
// they are listed here so the module surface stays visible and nothing gets invented in their place.
//
// SECOND MODULE in the same stack (docs/worker_v157_mapmanager_layer.md): mapmanager.cpp / mapmanager.h
// (`npcserver\pckernel\`) provides CGameMap, which owns users+monsters and asks IMapData for a document.
// Its verified entry points, again from its own log strings: CGameMap::EnterMap / LeaveMap (with Flag),
// CGameMap::ChangeMapDoc (swaps the document under a live map: DelMonster[] / DelUser[]),
// CGameMap::AddTerrainObj + GetTerrainNpcFileName (action 403's furniture resolves a file name per item type),
// and the CUser::Create/FlyMap/MoveForward/JumpPos "NotStandEnable" checks which log MapID[] *and* MapDoc[] -
// proving MapDoc is a separate id from MapID. The IMapData registry itself is a global std::map at
// 0x140104630 whose static initialiser (0x1400bbd40) leaves it EMPTY; its writer is still unread, which is
// exactly why 403/1509 stay BLOCKED.
//
// BLOCKED / not invented: the value CMapData::cell returns for an IN-RANGE cell (it is looked up
// in a std::map at CMapData+0x1c0 that a loader not present in this binary fills). Because of that
// walkable() cannot be completed today, so this module exposes the verified pieces only and reports
// kUnknownAttribute for in-range cells instead of pretending to know.
#pragma once
#include <cstdint>
#include <cstdio>
#include <cstring>
#include <string>
#include <vector>
#include <cstdarg>

namespace conquer {
namespace mapdoc {

constexpr int kNameFieldBytes   = 0x104;  // 260
constexpr int kSkippedHeader    = 8;
constexpr int kSkippedRowBytes  = 4;
constexpr int kTailRecordBytes  = 12;
constexpr int kAttributeOutOfBounds = 1;  // 0x1405623a0 returns 1 out of bounds
constexpr int kUnknownAttribute = -1;     // in-range value is BLOCKED (see header note)

// 4-byte cell, matching `lea rcx,[cells + idx*4]` in the reader and the (sur, mask) pair
// that 0x1405737a0 receives.
struct Cell {
    uint16_t sur  = 0;
    uint16_t mask = 0;   // reader stores (first u16 != 0)
};

struct TailRecord { uint8_t bytes[kTailRecordBytes] = {}; };

class CMapStaticData {
public:
    // Port of the file reader. Returns false exactly where the original returns false and emits
    // the original's log text through `log` (defaults to stderr).
    bool load(const std::string& path) {
        std::FILE* f = std::fopen(path.c_str(), "rb");
        if (!f) { log_("CMapStaticData cannot open file %s", path.c_str()); return false; }

        skip(f, kSkippedHeader);

        char name[kNameFieldBytes + 1];
        std::memset(name, 0, sizeof(name));
        if (!readn(f, name, kNameFieldBytes)) { std::fclose(f); return false; }
        name_.assign(name);                       // the file's own name field

        uint32_t a = 0, b = 0;
        if (!readn(f, &a, sizeof(a)) || !readn(f, &b, sizeof(b))) { std::fclose(f); return false; }

        if (a != b) {                             // cmp A,B ; je ok
            log_("CMapStaticData file %s has a bad size(%d, %d)", path.c_str(), int(a), int(b));
            std::fclose(f);
            return false;
        }
        if (a == 0 || uint64_t(a) * uint64_t(a) > (1u << 26)) {   // allocation guard only
            log_("CMapStaticData file %s cannot create cells(%d, %d)", path.c_str(), int(a), int(b));
            std::fclose(f);
            return false;
        }
        width_ = int(a);
        height_ = int(b);
        try {
            cells_.assign(size_t(width_) * size_t(height_), Cell{});
        } catch (...) {
            log_("CMapStaticData file %s cannot create cells(%d, %d)", path.c_str(), width_, height_);
            std::fclose(f);
            return false;
        }

        for (int y = 0; y < height_; ++y) {
            for (int x = 0; x < width_; ++x) {
                uint16_t c0 = 0, skipped = 0, c2 = 0;
                if (!readn(f, &c0, 2) || !readn(f, &skipped, 2) || !readn(f, &c2, 2)) {
                    std::fclose(f);
                    return false;
                }
                (void)skipped;                       // read and discarded, exactly like rdx=0 in the original
                Cell& c = cells_[size_t(index(x, y))];
                c.sur  = c2;
                c.mask = (c0 != 0) ? 1 : 0;
            }
            skip(f, kSkippedRowBytes);
        }

        uint32_t n = 0;
        if (readn(f, &n, sizeof(n))) {
            tail_.resize(n);
            for (uint32_t i = 0; i < n; ++i)
                if (!readn(f, tail_[i].bytes, kTailRecordBytes)) { tail_.resize(i); break; }
        }
        std::fclose(f);
        return true;
    }

    int width()  const { return width_; }
    int height() const { return height_; }
    const std::string& name() const { return name_; }
    const std::vector<Cell>& cells() const { return cells_; }
    const std::vector<TailRecord>& tail() const { return tail_; }

    // 0x14056ab10
    bool valid(int x, int y) const {
        if (x < 0) return false;
        if (y < 0) return false;
        if (x >= width_)  return false;
        if (y >= height_) return false;
        return true;
    }
    // 0x14056ab30 : width*y + x
    int index(int x, int y) const { return width_ * y + x; }

private:
    static void skip(std::FILE* f, int n) { if (n > 0) std::fseek(f, long(n), SEEK_CUR); }
    static bool readn(std::FILE* f, void* dst, size_t n) { return std::fread(dst, 1, n, f) == n; }
    static void log_(const char* fmt, ...) {
        va_list ap; va_start(ap, fmt);
        std::vfprintf(stderr, fmt, ap);
        std::fputc('\n', stderr);
        va_end(ap);
    }

    int width_ = 0, height_ = 0;
    std::string name_;
    std::vector<Cell> cells_;
    std::vector<TailRecord> tail_;
};

// CMapData as far as it is verified: it owns the static data and answers valid/index/cell.
class CMapData {
public:
    bool load(const std::string& path) { return static_.load(path); }
    const CMapStaticData& static_data() const { return static_; }
    bool valid(int x, int y) const { return static_.valid(x, y); }
    int  index(int x, int y) const { return static_.index(x, y); }

    // 0x1405623a0: out of bounds -> 1. In-range -> the std::map lookup at +0x1c0, whose filler is
    // not present in this binary, so we report kUnknownAttribute rather than invent a value.
    int cell(int x, int y) const {
        if (!static_.valid(x, y)) return kAttributeOutOfBounds;
        return kUnknownAttribute;
    }

    // 0x1402c3cc0 : walkable == in range && attribute == 0. Returns -1 while the in-range attribute
    // is BLOCKED, so no caller can silently assume walkability.
    int walkable(int x, int y) const {
        if (!static_.valid(x, y)) return 0;
        int a = cell(x, y);
        if (a == kUnknownAttribute) return kUnknownAttribute;
        return a == 0 ? 1 : 0;
    }

private:
    CMapStaticData static_;
};

}  // namespace mapdoc
}  // namespace conquer
