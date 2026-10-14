/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0011a80c GameStateCafe::customerNotServedProbability */

/* GameStateCafe::customerNotServedProbability(float, int, float) */

undefined4 __thiscall
GameStateCafe::customerNotServedProbability
          (GameStateCafe *this,float param_1,int param_2,float param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 in_r2;
  undefined4 in_r3;
  
  uVar1 = __floatsisf(in_r2);
  uVar1 = __divsf3(uVar1,in_r3);
  uVar1 = __subsf3(param_2,uVar1);
  uVar1 = __divsf3(uVar1,param_2);
  iVar2 = __aeabi_fcmplt(uVar1,0);
  if (iVar2 == 0) {
    iVar2 = __aeabi_fcmpgt(uVar1,0x3f800000);
    if (iVar2 != 0) {
      uVar1 = 0x3f800000;
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}


