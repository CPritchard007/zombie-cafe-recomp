/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002bff50 CCClampedBSpline::IsFinished */

/* CCClampedBSpline::IsFinished(ccClampedBSpline const*, float) */

bool CCClampedBSpline::IsFinished(ccClampedBSpline *param_1,float param_2)

{
  int iVar1;
  undefined4 in_r1;
  bool bVar2;
  
  iVar1 = __aeabi_fcmple(in_r1,0);
  bVar2 = false;
  if (iVar1 == 0) {
    iVar1 = __aeabi_fcmpgt(*(undefined4 *)((*(int *)(param_1 + 8) + -1) * 4 + *(int *)(param_1 + 4))
                           ,in_r1);
    bVar2 = iVar1 == 0;
  }
  return bVar2;
}


