/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0025d53e FUN_0025d53e */

undefined8 FUN_0025d53e(undefined4 param_1,int *param_2,undefined4 param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  
  uVar2 = 0;
  uVar3 = 0;
  iVar1 = 0;
  uVar5 = param_1;
  if (param_2 != (int *)0x0) {
    for (; iVar1 < *param_2; iVar1 = iVar1 + 1) {
      uVar4 = FUN_0025d4dc(uVar5,*(undefined4 *)(iVar1 * 0x14 + param_2[2]),iVar1 * 0x14,param_2[2],
                           param_1,uVar5,param_3);
      uVar2 = (uint)uVar4 | uVar2;
      uVar3 = (uint)((ulonglong)uVar4 >> 0x20) | uVar3;
    }
  }
  return CONCAT44(uVar3,uVar2);
}


