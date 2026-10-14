/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002c4314 CCBoundingTest::Intersect */

/* CCBoundingTest::Intersect(ccBoundingCup const*, ccBoundingSphere const*, ccVec3*) */

undefined4
CCBoundingTest::Intersect(ccBoundingCup *param_1,ccBoundingSphere *param_2,ccVec3 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  ccBoundingCircle *pcVar7;
  undefined4 uVar8;
  ccBoundingCircle *pcVar9;
  float fVar10;
  float extraout_s0;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  
  uVar6 = *(undefined4 *)(param_1 + 4);
  iVar4 = DAT_002c4618 + 0x2c4322;
  uVar5 = *(undefined4 *)(param_1 + 0xc);
  uVar1 = __addsf3(uVar6,uVar5);
  uVar2 = __subsf3(uVar6,uVar5);
  uVar8 = *(undefined4 *)(param_2 + 4);
  iVar3 = __aeabi_fcmpge(uVar8,uVar2);
  if ((iVar3 == 0) || (iVar3 = __aeabi_fcmple(uVar8,uVar1), iVar3 == 0)) {
    uVar6 = *(undefined4 *)(param_2 + 0xc);
    uVar5 = __subsf3(uVar2,uVar6);
    iVar3 = __aeabi_fcmpge(uVar8,uVar5);
    if ((iVar3 != 0) && (iVar3 = __aeabi_fcmple(uVar8,uVar2), iVar3 != 0)) {
      uVar1 = __subsf3(uVar5,uVar8);
      iVar3 = __aeabi_fcmple(uVar1,0);
      if (iVar3 == 0) {
        return uVar1;
      }
      local_4c = *(undefined4 *)param_1;
      local_48 = *(undefined4 *)(param_1 + 8);
      local_44 = *(undefined4 *)param_2;
      local_40 = *(undefined4 *)(param_2 + 8);
      pcVar7 = *(ccBoundingCircle **)(iVar4 + DAT_002c461c);
      CCBoundingCircle::Init(pcVar7,(ccVec2 *)&local_4c,extraout_s0);
      uVar5 = Contain(pcVar7,(ccVec2 *)&local_44);
      iVar3 = __aeabi_fcmple(uVar5,0);
      if (iVar3 != 0) {
        *(undefined4 *)param_3 = 0;
        uVar2 = DAT_002c4624;
        *(undefined4 *)(param_3 + 8) = 0;
        *(undefined4 *)(param_3 + 4) = uVar2;
        return uVar1;
      }
      uVar1 = __subsf3(*(undefined4 *)(param_2 + 4),uVar2);
      uVar2 = __subsf3(*(undefined4 *)(param_2 + 8),*(undefined4 *)(param_1 + 8));
      local_3c = __subsf3(*(undefined4 *)param_2,*(undefined4 *)param_1);
      local_20 = 0;
      local_38 = uVar1;
      local_34 = uVar2;
      local_24 = local_3c;
      local_1c = uVar2;
      iVar3 = FUN_002c2994(&local_24);
      if (iVar3 == 0) {
        uVar1 = FUN_002c29d4(&local_24);
        uVar1 = __divsf3(0x3f800000,uVar1);
        uVar6 = *(undefined4 *)(param_1 + 0x14);
        uVar2 = __mulsf3(uVar1,local_20);
        uVar2 = __mulsf3(uVar2,uVar6);
        uVar5 = __mulsf3(uVar1,local_1c);
        uVar5 = __mulsf3(uVar5,uVar6);
        uVar1 = __mulsf3(uVar1,local_24);
        local_30 = __mulsf3(uVar1,uVar6);
        local_2c = uVar2;
        local_28 = uVar5;
      }
      else {
        local_30 = 0;
        local_2c = 0;
        local_28 = 0;
      }
LAB_002c45dc:
      uVar1 = __subsf3(local_38,local_2c);
      uVar2 = __subsf3(local_34,local_28);
      uVar5 = __subsf3(local_3c,local_30);
      *(undefined4 *)(param_3 + 8) = uVar2;
      *(undefined4 *)param_3 = uVar5;
      *(undefined4 *)(param_3 + 4) = uVar1;
      uVar1 = FUN_002c29d4(param_3);
      uVar1 = __subsf3(uVar1,*(undefined4 *)(param_2 + 0xc));
      return uVar1;
    }
    iVar3 = __aeabi_fcmpge(uVar8,uVar1);
    if (iVar3 != 0) {
      uVar2 = __addsf3(uVar1,uVar6);
      iVar3 = __aeabi_fcmple(uVar8,uVar2);
      if (iVar3 != 0) {
        uVar2 = __subsf3(*(undefined4 *)(param_2 + 8),*(undefined4 *)(param_1 + 8));
        local_3c = __subsf3(*(undefined4 *)param_2,*(undefined4 *)param_1);
        local_38 = __subsf3(uVar8,uVar1);
        local_24 = local_3c;
        local_20 = 0;
        local_34 = uVar2;
        local_1c = uVar2;
        iVar3 = FUN_002c2994(&local_24);
        if (iVar3 == 0) {
          uVar1 = FUN_002c29d4(&local_24);
          uVar1 = __divsf3(0x3f800000,uVar1);
          uVar6 = *(undefined4 *)(param_1 + 0x10);
          uVar2 = __mulsf3(uVar1,local_20);
          uVar2 = __mulsf3(uVar2,uVar6);
          uVar5 = __mulsf3(uVar1,local_1c);
          uVar5 = __mulsf3(uVar5,uVar6);
          uVar1 = __mulsf3(uVar1,local_24);
          local_30 = __mulsf3(uVar1,uVar6);
          local_2c = uVar2;
          local_28 = uVar5;
        }
        else {
          local_30 = 0;
          local_2c = 0;
          local_28 = 0;
        }
        goto LAB_002c45dc;
      }
    }
  }
  else {
    uVar1 = __subsf3(uVar8,uVar6);
    uVar1 = __addsf3(uVar1,uVar5);
    uVar1 = __mulsf3(uVar1,*(undefined4 *)(param_1 + 0x24));
    __addsf3(uVar1,*(undefined4 *)(param_1 + 0x14));
    fVar10 = (float)__mulsf3(*(undefined4 *)(param_2 + 0xc),*(undefined4 *)(param_1 + 0x28));
    local_4c = *(undefined4 *)param_1;
    local_48 = *(undefined4 *)(param_1 + 8);
    local_44 = *(undefined4 *)param_2;
    local_40 = *(undefined4 *)(param_2 + 8);
    pcVar9 = *(ccBoundingCircle **)(iVar4 + DAT_002c461c);
    fVar10 = (float)CCBoundingCircle::Init(pcVar9,(ccVec2 *)&local_4c,fVar10);
    pcVar7 = *(ccBoundingCircle **)(iVar4 + DAT_002c4620);
    CCBoundingCircle::Init(pcVar7,(ccVec2 *)&local_44,fVar10);
    uVar1 = Contain(pcVar9,(ccVec2 *)&local_44);
    iVar3 = __aeabi_fcmpgt(uVar1,0);
    if (iVar3 != 0) {
      uVar1 = Intersect(pcVar9,pcVar7,(ccVec3 *)&local_3c);
      iVar3 = __aeabi_fcmple(uVar1,0);
      if (iVar3 == 0) {
        return uVar1;
      }
      local_28 = local_38;
      local_30 = local_3c;
      local_2c = 0;
      uVar2 = FUN_002c29d4(&local_30);
      uVar2 = __mulsf3(uVar2,*(undefined4 *)(param_1 + 0x24));
      uVar5 = __mulsf3(uVar2,0);
      uVar2 = __subsf3(local_2c,uVar2);
      uVar6 = __addsf3(uVar5,local_28);
      uVar5 = __addsf3(uVar5,local_30);
      *(undefined4 *)param_3 = uVar5;
      *(undefined4 *)(param_3 + 4) = uVar2;
      *(undefined4 *)(param_3 + 8) = uVar6;
      return uVar1;
    }
  }
  return 0x3f800000;
}


