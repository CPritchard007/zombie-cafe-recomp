/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002c3ea6 CCBoundingTest::Intersect */

/* CCBoundingTest::Intersect(ccBoundingSphere const*, ccBoundingSphere const*, ccVec3*) */

undefined4
CCBoundingTest::Intersect(ccBoundingSphere *param_1,ccBoundingSphere *param_2,ccVec3 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  
  uVar1 = __subsf3(*(undefined4 *)param_2,*(undefined4 *)param_1);
  local_24 = uVar1;
  uVar2 = __subsf3(*(undefined4 *)(param_2 + 4),*(undefined4 *)(param_1 + 4));
  local_20 = uVar2;
  uVar3 = __subsf3(*(undefined4 *)(param_2 + 8),*(undefined4 *)(param_1 + 8));
  local_1c = uVar3;
  uVar4 = FUN_002c2960(&local_24);
  uVar5 = __addsf3(*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_2 + 0xc));
  uVar5 = __mulsf3(uVar5,uVar5);
  uVar4 = __subsf3(uVar4,uVar5);
  iVar6 = __aeabi_fcmple(uVar4,0);
  if (iVar6 != 0) {
    *(undefined4 *)param_3 = uVar1;
    *(undefined4 *)(param_3 + 4) = uVar2;
    *(undefined4 *)(param_3 + 8) = uVar3;
    uVar1 = FUN_002c29d4(&local_24);
    uVar2 = __addsf3(*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_2 + 0xc));
    uVar4 = __subsf3(uVar1,uVar2);
  }
  return uVar4;
}


