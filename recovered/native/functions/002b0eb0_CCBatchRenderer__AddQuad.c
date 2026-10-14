/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002b0eb0 CCBatchRenderer::AddQuad */

/* CCBatchRenderer::AddQuad(void*, ccMat2x3 const*, ccVec2 const*, ccVec2 const*, unsigned int
   const*) */

void CCBatchRenderer::AddQuad
               (void *param_1,ccMat2x3 *param_2,ccVec2 *param_3,ccVec2 *param_4,uint *param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
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
  iVar1 = __mulsf3(*(undefined4 *)param_3,0x3f000000);
  iVar2 = __mulsf3(*(undefined4 *)(param_3 + 4),0x3f000000);
  piVar4 = (int *)(*(int *)((int)param_1 + 0x10) + iVar3 * 0x20);
  piVar4[3] = iVar2;
  piVar4[1] = iVar2;
  piVar4[4] = iVar1 + -0x80000000;
  *piVar4 = iVar1 + -0x80000000;
  piVar4[6] = iVar1;
  piVar4[2] = iVar1;
  piVar4[7] = iVar2 + -0x80000000;
  piVar4[5] = iVar2 + -0x80000000;
  FUN_002b0a82(&local_38,param_2,piVar4);
  *piVar4 = local_38;
  piVar4[1] = local_34;
  FUN_002b0a82(&local_30,param_2,piVar4 + 2);
  piVar4[2] = local_30;
  piVar4[3] = local_2c;
  FUN_002b0a82(&local_28,param_2,piVar4 + 4);
  piVar4[4] = local_28;
  piVar4[5] = local_24;
  FUN_002b0a82(&local_20,param_2,piVar4 + 6);
  piVar4[6] = local_20;
  piVar4[7] = local_1c;
  memcpy((void *)(*(int *)((int)param_1 + 0x14) + iVar3 * 0x20),param_4,0x20);
  memcpy((void *)(*(int *)((int)param_1 + 0x18) + iVar3 * 0x10),param_5,0x10);
  return;
}


