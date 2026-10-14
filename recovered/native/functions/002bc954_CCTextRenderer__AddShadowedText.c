/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002bc954 CCTextRenderer::AddShadowedText */

/* CCTextRenderer::AddShadowedText(void*, char const*, ccMat2x3 const*, unsigned int, unsigned int)
    */

void CCTextRenderer::AddShadowedText
               (void *param_1,char *param_2,ccMat2x3 *param_3,uint param_4,uint param_5)

{
  int iVar1;
  undefined4 uVar2;
  STextRendererCharDef *pSVar3;
  uint local_60;
  uint local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  
  if (*(int *)((int)param_1 + 0x120) == 0) {
    local_30 = *(undefined4 *)param_3;
    uStack_2c = *(undefined4 *)(param_3 + 4);
    uStack_28 = *(undefined4 *)(param_3 + 8);
    local_24 = *(undefined4 *)(param_3 + 0xc);
    local_20 = *(undefined4 *)(param_3 + 0x10);
    local_1c = *(undefined4 *)(param_3 + 0x14);
    local_50 = 0;
    local_4c = 0;
    local_48 = *(undefined4 *)((int)param_1 + 0x10c);
    local_44 = *(undefined4 *)((int)param_1 + 0x110);
    while (*param_2 != '\0') {
      iVar1 = L_GetChar((STextRenderer *)param_1,param_2,&local_54);
      param_2 = param_2 + iVar1;
      iVar1 = FUN_002bb7c0(param_1,local_54);
      if (iVar1 != -1) {
                    /* WARNING: Load size is inaccurate */
        if (*(int *)((int)param_1 + 4) == *param_1) {
          Flush(param_1,1);
        }
        pSVar3 = (STextRendererCharDef *)(*(int *)((int)param_1 + 0x20) + iVar1 * 0x34);
        local_60 = *(int *)((int)param_1 + 4) * 4;
        FUN_002bb81c(&local_40,param_3,&local_48);
        local_20 = local_40;
        local_1c = local_3c;
        L_AddCharacter((STextRenderer *)param_1,pSVar3,(ccMat2x3 *)&local_30,local_60,param_5);
                    /* WARNING: Load size is inaccurate */
        iVar1 = *(int *)((int)param_1 + 4) + 1;
        local_60 = local_60 + 4;
        *(int *)((int)param_1 + 4) = iVar1;
        if (iVar1 == *param_1) {
          Flush(param_1,1);
          local_60 = 0;
        }
        FUN_002bb81c(&local_38,param_3,&local_50);
        local_20 = local_38;
        local_1c = local_34;
        L_AddCharacter((STextRenderer *)param_1,pSVar3,(ccMat2x3 *)&local_30,local_60,param_4);
        *(int *)((int)param_1 + 4) = *(int *)((int)param_1 + 4) + 1;
        uVar2 = __mulsf3(*(undefined4 *)(pSVar3 + 0x20),*(undefined4 *)((int)param_1 + 0xfc));
        local_50 = __addsf3(local_50,uVar2);
        local_48 = __addsf3(local_48,uVar2);
      }
    }
    *(undefined4 *)((int)param_1 + 0x104) = local_50;
    *(undefined4 *)((int)param_1 + 0x108) = local_4c;
  }
  return;
}


