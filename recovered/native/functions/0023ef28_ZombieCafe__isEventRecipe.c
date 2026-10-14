/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0023ef28 ZombieCafe::isEventRecipe */

/* ZombieCafe::isEventRecipe(int) */

undefined4 __thiscall ZombieCafe::isEventRecipe(ZombieCafe *this,int param_1)

{
  uint uVar1;
  
  if (*(int *)(this + 0x4e8) == 0) {
    return 0;
  }
  uVar1 = (uint)*(byte *)(*(int *)(this + 0x4e8) + param_1 * 0x1c + 0x17);
  if (uVar1 != 0x27) {
    if (uVar1 < 0x28) {
      if ((uVar1 != 0x20) && ((uVar1 < 0x20 || (1 < uVar1 - 0x24)))) {
        return 0;
      }
    }
    else if (((uVar1 != 0x36) && (uVar1 != 0x7f)) && (uVar1 != 0x2d)) {
      return 0;
    }
  }
  return 1;
}


