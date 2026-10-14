/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0025c3f4 FUN_0025c3f4 */

void FUN_0025c3f4(int *param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = 1 << (param_2 & 0xff);
  param_1[0x1b] = param_1[0x1b] | uVar1;
  if ((param_2 != 1) &&
     (*(char *)(*(int *)(*(int *)(*param_1 + 0x10) + param_2 * 0x10 + 4) + 9) != '\0')) {
    param_1[0x1c] = uVar1 | param_1[0x1c];
  }
  return;
}


