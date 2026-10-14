/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002bbddc CCTextRenderer::Finish */

/* CCTextRenderer::Finish(void*, unsigned int) */

void CCTextRenderer::Finish(void *param_1,uint param_2)

{
  if (*(int *)((int)param_1 + 0x120) == 0) {
    Flush(param_1,param_2);
    *(undefined4 *)((int)param_1 + 8) = 0;
  }
  else {
    Flush(param_1,param_2);
  }
  return;
}


