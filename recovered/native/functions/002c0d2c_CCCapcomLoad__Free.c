/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002c0d2c CCCapcomLoad::Free */

/* CCCapcomLoad::Free(void*) */

void CCCapcomLoad::Free(void *param_1)

{
  if (*(char *)((int)param_1 + 8) != '\0') {
    CCTexture2D::Free((ccTexture2D *)((int)param_1 + 0xc));
    CCMaterial::Free((ccMaterial *)((int)param_1 + 0x38));
    CCTexture2D::Free((ccTexture2D *)((int)param_1 + 0x114));
    CCMaterial::Free((ccMaterial *)((int)param_1 + 0x16c));
    CCTexture2D::Free((ccTexture2D *)((int)param_1 + 0x140));
    CCMaterial::Free((ccMaterial *)((int)param_1 + 0x208));
  }
  return;
}


