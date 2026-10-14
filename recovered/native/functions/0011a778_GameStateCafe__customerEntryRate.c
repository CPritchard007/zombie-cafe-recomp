/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0011a778 GameStateCafe::customerEntryRate */

/* GameStateCafe::customerEntryRate(float) */

void __thiscall GameStateCafe::customerEntryRate(GameStateCafe *this,float param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 in_r1;
  int iVar4;
  int iVar5;
  
  iVar5 = **(int **)(DAT_0011a7fc + 0x11a782);
  iVar4 = **(int **)(DAT_0011a800 + 0x11a78a);
  uVar1 = __floatsisf(iVar4);
  uVar2 = __floatsisf(iVar4 - **(int **)(DAT_0011a804 + 0x11a79a));
  uVar2 = __mulsf3(uVar2,in_r1);
  uVar1 = __subsf3(uVar1,uVar2);
  uVar1 = __divsf3(0x3f800000,uVar1);
  uVar2 = __floatsisf(iVar5);
  uVar2 = __mulsf3(uVar2,0x3b800000);
  uVar3 = __floatsisf(**(int **)(DAT_0011a808 + 0x11a7d2) - iVar5);
  uVar3 = __mulsf3(uVar3,0x3b800000);
  uVar3 = __mulsf3(uVar3,in_r1);
  uVar2 = __addsf3(uVar2,uVar3);
  __mulsf3(uVar1,uVar2);
  return;
}


