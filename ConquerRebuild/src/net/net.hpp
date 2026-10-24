#pragma once
// Portable sockets (Windows winsock2 + Linux/macOS BSD).
#include "protocol/packet.hpp"
#include <cstdint>
#include <string>
#include <vector>
#ifdef _WIN32
  #ifndef WIN32_LEAN_AND_MEAN
  #define WIN32_LEAN_AND_MEAN
  #endif
  #include <winsock2.h>
  #include <ws2tcpip.h>
  using SocketHandle = SOCKET;
  static const SocketHandle INVALID_SOCK = INVALID_SOCKET;
#else
  #include <arpa/inet.h>
  #include <netinet/in.h>
  #include <sys/socket.h>
  #include <unistd.h>
  #include <cstring>
  #include <cerrno>
  using SocketHandle = int;
  static const SocketHandle INVALID_SOCK = -1;
#endif

namespace conquer {

inline void net_init() {
#ifdef _WIN32
    WSADATA w; WSAStartup(MAKEWORD(2, 2), &w);
#endif
}
inline void net_shutdown() {
#ifdef _WIN32
    WSACleanup();
#endif
}
inline void sock_close(SocketHandle s) {
#ifdef _WIN32
    closesocket(s);
#else
    close(s);
#endif
}
inline bool sock_recv_all(SocketHandle s, std::vector<uint8_t>& buf) {
    uint8_t tmp[4096];
#ifdef _WIN32
    int n = ::recv(s, reinterpret_cast<char*>(tmp), sizeof(tmp), 0);
#else
    ssize_t n = ::recv(s, tmp, sizeof(tmp), 0);
#endif
    if (n <= 0) return false;
    buf.insert(buf.end(), tmp, tmp + n);
    return true;
}
inline bool sock_send_all(SocketHandle s, const uint8_t* data, size_t len) {
    size_t sent = 0;
    while (sent < len) {
#ifdef _WIN32
        int n = ::send(s, reinterpret_cast<const char*>(data + sent),
                       static_cast<int>(len - sent), 0);
#else
        ssize_t n = ::send(s, data + sent, len - sent, 0);
#endif
        if (n <= 0) return false;
        sent += static_cast<size_t>(n);
    }
    return true;
}

class ClientSession {
public:
    ClientSession(SocketHandle s, std::string ip) : sock_(s), ip_(std::move(ip)) {}
    SocketHandle sock() const { return sock_; }
    const std::string& ip() const { return ip_; }
    void send(const Packet& p) {
        auto bytes = p.to_bytes();
        sock_send_all(sock_, bytes.data(), bytes.size());
    }
    uint64_t account_id = 0;
    uint32_t player_id   = 0;
    std::string account_name;
    bool authenticated  = false;
private:
    SocketHandle sock_;
    std::string ip_;
};

} // namespace conquer
