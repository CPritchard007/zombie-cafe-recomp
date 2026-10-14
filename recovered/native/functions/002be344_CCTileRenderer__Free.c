/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002be344 CCTileRenderer::Free */

/* CCTileRenderer::Free(void*) */

void CCTileRenderer::Free(void *param_1)

{
  free(*(void **)((int)param_1 + 0x3c));
  free(*(void **)((int)param_1 + 0x40));
  free(*(void **)((int)param_1 + 0x38));
  free(param_1);
  return;
}


