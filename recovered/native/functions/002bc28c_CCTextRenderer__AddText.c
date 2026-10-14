/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002bc28c CCTextRenderer::AddText */

/* CCTextRenderer::AddText(void*, char const*, ccVec2 const*, unsigned int) */

void CCTextRenderer::AddText(void *param_1,char *param_2,ccVec2 *param_3,uint param_4)

{
  int iVar1;
  ccVec2 *pcVar2;
  int iVar3;
  STextRendererCharDef *pSVar4;
  undefined4 uVar5;
  uint local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  
  if ((param_2 != (char *)0x0) && (*(int *)((int)param_1 + 0x120) == 0)) {
    local_28 = *(undefined4 *)param_3;
    local_24 = *(undefined4 *)(param_3 + 4);
    while (*param_2 != '\0') {
      iVar1 = L_GetChar((STextRenderer *)param_1,param_2,&local_2c);
      param_2 = param_2 + iVar1;
      iVar1 = FUN_002bb7c0(param_1,local_2c);
      if (iVar1 != -1) {
                    /* WARNING: Load size is inaccurate */
        if (*(int *)((int)param_1 + 4) == *param_1) {
          Flush(param_1,1);
        }
        iVar3 = *(int *)((int)param_1 + 4);
        uVar5 = *(undefined4 *)((int)param_1 + 0xc);
        pSVar4 = (STextRendererCharDef *)(*(int *)((int)param_1 + 0x20) + iVar1 * 0x34);
        iVar1 = __aeabi_fcmple(uVar5,0x3f800000);
        if ((iVar1 == 0) && (iVar1 = __aeabi_fcmpge(uVar5,local_24), iVar1 == 0)) {
          local_20 = 0;
          local_1c = DAT_002bc35c;
          pcVar2 = (ccVec2 *)&local_20;
        }
        else {
          pcVar2 = (ccVec2 *)&local_28;
        }
        L_AddCharacter((STextRenderer *)param_1,pSVar4,pcVar2,iVar3 << 2,param_4);
        uVar5 = __mulsf3(*(undefined4 *)(pSVar4 + 0x20),*(undefined4 *)((int)param_1 + 0xfc));
        local_28 = __addsf3(local_28,uVar5);
        *(int *)((int)param_1 + 4) = *(int *)((int)param_1 + 4) + 1;
      }
    }
    *(undefined4 *)((int)param_1 + 0x104) = local_28;
    *(undefined4 *)((int)param_1 + 0x108) = local_24;
  }
  return;
}


