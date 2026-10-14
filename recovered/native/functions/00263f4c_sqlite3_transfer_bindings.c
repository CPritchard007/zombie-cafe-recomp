/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00263f4c sqlite3_transfer_bindings */

undefined4 sqlite3_transfer_bindings(int param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = 1;
  if (*(short *)(param_1 + 0x4c) == (short)param_2[0x13]) {
    if ((*(char *)((int)param_2 + 0x65) != '\0') && (param_2[0x2d] != 0)) {
      *(undefined1 *)((int)param_2 + 0x5f) = 1;
    }
    if ((*(char *)(param_1 + 0x65) != '\0') && (*(int *)(param_1 + 0xb4) != 0)) {
      *(undefined1 *)(param_1 + 0x5f) = 1;
    }
    sqlite3_mutex_enter(*(undefined4 *)(*param_2 + 0xc));
    for (iVar3 = 0; iVar3 < *(short *)(param_1 + 0x4c); iVar3 = iVar3 + 1) {
      iVar2 = iVar3 * 0x28;
      FUN_00263afe(param_2[0x11] + iVar2,*(int *)(param_1 + 0x44) + iVar2,0,iVar2,param_4);
    }
    sqlite3_mutex_leave(*(undefined4 *)(*param_2 + 0xc));
    uVar1 = 0;
  }
  return uVar1;
}


