Device Tree for Moto G5 Plus (potter)
===========================================

The Motorola Moto G5 Plus (codenamed _"potter"_) is a mid-range smartphone from Motorola mobility.
It was announced on February 2017.

Basic   | Spec Sheet
-------:|:-------------------------
CPU     | Octa-core 2.0 GHz Cortex-A53
Chipset | Qualcomm MSM8953 Snapdragon 625
GPU     | Adreno 506
Memory  | 4 GB RAM
Shipped Android Version | 7.0.0
Storage | 32 GB
MicroSD | Up to 256 GB
Battery | Li-Ion 3000mAh battery
Display | 1080 x 1920 pixels, 5.2 inches (~402 ppi pixel density)
Rear Camera  | 12 MP, f/1.7, 4032 x 3024 pixels, Dual Pixel Autofocus, dual flash LED
Front Camera  |  5 MP, f/2.2, 2592 x 1944 pixels

Copyright 2017 - The LineageOS Project.

![Moto G5 Plus](http://cdn2.gsmarena.com/vv/pics/motorola/motorola-moto-g5-plus-1.jpg "Moto G5 Plus")

---

## 2026-03-29 — Phase 8: Real Native Foundation Sync

### Architecture Changes
- **VINTF**: Implemented custom Go `kernel_config` Soong module type (vs fake stubs)
- **Native Core**: Surgically synced `system/libbase`, `system/logging/liblog`, `external/icu`
- **Bootstrap**: Resolved 50+ `undefined module` Soong errors covering:
  - Java: Conscrypt, ART, I18N, AndroidX, Robolectric, Room, Jacoco, KotlinPoet, KSP
  - Native: libbase, liblog, libicui18n/uc, libutils headers
  - Tools: lint_api, cts-tradefed, compatibility-tradefed, vts-core-tradefed
- **Kernel Compat**: Legacy 3.18 kernel flags preserved in `lineage_potter.mk`

### Build Status
- Soong Bootstrap: ✅ All framework deps resolved
- Ninja Generation: ⏳ In progress (processing real native dependency graph)
- Target: `lineage_potter-userdebug` (LineageOS 20.0 / Android 13)

---

## 2026-03-29 04:05 — Conflict Resolution: Stub vs Real Source

### Changes
- Removed `icu4j` stub (now provided by `external/icu`, which is synced)
- Removed `legacy.i18n.module.platform.api.stubs` stub (from `external/icu/android_icu4j`)
- Removed `stable.i18n.module.platform.api.stubs` stub (from `external/icu/android_icu4j`)
- Fixed duplicate `dx-doc-stubs` in `dalvik/dx/bin/Android.bp` (real definition in `dalvik/dx/src/`)
- All native foundation libraries (`libbase`, `liblog`, `libicui18n/uc`) now have real source

---

## 2026-03-29 04:30 — Tools Dependency Resolution

### Changes
- Added generic stubs for `gson-prebuilt-jar` and `jopt-simple-4.9` to unblock `currysrc` (from `external/icu/tools/srcgen/currysrc`)
