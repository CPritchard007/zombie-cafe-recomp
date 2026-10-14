/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002c4e7c CCMeshRenderer::End */

/* CCMeshRenderer::End(ccBatchMeshRenderer*) */

void CCMeshRenderer::End(ccBatchMeshRenderer *param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 4) != 0) {
    iVar1 = *(int *)(DAT_002c4ed0 + 0x2c4e90);
    Prepare(*(ccMeshRenderer **)(iVar1 + 0x280),*(int *)(param_1 + 4));
    AssignVertices(*(ccMeshRenderer **)(iVar1 + 0x280),*(ccVec3 **)(param_1 + 8));
    AssignNormals(*(ccMeshRenderer **)(iVar1 + 0x280),*(ccVec3 **)(param_1 + 0xc));
    AssignUVs(*(ccMeshRenderer **)(iVar1 + 0x280),*(ccVec2 **)(param_1 + 0x10));
    SetColors(*(ccMeshRenderer **)(iVar1 + 0x280),*(uint *)(param_1 + 0x14));
    Begin(*(ccMeshRenderer **)(iVar1 + 0x280));
    Flush(*(ccMeshRenderer **)(iVar1 + 0x280));
    End(*(ccMeshRenderer **)(iVar1 + 0x280));
    *(undefined4 *)(param_1 + 4) = 0;
  }
  return;
}


