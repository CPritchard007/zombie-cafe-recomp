/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002bd0fc CCTextRenderer::AddRightText */

/* CCTextRenderer::AddRightText(void*, char const*, ccMat2x3 const*, unsigned int) */

void CCTextRenderer::AddRightText(void *param_1,char *param_2,ccMat2x3 *param_3,uint param_4)

{
  int local_40 [3];
  undefined4 local_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined1 auStack_18 [4];
  
  local_40[0] = GetStringWidth(param_1,param_2);
  local_40[0] = local_40[0] + -0x80000000;
  local_40[1] = 0;
  local_30 = *(undefined4 *)param_3;
  uStack_2c = *(undefined4 *)(param_3 + 4);
  uStack_28 = *(undefined4 *)(param_3 + 8);
  local_24 = *(undefined4 *)(param_3 + 0xc);
  local_20 = *(undefined4 *)(param_3 + 0x10);
  local_1c = *(undefined4 *)(param_3 + 0x14);
  FUN_002bb81c(local_40 + 2,param_3,local_40,auStack_18);
  local_20 = local_40[2];
  local_1c = local_34;
  AddText(param_1,param_2,(ccMat2x3 *)&local_30,param_4);
  return;
}


