/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002c2f5e CCBoundingTest::Contain */

/* CCBoundingTest::Contain(ccBoundingCircle const*, ccBoundingCircle const*) */

ulonglong CCBoundingTest::Contain(ccBoundingCircle *param_1,ccBoundingCircle *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  ccBoundingCircle *local_18;
  ccBoundingCircle *local_14;
  
  local_18 = param_1;
  local_14 = param_2;
  local_18 = (ccBoundingCircle *)__subsf3(*(undefined4 *)param_2,*(undefined4 *)param_1);
  local_14 = (ccBoundingCircle *)__subsf3(*(undefined4 *)(param_2 + 4),*(undefined4 *)(param_1 + 4))
  ;
  uVar1 = FUN_002c2940(&local_18);
  uVar2 = __subsf3(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_2 + 8));
  uVar2 = __mulsf3(uVar2,uVar2);
  iVar3 = __aeabi_fcmple(uVar1,uVar2);
  return CONCAT44(local_18,-(uint)(iVar3 != 0)) & 0xffffffff00000001;
}


