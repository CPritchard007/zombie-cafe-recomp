/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002c3e48 CCBoundingTest::Contain */

/* CCBoundingTest::Contain(ccBoundingSphere const*, ccVec3 const*) */

undefined4 CCBoundingTest::Contain(ccBoundingSphere *param_1,ccVec3 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  local_1c = __subsf3(*(undefined4 *)param_1,*(undefined4 *)param_2);
  local_18 = __subsf3(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_2 + 4));
  local_14 = __subsf3(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_2 + 8));
  uVar1 = FUN_002c2960(&local_1c);
  uVar2 = __mulsf3(*(undefined4 *)(param_1 + 0xc));
  uVar1 = __subsf3(uVar1,uVar2);
  iVar3 = __aeabi_fcmplt(uVar1,0);
  if (iVar3 != 0) {
    uVar1 = FUN_002c29d4(&local_1c);
    uVar1 = __subsf3(uVar1,*(undefined4 *)(param_1 + 0xc));
  }
  return uVar1;
}


