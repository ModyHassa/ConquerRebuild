-- v98: reports the clicking player's team size through GetUserInt key 1013
-- (G_PLAYER_TeamMemberCount = the team manager's GetMemberCount slot +0x50).
function on_talk()
    say("team_count=" .. GetUserInt(0, 1013))
end
