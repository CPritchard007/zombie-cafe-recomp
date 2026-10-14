/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002af624 CCMaterial::SetUniformVec4 */

/* CCMaterial::SetUniformVec4(ccMaterial*, unsigned int, ccVec4 const*) */

void __thiscall
CCMaterial::SetUniformVec4(CCMaterial *this,ccMaterial *param_1,uint param_2,ccVec4 *param_3)

{
  glUniform4fv(param_1,1,param_2,param_3,param_3);
  return;
}


