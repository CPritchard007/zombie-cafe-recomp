/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002bb5a0 CCSpline::Init */

/* CCSpline::Init(ccSpline*, unsigned int, ccSplineControlPoint const*) */

void * CCSpline::Init(ccSpline *param_1,uint param_2,ccSplineControlPoint *param_3)

{
  void *__dest;
  
  *(uint *)(param_1 + 4) = param_2;
  __dest = malloc(param_2 * 0x10);
  *(void **)param_1 = __dest;
  if (__dest != (void *)0x0) {
    memcpy(__dest,param_3,param_2 * 0x10);
    __dest = (void *)0x1;
  }
  return __dest;
}


