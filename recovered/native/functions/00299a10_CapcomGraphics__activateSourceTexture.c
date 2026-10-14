/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00299a10 CapcomGraphics::activateSourceTexture */

/* CapcomGraphics::activateSourceTexture(unsigned int) */

CapcomGraphics * __thiscall CapcomGraphics::activateSourceTexture(CapcomGraphics *this,uint param_1)

{
  if (**(uint **)(DAT_00299a28 + 0x299a18) != param_1) {
    this = (CapcomGraphics *)glBindTexture(DAT_00299a2c);
  }
  return this;
}


