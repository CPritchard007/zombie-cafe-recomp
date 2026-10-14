/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002999cc CapcomGraphics::activateTargetTexture */

/* CapcomGraphics::activateTargetTexture() */

void __thiscall CapcomGraphics::activateTargetTexture(CapcomGraphics *this)

{
  int *piVar1;
  
  piVar1 = *(int **)(DAT_002999ec + 0x2999d8);
  if (*(int *)(this + 0x14) != *piVar1) {
    glBindFramebufferOES(DAT_002999f0);
    *piVar1 = *(int *)(this + 0x14);
  }
  return;
}


