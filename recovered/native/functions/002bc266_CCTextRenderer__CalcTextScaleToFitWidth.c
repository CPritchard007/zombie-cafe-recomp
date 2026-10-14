/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002bc266 CCTextRenderer::CalcTextScaleToFitWidth */

/* CCTextRenderer::CalcTextScaleToFitWidth(void*, float, float) */

undefined4 __thiscall
CCTextRenderer::CalcTextScaleToFitWidth
          (CCTextRenderer *this,void *param_1,float param_2,float param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 in_r2;
  
  iVar1 = __aeabi_fcmpgt(param_1,in_r2);
  if (iVar1 == 0) {
    uVar2 = 0x3f800000;
  }
  else {
    uVar2 = __divsf3(in_r2,param_1);
  }
  return uVar2;
}


