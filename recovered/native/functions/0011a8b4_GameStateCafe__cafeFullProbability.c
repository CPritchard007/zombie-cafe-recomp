/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0011a8b4 GameStateCafe::cafeFullProbability */

/* GameStateCafe::cafeFullProbability(int, float, float) */

void __thiscall
GameStateCafe::cafeFullProbability(GameStateCafe *this,int param_1,float param_2,float param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 in_r2;
  undefined4 in_r3;
  float __x;
  float __y;
  undefined8 uVar5;
  
  iVar1 = __aeabi_fcmpge(in_r2,in_r3);
  if (iVar1 == 0) {
    uVar4 = __divsf3(in_r2,in_r3);
    uVar5 = __floatsisf(param_1);
    uVar2 = uVar4;
    powf((float)uVar5,(float)((ulonglong)uVar5 >> 0x20));
    uVar5 = __floatsisf(param_1 + 1);
    uVar3 = uVar4;
    powf((float)uVar5,(float)((ulonglong)uVar5 >> 0x20));
    uVar4 = __subsf3(0x3f800000,uVar4);
    uVar2 = __mulsf3(uVar4,uVar2);
    uVar3 = __subsf3(0x3f800000,uVar3);
    __divsf3(uVar2,uVar3);
  }
  else {
    uVar2 = __floatsisf(param_1 + 1);
    uVar2 = __divsf3(0x3f800000,uVar2);
    uVar3 = __divsf3(in_r3,in_r2);
    powf(__x,__y);
    uVar3 = __subsf3(0x3f800000,uVar3);
    uVar4 = __subsf3(0x3f800000,uVar2);
    uVar3 = __mulsf3(uVar3,uVar4);
    uVar2 = __mulsf3(uVar2,0x3f000000);
    __addsf3(uVar3,uVar2);
  }
  return;
}


