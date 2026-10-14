/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0026e858 FUN_0026e858 */

void FUN_0026e858(int param_1,undefined4 param_2,int param_3,int param_4,int *param_5,int *param_6,
                 int param_7,int param_8,int param_9)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int local_44;
  int *local_40;
  int local_34;
  int *local_30;
  int *local_24;
  
  iVar1 = FUN_002662b8();
  iVar9 = *(int *)(param_1 + 0x48) + -1;
  uVar2 = FUN_00266020();
  if (param_8 < 0) {
    FUN_0026641e(iVar1,0x76,(char)param_5[6],uVar2);
  }
  local_24 = param_6;
  local_30 = param_6;
  for (local_34 = 0; iVar7 = param_5[5], local_34 < iVar7; local_34 = local_34 + 1) {
    iVar7 = *local_30;
    local_30 = local_30 + 1;
    FUN_0026641e(iVar1,0x49,iVar7 + param_7 + 1,uVar2);
  }
  if (param_9 == 0) {
    if (param_4 == 0) {
      uVar3 = FUN_002627dc();
      FUN_0026641e(iVar1,0xf,*param_6 + 1 + param_7,uVar3);
      uVar4 = FUN_0026641e(iVar1,0x15,uVar3,0);
      if ((param_8 == 1) && (param_3 == *param_5)) {
        FUN_00266266(iVar1,0x4c,param_7,uVar2,uVar3);
      }
      FUN_002663cc(param_1,iVar9,param_2,param_3,0x27);
      FUN_00266266(iVar1,0x36,iVar9,0,uVar3);
      FUN_0026641e(iVar1,1,0,uVar2);
      FUN_002624c2(iVar1,*(int *)(iVar1 + 0x1c) + -2);
      FUN_002624c2(iVar1,uVar4);
      FUN_002627fe(param_1,uVar3);
    }
    else {
      iVar5 = FUN_00262834(param_1,iVar7);
      uVar3 = FUN_002627dc(param_1);
      uVar4 = FUN_0026e770(param_1,param_4);
      FUN_00266266(iVar1,0x27,iVar9,*(undefined4 *)(param_4 + 0x28),param_2);
      FUN_00263832(iVar1,0xffffffff,uVar4,0xfffffff0);
      local_40 = param_6;
      for (local_44 = param_9; local_44 < iVar7; local_44 = local_44 + 1) {
        iVar10 = *local_40;
        local_40 = local_40 + 1;
        FUN_0026641e(iVar1,0xe,iVar10 + 1 + param_7,local_44 + iVar5);
      }
      if ((param_8 == 1) && (param_3 == *param_5)) {
        iVar10 = *(int *)(iVar1 + 0x1c);
        for (local_44 = 0; local_44 < iVar7; local_44 = local_44 + 1) {
          iVar8 = *local_24;
          local_24 = local_24 + 1;
          iVar6 = *(int *)(local_44 * 4 + *(int *)(param_4 + 4));
          iVar11 = param_7;
          if (iVar6 != *(int *)(param_3 + 4)) {
            iVar11 = iVar6 + 1 + param_7;
          }
          FUN_00266266(iVar1,0x4b,iVar8 + 1 + param_7,iVar7 + iVar10 + 1,iVar11);
          FUN_0025c3b8(iVar1,8);
        }
        FUN_0026641e(iVar1,1,0,uVar2);
      }
      FUN_00266266(iVar1,0x1f,iVar5,iVar7,uVar3);
      uVar4 = FUN_0025ef9c(iVar1,param_4);
      FUN_00263832(iVar1,0xffffffff,uVar4,0);
      FUN_00266944(iVar1,0x34,iVar9,uVar2,uVar3,0);
      FUN_002627fe(param_1,uVar3);
      FUN_0025cbb8(param_1,iVar5,iVar7);
    }
  }
  if ((((char)param_5[6] == '\0') && (*(int *)(param_1 + 0x1b0) == 0)) &&
     (*(char *)(param_1 + 0x17) == '\0')) {
    FUN_002662fa(param_1,2,DAT_0026eae4 + 0x26eaa0,0xfffffffe);
  }
  else {
    if ((0 < param_8) && ((char)param_5[6] == '\0')) {
      if (*(int *)(param_1 + 0x1b0) != 0) {
        param_1 = *(int *)(param_1 + 0x1b0);
      }
      *(undefined1 *)(param_1 + 0x18) = 1;
    }
    FUN_0026641e(iVar1,0x75,(char)param_5[6],param_8);
  }
  FUN_0025c384(iVar1,uVar2);
  FUN_002665da(iVar1,0x2d,iVar9);
  return;
}


