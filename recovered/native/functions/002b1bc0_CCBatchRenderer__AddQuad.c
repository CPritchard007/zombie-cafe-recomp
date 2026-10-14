/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002b1bc0 CCBatchRenderer::AddQuad */

/* CCBatchRenderer::AddQuad(void*, ccVec2 const*, ccVec2 const*, ccVec2 const*, unsigned int) */

void CCBatchRenderer::AddQuad
               (void *param_1,ccVec2 *param_2,ccVec2 *param_3,ccVec2 *param_4,uint param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined4 local_28;
  
  L_EnsureCanAddQuad((SBatchRenderer *)param_1);
  iVar3 = *(int *)((int)param_1 + 8);
  iVar7 = iVar3 * 4;
  *(int *)((int)param_1 + 8) = iVar3 + 1;
  uVar1 = __mulsf3(*(undefined4 *)param_3,0x3f000000);
  local_28 = __mulsf3(*(undefined4 *)(param_3 + 4),0x3f000000);
  pcVar5 = *(char **)(DAT_002b1c8c + 0x2b1bf6);
  if (*pcVar5 != '\0') {
    uVar1 = __mulsf3(uVar1,**(undefined4 **)(DAT_002b1c90 + 0x2b1c04));
    local_28 = __mulsf3(local_28,**(undefined4 **)(DAT_002b1c94 + 0x2b1c14));
    *pcVar5 = '\0';
  }
  puVar6 = (undefined4 *)(*(int *)((int)param_1 + 0x10) + iVar3 * 0x20);
  uVar2 = __subsf3(*(undefined4 *)param_2,uVar1);
  puVar6[4] = uVar2;
  *puVar6 = uVar2;
  uVar1 = __addsf3(uVar1,*(undefined4 *)param_2);
  puVar6[6] = uVar1;
  puVar6[2] = uVar1;
  uVar1 = __addsf3(local_28,*(undefined4 *)(param_2 + 4));
  puVar6[3] = uVar1;
  puVar6[1] = uVar1;
  uVar1 = __subsf3(*(undefined4 *)(param_2 + 4),local_28);
  puVar6[7] = uVar1;
  puVar6[5] = uVar1;
  memcpy((void *)(*(int *)((int)param_1 + 0x14) + iVar3 * 0x20),param_4,0x20);
  iVar4 = *(int *)((int)param_1 + 0x18);
  *(uint *)((iVar7 + 3) * 4 + iVar4) = param_5;
  *(uint *)((iVar7 + 2) * 4 + iVar4) = param_5;
  *(uint *)((iVar7 + 1) * 4 + iVar4) = param_5;
  *(uint *)(iVar3 * 0x10 + iVar4) = param_5;
  return;
}


