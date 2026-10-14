/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002bc650 CCTextRenderer::AddText */

/* CCTextRenderer::AddText(void*, char const*, ccMat3x4 const*, unsigned int, unsigned int) */

void CCTextRenderer::AddText
               (void *param_1,char *param_2,ccMat3x4 *param_3,uint param_4,uint param_5)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  STextRendererCharDef *pSVar4;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  uint local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 local_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  
  local_48 = *(undefined4 *)param_3;
  uStack_44 = *(undefined4 *)(param_3 + 4);
  uStack_40 = *(undefined4 *)(param_3 + 8);
  local_3c = *(undefined4 *)(param_3 + 0xc);
  uStack_38 = *(undefined4 *)(param_3 + 0x10);
  uStack_34 = *(undefined4 *)(param_3 + 0x14);
  local_30 = *(undefined4 *)(param_3 + 0x18);
  uStack_2c = *(undefined4 *)(param_3 + 0x1c);
  uStack_28 = *(undefined4 *)(param_3 + 0x20);
  local_24 = *(undefined4 *)(param_3 + 0x24);
  local_20 = *(undefined4 *)(param_3 + 0x28);
  local_1c = *(undefined4 *)(param_3 + 0x2c);
  local_54 = 0;
  local_50 = 0;
  local_4c = 0;
  while (*param_2 != '\0') {
    iVar1 = L_GetChar((STextRenderer *)param_1,param_2,&local_58);
    param_2 = param_2 + iVar1;
    iVar1 = FUN_002bb7c0(param_1,local_58);
    if (iVar1 != -1) {
                    /* WARNING: Load size is inaccurate */
      if (*(int *)((int)param_1 + 4) == *param_1) {
        Flush(param_1,param_5);
      }
      iVar3 = *(int *)((int)param_1 + 4);
      pSVar4 = (STextRendererCharDef *)(*(int *)((int)param_1 + 0x20) + iVar1 * 0x34);
      FUN_002bb712(&local_68,param_3,&local_54);
      local_24 = local_68;
      local_20 = local_64;
      local_1c = local_60;
      L_AddCharacter((STextRenderer *)param_1,pSVar4,(ccMat3x4 *)&local_48,iVar3 << 2,param_4);
      uVar2 = __mulsf3(*(undefined4 *)(pSVar4 + 0x20),*(undefined4 *)((int)param_1 + 0xfc));
      local_54 = __addsf3(local_54,uVar2);
      *(int *)((int)param_1 + 4) = *(int *)((int)param_1 + 4) + 1;
    }
  }
  return;
}


