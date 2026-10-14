/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002c3f2a CCBoundingTest::Contain */

/* CCBoundingTest::Contain(ccBoundingSphere const*, ccBoundingSphere const*) */

void CCBoundingTest::Contain(ccBoundingSphere *param_1,ccBoundingSphere *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 in_r2;
  undefined4 in_r3;
  ccBoundingSphere *local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  local_1c = param_2;
  local_1c = (ccBoundingSphere *)
             __subsf3(*(undefined4 *)param_1,*(undefined4 *)param_2,in_r2,in_r3,param_1);
  local_18 = __subsf3(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_2 + 4));
  local_14 = __subsf3(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_2 + 8));
  uVar1 = FUN_002c2960(&local_1c);
  uVar2 = __subsf3(*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_2 + 0xc));
  uVar2 = __mulsf3(uVar2,uVar2);
  __subsf3(uVar1,uVar2);
  __fixunssfsi();
  return;
}


