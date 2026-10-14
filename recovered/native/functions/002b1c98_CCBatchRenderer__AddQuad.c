/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002b1c98 CCBatchRenderer::AddQuad */

/* CCBatchRenderer::AddQuad(void*, ccVec2 const*, ccVec2 const*, ccVec2 const*, unsigned int const*)
    */

void CCBatchRenderer::AddQuad
               (void *param_1,ccVec2 *param_2,ccVec2 *param_3,ccVec2 *param_4,uint *param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  undefined4 *puVar5;
  undefined4 local_28;
  
  L_EnsureCanAddQuad((SBatchRenderer *)param_1);
  iVar3 = *(int *)((int)param_1 + 8);
  *(int *)((int)param_1 + 8) = iVar3 + 1;
  uVar1 = __mulsf3(*(undefined4 *)param_3,0x3f000000);
  local_28 = __mulsf3(*(undefined4 *)(param_3 + 4),0x3f000000);
  pcVar4 = *(char **)(DAT_002b1d58 + 0x2b1cd0);
  if (*pcVar4 != '\0') {
    uVar1 = __mulsf3(uVar1,**(undefined4 **)(DAT_002b1d5c + 0x2b1cde));
    local_28 = __mulsf3(local_28,**(undefined4 **)(DAT_002b1d60 + 0x2b1cee));
    *pcVar4 = '\0';
  }
  puVar5 = (undefined4 *)(*(int *)((int)param_1 + 0x10) + iVar3 * 0x20);
  uVar2 = __subsf3(*(undefined4 *)param_2,uVar1);
  puVar5[4] = uVar2;
  *puVar5 = uVar2;
  uVar1 = __addsf3(uVar1,*(undefined4 *)param_2);
  puVar5[6] = uVar1;
  puVar5[2] = uVar1;
  uVar1 = __addsf3(local_28,*(undefined4 *)(param_2 + 4));
  puVar5[3] = uVar1;
  puVar5[1] = uVar1;
  uVar1 = __subsf3(*(undefined4 *)(param_2 + 4),local_28);
  puVar5[7] = uVar1;
  puVar5[5] = uVar1;
  memcpy((void *)(*(int *)((int)param_1 + 0x14) + iVar3 * 0x20),param_4,0x20);
  memcpy((void *)(*(int *)((int)param_1 + 0x18) + iVar3 * 0x10),param_5,0x10);
  return;
}


