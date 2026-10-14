/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002bb2a0 CCSpinner::Tick */

/* CCSpinner::Tick(void*, float) */

void CCSpinner::Tick(void *param_1,float param_2)

{
  if (*(int *)((int)param_1 + 0x30) == 0) {
    if (*(int *)((int)param_1 + 0xc) == 0) {
      L_NoSnapTick((SSpinner *)param_1,param_2);
    }
    else {
      L_SnapTick((SSpinner *)param_1,param_2);
    }
  }
  return;
}


