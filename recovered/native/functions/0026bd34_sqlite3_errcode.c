/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0026bd34 sqlite3_errcode */

uint sqlite3_errcode(int param_1)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = 7;
  if (param_1 != 0) {
    iVar1 = FUN_0026bcbc();
    if (iVar1 == 0) {
      uVar2 = FUN_0026adf0(DAT_0026bd68);
    }
    else if (*(char *)(param_1 + 0x36) == '\0') {
      uVar2 = *(uint *)(param_1 + 0x2c) & *(uint *)(param_1 + 0x30);
    }
  }
  return uVar2;
}


