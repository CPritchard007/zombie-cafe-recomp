/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0029af7c CapcomRectangleFont::drawSubstring */

/* CapcomRectangleFont::drawSubstring(CapcomGraphics*, String, int, int, int, int, bool, bool, int,
   int) */

undefined4 __thiscall
CapcomRectangleFont::drawSubstring
          (CapcomRectangleFont *this,undefined4 param_1,String *param_3,undefined4 param_4,
          int param_5,int param_6,int param_7,char param_8,char param_9,undefined4 param_10,
          int param_11)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  code *pcVar4;
  undefined4 unaff_r6;
  String aSStack_20 [12];
  
  if (param_8 != '\0') {
    pcVar4 = *(code **)(*(int *)this + 4);
    String::String(aSStack_20,param_3);
    uVar1 = (*pcVar4)(this,aSStack_20,param_6,param_7);
    uVar2 = __floatsisf(param_10);
    uVar1 = __mulsf3(uVar1,uVar2);
    uVar1 = __divsf3(uVar1,DAT_0029b04c);
    unaff_r6 = __subsf3(0,uVar1);
    String::~String(aSStack_20);
  }
  if (param_9 != '\0') {
    iVar3 = __divsi3(param_11 * (uint)*(byte *)(*(int *)(this + 4) + 1),0xffffff9c);
    param_5 = param_5 + iVar3;
  }
  for (; param_6 < param_7; param_6 = param_6 + 1) {
    pcVar4 = *(code **)(*(int *)this + 0x10);
    uVar1 = String::charAt(param_3,param_6);
    uVar2 = __fixsfsi(unaff_r6);
    uVar1 = (*pcVar4)(this,param_1,uVar1,uVar2,param_5,param_10,param_11);
    uVar2 = __floatsisf(*(undefined1 *)(*(int *)(this + 4) + 4));
    uVar1 = __addsf3(uVar1,uVar2);
    unaff_r6 = __addsf3(unaff_r6,uVar1);
  }
  return unaff_r6;
}


