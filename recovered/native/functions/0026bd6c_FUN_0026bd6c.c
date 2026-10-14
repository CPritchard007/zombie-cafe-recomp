/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0026bd6c FUN_0026bd6c */

int FUN_0026bd6c(int param_1)

{
  int iVar1;
  
  if (param_1 == 0) {
    sqlite3_log(0x15,DAT_0026bdac + 0x26bd7c,DAT_0026bdb0 + 0x26bd7e);
    iVar1 = 0;
  }
  else {
    iVar1 = 1;
    if ((*(int *)(param_1 + 0x40) != DAT_0026bdb4) && (iVar1 = FUN_0026bcbc(param_1), iVar1 != 0)) {
      sqlite3_log(0x15,DAT_0026bdb8 + 0x26bda2,DAT_0026bdbc + 0x26bda4);
      iVar1 = 0;
    }
  }
  return iVar1;
}


