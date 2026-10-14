/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002bd148 CCTextRenderer::AddRightText */

/* CCTextRenderer::AddRightText(void*, char const*, ccVec2 const*, unsigned int) */

void CCTextRenderer::AddRightText(void *param_1,char *param_2,ccVec2 *param_3,uint param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 local_20;
  undefined4 local_1c;
  
  uVar2 = *(undefined4 *)param_3;
  uVar1 = GetStringWidth(param_1,param_2);
  local_20 = __subsf3(uVar2,uVar1);
  local_1c = *(undefined4 *)(param_3 + 4);
  AddText(param_1,param_2,(ccVec2 *)&local_20,param_4);
  return;
}


