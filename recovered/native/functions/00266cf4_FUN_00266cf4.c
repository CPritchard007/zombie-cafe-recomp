/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00266cf4 FUN_00266cf4 */

void FUN_00266cf4(int param_1,undefined4 *param_2,int param_3,int param_4,int param_5,int param_6,
                 int param_7,int param_8)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  uVar1 = FUN_002662b8();
  iVar5 = 0;
  for (iVar3 = param_2[4]; iVar3 != 0; iVar3 = *(int *)(iVar3 + 0x14)) {
    iVar5 = iVar5 + 1;
  }
  for (; iVar5 != 0; iVar5 = iVar5 + -1) {
    if ((*(int *)(param_5 + iVar5 * 4 + -4) != 0) &&
       (FUN_0026641e(uVar1,0x61,iVar5 + param_3), param_8 != 0)) {
      FUN_0025c3b8(uVar1,0x10);
    }
  }
  uVar2 = FUN_002627dc(param_1);
  FUN_00266266(uVar1,0x1f,param_4 + 1,param_2[2],uVar2);
  FUN_00263920(uVar1,param_2);
  FUN_0025cb14(param_1,param_4 + 1,param_2[2]);
  uVar4 = 0;
  if (*(char *)(param_1 + 0x12) == '\0') {
    uVar4 = 2;
    if (param_6 != 0) {
      uVar4 = 4;
    }
    uVar4 = uVar4 | 1;
  }
  if (param_7 != 0) {
    uVar4 = uVar4 | 8;
  }
  if (param_8 != 0) {
    uVar4 = uVar4 | 0x10;
  }
  FUN_00266266(uVar1,0x39,param_3,uVar2,param_4);
  if (*(char *)(param_1 + 0x12) == '\0') {
    FUN_00263832(uVar1,0xffffffff,*param_2);
  }
  FUN_0025c3b8(uVar1,uVar4);
  return;
}


