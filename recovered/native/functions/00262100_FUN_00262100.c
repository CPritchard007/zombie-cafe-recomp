/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00262100 FUN_00262100 */

uint FUN_00262100(int param_1)

{
  uint uVar1;
  
  FUN_00261f68();
  uVar1 = (uint)*(byte *)(*(int *)(param_1 + 4) + 0x11);
  if (uVar1 != 0) {
    uVar1 = 2 - (*(char *)(*(int *)(param_1 + 4) + 0x12) == '\0');
  }
  FUN_00262002(param_1);
  return uVar1;
}


