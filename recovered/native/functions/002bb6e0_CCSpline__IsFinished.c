/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002bb6e0 CCSpline::IsFinished */

/* CCSpline::IsFinished(ccSpline const*, float) */

bool CCSpline::IsFinished(ccSpline *param_1,float param_2)

{
  int iVar1;
  undefined4 in_r1;
  bool bVar2;
  
  iVar1 = __aeabi_fcmple(in_r1,0);
  bVar2 = false;
  if (iVar1 == 0) {
    iVar1 = __aeabi_fcmpgt(*(undefined4 *)
                            (*(int *)param_1 + (*(int *)(param_1 + 4) + -1) * 0x10 + 0xc),in_r1);
    bVar2 = iVar1 == 0;
  }
  return bVar2;
}


