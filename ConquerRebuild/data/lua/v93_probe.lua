-- v93: AddUserInt(uid,key,value,flag) - engine FUN_1404e6500. Life (1019) and
-- Mana (1021) are wired; other in-range keys answer true without a write.
function on_talk()
    say("life0=" .. GetUserInt(0, 1019))
    say("dec=" .. tostring(AddUserInt(0, 1019, -100, 0)))
    say("life1=" .. GetUserInt(0, 1019))
    say("over=" .. tostring(AddUserInt(0, 1019, 999999, 0)))
    say("life2=" .. GetUserInt(0, 1019) .. "/" .. GetUserInt(0, 1020))
    say("mana=" .. tostring(AddUserInt(0, 1021, -50, 0)) .. " m=" .. GetUserInt(0, 1021))
    say("unwired=" .. tostring(AddUserInt(0, 1068, 5, 0)))
    say("outrange=" .. tostring(AddUserInt(0, 500, 5, 0)))
end
