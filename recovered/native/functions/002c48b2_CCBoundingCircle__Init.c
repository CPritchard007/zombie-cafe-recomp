/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002c48b2 CCBoundingCircle::Init */

/* CCBoundingCircle::Init(ccBoundingCircle*, ccVec2 const*, float) */

undefined4 CCBoundingCircle::Init(ccBoundingCircle *param_1,ccVec2 *param_2,float param_3)

{
  undefined4 in_r2;
  undefined4 uVar1;
  
  *(undefined4 *)param_1 = *(undefined4 *)param_2;
  uVar1 = *(undefined4 *)(param_2 + 4);
  *(undefined4 *)(param_1 + 8) = in_r2;
  *(undefined4 *)(param_1 + 4) = uVar1;
  return 1;
}


