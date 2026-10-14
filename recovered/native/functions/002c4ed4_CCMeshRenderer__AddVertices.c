/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002c4ed4 CCMeshRenderer::AddVertices */

/* CCMeshRenderer::AddVertices(ccBatchMeshRenderer*, ccVec3*, ccVec3*, ccVec2*, int) */

void CCMeshRenderer::AddVertices
               (ccBatchMeshRenderer *param_1,ccVec3 *param_2,ccVec3 *param_3,ccVec2 *param_4,
               int param_5)

{
  ccVec2 *pcVar1;
  ccVec3 *pcVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  ccVec3 *pcVar6;
  ccVec2 *pcVar7;
  
  if (*(uint *)param_1 <= (uint)(param_5 + *(int *)(param_1 + 4))) {
    End(param_1);
  }
  pcVar6 = param_2;
  for (iVar4 = 0; iVar4 < param_5; iVar4 = iVar4 + 1) {
    iVar5 = 0;
    pcVar7 = param_4;
    do {
      pcVar2 = pcVar6 + iVar5 * 0xc;
      puVar3 = (undefined4 *)
               (*(int *)(param_1 + 8) + ((iVar4 + *(int *)(param_1 + 4)) * 3 + iVar5) * 0xc);
      *puVar3 = *(undefined4 *)pcVar2;
      puVar3[1] = *(undefined4 *)(pcVar2 + 4);
      puVar3[2] = *(undefined4 *)(pcVar2 + 8);
      pcVar2 = pcVar6 + (int)(param_3 + (iVar5 * 0xc - (int)param_2));
      puVar3 = (undefined4 *)
               (*(int *)(param_1 + 0xc) + ((iVar4 + *(int *)(param_1 + 4)) * 3 + iVar5) * 0xc);
      *puVar3 = *(undefined4 *)pcVar2;
      puVar3[1] = *(undefined4 *)(pcVar2 + 4);
      puVar3[2] = *(undefined4 *)(pcVar2 + 8);
      puVar3 = (undefined4 *)
               (*(int *)(param_1 + 0x10) + (iVar5 + (iVar4 + *(int *)(param_1 + 4)) * 3) * 8);
      iVar5 = iVar5 + 1;
      *puVar3 = *(undefined4 *)pcVar7;
      pcVar1 = pcVar7 + 4;
      pcVar7 = pcVar7 + 8;
      puVar3[1] = *(undefined4 *)pcVar1;
    } while (iVar5 != 3);
    param_4 = param_4 + 0x18;
    pcVar6 = pcVar6 + 0x24;
  }
  *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + param_5;
  return;
}


