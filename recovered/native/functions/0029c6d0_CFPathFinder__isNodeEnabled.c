/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0029c6d0 CFPathFinder::isNodeEnabled */

/* CFPathFinder::isNodeEnabled(int) */

uint __thiscall CFPathFinder::isNodeEnabled(CFPathFinder *this,int param_1)

{
  return (int)(uint)*(byte *)(*(int *)(this + 0x18) + (param_1 >> 3)) >>
         (param_1 + (param_1 >> 3) * -8 & 0xffU) & 1;
}


