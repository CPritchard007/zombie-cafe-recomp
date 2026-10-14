/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002af640 CCMaterial::SetUniformMat3x3 */

/* CCMaterial::SetUniformMat3x3(ccMaterial*, unsigned int, ccMat3x3 const*) */

void __thiscall
CCMaterial::SetUniformMat3x3(CCMaterial *this,ccMaterial *param_1,uint param_2,ccMat3x3 *param_3)

{
  glUniformMatrix3fv(param_1,1,0,param_2,param_3);
  return;
}


