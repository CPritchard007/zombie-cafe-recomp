/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002c4c4c CCMeshRenderer::Prepare */

/* CCMeshRenderer::Prepare(ccMeshRenderer*, int) */

void CCMeshRenderer::Prepare(ccMeshRenderer *param_1,int param_2)

{
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(int *)param_1 = param_2;
  *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
  return;
}


