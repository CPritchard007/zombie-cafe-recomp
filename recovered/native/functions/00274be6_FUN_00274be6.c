/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00274be6 FUN_00274be6 */

void FUN_00274be6(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined4 local_24;
  
  if (param_1 != 0) {
    FUN_00261f68();
    for (iVar1 = *(int *)(*(int *)(param_1 + 4) + 8); iVar1 != 0; iVar1 = *(int *)(iVar1 + 8)) {
      sqlite3_free(*(undefined4 *)(iVar1 + 0x50));
      *(undefined4 *)(iVar1 + 0x50) = 0;
      *(undefined1 *)(iVar1 + 0x5b) = 3;
      *(undefined4 *)(iVar1 + 0x54) = param_2;
      local_24 = 0;
      iVar2 = iVar1;
      while( true ) {
        if (*(short *)(iVar1 + 0x5e) < local_24) break;
        FUN_00274a30(*(undefined4 *)(iVar2 + 0x88));
        *(undefined4 *)(iVar2 + 0x88) = 0;
        local_24 = local_24 + 1;
        iVar2 = iVar2 + 4;
      }
    }
    FUN_00262002(param_1);
  }
  return;
}


