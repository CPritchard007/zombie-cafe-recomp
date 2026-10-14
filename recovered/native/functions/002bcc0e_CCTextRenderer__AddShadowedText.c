/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002bcc0e CCTextRenderer::AddShadowedText */

/* CCTextRenderer::AddShadowedText(void*, char const*, ccVec2 const*, unsigned int, unsigned int,
   unsigned int) */

void CCTextRenderer::AddShadowedText
               (void *param_1,char *param_2,ccVec2 *param_3,uint param_4,uint param_5,uint param_6)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  STextRendererCharDef *pSVar6;
  undefined4 uVar7;
  uint uVar8;
  int iVar9;
  int local_50;
  undefined4 local_4c;
  uint local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  
  if (*(int *)((int)param_1 + 0x120) == 0) {
    local_28 = *(undefined4 *)param_3;
    local_24 = *(undefined4 *)(param_3 + 4);
    uVar1 = __floatunsisf(param_4);
    uVar1 = __addsf3(uVar1,local_28);
    local_4c = 0;
    iVar9 = 0;
    local_50 = iVar9;
    for (; param_2[iVar9] != '\0'; iVar9 = iVar9 + 1) {
      iVar2 = L_GetChar((STextRenderer *)param_1,param_2 + iVar9,&local_2c);
      uVar8 = local_2c;
      iVar3 = FUN_002bb7c0(param_1,local_2c);
      if (iVar3 == -1) {
        if (uVar8 == 10) goto LAB_002bcc6c;
      }
      else {
        if (uVar8 == 0x20) {
          local_4c = *(undefined4 *)((int)param_1 + 4);
          local_50 = iVar9;
        }
LAB_002bcc6c:
                    /* WARNING: Load size is inaccurate */
        if (*(int *)((int)param_1 + 4) == *param_1) {
          Flush(param_1,1);
        }
        uVar4 = local_28;
        if (local_2c == 10) {
          local_28 = *(undefined4 *)param_3;
          uVar4 = __mulsf3(*(undefined4 *)((int)param_1 + 0x10),
                           *(undefined4 *)((int)param_1 + 0x100));
          local_24 = __subsf3(local_24,uVar4);
        }
        else {
          pSVar6 = (STextRendererCharDef *)(*(int *)((int)param_1 + 0x20) + iVar3 * 0x34);
          uVar7 = *(undefined4 *)((int)param_1 + 0xfc);
          uVar5 = __mulsf3(uVar7,*(undefined4 *)(pSVar6 + 0x24));
          uVar5 = __addsf3(uVar4,uVar5);
          iVar3 = __aeabi_fcmpgt(uVar5,uVar1);
          if (iVar3 == 0) {
            uVar8 = *(int *)((int)param_1 + 4) * 4;
            uVar5 = __mulsf3(uVar7,*(undefined4 *)((int)param_1 + 0x10c));
            local_20 = __addsf3(uVar4,uVar5);
            uVar4 = __mulsf3(*(undefined4 *)((int)param_1 + 0x110),
                             *(undefined4 *)((int)param_1 + 0x100));
            local_1c = __addsf3(local_24,uVar4);
            L_AddCharacter((STextRenderer *)param_1,pSVar6,(ccVec2 *)&local_20,uVar8,param_6);
                    /* WARNING: Load size is inaccurate */
            iVar3 = *(int *)((int)param_1 + 4) + 1;
            *(int *)((int)param_1 + 4) = iVar3;
            uVar8 = uVar8 + 4;
            if (iVar3 == *param_1) {
              Flush(param_1,1);
              uVar8 = 0;
            }
            L_AddCharacter((STextRenderer *)param_1,pSVar6,(ccVec2 *)&local_28,uVar8,param_5);
            uVar4 = __mulsf3(*(undefined4 *)(pSVar6 + 0x20),*(undefined4 *)((int)param_1 + 0xfc));
            local_28 = __addsf3(local_28,uVar4);
            *(int *)((int)param_1 + 4) = *(int *)((int)param_1 + 4) + 1;
            iVar9 = iVar9 + -1 + iVar2;
          }
          else {
            local_28 = *(undefined4 *)param_3;
            uVar4 = __mulsf3(*(undefined4 *)((int)param_1 + 0x10),
                             *(undefined4 *)((int)param_1 + 0x100));
            local_24 = __subsf3(local_24,uVar4);
            *(undefined4 *)((int)param_1 + 4) = local_4c;
            iVar9 = local_50;
          }
        }
      }
    }
    *(undefined4 *)((int)param_1 + 0x104) = local_28;
    *(undefined4 *)((int)param_1 + 0x108) = local_24;
  }
  return;
}


