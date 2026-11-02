#pragma once
// ---------------------------------------------------------------------------
// Pet condition descriptors (action 129, case 0x81 at 222882)
//
// FUN_140117e10 gives the per-world container keyed by id, FUN_14021b560 is
// the lookup, FUN_14021c1d0 inserts and FUN_14021bd20 removes. A descriptor
// holds up to six (field, operator, value) triples parsed out of the action
// param, plus an "in use" flag that FUN_140380900 reads as
// `*(int *)(pet + 0x90) != 0`. cq_pet stays empty in this build: the objects
// live only in this registry (the original keeps them in the container, and
// branch A releases them again from the script).
// ---------------------------------------------------------------------------
#include <cstdint>
#include <string>
#include <vector>

struct PetCond {
    std::string field;     // e.g. "level"
    std::string op;        // e.g. ">="
    int32_t     value = 0;
};

struct PetDescriptor {
    uint32_t id = 0;
    bool     in_use = false;   // the +0x90 flag
    std::vector<PetCond> conds;
};

class PetRegistry {
public:
    static PetRegistry& instance() {
        static PetRegistry r;
        return r;
    }
    PetDescriptor* find(uint32_t id) {
        for (auto& d : list_) if (d.id == id) return &d;
        return nullptr;
    }
    PetDescriptor& add(const PetDescriptor& d) {
        list_.push_back(d);
        return list_.back();
    }
    bool remove(uint32_t id) {
        for (size_t i = 0; i < list_.size(); ++i)
            if (list_[i].id == id) { list_.erase(list_.begin() + i); return true; }
        return false;
    }
    const std::vector<PetDescriptor>& all() const { return list_; }
    void clear() { list_.clear(); }
private:
    std::vector<PetDescriptor> list_;
};
