/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002b0ba4 CCBatchRenderer::Begin */

/* CCBatchRenderer::Begin(void*, ccMaterial const*) */

void CCBatchRenderer::Begin(void *param_1,ccMaterial *param_2)

{
  *(undefined4 *)((int)param_1 + 4) = 1;
  *(undefined4 *)((int)param_1 + 8) = 0;
  *(ccMaterial **)((int)param_1 + 0x1c) = param_2;
  *(undefined4 *)((int)param_1 + 0x20) = 0;
  return;
}


