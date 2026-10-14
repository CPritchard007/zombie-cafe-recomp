/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002c393c CCBoundingTest::Intersect */

/* CCBoundingTest::Intersect(ccBoundingBox const*, ccBoundingSphere const*, ccVec3*) */

undefined4
CCBoundingTest::Intersect(ccBoundingBox *param_1,ccBoundingSphere *param_2,ccVec3 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  ccBoundingBox *pcVar7;
  undefined4 uVar8;
  undefined4 local_3c;
  undefined4 local_30;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  
  iVar1 = Contain(param_1,(ccVec3 *)param_2);
  if (iVar1 != 0) {
    uVar4 = *(undefined4 *)param_1;
    uVar8 = *(undefined4 *)param_2;
    uVar2 = __subsf3(uVar8,uVar4);
    uVar6 = *(undefined4 *)(param_1 + 0xc);
    __addsf3(uVar2,uVar6);
    uVar3 = FUN_002c2928();
    uVar2 = __subsf3(uVar2,uVar6);
    uVar5 = FUN_002c2928();
    iVar1 = __aeabi_fcmplt(uVar3,uVar5);
    if (iVar1 == 0) {
      local_30 = 0x3f800000;
      local_24 = uVar2;
    }
    else {
      uVar2 = __subsf3(uVar4,uVar6);
      local_24 = __subsf3(uVar2,uVar8);
      local_30 = DAT_002c3bf4;
    }
    uVar8 = *(undefined4 *)(param_2 + 4);
    uVar4 = *(undefined4 *)(param_1 + 4);
    uVar2 = __subsf3(uVar8,uVar4);
    uVar6 = *(undefined4 *)(param_1 + 0x10);
    __addsf3(uVar2,uVar6);
    uVar3 = FUN_002c2928();
    uVar2 = __subsf3(uVar2,uVar6);
    uVar5 = FUN_002c2928();
    iVar1 = __aeabi_fcmplt(uVar3,uVar5);
    if (iVar1 == 0) {
      local_3c = 0x3f800000;
      local_20 = uVar2;
    }
    else {
      uVar2 = __subsf3(uVar4,uVar6);
      local_20 = __subsf3(uVar2,uVar8);
      local_3c = DAT_002c3bf4;
    }
    uVar6 = *(undefined4 *)(param_2 + 8);
    uVar4 = *(undefined4 *)(param_1 + 8);
    uVar2 = __subsf3(uVar6,uVar4);
    uVar8 = *(undefined4 *)(param_1 + 0x14);
    __addsf3(uVar2,uVar8);
    uVar3 = FUN_002c2928();
    uVar2 = __subsf3(uVar2,uVar8);
    uVar5 = FUN_002c2928();
    iVar1 = __aeabi_fcmplt(uVar3,uVar5);
    if (iVar1 == 0) {
      uVar3 = 0x3f800000;
      local_1c = uVar2;
    }
    else {
      uVar2 = __subsf3(uVar4,uVar8);
      local_1c = __subsf3(uVar2,uVar6);
      uVar3 = DAT_002c3bf4;
    }
    uVar8 = local_1c;
    uVar5 = local_20;
    uVar2 = local_24;
    iVar1 = __aeabi_fcmpgt(local_20,local_1c);
    if (iVar1 != 0) {
      uVar8 = uVar5;
    }
    iVar1 = __aeabi_fcmpgt(uVar2,uVar8);
    if (iVar1 != 0) {
      uVar8 = uVar2;
    }
    *(undefined4 *)param_3 = 0;
    *(undefined4 *)(param_3 + 4) = 0;
    *(undefined4 *)(param_3 + 8) = 0;
    iVar1 = __aeabi_fcmpeq(uVar8,uVar2);
    if (iVar1 == 0) {
      iVar1 = __aeabi_fcmpeq(uVar8,uVar5);
      if (iVar1 == 0) {
        *(undefined4 *)(param_3 + 8) = uVar3;
        return uVar8;
      }
      *(undefined4 *)(param_3 + 4) = local_3c;
      return uVar8;
    }
    *(undefined4 *)param_3 = local_30;
    return uVar8;
  }
  pcVar7 = *(ccBoundingBox **)(DAT_002c3bf8 + 0x2c3ab4);
  *(undefined4 *)pcVar7 = *(undefined4 *)param_1;
  *(undefined4 *)(pcVar7 + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(pcVar7 + 8) = *(undefined4 *)(param_1 + 8);
  uVar2 = __addsf3(*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_2 + 0xc));
  *(undefined4 *)(pcVar7 + 0xc) = uVar2;
  uVar2 = __addsf3(*(undefined4 *)(param_1 + 0x10),*(undefined4 *)(param_2 + 0xc));
  *(undefined4 *)(pcVar7 + 0x10) = uVar2;
  uVar2 = __addsf3(*(undefined4 *)(param_1 + 0x14),*(undefined4 *)(param_2 + 0xc));
  *(undefined4 *)(pcVar7 + 0x14) = uVar2;
  iVar1 = Contain(pcVar7,(ccVec3 *)param_2);
  if (iVar1 == 0) {
    return 0x3f800000;
  }
  uVar3 = *(undefined4 *)param_1;
  uVar5 = *(undefined4 *)(param_1 + 0xc);
  local_24 = 0;
  local_20 = 0;
  local_1c = 0;
  uVar2 = __subsf3(uVar3,uVar5);
  uVar8 = *(undefined4 *)param_2;
  iVar1 = __aeabi_fcmple(uVar8,uVar2);
  if (iVar1 == 0) {
    uVar2 = __addsf3(uVar3,uVar5);
    iVar1 = __aeabi_fcmpge(uVar8,uVar2);
    if (iVar1 != 0) goto LAB_002c3b28;
  }
  else {
LAB_002c3b28:
    local_24 = __subsf3(uVar8,uVar2);
  }
  uVar5 = *(undefined4 *)(param_1 + 4);
  uVar3 = *(undefined4 *)(param_1 + 0x10);
  uVar8 = *(undefined4 *)(param_2 + 4);
  uVar2 = __subsf3(uVar5);
  iVar1 = __aeabi_fcmple(uVar8,uVar2);
  if (iVar1 == 0) {
    uVar2 = __addsf3(uVar5,uVar3);
    iVar1 = __aeabi_fcmpge(uVar8,uVar2);
    if (iVar1 != 0) goto LAB_002c3b66;
  }
  else {
LAB_002c3b66:
    local_20 = __subsf3(uVar8,uVar2);
  }
  uVar3 = *(undefined4 *)(param_1 + 8);
  uVar8 = *(undefined4 *)(param_1 + 0x14);
  uVar5 = *(undefined4 *)(param_2 + 8);
  uVar2 = __subsf3(uVar3,uVar8);
  iVar1 = __aeabi_fcmple(uVar5,uVar2);
  if (iVar1 == 0) {
    uVar2 = __addsf3(uVar3,uVar8);
    iVar1 = __aeabi_fcmpge(uVar5,uVar2);
    if (iVar1 == 0) goto LAB_002c3bae;
  }
  local_1c = __subsf3(uVar5,uVar2);
LAB_002c3bae:
  uVar2 = FUN_002c2960(&local_24);
  uVar3 = __mulsf3(*(undefined4 *)(param_2 + 0xc));
  iVar1 = __aeabi_fcmple(uVar2,uVar3);
  if (iVar1 == 0) {
    return 0x3f800000;
  }
  *(undefined4 *)param_3 = local_24;
  *(undefined4 *)(param_3 + 4) = local_20;
  *(undefined4 *)(param_3 + 8) = local_1c;
  uVar2 = FUN_002c29d4(&local_24);
  uVar2 = __subsf3(uVar2,*(undefined4 *)(param_2 + 0xc));
  return uVar2;
}


