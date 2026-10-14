/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002bd5c4 CCTextRenderer::AddCenteredShadowedText */

/* CCTextRenderer::AddCenteredShadowedText(void*, char const*, ccVec2 const*, unsigned int, unsigned
   int) */

void CCTextRenderer::AddCenteredShadowedText
               (void *param_1,char *param_2,ccVec2 *param_3,uint param_4,uint param_5)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 local_20;
  undefined4 local_1c;
  
  uVar1 = GetStringWidth(param_1,param_2);
  iVar2 = __subsf3(*(undefined4 *)((int)param_1 + 0xfc),0x3f800000);
  iVar3 = __aeabi_fcmplt(iVar2,0);
  if (iVar3 != 0) {
    iVar2 = iVar2 + -0x80000000;
  }
  iVar2 = __aeabi_fcmple(iVar2,DAT_002bd65c);
  if (iVar2 != 0) {
    __addsf3(uVar1,0x3f000000);
    uVar4 = __fixsfsi();
    uVar1 = __floatunsisf(uVar4 & 0xfffffffe);
  }
  uVar1 = __mulsf3(uVar1,0x3f000000);
  local_20 = __subsf3(*(undefined4 *)param_3,uVar1);
  uVar5 = *(undefined4 *)(param_3 + 4);
  uVar1 = GetTextHeight(param_1);
  uVar1 = __mulsf3(uVar1,0x3f000000);
  local_1c = __subsf3(uVar5,uVar1);
  AddShadowedText(param_1,param_2,(ccVec2 *)&local_20,param_4,param_5);
  return;
}


