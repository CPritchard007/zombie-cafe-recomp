/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002c4c6c CCMeshRenderer::AssignMaterial */

/* CCMeshRenderer::AssignMaterial(ccMeshRenderer*, ccMaterial const*) */

void CCMeshRenderer::AssignMaterial(ccMeshRenderer *param_1,ccMaterial *param_2)

{
  *(ccMaterial **)(param_1 + 0x18) = param_2;
  return;
}


