/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0029b70c CapcomTrueTypeFont::drawSubstring */

/* CapcomTrueTypeFont::drawSubstring(CapcomGraphics*, String, int, int, int, int, bool, bool, int,
   int) */

undefined4 __thiscall
CapcomTrueTypeFont::drawSubstring
          (CapcomTrueTypeFont *this,undefined4 param_1,int param_3,undefined4 param_4,
          undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined1 param_8,
          undefined1 param_9,undefined4 param_10,undefined4 param_11)

{
  undefined4 uVar1;
  code *pcVar2;
  String aSStack_20 [12];
  
  pcVar2 = *(code **)(*(int *)this + 0x14);
  String::substring((int)aSStack_20,param_3);
  uVar1 = (*pcVar2)(this,param_1,aSStack_20,param_4,param_5,param_8,param_9,param_10,param_11);
  String::~String(aSStack_20);
  return uVar1;
}


