/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002af60c CCMaterial::SetUniformVec2 */

/* CCMaterial::SetUniformVec2(ccMaterial*, unsigned int, ccVec2 const*) */

void __thiscall
CCMaterial::SetUniformVec2(CCMaterial *this,ccMaterial *param_1,uint param_2,ccVec2 *param_3)

{
  glUniform2fv(param_1,1,param_2,param_3,param_3);
  return;
}


