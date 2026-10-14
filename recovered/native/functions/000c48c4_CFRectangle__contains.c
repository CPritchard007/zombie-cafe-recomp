/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000c48c4 CFRectangle::contains */

/* CFRectangle::contains(long long, long) */

uint __thiscall CFRectangle::contains(CFRectangle *this,longlong param_1,long param_2)

{
  int in_r2;
  uint uVar1;
  uint uVar2;
  
  uVar2 = 0;
  if (((int)(short)((uint)param_2 >> 0x10) <= in_r2 >> 0x10) &&
     (in_r2 >> 0x10 <=
      (int)((((uint)param_2 >> 0x10) + ((uint)this >> 0x10) + -1) * 0x10000) >> 0x10)) {
    uVar1 = (uint)(short)in_r2;
    if ((int)(short)param_2 <= (int)uVar1) {
      uVar2 = (((int)(this + ((param_2 & 0xffffU) - 1)) * 0x10000 >> 0x1f) - ((int)uVar1 >> 0x1f)) +
              (uint)(uVar1 <= (uint)((int)(this + ((param_2 & 0xffffU) - 1)) * 0x10000 >> 0x10)) &
              0xff;
    }
  }
  return uVar2;
}


