/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002707d4 FUN_002707d4 */

int FUN_002707d4(int *param_1,int param_2,undefined4 param_3,undefined4 param_4,int param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  int local_34;
  int local_30;
  
  iVar3 = *(int *)(param_2 + 0x24);
  iVar2 = param_1[2];
  iVar4 = iVar3 + 1;
  iVar7 = *(int *)(param_2 + 0xc);
  iVar1 = FUN_00262834(param_1,iVar4);
  FUN_0026641e(iVar2,0x41,param_3);
  local_30 = iVar1;
  for (local_34 = 0; local_34 < iVar3; local_34 = local_34 + 1) {
    iVar5 = *(int *)(local_34 * 4 + *(int *)(param_2 + 4));
    if (iVar5 == *(int *)(iVar7 + 4)) {
      FUN_0026641e(iVar2,0xf,iVar1 + iVar3,local_30);
    }
    else {
      FUN_00266266(iVar2,0x1d,param_3,iVar5,local_30);
      if (*(int *)(iVar7 + 0x1c) == 0) {
        FUN_002706a0(iVar2,iVar7,iVar5,0xffffffff);
      }
    }
    local_30 = local_30 + 1;
  }
  if (param_5 != 0) {
    uVar6 = 0;
    if ((*(int *)(iVar7 + 0x1c) == 0) && (-1 < *(int *)(*param_1 + 0x18) << 0x18)) {
      uVar6 = FUN_0025ef9c(iVar2,param_2);
    }
    FUN_00266266(iVar2,0x1f,iVar1,iVar4,param_4);
    FUN_00263832(iVar2,0xffffffff,uVar6,0);
  }
  FUN_0025cbb8(param_1,iVar1,iVar4);
  return iVar1;
}


