/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002c4990 CCMeshRenderer::AssignMatrix */

/* CCMeshRenderer::AssignMatrix(ccMeshRenderer*, int, ccMat3x4 const*) */

void CCMeshRenderer::AssignMatrix(ccMeshRenderer *param_1,int param_2,ccMat3x4 *param_3)

{
  *(int *)param_1 = param_2;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
  CCGFX::SetModelView(param_3);
  return;
}


