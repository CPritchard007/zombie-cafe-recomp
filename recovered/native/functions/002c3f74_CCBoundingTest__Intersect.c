/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002c3f74 CCBoundingTest::Intersect */

/* CCBoundingTest::Intersect(ccBoundingSphere const*, ccBoundingBox const*, ccVec3*) */

undefined4
CCBoundingTest::Intersect(ccBoundingSphere *param_1,ccBoundingBox *param_2,ccVec3 *param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  
  uVar1 = Intersect(param_2,param_1,param_3);
  iVar2 = __aeabi_fcmple(uVar1,0);
  if (iVar2 != 0) {
    uVar3 = __subsf3(0,*(undefined4 *)param_3);
    *(undefined4 *)param_3 = uVar3;
    uVar3 = __subsf3(0,*(undefined4 *)(param_3 + 4));
    *(undefined4 *)(param_3 + 4) = uVar3;
    uVar3 = __subsf3(0,*(undefined4 *)(param_3 + 8));
    *(undefined4 *)(param_3 + 8) = uVar3;
  }
  return uVar1;
}


