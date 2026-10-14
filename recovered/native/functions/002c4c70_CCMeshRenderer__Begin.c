/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002c4c70 CCMeshRenderer::Begin */

/* CCMeshRenderer::Begin(ccBatchMeshRenderer*, ccMaterial const*, ccMat3x4 const*, unsigned int) */

undefined8
CCMeshRenderer::Begin
          (ccBatchMeshRenderer *param_1,ccMaterial *param_2,ccMat3x4 *param_3,uint param_4)

{
  int iVar1;
  
  iVar1 = *(int *)(DAT_002c4c9c + 0x2c4c7c);
  *(undefined4 *)(param_1 + 4) = 0;
  AssignMaterial(*(ccMeshRenderer **)(iVar1 + 0x280),param_2);
  AssignMatrix(*(ccMeshRenderer **)(iVar1 + 0x280),2,param_3);
  *(uint *)(param_1 + 0x14) = param_4;
  return CONCAT44(param_4,param_1);
}


