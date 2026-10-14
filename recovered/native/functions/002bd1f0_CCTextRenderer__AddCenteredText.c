/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002bd1f0 CCTextRenderer::AddCenteredText */

/* CCTextRenderer::AddCenteredText(void*, char const*, ccMat2x3 const*, unsigned int) */

void CCTextRenderer::AddCenteredText(void *param_1,char *param_2,ccMat2x3 *param_3,uint param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
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
  undefined1 auStack_18 [4];
  
  iVar1 = GetStringWidth(param_1,param_2);
  iVar2 = __subsf3(*(undefined4 *)((int)param_1 + 0xfc),0x3f800000);
  iVar3 = __aeabi_fcmplt(iVar2,0);
  if (iVar3 != 0) {
    iVar2 = iVar2 + -0x80000000;
  }
  iVar2 = __aeabi_fcmple(iVar2,DAT_002bd29c);
  if (iVar2 != 0) {
    __addsf3(iVar1,0x3f000000);
    uVar4 = __fixsfsi();
    iVar1 = __floatunsisf(uVar4 & 0xfffffffe);
  }
  local_40 = __mulsf3(iVar1 + -0x80000000,0x3f000000);
  iVar1 = GetTextHeight(param_1);
  local_3c = __mulsf3(iVar1 + -0x80000000,0x3f000000);
  local_30 = *(undefined4 *)param_3;
  uStack_2c = *(undefined4 *)(param_3 + 4);
  uStack_28 = *(undefined4 *)(param_3 + 8);
  local_24 = *(undefined4 *)(param_3 + 0xc);
  local_20 = *(undefined4 *)(param_3 + 0x10);
  local_1c = *(undefined4 *)(param_3 + 0x14);
  FUN_002bb81c(&local_38,param_3,&local_40,auStack_18);
  local_20 = local_38;
  local_1c = local_34;
  AddText(param_1,param_2,(ccMat2x3 *)&local_30,param_4);
  return;
}


