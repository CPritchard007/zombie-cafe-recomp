/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0029aab0 CapcomMath::getAngleProper */

/* CapcomMath::getAngleProper(long long, long long) */

int CapcomMath::getAngleProper(longlong param_1,longlong param_2)

{
  uint in_r0;
  int in_r1;
  uint in_r2;
  int in_r3;
  int iVar1;
  
  iVar1 = ((in_r3 >> 0x1f) - in_r3) - (uint)((uint)(in_r3 >> 0x1f) < in_r2);
  if ((-1 < iVar1) || (in_r1 < 0)) {
    if (in_r3 < 0) {
      iVar1 = __aeabi_ldivmod(in_r0 << 6,in_r1 << 6 | in_r0 >> 0x1a,in_r2,in_r3);
      iVar1 = atan_fn(iVar1);
      return iVar1 + 0xb4;
    }
    if ((iVar1 < 0) && (in_r1 < 0)) {
      iVar1 = __aeabi_ldivmod(in_r0 << 6,in_r1 << 6 | in_r0 >> 0x1a,in_r2,in_r3);
      iVar1 = atan_fn(iVar1);
      return iVar1 + 0x168;
    }
    if (in_r2 == 0 && in_r3 == 0) {
      if (-1 < in_r1) {
        return 0x5a;
      }
      if (in_r1 < 0) {
        return 0x10e;
      }
    }
  }
  iVar1 = __aeabi_ldivmod(in_r0 << 6,in_r1 << 6 | in_r0 >> 0x1a,in_r2,in_r3);
  iVar1 = atan_fn(iVar1);
  return iVar1;
}


