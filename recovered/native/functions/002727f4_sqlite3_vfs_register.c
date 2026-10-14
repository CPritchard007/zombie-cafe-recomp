/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002727f4 sqlite3_vfs_register */

int sqlite3_vfs_register(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  
  iVar1 = sqlite3_initialize();
  if (iVar1 == 0) {
    uVar2 = FUN_0025ad68(2);
    sqlite3_mutex_enter();
    FUN_0025acf8(param_1);
    if ((param_2 == 0) && (iVar4 = *(int *)((int)&DAT_0027286c + DAT_00272840 + 2), iVar4 != 0)) {
      *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(iVar4 + 0xc);
      *(int *)(iVar4 + 0xc) = param_1;
    }
    else {
      uVar3 = *(undefined4 *)(DAT_00272844 + 0x272878);
      *(int *)(DAT_00272844 + 0x272878) = param_1;
      *(undefined4 *)(param_1 + 0xc) = uVar3;
    }
    sqlite3_mutex_leave(uVar2);
  }
  return iVar1;
}


