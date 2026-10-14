/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002c2b12 CCBoundingTest::Contain */

/* CCBoundingTest::Contain(ccBoundingRect const*, ccVec2 const*) */

byte CCBoundingTest::Contain(ccBoundingRect *param_1,ccVec2 *param_2)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  
  __subsf3(*(undefined4 *)param_2,*(undefined4 *)param_1);
  uVar2 = FUN_002c2928();
  iVar3 = __aeabi_fcmple(uVar2,*(undefined4 *)(param_1 + 8));
  if (iVar3 == 0) {
    bVar1 = 0;
  }
  else {
    __subsf3(*(undefined4 *)(param_2 + 4),*(undefined4 *)(param_1 + 4));
    uVar2 = FUN_002c2928();
    iVar3 = __aeabi_fcmple(uVar2,*(undefined4 *)(param_1 + 0xc));
    bVar1 = -(iVar3 != 0) & 1;
  }
  return bVar1;
}


