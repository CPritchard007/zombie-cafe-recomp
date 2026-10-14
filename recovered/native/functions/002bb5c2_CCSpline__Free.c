/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002bb5c2 CCSpline::Free */

/* CCSpline::Free(ccSpline*) */

void CCSpline::Free(ccSpline *param_1)

{
  free(*(void **)param_1);
  return;
}


