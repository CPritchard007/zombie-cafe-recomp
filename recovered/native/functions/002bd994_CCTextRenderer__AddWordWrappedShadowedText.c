/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002bd994 CCTextRenderer::AddWordWrappedShadowedText */

/* CCTextRenderer::AddWordWrappedShadowedText(void*, char const*, ccVec2 const*, unsigned int,
   unsigned int, float, float) */

void CCTextRenderer::AddWordWrappedShadowedText
               (void *param_1,char *param_2,ccVec2 *param_3,uint param_4,uint param_5,float param_6,
               float param_7)

{
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  local_28 = 0x3f800000;
  local_1c = 0x3f800000;
  local_18 = *(undefined4 *)param_3;
  local_14 = *(undefined4 *)(param_3 + 4);
  local_24 = 0;
  local_20 = 0;
  AddWordWrappedShadowedText(param_1,param_2,(ccMat2x3 *)&local_28,param_4,param_5,param_6,param_7);
  return;
}


