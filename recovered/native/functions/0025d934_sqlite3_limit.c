/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0025d934 sqlite3_limit */

undefined4 sqlite3_limit(int param_1,uint param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_2 < 0xb) {
    param_1 = param_1 + (param_2 + 0x12) * 4;
    uVar1 = *(undefined4 *)(param_1 + 4);
    if (-1 < param_3) {
      iVar2 = *(int *)((int)&DAT_0025d964 + DAT_0025d964 + param_2 * 4);
      if (param_3 < iVar2) {
        iVar2 = param_3;
      }
      *(int *)(param_1 + 4) = iVar2;
    }
  }
  else {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}


