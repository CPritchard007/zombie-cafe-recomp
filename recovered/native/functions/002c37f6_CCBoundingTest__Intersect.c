/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002c37f6 CCBoundingTest::Intersect */

/* CCBoundingTest::Intersect(ccBoundingBox const*, ccBoundingBox const*) */

undefined4 CCBoundingTest::Intersect(ccBoundingBox *param_1,ccBoundingBox *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  __subsf3(*(undefined4 *)param_2,*(undefined4 *)param_1);
  uVar1 = FUN_002c2928();
  uVar2 = __addsf3(*(undefined4 *)(param_2 + 0xc),*(undefined4 *)(param_1 + 0xc));
  uVar1 = __subsf3(uVar1,uVar2);
  __subsf3(*(undefined4 *)(param_2 + 4),*(undefined4 *)(param_1 + 4));
  uVar2 = FUN_002c2928();
  uVar5 = *(undefined4 *)(param_1 + 0x10);
  __subsf3(*(undefined4 *)(param_2 + 8),*(undefined4 *)(param_1 + 8));
  uVar3 = FUN_002c2928();
  uVar8 = *(undefined4 *)(param_2 + 0x10);
  uVar6 = *(undefined4 *)(param_2 + 0x14);
  uVar7 = *(undefined4 *)(param_1 + 0x14);
  iVar4 = __aeabi_fcmple(uVar1,0);
  if (iVar4 != 0) {
    uVar5 = __addsf3(uVar8,uVar5);
    uVar2 = __subsf3(uVar2,uVar5);
    iVar4 = __aeabi_fcmple(uVar2,0);
    if (iVar4 != 0) {
      uVar5 = __addsf3(uVar6,uVar7);
      uVar3 = __subsf3(uVar3,uVar5);
      iVar4 = __aeabi_fcmple(uVar3,0);
      if (iVar4 != 0) {
        iVar4 = __aeabi_fcmpgt(uVar2,uVar3);
        if (iVar4 != 0) {
          uVar3 = uVar2;
        }
        iVar4 = __aeabi_fcmpgt(uVar1,uVar3);
        if (iVar4 == 0) {
          return uVar3;
        }
        return uVar1;
      }
    }
  }
  return 0x3f800000;
}


