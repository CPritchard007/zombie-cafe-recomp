/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002b0d5a L_EnsureCanAddQuad */

/* L_EnsureCanAddQuad(SBatchRenderer*) */

void L_EnsureCanAddQuad(SBatchRenderer *param_1)

{
  void *in_r1;
  
  if (*(int *)(param_1 + 8) == *(int *)param_1) {
    CCBatchRenderer::Finish((CCBatchRenderer *)param_1,in_r1);
    CCBatchRenderer::Begin(param_1,*(ccMaterial **)(param_1 + 0x1c));
  }
  return;
}


