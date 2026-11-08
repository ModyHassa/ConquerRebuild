// tests/mapdoc_unit_test.cpp
// Exercises the ported terrain reader (src/systems/mapdoc.hpp).
// The .bin file written here is GENERATED TEST INPUT laid out exactly per the verified reader
// (docs/worker_v154_mapfile_format.md). It is not, and is never presented as, original terrain.
#include "systems/mapdoc.hpp"
#include <cstdio>
#include <cstring>
#include <vector>
#include <string>

using namespace conquer::mapdoc;

static int failures = 0;
#define CHECK(cond) do { if (!(cond)) { std::printf("FAIL %s:%d  %s\n", __FILE__, __LINE__, #cond); ++failures; } } while (0)

static void put8(std::vector<unsigned char>& v, unsigned char b) { v.push_back(b); }
static void putu16(std::vector<unsigned char>& v, unsigned short x) { v.push_back(x & 0xff); v.push_back((x >> 8) & 0xff); }
static void putu32(std::vector<unsigned char>& v, unsigned int x) { for (int i = 0; i < 4; ++i) v.push_back((x >> (8 * i)) & 0xff); }

static bool write_file(const char* path, const std::vector<unsigned char>& v) {
    std::FILE* f = std::fopen(path, "wb");
    if (!f) return false;
    size_t n = std::fwrite(v.data(), 1, v.size(), f);
    std::fclose(f);
    return n == v.size();
}

int main() {
    const char* path = "/tmp/mapdoc_fixture.bin";
    const char* name = "GENERATED fixture (layout per docs/worker_v154)";
    const int W = 3, H = 3;
    std::vector<unsigned char> buf;
    for (int i = 0; i < kSkippedHeader; ++i) put8(buf, 0xEE);          // 8 ignored bytes
    for (int i = 0; i < kNameFieldBytes; ++i) put8(buf, i < (int)std::strlen(name) ? (unsigned char)name[i] : 0);
    putu32(buf, W); putu32(buf, H);
    for (int y = 0; y < H; ++y) {
        for (int x = 0; x < W; ++x) {
            // mask != 0 marks the cell blocked in this fixture; sur = 100 + linear index
            putu16(buf, (x == 1 && y == 1) ? 0 : 7);
            putu16(buf, 0xAAAA);                                        // skipped by the reader
            putu16(buf, (unsigned short)(100 + y * W + x));
        }
        for (int i = 0; i < kSkippedRowBytes; ++i) put8(buf, 0x00);     // row trailer
    }
    putu32(buf, 2);                                                     // two tail records
    for (int r = 0; r < 2; ++r) for (int i = 0; i < kTailRecordBytes; ++i) put8(buf, (unsigned char)(r * 10 + i));
    CHECK(write_file(path, buf));

    // ---- 1. successful load
    CMapData md;
    CHECK(md.load(path));
    CHECK(md.static_data().width() == W);
    CHECK(md.static_data().height() == H);
    CHECK(md.static_data().name() == std::string(name));
    CHECK((int)md.static_data().cells().size() == W * H);
    CHECK(md.static_data().tail().size() == 2);
    CHECK(md.static_data().cells()[md.index(2, 1)].second == 100 + 1 * W + 2);
    CHECK(md.static_data().cells()[md.index(2, 1)].flag() == 1);
    CHECK(md.static_data().cells()[md.index(1, 1)].flag() == 0);
    CHECK(md.static_data().tail()[1].bytes[3] == 13);

    // ---- 2. valid() / index()  (0x14056ab10 / 0x14056ab30)
    CHECK(md.valid(0, 0) && md.valid(W - 1, H - 1));
    CHECK(!md.valid(-1, 0) && !md.valid(0, -1) && !md.valid(W, 0) && !md.valid(0, H));
    CHECK(md.index(0, 0) == 0 && md.index(2, 2) == 8 && md.index(2, 1) == 5);

    // ---- 3. cell(): out of bounds returns 1 (0x1405623a0), in range is BLOCKED -> kUnknownAttribute
    CHECK(md.cell(W + 5, 0) == kAttributeOutOfBounds);
    CHECK(md.cell(0, -3) == kAttributeOutOfBounds);
    CHECK(md.cell(0, 0) == kUnknownAttribute);
    CHECK(md.walkable(W + 5, 0) == 0);                 // out of range is NOT walkable
    CHECK(md.walkable(0, 0) == kUnknownAttribute);     // in range attribute still BLOCKED

    // ---- 4. non-square dimensions are rejected ("has a bad size")
    std::vector<unsigned char> bad;
    for (int i = 0; i < kSkippedHeader; ++i) put8(bad, 0);
    for (int i = 0; i < kNameFieldBytes; ++i) put8(bad, 0);
    putu32(bad, 3); putu32(bad, 4);
    CHECK(write_file("/tmp/mapdoc_badsize.bin", bad));
    CMapData badMd;
    CHECK(!badMd.load("/tmp/mapdoc_badsize.bin"));

    // ---- 5. missing file is rejected ("cannot open file")
    CMapData none;
    CHECK(!none.load("/tmp/definitely_not_here_6159.bin"));

    // ---- 6. IMapData registry source: the shipped ini/GameMap.ini (vendored) ----
    conquer::mapdoc::MapDocRegistry reg;
    const char* ini_paths[] = {"data/game_map.ini", "../data/game_map.ini"};
    bool loaded = false;
    for (const char* ip : ini_paths)
        if (conquer::mapdoc::load_game_map_ini(ip, reg)) { loaded = true; break; }
    CHECK(loaded);
    CHECK(reg.amount == 115);
    CHECK(reg.entries.size() == 115);
    const conquer::mapdoc::MapDocEntry* e1002 = reg.find(1002);
    CHECK(e1002 != nullptr);
    CHECK(e1002 && e1002->file == "map/map/newplain.DMap");
    CHECK(e1002 && e1002->puzzle_grid_size == 256);
    const conquer::mapdoc::MapDocEntry* e1000 = reg.find(1000);
    CHECK(e1000 && e1000->file == "map/map/desert.DMap");
    const conquer::mapdoc::MapDocEntry* e1626 = reg.find(1626);
    CHECK(e1626 && e1626->file == "map/map/Easter.DMap");
    CHECK(reg.find(999999) == nullptr);

    if (failures == 0) std::printf("mapdoc_unit: all checks passed (%d cells, %dx%d)\n", W * H, W, H);
    else               std::printf("mapdoc_unit: %d FAILURES\n", failures);
    return failures == 0 ? 0 : 1;
}
