/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002af650 CCMaterial::SetUniformMat4x4 */

/* CCMaterial::SetUniformMat4x4(ccMaterial*, unsigned int, ccMat4x4 const*) */

void __thiscall
CCMaterial::SetUniformMat4x4(CCMaterial *this,ccMaterial *param_1,uint param_2,ccMat4x4 *param_3)

{
  glUniformMatrix4fv(param_1,1,0,param_2,param_3);
  return;
}


