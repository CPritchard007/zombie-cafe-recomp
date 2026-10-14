/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002b1088 CCBatchRenderer::AddQuad */

/* CCBatchRenderer::AddQuad(void*, ccVec2 const*, ccVec2 const*, ccVec2 const*, unsigned int,
   unsigned int) */

void CCBatchRenderer::AddQuad
               (void *param_1,ccVec2 *param_2,ccVec2 *param_3,ccVec2 *param_4,uint param_5,
               uint param_6)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 local_28;
  undefined4 local_24;
  
  L_EnsureCanAddQuad((SBatchRenderer *)param_1);
  iVar3 = *(int *)((int)param_1 + 8);
  iVar6 = iVar3 * 4;
  *(int *)((int)param_1 + 8) = iVar3 + 1;
  local_28 = __mulsf3(*(undefined4 *)param_3,0x3f000000);
  local_24 = __mulsf3(*(undefined4 *)(param_3 + 4),0x3f000000);
  pcVar4 = *(char **)(DAT_002b1198 + 0x2b10be);
  if (*pcVar4 != '\0') {
    local_28 = __mulsf3(local_28,**(undefined4 **)(DAT_002b119c + 0x2b10cc));
    local_24 = __mulsf3(local_24,**(undefined4 **)(DAT_002b11a0 + 0x2b10dc));
    *pcVar4 = '\0';
  }
  iVar2 = iVar3 * 0x20;
  puVar5 = (undefined4 *)(*(int *)((int)param_1 + 0x10) + iVar2);
  uVar1 = __subsf3(*(undefined4 *)param_2,local_28);
  puVar5[4] = uVar1;
  *puVar5 = uVar1;
  uVar1 = __addsf3(local_28,*(undefined4 *)param_2);
  puVar5[6] = uVar1;
  puVar5[2] = uVar1;
  uVar1 = __addsf3(local_24,*(undefined4 *)(param_2 + 4));
  puVar5[3] = uVar1;
  puVar5[1] = uVar1;
  uVar1 = __subsf3(*(undefined4 *)(param_2 + 4),local_24);
  puVar5[7] = uVar1;
  puVar5[5] = uVar1;
  if (param_6 == 0) {
    memcpy((void *)(*(int *)((int)param_1 + 0x14) + iVar2),param_4,0x20);
  }
  else {
    puVar5 = (undefined4 *)(*(int *)((int)param_1 + 0x14) + iVar2);
    *puVar5 = *(undefined4 *)(param_4 + 8);
    puVar5[1] = *(undefined4 *)(param_4 + 0xc);
    puVar5 = (undefined4 *)(*(int *)((int)param_1 + 0x14) + (iVar6 + 1) * 8);
    *puVar5 = *(undefined4 *)param_4;
    puVar5[1] = *(undefined4 *)(param_4 + 4);
    puVar5 = (undefined4 *)(*(int *)((int)param_1 + 0x14) + (iVar6 + 2) * 8);
    *puVar5 = *(undefined4 *)(param_4 + 0x18);
    puVar5[1] = *(undefined4 *)(param_4 + 0x1c);
    puVar5 = (undefined4 *)(*(int *)((int)param_1 + 0x14) + (iVar6 + 3) * 8);
    *puVar5 = *(undefined4 *)(param_4 + 0x10);
    puVar5[1] = *(undefined4 *)(param_4 + 0x14);
  }
  iVar2 = *(int *)((int)param_1 + 0x18);
  *(uint *)((iVar6 + 3) * 4 + iVar2) = param_5;
  *(uint *)((iVar6 + 2) * 4 + iVar2) = param_5;
  *(uint *)((iVar6 + 1) * 4 + iVar2) = param_5;
  *(uint *)(iVar3 * 0x10 + iVar2) = param_5;
  return;
}


