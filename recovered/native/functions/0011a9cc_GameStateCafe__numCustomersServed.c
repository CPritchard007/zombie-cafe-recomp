/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0011a9cc GameStateCafe::numCustomersServed */

/* GameStateCafe::numCustomersServed(float, long long, float, float) */

void GameStateCafe::numCustomersServed(float param_1,longlong param_2,float param_3,float param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 in_r1;
  undefined4 in_r2;
  undefined4 in_r3;
  
  uVar1 = __floatdisf(in_r2,in_r3);
  uVar1 = __mulsf3(in_r1,uVar1);
  uVar2 = __subsf3(0x3f800000,(undefined4)param_2);
  uVar1 = __mulsf3(uVar1,uVar2);
  uVar2 = __subsf3(0x3f800000,param_2._4_4_);
  __mulsf3(uVar1,uVar2);
  __fixsfsi();
  return;
}


