# ConquerRebuild - سيرفر Conquer مبني من جديد (قابل للكومبايل) 🏗️

مشروع إعادة بناء سيرفر Conquer Online 6159 بالكامل من الصفر، مكتوب C++ نضيف
بيق يتبني ويشتغل، والمنطق الأصلي بينتقل له وحدة وحدة من الكود المفكوك
(Ghidra decompile) بتاع MsgServer.exe الأصلي.

## يتبني إزاي؟

### على Windows:
1. نزّل Visual Studio Community (شامل C++ workload)
2. افتح المجلد في Terminal واكتب:
   ```
   cmake -B build
   cmake --build build --config Release
   ```
   أو MinGW: `mingw32-make`

### على Linux:
```
make
./conquer_server
```
السيرفر يفتح على بورت 5816 (نفس بتاع config.ini الأصلي).

## إيه اللي موجود دلوقتي؟
- شبكة كاملة: سوكيت server يقبل اتصالات، يفك packets
- بروتوكول Conquer الحقيقي: framing الباكتات `[len][type][payload]`
- packet IDs **موثّقة من السورس الأصلي** (src/protocol/ids.hpp) - كل ID مكتوب
  جنبه عدد مرات ظهوره في الـ binary الأصلي
- نظام handlers: بتضيف سيسيتم جديد بـ سطر واحد في `register_default_handlers`
- handlers مبدئية: Login (1008), Talk (1009), NPC Dialog (613)

## خطة النقل التفصيلية - شوف ROADMAP.md
