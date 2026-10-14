/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002af618 CCMaterial::SetUniformVec3 */

/* CCMaterial::SetUniformVec3(ccMaterial*, unsigned int, ccVec3 const*) */

void __thiscall
CCMaterial::SetUniformVec3(CCMaterial *this,ccMaterial *param_1,uint param_2,ccVec3 *param_3)

{
  glUniform3fv(param_1,1,param_2,param_3,param_3);
  return;
}


