/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002c4c60 CCMeshRenderer::AssignVertices */

/* CCMeshRenderer::AssignVertices(ccMeshRenderer*, ccVec3 const*) */

void CCMeshRenderer::AssignVertices(ccMeshRenderer *param_1,ccVec3 *param_2)

{
  *(ccVec3 **)(param_1 + 4) = param_2;
  return;
}


