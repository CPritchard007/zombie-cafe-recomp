/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002b1d64 CCBatchRenderer::AddQuad */

/* CCBatchRenderer::AddQuad(void*, ccVec2 const*, ccVec2 const*, unsigned int const*) */

void CCBatchRenderer::AddQuad(void *param_1,ccVec2 *param_2,ccVec2 *param_3,uint *param_4)

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
  int local_34;
  
  L_EnsureCanAddQuad((SBatchRenderer *)param_1);
  iVar3 = *(int *)((int)param_1 + 8);
  iVar4 = iVar3 * 0x20;
  *(int *)((int)param_1 + 8) = iVar3 + 1;
  iVar6 = 0;
  do {
    iVar5 = iVar6 + iVar4;
    *(undefined4 *)(*(int *)((int)param_1 + 0x10) + iVar5) = *(undefined4 *)(param_2 + iVar6);
    iVar1 = iVar6 + 4;
    iVar6 = iVar6 + 8;
    *(undefined4 *)(*(int *)((int)param_1 + 0x10) + iVar5 + 4) = *(undefined4 *)(param_2 + iVar1);
  } while (iVar6 != 0x20);
  pcVar7 = *(char **)(DAT_002b1e14 + 0x2b1da4);
  if (*pcVar7 != '\0') {
    puVar9 = *(undefined4 **)(DAT_002b1e18 + 0x2b1db6);
    puVar10 = *(undefined4 **)(DAT_002b1e1c + 0x2b1db8);
    local_34 = 0;
    do {
      puVar8 = (undefined4 *)(*(int *)((int)param_1 + 0x10) + local_34 + iVar4);
      uVar2 = __mulsf3(*puVar8,*puVar9);
      *puVar8 = uVar2;
      iVar6 = *(int *)((int)param_1 + 0x10) + local_34 + iVar4;
      uVar2 = __mulsf3(*(undefined4 *)(iVar6 + 4),*puVar10);
      *(undefined4 *)(iVar6 + 4) = uVar2;
      local_34 = local_34 + 8;
    } while (local_34 != 0x20);
    *pcVar7 = '\0';
  }
  memcpy((void *)(*(int *)((int)param_1 + 0x14) + iVar4),param_3,0x20);
  memcpy((void *)(*(int *)((int)param_1 + 0x18) + iVar3 * 0x10),param_4,0x10);
  return;
}


