/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00299e10 CapcomGraphics::translateBig */

/* CapcomGraphics::translateBig(long long) */

void CapcomGraphics::translateBig(longlong param_1)

{
  int iVar1;
  CapcomGraphics *in_r0;
  int in_r2;
  int in_r3;
  CapcomGraphics *this;
  
  *(int *)(in_r0 + 0xc) = *(int *)(in_r0 + 0xc) + in_r3;
  iVar1 = DAT_00299e38;
  *(int *)(in_r0 + 8) = *(int *)(in_r0 + 8) + in_r2;
  this = (CapcomGraphics *)**(undefined4 **)(iVar1 + 0x299e24);
  if (this == in_r0) {
    finishBatch();
    activateOffset(this);
  }
  return;
}


