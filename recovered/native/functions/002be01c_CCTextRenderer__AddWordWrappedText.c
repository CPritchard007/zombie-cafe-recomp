/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002be01c CCTextRenderer::AddWordWrappedText */

/* CCTextRenderer::AddWordWrappedText(void*, char const*, ccVec2 const*, unsigned int, float, float,
   unsigned char, bool) */

void CCTextRenderer::AddWordWrappedText
               (void *param_1,char *param_2,ccVec2 *param_3,uint param_4,float param_5,float param_6
               ,uchar param_7,bool param_8)

{
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  
  local_30 = 0x3f800000;
  local_24 = 0x3f800000;
  local_20 = *(undefined4 *)param_3;
  local_1c = *(undefined4 *)(param_3 + 4);
  local_2c = 0;
  local_28 = 0;
  AddWordWrappedText(param_1,param_2,(ccMat2x3 *)&local_30,param_4,param_5,param_6,param_7,param_8);
  return;
}


