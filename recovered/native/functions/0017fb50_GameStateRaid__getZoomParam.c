/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0017fb50 GameStateRaid::getZoomParam */

/* GameStateRaid::getZoomParam(float, float, float) */

undefined4 __thiscall
GameStateRaid::getZoomParam(GameStateRaid *this,float param_1,float param_2,float param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 in_r1;
  undefined4 in_r2;
  undefined4 in_r3;
  undefined4 uVar3;
  
  uVar1 = __mulsf3(in_r1,in_r2);
  uVar3 = **(undefined4 **)(DAT_0017fb88 + 0x17fb66);
  iVar2 = __aeabi_fcmpgt(in_r3,uVar1);
  if ((iVar2 == 0) && (iVar2 = __aeabi_fcmpgt(uVar1,uVar3), in_r3 = uVar1, iVar2 != 0)) {
    in_r3 = uVar3;
  }
  return in_r3;
}


