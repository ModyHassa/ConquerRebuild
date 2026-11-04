-- v94: the pinned keys now backed by real cq_user columns
-- 1010 Virtue, 1011 Meto, 1013 TeamMemberNum (no team system), 1014 HomeID,
-- 1015 AccountId, 1031 PK, 1045 Peerage, 1046 Business.
function on_talk()
    say("virtue=" .. GetUserInt(0, 1010))
    say("meto=" .. GetUserInt(0, 1011))
    say("team=" .. GetUserInt(0, 1013))
    say("home=" .. GetUserInt(0, 1014))
    say("acct=" .. GetUserInt(0, 1015))
    say("pk=" .. GetUserInt(0, 1031))
    say("peerage=" .. GetUserInt(0, 1045))
    say("business=" .. GetUserInt(0, 1046))
end
