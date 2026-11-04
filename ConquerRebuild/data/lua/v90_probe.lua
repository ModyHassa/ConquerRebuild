-- v90: SetUserInt's verified edge semantics (C:874400-874402 no default case,
-- so in-range unwired keys answer true; out-of-range keys answer false).
function on_talk()
    say("unwired=" .. tostring(SetUserInt(0, 1068, 5, 0)))   -- in range, no case
    say("outrange=" .. tostring(SetUserInt(0, 999, 5, 0)))    -- guard rejects
    say("wired=" .. tostring(SetUserInt(0, 1004, 55, 0)))
    say("hairnow=" .. GetUserInt(0, 1004))
    say("zero_uid_badkey=" .. tostring(SetUserInt(0, 2000, 5, 0)))
end
