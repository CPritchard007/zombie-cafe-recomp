/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002af630 CCMaterial::SetUniformMat2x2 */

/* CCMaterial::SetUniformMat2x2(ccMaterial*, unsigned int, ccMat2x2 const*) */

void __thiscall
CCMaterial::SetUniformMat2x2(CCMaterial *this,ccMaterial *param_1,uint param_2,ccMat2x2 *param_3)

{
  glUniformMatrix2fv(param_1,1,0,param_2,param_3);
  return;
}


