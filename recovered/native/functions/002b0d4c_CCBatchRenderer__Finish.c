/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002b0d4c CCBatchRenderer::Finish */

/* CCBatchRenderer::Finish(void*) */

void __thiscall CCBatchRenderer::Finish(CCBatchRenderer *this,void *param_1)

{
  Flush(this,param_1);
  *(undefined4 *)(this + 4) = 0;
  return;
}


