/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002c4946 CCMeshRenderer::Free */

/* CCMeshRenderer::Free(ccBatchMeshRenderer*) */

void CCMeshRenderer::Free(ccBatchMeshRenderer *param_1)

{
  free(*(void **)(param_1 + 0xc));
  free(*(void **)(param_1 + 8));
  free(*(void **)(param_1 + 0x10));
  free(param_1);
  return;
}


