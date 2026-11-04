-- v89: GetUserStr(uid,key) and RecordPoint(uid,map,x,y) - both pinned from
-- the binary (FUN_1404e0940 implements only 1002/1017/1064; FUN_14043b950
-- takes four integers and pushes a boolean).
function on_talk()
    say("name=" .. tostring(GetUserStr(0, 1002)))
    say("mate=" .. tostring(GetUserStr(0, 1017)))
    local ok = RecordPoint(0, 1002, 401, 301)
    say("record=" .. tostring(ok))
    local bad = RecordPoint(0, 999999, 10, 10)
    say("badrecord=" .. tostring(bad))
    RecordPoint(0, 1002, 400, 300)   -- restore for the rest of the suite
end
