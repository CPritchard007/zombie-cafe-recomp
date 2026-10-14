/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002bca62 CCTextRenderer::AddShadowedText */

/* CCTextRenderer::AddShadowedText(void*, char const*, ccVec2 const*, unsigned int, unsigned int) */

void CCTextRenderer::AddShadowedText
               (void *param_1,char *param_2,ccVec2 *param_3,uint param_4,uint param_5)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  STextRendererCharDef *pSVar4;
  uint local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  
  if (*(int *)((int)param_1 + 0x120) == 0) {
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
        pSVar4 = (STextRendererCharDef *)(*(int *)((int)param_1 + 0x20) + iVar1 * 0x34);
        uVar3 = *(int *)((int)param_1 + 4) * 4;
        uVar2 = __mulsf3(*(undefined4 *)((int)param_1 + 0x10c),*(undefined4 *)((int)param_1 + 0xfc))
        ;
        local_20 = __addsf3(local_28,uVar2);
        uVar2 = __mulsf3(*(undefined4 *)((int)param_1 + 0x110),*(undefined4 *)((int)param_1 + 0x100)
                        );
        local_1c = __addsf3(local_24,uVar2);
        L_AddCharacter((STextRenderer *)param_1,pSVar4,(ccVec2 *)&local_20,uVar3,param_5);
                    /* WARNING: Load size is inaccurate */
        iVar1 = *(int *)((int)param_1 + 4) + 1;
        *(int *)((int)param_1 + 4) = iVar1;
        uVar3 = uVar3 + 4;
        if (iVar1 == *param_1) {
          Flush(param_1,1);
          uVar3 = 0;
        }
        L_AddCharacter((STextRenderer *)param_1,pSVar4,(ccVec2 *)&local_28,uVar3,param_4);
        uVar2 = __mulsf3(*(undefined4 *)(pSVar4 + 0x20),*(undefined4 *)((int)param_1 + 0xfc));
        local_28 = __addsf3(local_28,uVar2);
        *(int *)((int)param_1 + 4) = *(int *)((int)param_1 + 4) + 1;
      }
    }
    *(undefined4 *)((int)param_1 + 0x104) = local_28;
    *(undefined4 *)((int)param_1 + 0x108) = local_24;
  }
  return;
}


