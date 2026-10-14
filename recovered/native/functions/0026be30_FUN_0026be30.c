/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0026be30 FUN_0026be30 */

undefined4 FUN_0026be30(int *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  
  if (param_1 == (int *)0x0) {
    iVar2 = DAT_0026bf04 + 0x26be40;
    uVar1 = param_4;
  }
  else {
    if (*param_1 != 0) {
      sqlite3_mutex_enter(*(undefined4 *)(*param_1 + 0xc));
      if ((param_1[0xc] == DAT_0026bf18) && (param_1[0x15] < 0)) {
        if ((param_2 < 1) || ((short)param_1[0x13] < param_2)) {
          FUN_00268578(*param_1,0x19,0);
          sqlite3_mutex_leave(*(undefined4 *)(*param_1 + 0xc));
          return 0x19;
        }
        uVar3 = param_2 - 1;
        iVar2 = param_1[0x11] + uVar3 * 0x28;
        FUN_00263730(iVar2);
        *(undefined2 *)(iVar2 + 0x1c) = 1;
        FUN_00268578(*param_1,0,0);
        if (*(char *)((int)param_1 + 0x65) == '\0') {
          return 0;
        }
        if (((0x1f < (int)uVar3) || ((param_1[0x2d] & 1 << (uVar3 & 0xff)) == 0)) &&
           (param_1[0x2d] != -1)) {
          return 0;
        }
        *(undefined1 *)((int)param_1 + 0x5f) = 1;
        return 0;
      }
      FUN_00268578(*param_1,0x15,0);
      sqlite3_mutex_leave(*(undefined4 *)(*param_1 + 0xc));
      sqlite3_log(0x15,DAT_0026bf10 + 0x26be78,param_1[0x28]);
      uVar1 = DAT_0026bf14;
      goto LAB_0026be7c;
    }
    iVar2 = DAT_0026bf08 + 0x26be4c;
    uVar1 = 0;
  }
  sqlite3_log(0x15,iVar2,param_3,uVar1,param_4);
  uVar1 = DAT_0026bf0c;
LAB_0026be7c:
  uVar1 = FUN_0026adf0(uVar1);
  return uVar1;
}


