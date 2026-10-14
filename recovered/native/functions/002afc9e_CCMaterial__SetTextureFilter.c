/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002afc9e CCMaterial::SetTextureFilter */

/* CCMaterial::SetTextureFilter(ccMaterial*, CCMaterial::ccTextureFilter, unsigned int) */

void CCMaterial::SetTextureFilter(int param_1,undefined4 param_2,int param_3)

{
  *(undefined4 *)(param_1 + (param_3 + 6) * 4 + 4) = param_2;
  return;
}


