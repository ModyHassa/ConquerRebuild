-- v87: ChgMap(uid, map, x, y, force) - the original's 5-arg signature.
function on_talk()
    say("start map=" .. get_map() .. " x=" .. get_x())
    local ok = ChgMap(0, 1000, 300, 300, 1)
    say("cross=" .. tostring(ok) .. " map=" .. get_map() .. " x=" .. get_x())
    local bad = ChgMap(0, 999999, 10, 10, 1)
    say("badmap=" .. tostring(bad) .. " map=" .. get_map())
    local off = ChgMap(0, 1000, 2000, 2000, 1)
    say("outside=" .. tostring(off) .. " map=" .. get_map())
    local back = ChgMap(0, 1002, 400, 300, 1)
    say("back=" .. tostring(back) .. " map=" .. get_map() .. " x=" .. get_x())
end
