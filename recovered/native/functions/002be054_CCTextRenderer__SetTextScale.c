/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002be054 CCTextRenderer::SetTextScale */

/* CCTextRenderer::SetTextScale(void*, float, float) */

void CCTextRenderer::SetTextScale(void *param_1,float param_2,float param_3)

{
  undefined4 in_r1;
  undefined4 in_r2;
  
  if (*(int *)((int)param_1 + 0x120) == 0) {
    *(undefined4 *)((int)param_1 + 0xfc) = in_r1;
    *(undefined4 *)((int)param_1 + 0x100) = in_r2;
  }
  return;
}


