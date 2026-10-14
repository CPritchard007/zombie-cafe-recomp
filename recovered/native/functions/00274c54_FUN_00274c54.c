/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00274c54 FUN_00274c54 */

int FUN_00274c54(int param_1,uint param_2,undefined4 *param_3)

{
  int iVar1;
  
  if (*(uint *)(param_1 + 0x2c) < param_2) {
    iVar1 = FUN_0026b4e4(DAT_00274c8c);
  }
  else {
    iVar1 = FUN_00274984();
    if (iVar1 == 0) {
      if ((*(char *)*param_3 == '\0') && (iVar1 = FUN_0026b81c(), iVar1 != 0)) {
        FUN_00274a30(*param_3);
      }
    }
  }
  return iVar1;
}


