/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002c0004 CCHud::Free */

/* CCHud::Free(void*) */

void CCHud::Free(void *param_1)

{
  CCTexture2D::Free((ccTexture2D *)((int)param_1 + 0x14));
  free(param_1);
  return;
}


