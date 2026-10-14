/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002b2f3c ccTexture_CalcBPP */

/* ccTexture_CalcBPP(CCTexture2D::ccTexFmt) */

undefined1 ccTexture_CalcBPP(int param_1)

{
  undefined1 uVar1;
  
  uVar1 = 0;
  if (param_1 - 1U < 0xc) {
    uVar1 = *(undefined1 *)(DAT_002b2f4c + 0x2b2f4a + (param_1 - 1U));
  }
  return uVar1;
}


