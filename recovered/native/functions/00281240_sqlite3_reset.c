/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00281240 sqlite3_reset */

int * sqlite3_reset(int *param_1)

{
  undefined4 uVar1;
  int *piVar2;
  
  piVar2 = param_1;
  if (param_1 != (int *)0x0) {
    sqlite3_mutex_enter(*(undefined4 *)(*param_1 + 0xc));
    uVar1 = FUN_00281044(param_1);
    param_1[0xc] = DAT_0028129c;
    param_1[0x15] = -1;
    param_1[0x16] = 0;
    *(undefined1 *)(param_1 + 0x17) = 2;
    param_1[0x14] = 1;
    param_1[0x1a] = 0;
    *(undefined1 *)((int)param_1 + 0x61) = 0xff;
    param_1[0x1d] = 0;
    param_1[0x24] = 0;
    param_1[0x25] = 0;
    piVar2 = (int *)FUN_002685e0(*param_1,uVar1);
    sqlite3_mutex_leave(*(undefined4 *)(*param_1 + 0xc));
  }
  return piVar2;
}


