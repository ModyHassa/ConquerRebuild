-- v85: the original-named attribute API (GetUserInt/SetUserInt) with the
-- keys the shipped PublicFunc content pins: 1001 id, 1003 lookface,
-- 1004 hair, 1037 guild rank.
function on_talk()
    say("uid=" .. GetUserInt(0, 1001))
    say("lookface=" .. GetUserInt(0, 1003) .. " hair=" .. GetUserInt(0, 1004))
    say("guildrank=" .. GetUserInt(0, 1037))
    say("bogus=" .. GetUserInt(0, 1999))
    local rc = SetUserInt(0, 1004, 42)
    say("sethair rc=" .. rc .. " hair=" .. GetUserInt(0, 1004))
    local rc2 = SetUserInt(0, 1037, 5)
    say("setrank rc=" .. rc2)
end
