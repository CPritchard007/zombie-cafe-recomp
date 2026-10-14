/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0026bcbc FUN_0026bcbc */

undefined4 FUN_0026bcbc(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x40);
  uVar1 = 1;
  if (((iVar2 + DAT_0026bcec != 0) && (iVar2 + DAT_0026bcf0 != 0)) && (iVar2 != DAT_0026bcf4)) {
    sqlite3_log(0x15,DAT_0026bcf8 + 0x26bce2,DAT_0026bcfc + 0x26bce4,iVar2,param_4);
    uVar1 = 0;
  }
  return uVar1;
}


