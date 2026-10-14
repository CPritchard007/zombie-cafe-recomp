/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002afc8c CCMaterial::SetTextureWrap */

/* CCMaterial::SetTextureWrap(ccMaterial*, CCMaterial::ccWrapParam, unsigned int) */

void CCMaterial::SetTextureWrap(int param_1,undefined4 param_2,int param_3)

{
  *(undefined4 *)(param_1 + (param_3 + 2) * 4 + 4) = param_2;
  *(undefined4 *)(param_1 + (param_3 + 4) * 4 + 4) = param_2;
  return;
}


