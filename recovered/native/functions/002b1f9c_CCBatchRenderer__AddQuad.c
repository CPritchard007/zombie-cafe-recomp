/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002b1f9c CCBatchRenderer::AddQuad */

/* CCBatchRenderer::AddQuad(void*, ccVec2 const*, unsigned int) */

void CCBatchRenderer::AddQuad(void *param_1,ccVec2 *param_2,uint param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  char *pcVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  int local_2c;
  
  L_EnsureCanAddQuad((SBatchRenderer *)param_1);
  iVar4 = *(int *)((int)param_1 + 8);
  iVar3 = iVar4 * 4;
  *(int *)((int)param_1 + 8) = iVar4 + 1;
  iVar6 = 0;
  do {
    iVar5 = iVar6 + iVar4 * 0x20;
    *(undefined4 *)(*(int *)((int)param_1 + 0x10) + iVar5) = *(undefined4 *)(param_2 + iVar6);
    iVar1 = iVar6 + 4;
    iVar6 = iVar6 + 8;
    *(undefined4 *)(*(int *)((int)param_1 + 0x10) + iVar5 + 4) = *(undefined4 *)(param_2 + iVar1);
  } while (iVar6 != 0x20);
  pcVar7 = *(char **)(DAT_002b2050 + 0x2b1fda);
  if (*pcVar7 != '\0') {
    puVar9 = *(undefined4 **)(DAT_002b2054 + 0x2b1fec);
    puVar10 = *(undefined4 **)(DAT_002b2058 + 0x2b1fee);
    local_2c = 0;
    do {
      iVar6 = local_2c + iVar4 * 0x20;
      puVar8 = (undefined4 *)(*(int *)((int)param_1 + 0x10) + iVar6);
      uVar2 = __mulsf3(*puVar8,*puVar9);
      *puVar8 = uVar2;
      iVar6 = *(int *)((int)param_1 + 0x10) + iVar6;
      uVar2 = __mulsf3(*(undefined4 *)(iVar6 + 4),*puVar10);
      *(undefined4 *)(iVar6 + 4) = uVar2;
      local_2c = local_2c + 8;
    } while (local_2c != 0x20);
    *pcVar7 = '\0';
  }
  iVar6 = *(int *)((int)param_1 + 0x18);
  *(uint *)((iVar3 + 3) * 4 + iVar6) = param_3;
  *(uint *)((iVar3 + 2) * 4 + iVar6) = param_3;
  *(uint *)((iVar3 + 1) * 4 + iVar6) = param_3;
  *(uint *)(iVar4 * 0x10 + iVar6) = param_3;
  return;
}


