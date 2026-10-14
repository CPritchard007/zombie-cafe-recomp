/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0023c74c ZombieCafe::isEventCafeTheme */

/* ZombieCafe::isEventCafeTheme(int) */

undefined4 __thiscall ZombieCafe::isEventCafeTheme(ZombieCafe *this,int param_1)

{
  if (param_1 < 0x41) {
    if ((param_1 < 0x21) && (0x10 < param_1 - 0xfU)) {
      return 0;
    }
  }
  else if (0x71 < param_1 - 0x42U) {
    return 0;
  }
  return 1;
}


