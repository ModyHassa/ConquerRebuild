# The CUser date container at user+0xE78 — field → DB column map (VERIFIED)

The block based at `CUser+0xE78` is an embedded object. Each of its fields has a setter of the
shape

```
mov  %edx,<offset>(%rcx)        ; store the value
mov  0x230(%rcx),%rcx           ; the object's keyed store
lea  <key>(%rip),%rdx           ; the field's DB COLUMN NAME
call *0x20(%rax) ; ... *0xb8    ; store[key] = value
test %r8b,%r8b ; je done
   call *0x38(%rax)             ; flush to the DB
```

so the key strings in `.rdata` name the `cq_user` column for each field. Reading every setter in
`0x140371000..0x140374400` yields the map below. Absolute CUser offset = `0xE78 + field`.

| field | CUser | column | | field | CUser | column |
|---|---|---|---|---|---|---|
| +0x34 | +0xEAC | lookface | | +0x150 | +0xFC8 | offline_time |
| +0x38 | +0xEB0 | hair | | +0x154 | +0xFCC | last_logout2 |
| +0x70 | +0xEE8 | life | | +0x160 | +0xFD8 | business |
| +0x90 | +0xF08 | recordmap_id | | +0x164 | +0xFDC | online_god_exptime |
| **+0xA8** | **+0xF20** | **last_login** | | +0x168 | +0xFE0 | battle_god_exptime |
| +0xAC | +0xF24 | task_mask | | +0x174 | +0xFEC | athlete_point |
| +0xB0 | +0xF28 | virtue | | +0x17C | +0xFF4 | athlete_history_wins |
| +0xB4 | +0xF2C | home_id | | +0x180 | +0xFF8 | athlete_history_loses |
| +0xBC | +0xF34 | lock_cls | | +0x184 | +0xFFC | athlete_day_wins |
| **+0xC0** | **+0xF38** | **god_status** | | +0x188 | +0x1000 | athlete_day_loses |
| +0xC4 | +0xF3C | exp_ball_usage | | +0x190 | +0x1008 | athlete_cur_honor_point |
| +0xC8 | +0xF40 | quiz_point | | +0x194 | +0x100C | athlete_hisorty_honor_point |
| +0xCC | +0xF44 | flag | | +0x198 | +0x1010 | team_athlete_point |
| +0xD0 | +0xF48 | vip_value | | +0x19C | +0x1014 | team_athlete_win |
| +0xD4 | +0xF4C | send_flower_date | | +0x1A0 | +0x1018 | team_athlete_lost |
| +0x120 | +0xF98 | lock_key | | +0x1A4 | +0x101C | team_athlete_season_win |
| +0x134 | +0xFAC | online_time | | +0x1A8 | +0x1020 | team_athlete_season_lost |
| +0x138 | +0xFB0 | auto_exercise | | **+0x1B0** | **+0x1028** | **last_logout_3** |
| +0x13C | +0xFB4 | last_logout | | +0x1B4 | +0x102C | title |
| +0x144 | +0xFBC | mete_lev | | +0x1BC | +0x1034 | emoney_mono |
| +0x14C | +0xFC4 | online_time2 | | +0x1C0 | +0x1038 | ridepet_point |
| +0x1D8 | +0x1050 | mete_lev2 | | +0x200 | +0x1078 | culture_value |
| +0x1DC | +0x1054 | changenamerecord | | +0x204 | +0x107C | chestpackage_size |
| +0x1E4 | +0x105C | strength_value | | +0x218 | +0x1090 | league_contribution |
| +0x1EC | +0x1064 | pk_setting | | +0x21C | +0x1094 | shielded_times |

## Packed date format = YYMMDDHH
`0x140382850(packed) -> time_t`: `hour = v%100`, `mday = (v/100)%100`,
`mon = (v/10000)%100 - 1`, `year = (v/1000000)%100 + 100` (tm_year, i.e. 20YY), `sec = min = 0`,
then `mktime`. `0x1403823e0(ts)` packs back with `prefix = (old/10^8)*100` and flushes the keyed
store to the DB. Real row proof: `god_status = 26052409` = 2026-05-24 09:00.

`0x140382960(user, mode, flag)` = remaining time: `0` when absent/expired, else
mode 0 = seconds, 1 = minutes (`+30 s` when flag), **2 = hours (`+1800 s`)**, other = days
(`+43200 s`).

`0x140382b00(user, hours)`: base = the stored timestamp when it is still in the future, otherwise
**the NEXT hour boundary** `((now + 0xE0F) / 0xE10 * 0xE10)` (at 10:38 the base is 11:00), then
`+ hours*3600` and re-pack.
