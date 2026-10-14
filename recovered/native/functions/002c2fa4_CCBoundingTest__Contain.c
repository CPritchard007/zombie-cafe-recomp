/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002c2fa4 CCBoundingTest::Contain */

/* CCBoundingTest::Contain(ccBoundingCircle const*, ccBoundingCircle const*, ccVec3*) */

undefined8
CCBoundingTest::Contain(ccBoundingCircle *param_1,ccBoundingCircle *param_2,ccVec3 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  ccBoundingCircle *local_20;
  ccBoundingCircle *local_1c;
  ccVec3 *pcStack_18;
  
  local_20 = param_1;
  local_1c = param_2;
  pcStack_18 = param_3;
  local_20 = (ccBoundingCircle *)__subsf3(*(undefined4 *)param_1,*(undefined4 *)param_2);
  local_1c = (ccBoundingCircle *)__subsf3(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_2 + 4))
  ;
  uVar1 = FUN_002c2940(&local_20);
  uVar2 = __subsf3(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_2 + 8));
  uVar3 = __mulsf3(uVar2,uVar2);
  iVar4 = __aeabi_fcmpge(uVar1,uVar3);
  if (iVar4 != 0) {
    uVar3 = __mulsf3(*(undefined4 *)(param_1 + 8));
    iVar4 = __aeabi_fcmple(uVar1,uVar3);
    if (iVar4 != 0) {
      uVar1 = FUN_002c2a14(&local_20);
      uVar1 = __subsf3(uVar2,uVar1);
      *(ccBoundingCircle **)param_3 = local_20;
      *(ccBoundingCircle **)(param_3 + 4) = local_1c;
      *(undefined4 *)(param_3 + 8) = 0;
    }
  }
  return CONCAT44(local_20,uVar1);
}


