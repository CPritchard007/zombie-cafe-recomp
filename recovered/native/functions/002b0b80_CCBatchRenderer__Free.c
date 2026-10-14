/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002b0b80 CCBatchRenderer::Free */

/* CCBatchRenderer::Free(void*) */

void CCBatchRenderer::Free(void *param_1)

{
  free(*(void **)((int)param_1 + 0x18));
  free(*(void **)((int)param_1 + 0xc));
  free(*(void **)((int)param_1 + 0x10));
  free(*(void **)((int)param_1 + 0x14));
  free(param_1);
  return;
}


