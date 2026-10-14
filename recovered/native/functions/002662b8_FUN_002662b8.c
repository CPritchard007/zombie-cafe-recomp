/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002662b8 FUN_002662b8 */

int FUN_002662b8(undefined4 *param_1)

{
  int iVar1;
  
  iVar1 = param_1[2];
  if (iVar1 == 0) {
    iVar1 = FUN_0025f080(*param_1);
    param_1[2] = iVar1;
    if (iVar1 != 0) {
      FUN_002662aa(iVar1,0x94);
    }
  }
  return iVar1;
}


