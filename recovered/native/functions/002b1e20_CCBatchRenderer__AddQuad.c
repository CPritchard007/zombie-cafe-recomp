/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002b1e20 CCBatchRenderer::AddQuad */

/* CCBatchRenderer::AddQuad(void*, ccVec2 const*, ccVec2 const*, unsigned int) */

void CCBatchRenderer::AddQuad(void *param_1,ccVec2 *param_2,ccVec2 *param_3,uint param_4)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  char *pcVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  int local_30;
  
  L_EnsureCanAddQuad((SBatchRenderer *)param_1);
  iVar4 = *(int *)((int)param_1 + 8);
  iVar3 = iVar4 * 4;
  iVar5 = iVar4 * 0x20;
  *(int *)((int)param_1 + 8) = iVar4 + 1;
  iVar7 = 0;
  do {
    iVar6 = iVar7 + iVar5;
    *(undefined4 *)(*(int *)((int)param_1 + 0x10) + iVar6) = *(undefined4 *)(param_2 + iVar7);
    iVar1 = iVar7 + 4;
    iVar7 = iVar7 + 8;
    *(undefined4 *)(*(int *)((int)param_1 + 0x10) + iVar6 + 4) = *(undefined4 *)(param_2 + iVar1);
  } while (iVar7 != 0x20);
  pcVar8 = *(char **)(DAT_002b1ee4 + 0x2b1e60);
  if (*pcVar8 != '\0') {
    puVar10 = *(undefined4 **)(DAT_002b1ee8 + 0x2b1e72);
    puVar11 = *(undefined4 **)(DAT_002b1eec + 0x2b1e74);
    local_30 = 0;
    do {
      puVar9 = (undefined4 *)(*(int *)((int)param_1 + 0x10) + local_30 + iVar5);
      uVar2 = __mulsf3(*puVar9,*puVar10);
      *puVar9 = uVar2;
      iVar7 = *(int *)((int)param_1 + 0x10) + local_30 + iVar5;
      uVar2 = __mulsf3(*(undefined4 *)(iVar7 + 4),*puVar11);
      *(undefined4 *)(iVar7 + 4) = uVar2;
      local_30 = local_30 + 8;
    } while (local_30 != 0x20);
    *pcVar8 = '\0';
  }
  memcpy((void *)(*(int *)((int)param_1 + 0x14) + iVar5),param_3,0x20);
  iVar5 = *(int *)((int)param_1 + 0x18);
  *(uint *)((iVar3 + 3) * 4 + iVar5) = param_4;
  *(uint *)((iVar3 + 2) * 4 + iVar5) = param_4;
  *(uint *)((iVar3 + 1) * 4 + iVar5) = param_4;
  *(uint *)(iVar4 * 0x10 + iVar5) = param_4;
  return;
}


