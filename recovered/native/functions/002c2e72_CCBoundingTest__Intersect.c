/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002c2e72 CCBoundingTest::Intersect */

/* CCBoundingTest::Intersect(ccBoundingCircle const*, ccBoundingCircle const*, ccVec3*) */

undefined4
CCBoundingTest::Intersect(ccBoundingCircle *param_1,ccBoundingCircle *param_2,ccVec3 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 local_20;
  undefined4 local_1c;
  
  uVar1 = __subsf3(*(undefined4 *)param_2,*(undefined4 *)param_1);
  local_20 = uVar1;
  uVar2 = __subsf3(*(undefined4 *)(param_2 + 4),*(undefined4 *)(param_1 + 4));
  local_1c = uVar2;
  uVar3 = FUN_002c2940(&local_20);
  uVar4 = __addsf3(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_2 + 8));
  uVar4 = __mulsf3(uVar4,uVar4);
  uVar3 = __subsf3(uVar3,uVar4);
  iVar5 = __aeabi_fcmple(uVar3,0);
  if (iVar5 != 0) {
    *(undefined4 *)param_3 = uVar1;
    *(undefined4 *)(param_3 + 4) = uVar2;
    *(undefined4 *)(param_3 + 8) = 0;
    uVar1 = FUN_002c2a14(&local_20);
    uVar2 = __addsf3(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_2 + 8));
    uVar3 = __subsf3(uVar1,uVar2);
  }
  return uVar3;
}


