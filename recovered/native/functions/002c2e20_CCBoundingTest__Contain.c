/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002c2e20 CCBoundingTest::Contain */

/* CCBoundingTest::Contain(ccBoundingCircle const*, ccVec2 const*) */

undefined8 CCBoundingTest::Contain(ccBoundingCircle *param_1,ccVec2 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  ccBoundingCircle *local_18;
  ccVec2 *local_14;
  
  local_18 = param_1;
  local_14 = param_2;
  uVar1 = __subsf3(*(undefined4 *)(param_2 + 4),*(undefined4 *)(param_1 + 4));
  local_18 = (ccBoundingCircle *)__subsf3(*(undefined4 *)param_2,*(undefined4 *)param_1);
  local_14 = (ccVec2 *)uVar1;
  uVar1 = FUN_002c2940(&local_18);
  uVar2 = __mulsf3(*(undefined4 *)(param_1 + 8));
  uVar1 = __subsf3(uVar1,uVar2);
  iVar3 = __aeabi_fcmple(uVar1,0);
  if (iVar3 != 0) {
    uVar1 = FUN_002c2a14(&local_18);
    uVar1 = __subsf3(uVar1,*(undefined4 *)(param_1 + 8));
  }
  return CONCAT44(local_18,uVar1);
}


