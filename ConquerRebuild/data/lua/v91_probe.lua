-- v91: SetUserInt key 1005 (Profession) - attrib 7 in FUN_1401a2660.
-- The write is left in place so the test can verify cq_user; the test
-- restores the column itself afterwards.
function on_talk()
    say("prof0=" .. GetUserInt(0, 1005))
    say("set=" .. tostring(SetUserInt(0, 1005, 20, 0)))
    say("prof1=" .. GetUserInt(0, 1005))
end
