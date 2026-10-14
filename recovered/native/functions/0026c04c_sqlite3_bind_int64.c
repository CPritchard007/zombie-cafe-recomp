/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0026c04c sqlite3_bind_int64 */

undefined8 sqlite3_bind_int64(int *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_0026be30();
  if (iVar1 == 0) {
    iVar2 = param_1[0x11] + (param_2 + -1) * 0x28;
    FUN_00263730(iVar2);
    *(undefined4 *)(iVar2 + 0x10) = param_3;
    *(undefined4 *)(iVar2 + 0x14) = param_4;
    *(undefined2 *)(iVar2 + 0x1c) = 4;
    *(undefined1 *)(iVar2 + 0x1e) = 1;
    sqlite3_mutex_leave(*(undefined4 *)(*param_1 + 0xc));
  }
  return CONCAT44(param_3,iVar1);
}


