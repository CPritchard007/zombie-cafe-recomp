/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0027d38c FUN_0027d38c */

int FUN_0027d38c(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  byte bVar1;
  int iVar2;
  
  bVar1 = *(byte *)(param_1 + 0x5b);
  if (bVar1 == 0) {
    return 4;
  }
  if (1 < bVar1) {
    if (bVar1 == 3) {
      if (*(int *)(param_1 + 0x54) != 0) {
        return *(int *)(param_1 + 0x54);
      }
    }
    else {
      *(byte *)(param_1 + 0x5b) = 0;
      iVar2 = FUN_0027cf9c(param_1,*(undefined4 *)(param_1 + 0x50),*(undefined4 *)(param_1 + 0x48),
                           *(undefined4 *)(param_1 + 0x4c),0,param_1 + 0x54);
      if (iVar2 != 0) {
        return iVar2;
      }
      sqlite3_free(*(undefined4 *)(param_1 + 0x50));
      *(undefined4 *)(param_1 + 0x50) = 0;
    }
  }
  iVar2 = FUN_0027c294(param_1,param_2,param_3,param_4,0);
  return iVar2;
}


