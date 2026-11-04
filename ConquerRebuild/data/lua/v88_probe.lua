-- v88: the pinned GetUserInt key table (Level/Map/Pos/Life/Mana/Exp/
-- Profession/SynId/GuildRank) against the live player.
function on_talk()
    say("id=" .. GetUserInt(0, 1001))
    say("profession=" .. GetUserInt(0, 1005))
    say("level=" .. GetUserInt(0, 1006))
    say("map=" .. GetUserInt(0, 1007))
    say("pos=" .. GetUserInt(0, 1008) .. "," .. GetUserInt(0, 1009))
    say("life=" .. GetUserInt(0, 1019) .. "/" .. GetUserInt(0, 1020))
    say("mana=" .. GetUserInt(0, 1021) .. "/" .. GetUserInt(0, 1022))
    say("money=" .. GetUserInt(0, 1025))
    say("exp=" .. GetUserInt(0, 1029))
    say("synid=" .. GetUserInt(0, 1056) .. " rank=" .. GetUserInt(0, 1036))
    -- keys that still have no wired source in this build: 1016 battle effect,
    -- 1023 mentor points (their engine getters exist but read state we do not
    -- model yet), so the correct answer is the original's missing-value -1
    say("battle=" .. GetUserInt(0, 1016) .. " mentor=" .. GetUserInt(0, 1023))
end
