/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002bd1ac CCTextRenderer::AddRightShadowedText */

/* CCTextRenderer::AddRightShadowedText(void*, char const*, ccMat2x3 const*, unsigned int, unsigned
   int) */

void CCTextRenderer::AddRightShadowedText
               (void *param_1,char *param_2,ccMat2x3 *param_3,uint param_4,uint param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  
  local_30 = *(undefined4 *)param_3;
  uVar2 = *(undefined4 *)(param_3 + 0x10);
  local_2c = *(undefined4 *)(param_3 + 4);
  local_28 = *(undefined4 *)(param_3 + 8);
  local_24 = *(undefined4 *)(param_3 + 0xc);
  local_1c = *(undefined4 *)(param_3 + 0x14);
  local_20 = uVar2;
  uVar1 = GetStringWidth(param_1,param_2);
  local_20 = __subsf3(uVar2,uVar1);
  AddShadowedText(param_1,param_2,(ccMat2x3 *)&local_30,param_4,param_5);
  return;
}


