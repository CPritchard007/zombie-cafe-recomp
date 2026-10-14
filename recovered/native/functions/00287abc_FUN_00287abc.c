/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00287abc FUN_00287abc */

void FUN_00287abc(int *param_1)

{
  int iVar1;
  
  if ((*(char *)(*param_1 + 0x7d) == '\0') &&
     (iVar1 = FUN_00287a10(*param_1,param_1 + 1), iVar1 != 0)) {
    param_1[3] = iVar1;
    param_1[0x11] = param_1[0x11] + 1;
  }
  return;
}


