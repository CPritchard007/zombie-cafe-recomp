/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002bd738 CCTextRenderer::CalcTextScaleToFitWidth */

/* CCTextRenderer::CalcTextScaleToFitWidth(void*, char const*, float) */

undefined4 CCTextRenderer::CalcTextScaleToFitWidth(void *param_1,char *param_2,float param_3)

{
  void *pvVar1;
  undefined4 uVar2;
  float extraout_s0;
  float extraout_s1;
  
  if (param_2 == (char *)0x0) {
    uVar2 = 0x3f800000;
  }
  else {
    pvVar1 = (void *)GetStringWidth(param_1,param_2);
    uVar2 = CalcTextScaleToFitWidth((CCTextRenderer *)param_1,pvVar1,extraout_s0,extraout_s1);
  }
  return uVar2;
}


