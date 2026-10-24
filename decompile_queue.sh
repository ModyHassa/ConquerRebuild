#!/bin/bash
BASE=/app/conversations/6ad7881a9883f31f19595f39
OUT=$BASE/decompiled
export JAVA_HOME=/opt/jdk21
export PATH=/opt/jdk21/bin:$PATH
export _JAVA_OPTIONS="-Xmx3g"
mkdir -p "$OUT" /tmp/ghidra_proj

run() {
  local src="$1" name="$2"
  [ -f "$OUT/$name.c" ] && { echo "SKIP $name (exists)" >> "$OUT/progress.log"; return; }
  echo "=== START $name $(date +%H:%M:%S)" >> "$OUT/progress.log"
  timeout 21600 /opt/ghidra/support/analyzeHeadless /tmp/ghidra_proj "q_$name" -import "$src" -readOnly -deleteProject -scriptPath "$BASE/ghidra_scripts" -postScript BulkDecompile.java "$OUT/$name.c" >> "$OUT/progress.log" 2>&1
  echo "=== END $name $(date +%H:%M:%S) size=$(stat -c%s "$OUT/$name.c" 2>/dev/null || echo 0)" >> "$OUT/progress.log"
}

# main programs first
run "$BASE/conquer_source/Source/MsgServer.exe" MsgServer
run "$BASE/conquer_source/Source/NpcServer.exe" NpcServer
run "$BASE/conquer_source/Source/CQCrossServer.exe" CQCrossServer
run "$BASE/conquer_source/Source/RevampedLoader.exe" RevampedLoader
run "$BASE/conquer_source/patch/Conquer.exe" Conquer

# native game DLLs
for f in Analyst AntiCheat Arenic Booth CQBase ClanPKArenic Common Competion CrossFlagWar CrossStatus DB DetainEquip ElitePKArenic EpochHook FactionMatch Family FamilyArenic Flower FrontierFlagWar Guide LeaveWord Lottery Peerage Pigeon PopPKArenic Rank Relation RevampedHook Sponsor Status Storage Syndicate TaskDetail Team TeamArenic Title Totem Trade Training VexillumArenic Wanted root root_real; do
  run "$BASE/conquer_source/Source/$f.dll" "$f"
done
echo "=== ALL_DONE $(date +%H:%M:%S)" >> "$OUT/progress.log"
