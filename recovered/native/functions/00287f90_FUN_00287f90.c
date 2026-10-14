/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00287f90 FUN_00287f90 */

int FUN_00287f90(undefined4 *param_1,int param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_00287abc();
  iVar2 = 0;
  if ((iVar1 == 0) && (iVar2 = FUN_0026460e(*param_1,param_3,param_4), iVar2 == 0)) {
    if (param_2 == 0) {
      iVar1 = DAT_00287ff4 + 0x287fc6;
    }
    else {
      iVar1 = DAT_00287ff0 + 0x287fc0;
    }
    if (param_4 == 0) {
      FUN_00268e48(param_1,DAT_00287ffc + 0x287fe2,iVar1,param_3);
    }
    else {
      FUN_00268e48(param_1,DAT_00287ff8 + 0x287fd2,iVar1,param_4,param_3);
    }
    *(undefined1 *)((int)param_1 + 0x11) = 1;
  }
  return iVar2;
}


