/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002bbc10 CCTextRenderer::Free */

/* CCTextRenderer::Free(void*) */

void CCTextRenderer::Free(void *param_1)

{
  void *__ptr;
  
  if (*(int *)((int)param_1 + 0x120) == 0) {
    CCTexture2D::Free((ccTexture2D *)((int)param_1 + 0x24));
    CCTexture2D::Free((ccTexture2D *)((int)param_1 + 0x24));
    if (*(int *)((int)param_1 + 0x118) == 0) {
      __ptr = *(void **)((int)param_1 + 0x1c);
    }
    else {
      __ptr = *(void **)((int)param_1 + 0x11c);
    }
    free(__ptr);
    free(*(void **)((int)param_1 + 0xec));
    free(*(void **)((int)param_1 + 0xf0));
    free(*(void **)((int)param_1 + 0xf4));
    free(*(void **)((int)param_1 + 0xf8));
    free(*(void **)((int)param_1 + 0x20));
    free(param_1);
  }
  return;
}


