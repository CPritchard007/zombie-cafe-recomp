/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002c4628 CCBoundingTest::Contain */

/* CCBoundingTest::Contain(ccBoundingCup const*, ccBoundingSphere const*, ccVec3*) */

undefined4 CCBoundingTest::Contain(ccBoundingCup *param_1,ccBoundingSphere *param_2,ccVec3 *param_3)

{
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  ccBoundingCircle *pcVar8;
  undefined4 uVar9;
  ccBoundingCircle *pcVar10;
  float fVar11;
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
  
  uVar7 = *(undefined4 *)(param_1 + 0xc);
  uVar6 = *(undefined4 *)(param_1 + 4);
  uVar2 = __subsf3(uVar6,uVar7);
  uVar9 = *(undefined4 *)(param_2 + 4);
  iVar3 = __aeabi_fcmpge(uVar9,uVar2);
  if (iVar3 != 0) {
    uVar4 = __addsf3(uVar6,uVar7);
    iVar3 = __aeabi_fcmple(uVar9,uVar4);
    if (iVar3 != 0) {
      uVar6 = __subsf3(uVar9,uVar6);
      uVar6 = __addsf3(uVar6,uVar7);
      uVar6 = __mulsf3(uVar6,*(undefined4 *)(param_1 + 0x24));
      uVar6 = __addsf3(uVar6,*(undefined4 *)(param_1 + 0x14));
      fVar11 = (float)__mulsf3(*(undefined4 *)(param_2 + 0xc),*(undefined4 *)(param_1 + 0x28));
      local_40 = *(undefined4 *)param_1;
      local_3c = *(undefined4 *)(param_1 + 8);
      pcVar10 = *(ccBoundingCircle **)(DAT_002c485c + 0x2c469c);
      local_38 = *(undefined4 *)param_2;
      local_34 = *(undefined4 *)(param_2 + 8);
      fVar11 = (float)CCBoundingCircle::Init(pcVar10,(ccVec2 *)&local_40,fVar11);
      pcVar8 = *(ccBoundingCircle **)(DAT_002c4860 + 0x2c46b8);
      CCBoundingCircle::Init(pcVar8,(ccVec2 *)&local_38,fVar11);
      uVar7 = Contain(pcVar10,(ccVec2 *)&local_38);
      iVar3 = __aeabi_fcmple(uVar7,0);
      if (iVar3 != 0) {
        uVar7 = Contain(pcVar10,pcVar8,(ccVec3 *)&local_30);
        iVar3 = __aeabi_fcmple(uVar7,0);
        if (iVar3 == 0) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
          local_24 = local_30;
          local_20 = 0;
          local_1c = local_2c;
          iVar3 = FUN_002c2994(&local_24);
          if (iVar3 == 0) {
            uVar9 = FUN_002c29d4(&local_24);
            uVar4 = __divsf3(0x3f800000,uVar9);
            uVar9 = __mulsf3(uVar4,local_20);
            uVar5 = __mulsf3(uVar9,uVar6);
            uVar9 = __mulsf3(uVar4,local_1c);
            uVar9 = __mulsf3(uVar9,uVar6);
            uVar4 = __mulsf3(uVar4,local_24);
            local_30 = __mulsf3(uVar4,uVar6);
            local_2c = uVar5;
          }
          else {
            uVar9 = 0;
            local_30 = 0;
            local_2c = 0;
          }
          local_28 = uVar9;
          uVar6 = __mulsf3(uVar6,*(undefined4 *)(param_1 + 0x24));
          uVar9 = __mulsf3(uVar6,0);
          uVar6 = __addsf3(uVar6,local_2c);
          uVar4 = __addsf3(uVar9,local_28);
          uVar9 = __addsf3(local_30,uVar9);
          *(undefined4 *)param_3 = uVar9;
          *(undefined4 *)(param_3 + 4) = uVar6;
          *(undefined4 *)(param_3 + 8) = uVar4;
        }
        uVar6 = __subsf3(*(undefined4 *)(param_2 + 4),*(undefined4 *)(param_2 + 0xc));
        iVar3 = __aeabi_fcmple(uVar6,uVar2);
        if (iVar3 == 0) {
          return uVar7;
        }
        if (bVar1) {
          iVar3 = FUN_002c2994(param_3);
          if (iVar3 == 0) {
            uVar6 = FUN_002c29d4(param_3);
            uVar6 = __divsf3(0x3f800000,uVar6);
            uVar9 = __mulsf3(uVar6,*(undefined4 *)(param_3 + 4));
            uVar4 = __mulsf3(uVar6,*(undefined4 *)(param_3 + 8));
            local_24 = __mulsf3(*(undefined4 *)param_3,uVar6);
            local_20 = uVar9;
            local_1c = uVar4;
          }
          else {
            local_24 = 0;
            local_20 = 0;
            local_1c = 0;
          }
          uVar6 = __addsf3(local_20,0x3f800000);
          uVar9 = __addsf3(local_1c,0);
          uVar4 = __addsf3(local_24,0);
          *(undefined4 *)param_3 = uVar4;
          *(undefined4 *)(param_3 + 4) = uVar6;
          *(undefined4 *)(param_3 + 8) = uVar9;
          uVar6 = __subsf3(*(undefined4 *)(param_2 + 4),*(undefined4 *)(param_2 + 0xc));
          uVar2 = __subsf3(uVar6,uVar2);
          uVar2 = __addsf3(uVar7,uVar2);
          return uVar2;
        }
        *(undefined4 *)param_3 = 0;
        *(undefined4 *)(param_3 + 4) = 0x3f800000;
        *(undefined4 *)(param_3 + 8) = 0;
        uVar6 = __subsf3(*(undefined4 *)(param_2 + 4),*(undefined4 *)(param_2 + 0xc));
        uVar2 = __subsf3(uVar6,uVar2);
        return uVar2;
      }
    }
  }
  return 0x3f800000;
}


