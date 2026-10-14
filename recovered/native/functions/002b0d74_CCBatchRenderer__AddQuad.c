/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002b0d74 CCBatchRenderer::AddQuad */

/* CCBatchRenderer::AddQuad(void*, ccMat2x3 const*, ccVec2 const*, ccVec2 const*, ccVec2 const*,
   unsigned int) */

void CCBatchRenderer::AddQuad
               (void *param_1,ccMat2x3 *param_2,ccVec2 *param_3,ccVec2 *param_4,ccVec2 *param_5,
               uint param_6)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  
  L_EnsureCanAddQuad((SBatchRenderer *)param_1);
  iVar3 = *(int *)((int)param_1 + 8);
  *(int *)((int)param_1 + 8) = iVar3 + 1;
  iVar4 = iVar3 * 4;
  iVar1 = __mulsf3(*(undefined4 *)param_4,0x3f000000);
  iVar2 = __mulsf3(*(undefined4 *)(param_4 + 4),0x3f000000);
  piVar5 = (int *)(*(int *)((int)param_1 + 0x10) + iVar3 * 0x20);
  piVar5[4] = iVar1 + -0x80000000;
  *piVar5 = iVar1 + -0x80000000;
  piVar5[3] = iVar2;
  piVar5[1] = iVar2;
  piVar5[6] = iVar1;
  piVar5[2] = iVar1;
  piVar5[7] = iVar2 + -0x80000000;
  piVar5[5] = iVar2 + -0x80000000;
  FUN_002b0a82(&local_38,param_2,piVar5);
  piVar5[1] = local_34;
  *piVar5 = local_38;
  FUN_002b0a82(&local_30,param_2,piVar5 + 2);
  piVar5[2] = local_30;
  piVar5[3] = local_2c;
  FUN_002b0a82(&local_28,param_2,piVar5 + 4);
  piVar5[4] = local_28;
  piVar5[5] = local_24;
  FUN_002b0a82(&local_20,param_2,piVar5 + 6);
  piVar5[6] = local_20;
  piVar5[7] = local_1c;
  iVar1 = __addsf3(local_38,*(undefined4 *)param_3);
  *piVar5 = iVar1;
  iVar1 = __addsf3(local_30,*(undefined4 *)param_3);
  piVar5[2] = iVar1;
  iVar1 = __addsf3(local_28,*(undefined4 *)param_3);
  piVar5[4] = iVar1;
  iVar1 = __addsf3(local_20,*(undefined4 *)param_3);
  piVar5[6] = iVar1;
  iVar1 = __addsf3(local_34,*(undefined4 *)(param_3 + 4));
  piVar5[1] = iVar1;
  iVar1 = __addsf3(local_2c,*(undefined4 *)(param_3 + 4));
  piVar5[3] = iVar1;
  iVar1 = __addsf3(local_24,*(undefined4 *)(param_3 + 4));
  piVar5[5] = iVar1;
  iVar1 = __addsf3(local_1c,*(undefined4 *)(param_3 + 4));
  piVar5[7] = iVar1;
  memcpy((void *)(*(int *)((int)param_1 + 0x14) + iVar3 * 0x20),param_5,0x20);
  iVar1 = *(int *)((int)param_1 + 0x18);
  *(uint *)((iVar4 + 3) * 4 + iVar1) = param_6;
  *(uint *)((iVar4 + 2) * 4 + iVar1) = param_6;
  *(uint *)((iVar4 + 1) * 4 + iVar1) = param_6;
  *(uint *)(iVar3 * 0x10 + iVar1) = param_6;
  return;
}


