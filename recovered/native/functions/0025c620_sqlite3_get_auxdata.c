/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0025c620 sqlite3_get_auxdata */

int sqlite3_get_auxdata(int param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 4);
  if (iVar1 != 0) {
    if (((int)param_2 < 0) ||
       (((((int)param_2 >> 0x1f) - ((int)*(uint *)(iVar1 + 4) >> 0x1f)) +
         (uint)(*(uint *)(iVar1 + 4) <= param_2) & 0xff) != 0)) {
      iVar1 = 0;
    }
    else {
      iVar1 = *(int *)((param_2 + 1) * 8 + iVar1);
    }
  }
  return iVar1;
}


