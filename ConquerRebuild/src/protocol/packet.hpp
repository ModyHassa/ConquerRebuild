#pragma once
// Conquer packet framing: [uint16 length][uint16 type][payload...]
// length counts the WHOLE packet including the 4-byte header.
#include <cstdint>
#include <cstring>
#include <string>
#include <vector>

namespace conquer {

constexpr uint16_t PACKET_HEADER_SIZE = 4;
constexpr uint16_t MAX_PACKET_SIZE     = 8192; // verify vs original before release

struct Packet {
    uint16_t length = PACKET_HEADER_SIZE;
    uint16_t type   = 0;
    std::vector<uint8_t> payload;

    Packet() = default;
    explicit Packet(uint16_t t) : type(t) {}

    template <typename T> void write(const T& v) {
        const uint8_t* p = reinterpret_cast<const uint8_t*>(&v);
        payload.insert(payload.end(), p, p + sizeof(T));
    }
    void write_str(const std::string& s, size_t fixed) {
        std::vector<uint8_t> buf(fixed, 0);
        size_t n = s.size() < fixed ? s.size() : fixed - 1;
        std::memcpy(buf.data(), s.data(), n);
        payload.insert(payload.end(), buf.begin(), buf.end());
    }
    void finalize() {
        length = PACKET_HEADER_SIZE + static_cast<uint16_t>(payload.size());
    }
    std::vector<uint8_t> to_bytes() const {
        std::vector<uint8_t> out;
        out.reserve(length);
        out.push_back(length & 0xFF); out.push_back(length >> 8);
        out.push_back(type   & 0xFF); out.push_back(type   >> 8);
        out.insert(out.end(), payload.begin(), payload.end());
        return out;
    }
};

class PacketReader {
public:
    explicit PacketReader(const std::vector<uint8_t>& data, size_t off = 0)
        : d_(data), pos_(off) {}
    template <typename T> T read() {
        T v{};
        std::memcpy(&v, d_.data() + pos_, sizeof(T));
        pos_ += sizeof(T);
        return v;
    }
    std::string read_str(size_t fixed) {
        std::string s(reinterpret_cast<const char*>(d_.data()) + pos_, fixed);
        size_t z = s.find('\0');
        if (z != std::string::npos) s.resize(z);
        pos_ += fixed;
        return s;
    }
    size_t pos() const { return pos_; }
    size_t remaining() const { return d_.size() - pos_; }
    size_t size() const { return d_.size(); }
    const uint8_t* rest() const { return d_.data() + pos_; }
    const uint8_t* raw() const { return d_.data(); }
    template <typename T> T peek(size_t off) const {
        T v{}; std::memcpy(&v, d_.data() + off, sizeof(T)); return v;
    }
    void skip(size_t n) { pos_ += n; }
    std::string read_cstring(size_t maxlen) {
        const char* p = reinterpret_cast<const char*>(d_.data()) + pos_;
        size_t n = strnlen(p, maxlen);
        std::string s(p, n);
        pos_ += maxlen;   // .NET ReadCString advances by the full field
        return s;
    }
private:
    const std::vector<uint8_t>& d_;
    size_t pos_;
};

} // namespace conquer
