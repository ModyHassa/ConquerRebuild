#pragma once
#include "core/database.hpp"
#include <unordered_map>

namespace conquer {

enum class LoginResult : uint32_t {
    OK                = 0,
    REJECT_UIN_MISMATCH = 2, // original returns 2: "Failed in differen UIN"
    REJECT_GM_NOT_CONFIG = 3, // original returns 3: GM/PM name not in cq_config
};

// Port of CUserList::LoginUser (msgserver\worldkernel\userlistfb.cpp in the
// original build tree cqserver-78.0.11-1204). Flow taken 1:1 from the
// decompiled MsgServer.c around log string "CUserList::LoginUser":
//   1. duplicate-account check on old UIN (reject if different UIN != 0)
//   2. if UIN empty -> UPDATE cq_user SET uin WHERE id
//   3. read name / account_id / recordmap_id / level from the record
//   4. GM or PM in name -> must exist in gm config or login is refused
class LoginSystem {
public:
    explicit LoginSystem(IDatabase& db) : db_(db) { active_ = this; }

    // The SRP6 account-auth leg (original AccountServer) issues the login
    // key that becomes the UIN the client sends in the game-server 1008
    // login. The game server's CUserList must know this expected UIN, so
    // the auth leg registers it here (cq_user.uin in the original MySQL).
    void set_expected_uin(uint32_t account_id, uint32_t uin) {
        logged_in_[account_id] = uin;
        UserRecord rec = db_.load_user(account_id);
        if (rec.id) db_.update_uin(rec.id, uin);
    }
    static LoginSystem* active_;

    LoginResult login_user(uint32_t account_id, uint32_t new_uin,
                           UserRecord& out);

    // Per-account current UIN list (the original keeps this in CUserList).
    std::unordered_map<uint32_t, uint64_t> logged_in_;

private:
    IDatabase& db_;
};

} // namespace conquer
