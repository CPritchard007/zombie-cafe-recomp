/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002b1ef0 CCBatchRenderer::AddQuad */

/* CCBatchRenderer::AddQuad(void*, ccVec2 const*, unsigned int const*) */

void CCBatchRenderer::AddQuad(void *param_1,ccVec2 *param_2,uint *param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  int local_30;
  
  L_EnsureCanAddQuad((SBatchRenderer *)param_1);
  iVar3 = *(int *)((int)param_1 + 8);
  *(int *)((int)param_1 + 8) = iVar3 + 1;
  iVar5 = 0;
  do {
    iVar4 = iVar5 + iVar3 * 0x20;
    *(undefined4 *)(*(int *)((int)param_1 + 0x10) + iVar4) = *(undefined4 *)(param_2 + iVar5);
    iVar1 = iVar5 + 4;
    iVar5 = iVar5 + 8;
    *(undefined4 *)(*(int *)((int)param_1 + 0x10) + iVar4 + 4) = *(undefined4 *)(param_2 + iVar1);
  } while (iVar5 != 0x20);
  pcVar6 = *(char **)(DAT_002b1f90 + 0x2b1f2e);
  if (*pcVar6 != '\0') {
    puVar8 = *(undefined4 **)(DAT_002b1f94 + 0x2b1f40);
    puVar9 = *(undefined4 **)(DAT_002b1f98 + 0x2b1f42);
    local_30 = 0;
    do {
      iVar5 = local_30 + iVar3 * 0x20;
      puVar7 = (undefined4 *)(*(int *)((int)param_1 + 0x10) + iVar5);
      uVar2 = __mulsf3(*puVar7,*puVar8);
      *puVar7 = uVar2;
      iVar5 = *(int *)((int)param_1 + 0x10) + iVar5;
      uVar2 = __mulsf3(*(undefined4 *)(iVar5 + 4),*puVar9);
      *(undefined4 *)(iVar5 + 4) = uVar2;
      local_30 = local_30 + 8;
    } while (local_30 != 0x20);
    *pcVar6 = '\0';
  }
  memcpy((void *)(*(int *)((int)param_1 + 0x18) + iVar3 * 0x10),param_3,0x10);
  return;
}


