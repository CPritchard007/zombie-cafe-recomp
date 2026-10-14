/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00299816 CapcomGraphics::localAnchorToGlobalY */

/* CapcomGraphics::localAnchorToGlobalY(int, int, int) const */

int __thiscall
CapcomGraphics::localAnchorToGlobalY(CapcomGraphics *this,int param_1,int param_2,int param_3)

{
  if (-1 < param_3 << 0x1d) {
    if (-1 < param_3 << 0x1e) {
      return param_1;
    }
    param_2 = param_2 >> 1;
  }
  return param_1 - param_2;
}


