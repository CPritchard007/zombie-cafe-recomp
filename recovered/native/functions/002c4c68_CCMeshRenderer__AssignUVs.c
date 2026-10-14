/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002c4c68 CCMeshRenderer::AssignUVs */

/* CCMeshRenderer::AssignUVs(ccMeshRenderer*, ccVec2 const*) */

void CCMeshRenderer::AssignUVs(ccMeshRenderer *param_1,ccVec2 *param_2)

{
  *(ccVec2 **)(param_1 + 0xc) = param_2;
  return;
}


