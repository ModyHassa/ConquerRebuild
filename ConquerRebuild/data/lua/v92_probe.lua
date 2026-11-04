-- v92: Talk(uid, channel, msg) - FUN_1404e73b0: channel 0 becomes 2000,
-- an empty message is refused.
function on_talk()
    say("t0=" .. tostring(Talk(0, 0, "V92 default channel")))
    say("t1=" .. tostring(Talk(0, 2001, "V92 explicit 2001")))
    say("empty=" .. tostring(Talk(0, 2001, "")))
end
