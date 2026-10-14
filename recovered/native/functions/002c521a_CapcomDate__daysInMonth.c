/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002c521a CapcomDate::daysInMonth */

/* CapcomDate::daysInMonth(int, int) */

char CapcomDate::daysInMonth(int param_1,int param_2)

{
  int extraout_r1;
  int extraout_r1_00;
  uint uVar1;
  
  if ((uint)param_2 < 0xc) {
    uVar1 = 1 << (param_2 & 0xffU);
    if ((uVar1 & 0xa50) != 0) {
      return '\x1e';
    }
    if ((int)(uVar1 << 0x1d) < 0) {
      if ((param_1 & 3U) != 0) {
        return '\x1c';
      }
      __aeabi_idivmod(param_1,100);
      if (extraout_r1 != 0) {
        return '\x1d';
      }
      __aeabi_idivmod(param_1,400);
      return (extraout_r1_00 == 0) + '\x1c';
    }
  }
  return '\x1f';
}


