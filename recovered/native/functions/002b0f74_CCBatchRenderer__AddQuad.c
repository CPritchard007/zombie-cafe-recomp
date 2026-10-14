/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002b0f74 CCBatchRenderer::AddQuad */

/* CCBatchRenderer::AddQuad(void*, ccMat2x3 const*, ccVec2 const*, ccVec2 const*, unsigned int) */

void CCBatchRenderer::AddQuad
               (void *param_1,ccMat2x3 *param_2,ccVec2 *param_3,ccVec2 *param_4,uint param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  int *piVar6;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  
  L_EnsureCanAddQuad((SBatchRenderer *)param_1);
  iVar4 = *(int *)((int)param_1 + 8);
  iVar3 = iVar4 * 4;
  *(int *)((int)param_1 + 8) = iVar4 + 1;
  iVar1 = __mulsf3(*(undefined4 *)param_3,0x3f000000);
  iVar2 = __mulsf3(*(undefined4 *)(param_3 + 4),0x3f000000);
  pcVar5 = *(char **)(DAT_002b107c + 0x2b0fac);
  if (*pcVar5 != '\0') {
    iVar1 = __mulsf3(iVar1,**(undefined4 **)(DAT_002b1080 + 0x2b0fba));
    iVar2 = __mulsf3(iVar2,**(undefined4 **)(DAT_002b1084 + 0x2b0fca));
    *pcVar5 = '\0';
  }
  piVar6 = (int *)(*(int *)((int)param_1 + 0x10) + iVar4 * 0x20);
  piVar6[3] = iVar2;
  piVar6[1] = iVar2;
  piVar6[4] = iVar1 + -0x80000000;
  *piVar6 = iVar1 + -0x80000000;
  piVar6[6] = iVar1;
  piVar6[2] = iVar1;
  piVar6[7] = iVar2 + -0x80000000;
  piVar6[5] = iVar2 + -0x80000000;
  FUN_002b0a82(&local_38,param_2,piVar6);
  *piVar6 = local_38;
  piVar6[1] = local_34;
  FUN_002b0a82(&local_30,param_2,piVar6 + 2);
  piVar6[2] = local_30;
  piVar6[3] = local_2c;
  FUN_002b0a82(&local_28,param_2,piVar6 + 4);
  piVar6[4] = local_28;
  piVar6[5] = local_24;
  FUN_002b0a82(&local_20,param_2,piVar6 + 6);
  piVar6[6] = local_20;
  piVar6[7] = local_1c;
  memcpy((void *)(*(int *)((int)param_1 + 0x14) + iVar4 * 0x20),param_4,0x20);
  iVar1 = *(int *)((int)param_1 + 0x18);
  *(uint *)((iVar3 + 3) * 4 + iVar1) = param_5;
  *(uint *)((iVar3 + 2) * 4 + iVar1) = param_5;
  *(uint *)((iVar3 + 1) * 4 + iVar1) = param_5;
  *(uint *)(iVar4 * 0x10 + iVar1) = param_5;
  return;
}


