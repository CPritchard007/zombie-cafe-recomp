/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002c3dbc CCBoundingTest::Contain */

/* CCBoundingTest::Contain(ccBoundingBox const*, ccBoundingSphere const*) */

byte CCBoundingTest::Contain(ccBoundingBox *param_1,ccBoundingSphere *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  uVar4 = *(undefined4 *)(param_2 + 4);
  uVar5 = *(undefined4 *)(param_1 + 8);
  uVar8 = *(undefined4 *)(param_1 + 4);
  uVar6 = *(undefined4 *)(param_2 + 8);
  __subsf3(*(undefined4 *)param_1,*(undefined4 *)param_2);
  uVar1 = FUN_002c2928();
  uVar7 = *(undefined4 *)(param_2 + 0xc);
  uVar2 = __subsf3(*(undefined4 *)(param_1 + 0xc),uVar7);
  iVar3 = __aeabi_fcmple(uVar1,uVar2);
  if (iVar3 != 0) {
    __subsf3(uVar8,uVar4);
    uVar1 = FUN_002c2928();
    uVar2 = __subsf3(*(undefined4 *)(param_1 + 0x10),uVar7);
    iVar3 = __aeabi_fcmple(uVar1,uVar2);
    if (iVar3 != 0) {
      __subsf3(uVar5,uVar6);
      uVar1 = FUN_002c2928();
      uVar2 = __subsf3(*(undefined4 *)(param_1 + 0x14),uVar7);
      iVar3 = __aeabi_fcmple(uVar1,uVar2);
      return -(iVar3 != 0) & 1;
    }
  }
  return 0;
}


