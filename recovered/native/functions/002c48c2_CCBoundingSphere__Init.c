/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002c48c2 CCBoundingSphere::Init */

/* CCBoundingSphere::Init(ccBoundingSphere*, ccVec3 const*, float) */

undefined4 CCBoundingSphere::Init(ccBoundingSphere *param_1,ccVec3 *param_2,float param_3)

{
  undefined4 uVar1;
  undefined4 in_r2;
  
  *(undefined4 *)param_1 = *(undefined4 *)param_2;
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
  uVar1 = __mulsf3(in_r2,0x3f000000);
  *(undefined4 *)(param_1 + 0xc) = uVar1;
  return 1;
}


