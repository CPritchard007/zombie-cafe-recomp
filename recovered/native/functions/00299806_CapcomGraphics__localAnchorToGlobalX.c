/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00299806 CapcomGraphics::localAnchorToGlobalX */

/* CapcomGraphics::localAnchorToGlobalX(int, int, int) const */

int __thiscall
CapcomGraphics::localAnchorToGlobalX(CapcomGraphics *this,int param_1,int param_2,int param_3)

{
  if (-1 < param_3 << 0x1a) {
    if (-1 < param_3 << 0x1b) {
      return param_1;
    }
    param_2 = param_2 >> 1;
  }
  return param_1 - param_2;
}


