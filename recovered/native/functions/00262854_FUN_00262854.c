/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00262854 FUN_00262854 */

int FUN_00262854(short *param_1,int param_2,uint param_3)

{
  int iVar1;
  
  if (param_2 == -2) {
    iVar1 = 6;
    if ((*(int *)(param_1 + 6) == 0) && (iVar1 = *(int *)(param_1 + 8), iVar1 != 0)) {
      iVar1 = 6;
    }
  }
  else {
    if (*param_1 == param_2) {
      iVar1 = 4;
    }
    else {
      if (-1 < *param_1) {
        return 0;
      }
      iVar1 = 1;
    }
    if (param_3 == *(byte *)(param_1 + 1)) {
      iVar1 = iVar1 + 2;
    }
    else {
      iVar1 = iVar1 - ((int)((param_3 & *(byte *)(param_1 + 1)) << 0x1e) >> 0x1f);
    }
  }
  return iVar1;
}


