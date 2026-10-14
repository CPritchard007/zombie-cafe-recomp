/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0026bf64 FUN_0026bf64 */

int FUN_0026bf64(int *param_1,int param_2,int param_3,undefined4 param_4,code *param_5,char param_6)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_0026be30();
  if (iVar1 == 0) {
    if (param_3 != 0) {
      iVar2 = param_1[0x11] + (param_2 + -1) * 0x28;
      iVar1 = FUN_0026578c(iVar2,param_3,param_4,param_6,param_5);
      if ((iVar1 == 0) && (param_6 != '\0')) {
        iVar1 = FUN_002653a4(iVar2,*(undefined1 *)(*(int *)(*(int *)(*param_1 + 0x10) + 0xc) + 0x4d)
                            );
      }
      FUN_00268578(*param_1,iVar1,0);
      iVar1 = FUN_002685e0(*param_1,iVar1);
    }
    sqlite3_mutex_leave(*(undefined4 *)(*param_1 + 0xc));
  }
  else if (param_5 + -1 < (code *)0xfffffffe) {
    (*param_5)(param_3);
  }
  return iVar1;
}


