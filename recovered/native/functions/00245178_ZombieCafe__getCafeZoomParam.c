/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00245178 ZombieCafe::getCafeZoomParam */

/* ZombieCafe::getCafeZoomParam(float, float) */

undefined4 __thiscall ZombieCafe::getCafeZoomParam(ZombieCafe *this,float param_1,float param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 in_r1;
  undefined4 in_r2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  
  if (this[DAT_002451f0] == (ZombieCafe)0x0) {
    uVar1 = __mulsf3(in_r1,in_r2);
    iVar4 = **(int **)(DAT_002451f8 + 0x2451b0);
    iVar2 = SmDev();
    uVar5 = *(undefined4 *)(iVar2 * 4 + iVar4);
    iVar2 = CapcomApp::getInstance();
    uVar3 = *(undefined4 *)(iVar2 + 0x40);
    iVar2 = __aeabi_fcmpgt(uVar5,uVar1);
    if (iVar2 != 0) {
      return uVar5;
    }
  }
  else {
    uVar1 = __mulsf3(in_r1,in_r2);
    iVar2 = CapcomApp::getInstance();
    uVar3 = *(undefined4 *)(iVar2 + 0x40);
    iVar2 = __aeabi_fcmplt(uVar1,DAT_002451f4);
    if (iVar2 != 0) {
      return DAT_002451f4;
    }
  }
  uVar3 = __mulsf3(uVar3,DAT_002451fc);
  iVar2 = __aeabi_fcmpgt(uVar1,uVar3);
  if (iVar2 != 0) {
    return uVar3;
  }
  return uVar1;
}


