/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00278ac2 FUN_00278ac2 */

void FUN_00278ac2(int param_1,byte *param_2,undefined4 param_3,uint param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined4 local_20;
  undefined4 local_1c [2];
  
  iVar5 = *(int *)(param_1 + 8);
  local_20 = 0;
  local_1c[0] = 0;
  if (iVar5 == 0) {
    return;
  }
  if (param_2 == (byte *)0x0) {
    return;
  }
  uVar6 = (uint)*param_2;
  iVar3 = (uVar6 + 1 ^ 1) - 1;
  if (uVar6 == 0x48) {
    if (param_4 == 0) {
      uVar2 = FUN_00266020(iVar5);
      FUN_0027872c(param_1,param_2,param_3,uVar2);
      FUN_0025c384(iVar5,uVar2);
    }
    else {
      FUN_0027872c(param_1,param_2,param_3,param_3);
    }
    goto LAB_00278c58;
  }
  if (uVar6 < 0x49) {
    if (uVar6 == 0x45) {
      FUN_00278ac2(param_1,*(undefined4 *)(param_2 + 8),param_3,param_4);
      FUN_00278ac2(param_1,*(undefined4 *)(param_2 + 0xc),param_3,param_4);
      goto LAB_00278c58;
    }
    if (uVar6 < 0x46) {
      if (uVar6 == 0x13) {
        FUN_002788a0(param_1,*(undefined4 *)(param_2 + 8),param_3,param_4);
        goto LAB_00278c58;
      }
      if (uVar6 == 0x44) {
        uVar2 = FUN_00266020(iVar5);
        *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) + 1;
        FUN_002788a0(param_1,*(undefined4 *)(param_2 + 8),uVar2,param_4 ^ 8);
        FUN_00278ac2(param_1,*(undefined4 *)(param_2 + 0xc),param_3,param_4);
        FUN_0025c384(iVar5,uVar2);
        FUN_002644ac(param_1);
        goto LAB_00278c58;
      }
    }
    else {
      if (uVar6 == 0x46) goto LAB_00278bb2;
      if (uVar6 == 0x47) {
        FUN_00278a42(param_1,param_2,param_3,0,param_4);
        goto LAB_00278c58;
      }
    }
LAB_00278c3c:
    uVar2 = FUN_002786c2(param_1,param_2,&local_20);
    FUN_00266266(iVar5,0x1c,uVar2,param_3,param_4 != 0);
  }
  else {
    if (uVar6 < 0x51) {
      if (uVar6 < 0x4b) {
        uVar2 = FUN_002786c2(param_1,*(undefined4 *)(param_2 + 8),&local_20);
        FUN_0026641e(iVar5,iVar3,uVar2,param_3);
        goto LAB_00278c58;
      }
      uVar2 = FUN_002786c2(param_1,*(undefined4 *)(param_2 + 8),&local_20);
      uVar1 = FUN_002786c2(param_1,*(undefined4 *)(param_2 + 0xc),local_1c);
      uVar4 = *(undefined4 *)(param_2 + 8);
      uVar7 = *(undefined4 *)(param_2 + 0xc);
    }
    else {
      if (uVar6 != 0x92) goto LAB_00278c3c;
LAB_00278bb2:
      uVar2 = FUN_002786c2(param_1,*(undefined4 *)(param_2 + 8),&local_20);
      uVar1 = FUN_002786c2(param_1,*(undefined4 *)(param_2 + 0xc),local_1c);
      uVar4 = *(undefined4 *)(param_2 + 8);
      uVar7 = *(undefined4 *)(param_2 + 0xc);
      param_4 = 0x80;
      iVar3 = 0x4c - (uint)(*param_2 == 0x46);
    }
    FUN_0026d3fa(param_1,uVar4,uVar7,iVar3,uVar2,uVar1,param_3,param_4);
  }
LAB_00278c58:
  FUN_002627fe(param_1,local_20);
  FUN_002627fe(param_1,local_1c[0]);
  return;
}


