/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002be0bc CCTextRenderer::AddCenteredText */

/* CCTextRenderer::AddCenteredText(void*, ccVec2*, ccVec2*, char const*, ccVec2 const*, unsigned
   int) */

void CCTextRenderer::AddCenteredText
               (void *param_1,ccVec2 *param_2,ccVec2 *param_3,char *param_4,ccVec2 *param_5,
               uint param_6)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  STextRendererCharDef *pSVar9;
  undefined4 local_44;
  uint local_24;
  undefined4 local_20;
  undefined4 local_1c;
  
  local_44 = GetStringWidth(param_1,param_4);
  uVar1 = GetTextHeight(param_1);
  iVar2 = __subsf3(*(undefined4 *)((int)param_1 + 0xfc),0x3f800000);
  iVar3 = __aeabi_fcmplt(iVar2,0);
  if (iVar3 != 0) {
    iVar2 = iVar2 + -0x80000000;
  }
  iVar2 = __aeabi_fcmple(iVar2,DAT_002be228);
  if (iVar2 != 0) {
    __addsf3(local_44,0x3f000000);
    uVar4 = __fixsfsi();
    local_44 = __floatunsisf(uVar4 & 0xfffffffe);
  }
  uVar5 = __mulsf3(local_44,0x3f000000);
  local_20 = __subsf3(*(undefined4 *)param_5,uVar5);
  uVar5 = __mulsf3(uVar1,0x3f000000);
  local_1c = __subsf3(*(undefined4 *)(param_5 + 4),uVar5);
  while (*param_4 != '\0') {
    iVar2 = L_GetChar((STextRenderer *)param_1,param_4,&local_24);
    param_4 = param_4 + iVar2;
    iVar2 = FUN_002bb7c0(param_1,local_24);
    if (iVar2 != -1) {
                    /* WARNING: Load size is inaccurate */
      if (*(int *)((int)param_1 + 4) == *param_1) {
        Flush(param_1,1);
      }
      pSVar9 = (STextRendererCharDef *)(*(int *)((int)param_1 + 0x20) + iVar2 * 0x34);
      L_AddCharacter((STextRenderer *)param_1,pSVar9,(ccVec2 *)&local_20,
                     *(int *)((int)param_1 + 4) << 2,param_6);
      iVar2 = *(int *)((int)param_1 + 4);
      uVar6 = __divsf3(*(undefined4 *)(pSVar9 + 0x30),uVar1);
      uVar7 = __divsf3(*(undefined4 *)(pSVar9 + 0x2c),local_44);
      uVar5 = local_20;
      *(undefined4 *)(param_3 + iVar2 * 8) = uVar7;
      *(undefined4 *)(param_3 + iVar2 * 8 + 4) = uVar6;
      iVar2 = *(int *)((int)param_1 + 4);
      *(int *)((int)param_1 + 4) = iVar2 + 1;
      uVar6 = __addsf3(local_1c,*(undefined4 *)(pSVar9 + 0x28));
      uVar7 = __mulsf3(*(undefined4 *)(pSVar9 + 0x30),0x3f000000);
      uVar6 = __addsf3(uVar6,uVar7);
      uVar6 = __divsf3(uVar6,uVar1);
      uVar7 = __addsf3(uVar5,*(undefined4 *)(pSVar9 + 0x24));
      uVar8 = __mulsf3(*(undefined4 *)(pSVar9 + 0x2c),0x3f000000);
      uVar7 = __addsf3(uVar7,uVar8);
      uVar7 = __divsf3(uVar7,local_44);
      *(undefined4 *)(param_2 + iVar2 * 8) = uVar7;
      *(undefined4 *)(param_2 + iVar2 * 8 + 4) = uVar6;
      uVar6 = __mulsf3(*(undefined4 *)(pSVar9 + 0x20),*(undefined4 *)((int)param_1 + 0xfc));
      local_20 = __addsf3(uVar5,uVar6);
    }
  }
  return;
}


