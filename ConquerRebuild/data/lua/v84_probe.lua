-- v84: a scripted NPC. cq_npc.datastr names this file; the 2031 handler
-- loads it and calls on_talk with the clicking player as the script context.
function on_talk()
    say("V84 Lua NPC speaks.")
    say("level=" .. get_level() .. " money=" .. get_money())
    add_money(7)
    say("after reward money=" .. get_money())
end
