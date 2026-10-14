/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002af600 CCMaterial::SetUniformFloat */

/* CCMaterial::SetUniformFloat(ccMaterial*, unsigned int, float) */

void __thiscall
CCMaterial::SetUniformFloat(CCMaterial *this,ccMaterial *param_1,uint param_2,float param_3)

{
  glUniform1f(param_1,param_2);
  return;
}


