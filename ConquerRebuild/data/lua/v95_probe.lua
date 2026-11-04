-- v95: Effect(uid, target, effect, mode) - FUN_1404f1e90: mode "del" -> 24,
-- anything else -> 10; target "self" builds CMsgUserEffect 1015.
function on_talk()
    say("add=" .. tostring(Effect(0, "self", "angelwing", "add")))
    say("del=" .. tostring(Effect(0, "self", "angelwing", "del")))
    say("empty=" .. tostring(Effect(0, "self", "", "add")))
    say("other=" .. tostring(Effect(0, "nobody", "angelwing", "add")))
end
