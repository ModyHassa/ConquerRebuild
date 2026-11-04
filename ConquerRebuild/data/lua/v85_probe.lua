-- v85 (corrected in v88): the original-named attribute API. Keys come from
-- the shipped ProgramInterfaceConstant.lua enum; the getter follows
-- FUN_1404e02d0 (1003 has no getter case, only the setter).
function on_talk()
    say("uid=" .. GetUserInt(0, 1001))
    say("lookface_get=" .. GetUserInt(0, 1003))
    say("hair=" .. GetUserInt(0, 1004))
    say("guildrank=" .. GetUserInt(0, 1036))
    say("iterator=" .. GetUserInt(0, 1037))
    say("bogus=" .. GetUserInt(0, 1999))
    local rc = SetUserInt(0, 1004, 42, 0)
    say("sethair=" .. tostring(rc) .. " hair=" .. GetUserInt(0, 1004))
    local rc2 = SetUserInt(0, 1036, 5, 0)
    say("setrank=" .. tostring(rc2))
end
