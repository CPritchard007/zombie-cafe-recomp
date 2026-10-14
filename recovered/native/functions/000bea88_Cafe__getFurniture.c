/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000bea88 Cafe::getFurniture */

/* Cafe::getFurniture(int) */

undefined4 __thiscall Cafe::getFurniture(Cafe *this,int param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if ((-1 < param_1) &&
     (param_1 < **(int **)(DAT_000beab4 + 0xbea9a) * **(int **)(DAT_000beab8 + 0xbea9c))) {
    uVar1 = *(undefined4 *)(*(int *)(param_1 * 4 + *(int *)this) + 0x14);
  }
  return uVar1;
}


