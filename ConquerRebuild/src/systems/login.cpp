#include "systems/login.hpp"
#include <cstdio>

namespace conquer {

LoginSystem* LoginSystem::active_ = nullptr;

LoginResult LoginSystem::login_user(uint32_t account_id, uint32_t new_uin,
                                     UserRecord& out) {
    out = db_.load_user(account_id);
    if (out.id == 0) {
        std::printf("[login] account %u not found\n", account_id);
        return LoginResult::REJECT_GM_NOT_CONFIG;
    }
    uint64_t old_uin = logged_in_.count(account_id) ? logged_in_[account_id] : 0;

    // original log: " CUserList::LoginUser, User Account : %u, Old UIN:%u, UIN:%u"
    std::printf("[login] CUserList::LoginUser, User Account : %u, Old UIN:%llu, UIN:%u\n",
                account_id, (unsigned long long)old_uin, new_uin);

    if (old_uin != 0 && old_uin != new_uin) {
        // original: "CUserList::LoginUser Failed in differen UIN" -> return 2
        std::printf("[login] CUserList::LoginUser Failed in differen UIN, User Account : %u\n",
                    account_id);
        return LoginResult::REJECT_UIN_MISMATCH;
    }
    if (old_uin == 0) {
        // original: "CUserList::LoginUser Update UIN" + UPDATE cq_user SET uin=%u WHERE id=%u LIMIT 1
        std::printf("[login] CUserList::LoginUser Update UIN, User Account : %u, UIN:%u\n",
                    account_id, new_uin);
        db_.update_uin(out.id, new_uin);
        logged_in_[account_id] = new_uin;
    }

    // GM/PM gate: names carrying "GM" or "PM" must be configured
    // (original checks the gm list from cq_config, logs
    //  "not find GM(id:%u, account_id:%u, name:%s) login record").
    if (out.name.find("GM") != std::string::npos ||
        out.name.find("PM") != std::string::npos) {
        if (out.gm_flags == 0) {
            std::printf("[login] not find GM(id:%u, account_id:%u, name:%s) login record\n",
                        out.id, account_id, out.name.c_str());
            return LoginResult::REJECT_GM_NOT_CONFIG;
        }
        std::printf("[login] GM login accepted: %s\n", out.name.c_str());
    }
    std::printf("[login] OK: %s (level %u, map %u)\n",
                out.name.c_str(), out.level, out.recordmap_id);
    return LoginResult::OK;
}

} // namespace conquer
