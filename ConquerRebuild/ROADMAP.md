# خطة إعادة البناء - Module by Module

الفكرة: بدل ما نحاول نكومبايل 60,650 فانكشن مرة واحدة، بنبني الهيكل وننقل
السيستمات واحدة واحدة. كل سيسيتم له مرجعه في الكود المفكوك.

## المرحلة 1 ✅ (خلصت)
- [x] الهيكل القابل للكومبايل (C++17, CMake + Makefile)
- [x] الشبكة + framing + dispatcher
- [x] Packet IDs موثّقة من الـ binary

## المرحلة 2: الأساس (الشغل الجاي)
- [ ] Login الحقيقي (1008): مرجعه في MsgServer.c - دور على `== 1008`
- [ ] اتصال AccountServer (الـ C# المفكوك في AccountServer_src/)
- [ ] حفظ/تحميل اللاعب من MySQL (جدول cq)
- [ ] دخول الشخصية للعالم (packets 1001/1002/1004)

## المرحلة 3: سيستمات اللعبة (واحدة واحدة)
كل واحد له reference جاهز في مجلد decompiled/:
| السيسيتم | المرجع في السورس |
|----------|------------------|
| NPC / Task | MsgServer.c (IDs 613-620) + 183 سكربت lua |
| Trade | Trade.dll (مفكوك) |
| Lottery | Lottery.dll (مفكوك) |
| Guild/Syndicate | Syndicate.dll + MsgServer.c |
| PK Arena | *Arenic.dll (كل الأنواع مفكوكة) |
| Family | Family.dll + FamilyArenic.dll |
| AntiCheat | AntiCheat.dll (مفكوك) |

## المرجع الكامل المتاح
- decompiled/MsgServer.c - 32.5MB، 59,726 فانكشن مفكوكة
- decompiled/AccountServer_src/ - سيرفر الحسابات C# كامل
- decompiled/<كل DLL>.c - كل DLL مفكوك لحالته
