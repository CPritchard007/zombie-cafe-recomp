/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0029b764 CapcomTrueTypeFont::drawChar */

/* CapcomTrueTypeFont::drawChar(CapcomGraphics*, char, int, int, int, int) */

undefined4 __thiscall
CapcomTrueTypeFont::drawChar
          (CapcomTrueTypeFont *this,CapcomGraphics *param_1,char param_2,int param_3,int param_4,
          int param_5,int param_6)

{
  undefined4 uVar1;
  code *pcVar2;
  String aSStack_20 [12];
  
  pcVar2 = *(code **)(*(int *)this + 0x14);
  String::String(aSStack_20,(int)param_2);
  uVar1 = (*pcVar2)(this,param_1,aSStack_20,param_3,param_4,0,0,param_5,param_6);
  String::~String(aSStack_20);
  return uVar1;
}


