/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002c36e0 CCBoundingTest::Contain */

/* CCBoundingTest::Contain(ccBoundingBox const*, ccVec3 const*) */

byte CCBoundingTest::Contain(ccBoundingBox *param_1,ccVec3 *param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  __subsf3(*(undefined4 *)param_2,*(undefined4 *)param_1);
  uVar1 = FUN_002c2928();
  iVar2 = __aeabi_fcmple(uVar1,*(undefined4 *)(param_1 + 0xc));
  if (iVar2 != 0) {
    __subsf3(*(undefined4 *)(param_2 + 4),*(undefined4 *)(param_1 + 4));
    uVar1 = FUN_002c2928();
    iVar2 = __aeabi_fcmple(uVar1,*(undefined4 *)(param_1 + 0x10));
    if (iVar2 != 0) {
      __subsf3(*(undefined4 *)(param_2 + 8),*(undefined4 *)(param_1 + 8));
      uVar1 = FUN_002c2928();
      iVar2 = __aeabi_fcmple(uVar1,*(undefined4 *)(param_1 + 0x14));
      return -(iVar2 != 0) & 1;
    }
  }
  return 0;
}


