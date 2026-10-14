/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002788a0 FUN_002788a0 */

void FUN_002788a0(int param_1,byte *param_2,undefined4 param_3,uint param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined4 local_20;
  undefined4 local_1c [2];
  
  iVar4 = *(int *)(param_1 + 8);
  local_20 = 0;
  local_1c[0] = 0;
  if (iVar4 == 0) {
    return;
  }
  if (param_2 == (byte *)0x0) {
    return;
  }
  uVar6 = (uint)*param_2;
  if (uVar6 == 0x48) {
    uVar1 = FUN_00266020(iVar4);
    uVar2 = uVar1;
    if (param_4 != 0) {
      uVar2 = param_3;
    }
    FUN_0027872c(param_1,param_2,uVar1,uVar2);
    FUN_0026641e(iVar4,1,0,param_3);
    FUN_0025c384(iVar4,uVar1);
    goto LAB_00278a2e;
  }
  if (uVar6 < 0x49) {
    if (uVar6 == 0x45) {
      uVar2 = FUN_00266020(iVar4);
      *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) + 1;
      FUN_00278ac2(param_1,*(undefined4 *)(param_2 + 8),uVar2,param_4 ^ 8);
      FUN_002788a0(param_1,*(undefined4 *)(param_2 + 0xc),param_3,param_4);
      FUN_0025c384(iVar4,uVar2);
      FUN_002644ac(param_1);
      goto LAB_00278a2e;
    }
    if (uVar6 < 0x46) {
      if (uVar6 == 0x13) {
        FUN_00278ac2(param_1,*(undefined4 *)(param_2 + 8),param_3,param_4);
        goto LAB_00278a2e;
      }
      if (uVar6 == 0x44) {
        FUN_002788a0(param_1,*(undefined4 *)(param_2 + 8),param_3,param_4);
        FUN_002788a0(param_1,*(undefined4 *)(param_2 + 0xc),param_3,param_4);
        goto LAB_00278a2e;
      }
    }
    else {
      if (uVar6 == 0x46) goto LAB_00278984;
      if (uVar6 == 0x47) {
        FUN_00278a42(param_1,param_2,param_3,1,param_4);
        goto LAB_00278a2e;
      }
    }
LAB_00278a10:
    uVar2 = FUN_002786c2(param_1,param_2,&local_20);
    FUN_00266266(iVar4,0x1b,uVar2,param_3,param_4 != 0);
  }
  else {
    if (uVar6 < 0x51) {
      if (uVar6 < 0x4b) {
        uVar2 = FUN_002786c2(param_1,*(undefined4 *)(param_2 + 8),&local_20);
        FUN_0026641e(iVar4,uVar6,uVar2,param_3);
        goto LAB_00278a2e;
      }
      uVar2 = FUN_002786c2(param_1,*(undefined4 *)(param_2 + 8),&local_20);
      uVar1 = FUN_002786c2(param_1,*(undefined4 *)(param_2 + 0xc),local_1c);
      uVar3 = *(undefined4 *)(param_2 + 8);
      uVar5 = *(undefined4 *)(param_2 + 0xc);
    }
    else {
      if (uVar6 != 0x92) goto LAB_00278a10;
LAB_00278984:
      uVar2 = FUN_002786c2(param_1,*(undefined4 *)(param_2 + 8),&local_20);
      uVar1 = FUN_002786c2(param_1,*(undefined4 *)(param_2 + 0xc),local_1c);
      uVar3 = *(undefined4 *)(param_2 + 8);
      uVar5 = *(undefined4 *)(param_2 + 0xc);
      param_4 = 0x80;
      uVar6 = 0x4c - (uVar6 != 0x46);
    }
    FUN_0026d3fa(param_1,uVar3,uVar5,uVar6,uVar2,uVar1,param_3,param_4);
  }
LAB_00278a2e:
  FUN_002627fe(param_1,local_20);
  FUN_002627fe(param_1,local_1c[0]);
  return;
}


