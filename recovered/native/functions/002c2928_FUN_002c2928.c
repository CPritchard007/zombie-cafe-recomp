/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002c2928 FUN_002c2928 */

int FUN_002c2928(int param_1)

{
  int iVar1;
  
  iVar1 = __aeabi_fcmplt(param_1,0);
  if (iVar1 != 0) {
    param_1 = param_1 + -0x80000000;
  }
  return param_1;
}


