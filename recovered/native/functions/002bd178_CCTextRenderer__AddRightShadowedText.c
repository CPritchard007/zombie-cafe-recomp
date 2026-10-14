/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002bd178 CCTextRenderer::AddRightShadowedText */

/* CCTextRenderer::AddRightShadowedText(void*, char const*, ccVec2 const*, unsigned int, unsigned
   int) */

void CCTextRenderer::AddRightShadowedText
               (void *param_1,char *param_2,ccVec2 *param_3,uint param_4,uint param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 local_20;
  undefined4 local_1c;
  
  uVar2 = *(undefined4 *)param_3;
  uVar1 = GetStringWidth(param_1,param_2);
  local_20 = __subsf3(uVar2,uVar1);
  local_1c = *(undefined4 *)(param_3 + 4);
  AddShadowedText(param_1,param_2,(ccVec2 *)&local_20,param_4,param_5);
  return;
}


