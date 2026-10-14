/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002bc700 CCTextRenderer::AddText */

/* CCTextRenderer::AddText(void*, char const*, ccMat2x3 const*, unsigned int) */

void CCTextRenderer::AddText(void *param_1,char *param_2,ccMat2x3 *param_3,uint param_4)

{
  int iVar1;
  undefined4 uVar2;
  ccMat2x3 *pcVar3;
  int iVar4;
  undefined4 uVar5;
  STextRendererCharDef *pSVar6;
  uint local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  
  if (*(int *)((int)param_1 + 0x120) == 0) {
    local_48 = *(undefined4 *)param_3;
    uStack_44 = *(undefined4 *)(param_3 + 4);
    uStack_40 = *(undefined4 *)(param_3 + 8);
    local_3c = *(undefined4 *)(param_3 + 0xc);
    local_38 = *(undefined4 *)(param_3 + 0x10);
    local_34 = *(undefined4 *)(param_3 + 0x14);
    local_58 = 0;
    local_54 = 0;
    while (*param_2 != '\0') {
      iVar1 = L_GetChar((STextRenderer *)param_1,param_2,&local_5c);
      param_2 = param_2 + iVar1;
      iVar1 = FUN_002bb7c0(param_1,local_5c);
      if (iVar1 != -1) {
                    /* WARNING: Load size is inaccurate */
        if (*(int *)((int)param_1 + 4) == *param_1) {
          Flush(param_1,1);
        }
        iVar4 = *(int *)((int)param_1 + 4);
        pSVar6 = (STextRendererCharDef *)(*(int *)((int)param_1 + 0x20) + iVar1 * 0x34);
        FUN_002bb81c(&local_50,param_3,&local_58);
        uVar2 = local_4c;
        local_34 = local_4c;
        uVar5 = *(undefined4 *)((int)param_1 + 0xc);
        local_38 = local_50;
        iVar1 = __aeabi_fcmple(uVar5,0x3f800000);
        if ((iVar1 == 0) && (iVar1 = __aeabi_fcmpge(uVar5,uVar2), iVar1 == 0)) {
          local_30 = 0x3f800000;
          local_24 = 0x3f800000;
          local_2c = 0;
          local_28 = 0;
          local_1c = 0;
          local_20 = DAT_002bc7f8;
          pcVar3 = (ccMat2x3 *)&local_30;
        }
        else {
          pcVar3 = (ccMat2x3 *)&local_48;
        }
        L_AddCharacter((STextRenderer *)param_1,pSVar6,pcVar3,iVar4 << 2,param_4);
        uVar2 = __mulsf3(*(undefined4 *)(pSVar6 + 0x20),*(undefined4 *)((int)param_1 + 0xfc));
        local_58 = __addsf3(local_58,uVar2);
        *(int *)((int)param_1 + 4) = *(int *)((int)param_1 + 4) + 1;
      }
    }
    *(undefined4 *)((int)param_1 + 0x104) = local_58;
    *(undefined4 *)((int)param_1 + 0x108) = local_54;
  }
  return;
}


