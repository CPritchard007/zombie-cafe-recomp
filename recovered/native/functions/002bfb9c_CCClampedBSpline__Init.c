/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002bfb9c CCClampedBSpline::Init */

/* CCClampedBSpline::Init(ccClampedBSpline*, unsigned int, ccVec3 const*, float const*) */

undefined4
CCClampedBSpline::Init(ccClampedBSpline *param_1,uint param_2,ccVec3 *param_3,float *param_4)

{
  *(uint *)(param_1 + 8) = param_2;
  *(ccVec3 **)param_1 = param_3;
  *(float **)(param_1 + 4) = param_4;
  return 1;
}


