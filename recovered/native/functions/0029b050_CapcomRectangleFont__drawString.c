/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0029b050 CapcomRectangleFont::drawString */

/* CapcomRectangleFont::drawString(CapcomGraphics*, String, int, int, bool, bool, int, int) */

undefined4 __thiscall
CapcomRectangleFont::drawString
          (CapcomRectangleFont *this,undefined4 param_1,String *param_3,undefined4 param_4,
          int param_5,char param_6,char param_7,undefined4 param_8,int param_9)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  code *pcVar6;
  String aSStack_20 [12];
  
  uVar1 = __floatsisf(param_4);
  if (param_6 != '\0') {
    pcVar6 = *(code **)(*(int *)this + 4);
    String::String(aSStack_20,param_3);
    uVar2 = (*pcVar6)(this,aSStack_20,0,0xffffffff);
    uVar3 = __floatsisf(param_8);
    uVar2 = __mulsf3(uVar2,uVar3);
    uVar2 = __divsf3(uVar2,DAT_0029b12c);
    uVar1 = __subsf3(uVar1,uVar2);
    String::~String(aSStack_20);
  }
  if (param_7 != '\0') {
    iVar4 = __divsi3(param_9 * (uint)*(byte *)(*(int *)(this + 4) + 1),0xffffff9c);
    param_5 = param_5 + iVar4;
  }
  iVar4 = 0;
  while( true ) {
    iVar5 = String::charAt(param_3,iVar4);
    if (iVar5 == 0) break;
    uVar2 = __fixsfsi(uVar1);
    uVar2 = (**(code **)(*(int *)this + 0x10))(this,param_1,iVar5,uVar2,param_5,param_8,param_9);
    iVar4 = iVar4 + 1;
    uVar3 = __floatsisf(*(undefined1 *)(*(int *)(this + 4) + 4));
    uVar2 = __addsf3(uVar2,uVar3);
    uVar1 = __addsf3(uVar1,uVar2);
  }
  return uVar1;
}


