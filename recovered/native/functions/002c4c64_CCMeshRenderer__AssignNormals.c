/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002c4c64 CCMeshRenderer::AssignNormals */

/* CCMeshRenderer::AssignNormals(ccMeshRenderer*, ccVec3 const*) */

void CCMeshRenderer::AssignNormals(ccMeshRenderer *param_1,ccVec3 *param_2)

{
  *(ccVec3 **)(param_1 + 8) = param_2;
  return;
}


