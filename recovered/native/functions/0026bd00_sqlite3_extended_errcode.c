/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0026bd00 sqlite3_extended_errcode */

undefined4 sqlite3_extended_errcode(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 7;
  if (param_1 != 0) {
    iVar1 = FUN_0026bcbc();
    if (iVar1 == 0) {
      uVar2 = FUN_0026adf0(DAT_0026bd30);
    }
    else if (*(char *)(param_1 + 0x36) == '\0') {
      uVar2 = *(undefined4 *)(param_1 + 0x2c);
    }
  }
  return uVar2;
}


