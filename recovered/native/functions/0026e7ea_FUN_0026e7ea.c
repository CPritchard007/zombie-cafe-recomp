/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0026e7ea FUN_0026e7ea */

int FUN_0026e7ea(undefined4 *param_1,int param_2,int param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  
  uVar1 = FUN_0025d12c(*param_1,*(undefined4 *)(param_2 + 0x44));
  uVar2 = FUN_002662b8(param_1);
  FUN_002663cc(param_1,param_3,uVar1,param_2,param_4);
  iVar5 = 1;
  for (iVar4 = *(int *)(param_2 + 0x10); iVar4 != 0; iVar4 = *(int *)(iVar4 + 0x14)) {
    uVar3 = FUN_0026e770(param_1,iVar4);
    FUN_002662da(uVar2,param_4,iVar5 + param_3,*(undefined4 *)(iVar4 + 0x28),uVar1,uVar3,0xfffffff0)
    ;
    iVar5 = iVar5 + 1;
  }
  if ((int)param_1[0x12] < param_3 + iVar5) {
    param_1[0x12] = param_3 + iVar5;
  }
  return iVar5 + -1;
}


