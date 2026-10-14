/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002c06f6 CCPath::Free */

/* CCPath::Free(ccPath*) */

void CCPath::Free(ccPath *param_1)

{
  if (*(void **)param_1 != (void *)0x0) {
    free(*(void **)param_1);
  }
  if (*(void **)(param_1 + 4) != (void *)0x0) {
    free(*(void **)(param_1 + 4));
  }
  *(undefined4 *)param_1 = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  return;
}


