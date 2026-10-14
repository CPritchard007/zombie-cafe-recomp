/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002c015c CCHud::Render */

/* CCHud::Render(void*) */

void CCHud::Render(void *param_1)

{
  CCMaterial::Activate((ccMaterial *)((int)param_1 + 0x40));
  if (*(int *)((int)param_1 + 8) != 0) {
    L_DrawDownloadIcon((SHud *)param_1);
  }
  CCMaterial::Deactivate((ccMaterial *)((int)param_1 + 0x40));
  return;
}


