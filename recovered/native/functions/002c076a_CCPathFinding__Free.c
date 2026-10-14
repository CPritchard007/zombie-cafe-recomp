/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002c076a CCPathFinding::Free */

/* CCPathFinding::Free(void*) */

void CCPathFinding::Free(void *param_1)

{
  if (*(void **)((int)param_1 + 4) != (void *)0x0) {
    free(*(void **)((int)param_1 + 4));
  }
  *(undefined4 *)((int)param_1 + 4) = 0;
  if (*(void **)((int)param_1 + 0xc) != (void *)0x0) {
    free(*(void **)((int)param_1 + 0xc));
  }
  *(undefined4 *)((int)param_1 + 0xc) = 0;
  free(param_1);
  return;
}


