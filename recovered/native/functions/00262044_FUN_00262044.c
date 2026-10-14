/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00262044 FUN_00262044 */

void FUN_00262044(int param_1)

{
  int iVar1;
  
  FUN_00261fe0();
  for (iVar1 = 0; iVar1 < *(int *)(param_1 + 0x14); iVar1 = iVar1 + 1) {
    if (*(int *)(*(int *)(param_1 + 0x10) + iVar1 * 0x10 + 0xc) != 0) {
      FUN_00261686();
    }
  }
  *(uint *)(param_1 + 0x18) = DAT_00262084 & *(uint *)(param_1 + 0x18);
  FUN_0026005c(param_1);
  FUN_00262022(param_1);
  FUN_0026044c(param_1);
  return;
}


