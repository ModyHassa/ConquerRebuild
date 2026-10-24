#pragma once
#include <cstdint>
#include <functional>
#include <string>
#include <unordered_map>
#include "protocol/packet.hpp"

namespace conquer {

class ClientSession;

using HandlerFn = std::function<void(ClientSession&, PacketReader&)>;

// Registry mapping packet ID -> handler. Add new systems by
// registering handlers in handlers/ (see default_handlers.cpp).
class Dispatcher {
public:
    void add(uint16_t id, HandlerFn fn) { map_[id] = std::move(fn); }
    bool dispatch(uint16_t id, ClientSession& s, PacketReader& r) const {
        auto it = map_.find(id);
        if (it == map_.end()) return false;
        it->second(s, r);
        return true;
    }
private:
    std::unordered_map<uint16_t, HandlerFn> map_;
};

} // namespace conquer
