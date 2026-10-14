/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002c1afc CCMarketing_Free */

void CCMarketing_Free(undefined4 *param_1)

{
  void *__ptr;
  
  if ((int)param_1 - 1U < 0xfffffffe) {
    CCUrlConnection::Free((void *)param_1[0x65]);
    CCUrlConnection::Free((void *)param_1[0x66]);
    CCUrlConnection::Free((void *)param_1[0x67]);
    CCOptions::Free((void *)param_1[0x6b]);
    free(*(void **)*param_1);
    free((void *)*param_1);
    if ((undefined4 *)param_1[1] != (undefined4 *)0x0) {
      __ptr = *(void **)param_1[1];
      if (__ptr != (void *)0x0) {
        free(__ptr);
      }
      free((void *)param_1[1]);
    }
    free(param_1);
  }
  return;
}


