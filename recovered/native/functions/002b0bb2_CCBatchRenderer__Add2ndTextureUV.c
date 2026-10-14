/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002b0bb2 CCBatchRenderer::Add2ndTextureUV */

/* CCBatchRenderer::Add2ndTextureUV(void*, ccVec2*) */

void CCBatchRenderer::Add2ndTextureUV(void *param_1,ccVec2 *param_2)

{
  *(ccVec2 **)((int)param_1 + 0x20) = param_2;
  return;
}


