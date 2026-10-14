/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002afcae CCMaterial::EnableBlending */

/* CCMaterial::EnableBlending(ccMaterial*, CCMaterial::ccBlendFactor, CCMaterial::ccBlendFactor) */

void CCMaterial::EnableBlending(int param_1,undefined4 param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + 0x2c) = 1;
  *(undefined4 *)(param_1 + 0x30) = param_2;
  *(undefined4 *)(param_1 + 0x34) = param_3;
  return;
}


