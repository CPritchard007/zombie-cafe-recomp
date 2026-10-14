/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0011a854 GameStateCafe::customerDepartureRate */

/* GameStateCafe::customerDepartureRate(float, float) */

void __thiscall
GameStateCafe::customerDepartureRate(GameStateCafe *this,float param_1,float param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 in_r1;
  undefined4 in_r2;
  
  uVar1 = __floatsisf(**(undefined4 **)(DAT_0011a8ac + 0x11a860));
  uVar1 = __mulsf3(in_r1,uVar1);
  uVar2 = __subsf3(0x3f800000,in_r1);
  uVar3 = __floatsisf(**(undefined4 **)(DAT_0011a8b0 + 0x11a882));
  uVar3 = __addsf3(uVar3,in_r2);
  uVar2 = __mulsf3(uVar2,uVar3);
  uVar1 = __addsf3(uVar1,uVar2);
  __divsf3(0x3f800000,uVar1);
  return;
}


