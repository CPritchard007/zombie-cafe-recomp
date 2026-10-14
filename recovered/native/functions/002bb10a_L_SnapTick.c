/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002bb10a L_SnapTick */

/* L_SnapTick(SSpinner*, float) */

undefined4 L_SnapTick(SSpinner *param_1,float param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 in_r1;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  bool bVar9;
  bool bVar10;
  int local_24;
  
  iVar8 = *(int *)(param_1 + 0x24);
  uVar6 = *(undefined4 *)(param_1 + 0x20);
  local_24 = __mulsf3(iVar8,in_r1);
  uVar1 = __addsf3(uVar6,local_24);
  uVar7 = *(undefined4 *)(param_1 + 0x2c);
  iVar2 = __aeabi_fcmple(uVar1,uVar7);
  if (iVar2 == 0) {
    bVar9 = false;
  }
  else {
    iVar2 = __aeabi_fcmpgt(uVar6,uVar7);
    bVar9 = iVar2 != 0;
  }
  iVar2 = __aeabi_fcmpge(uVar1,uVar7);
  if (iVar2 == 0) {
    bVar10 = false;
  }
  else {
    iVar2 = __aeabi_fcmplt(uVar6,uVar7);
    bVar10 = iVar2 != 0;
  }
  bVar9 = (bool)(bVar9 | bVar10);
  if (*(int *)(param_1 + 8) == 0) {
    iVar2 = __aeabi_fcmpge(uVar1,*(undefined4 *)(param_1 + 4));
    iVar3 = __aeabi_fcmple(uVar1,0);
    bVar9 = (bool)(bVar9 | (iVar3 != 0 || iVar2 != 0));
  }
  if (bVar9) {
    iVar3 = __aeabi_fcmplt(iVar8,0);
    iVar2 = iVar8 + -0x80000000;
    if (iVar3 == 0) {
      iVar2 = iVar8;
    }
    iVar2 = __aeabi_fcmplt(iVar2,*(undefined4 *)(param_1 + 0x14));
    if (iVar2 == 0) {
      iVar2 = __aeabi_fcmplt(local_24,0);
      if (iVar2 != 0) {
        local_24 = local_24 + -0x80000000;
      }
      iVar2 = __subsf3(uVar1,uVar7);
      iVar3 = __aeabi_fcmplt(iVar2,0);
      if (iVar3 != 0) {
        iVar2 = iVar2 + -0x80000000;
      }
      uVar1 = __mulsf3(*(int *)(param_1 + 0x10) + -0x80000000,iVar8);
      uVar4 = __divsf3(iVar2,local_24);
      uVar4 = __subsf3(0x3f800000,uVar4);
      uVar4 = __subsf3(0x3f800000,uVar4);
      uVar5 = __mulsf3(uVar4,uVar1);
      uVar5 = __mulsf3(uVar5,in_r1);
      uVar7 = __addsf3(uVar7,uVar5);
      *(undefined4 *)(param_1 + 0x20) = uVar7;
      uVar7 = __mulsf3(in_r1,*(undefined4 *)(param_1 + 0x1c));
      uVar7 = __mulsf3(uVar7,uVar4);
      uVar1 = __addsf3(uVar1,uVar7);
      *(undefined4 *)(param_1 + 0x24) = uVar1;
    }
    else {
      *(undefined4 *)(param_1 + 0x20) = uVar7;
      *(undefined4 *)(param_1 + 0x24) = 0;
      *(undefined4 *)(param_1 + 0x1c) = 0;
    }
    uVar1 = __subsf3(*(undefined4 *)(param_1 + 0x20),uVar6);
    *(undefined4 *)(param_1 + 0x28) = uVar1;
    uVar1 = 1;
  }
  else {
    uVar7 = *(undefined4 *)(param_1 + 0x1c);
    iVar2 = __aeabi_fcmpeq(uVar7,0);
    if (iVar2 == 0) {
      *(undefined4 *)(param_1 + 0x20) = uVar1;
      uVar1 = __mulsf3(uVar7,in_r1);
      uVar1 = __addsf3(iVar8,uVar1);
      *(undefined4 *)(param_1 + 0x24) = uVar1;
    }
    uVar1 = __subsf3(*(undefined4 *)(param_1 + 0x20),uVar6);
    *(undefined4 *)(param_1 + 0x28) = uVar1;
    uVar1 = 0;
  }
  return uVar1;
}


