/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002728b8 sqlite3_sleep */

void sqlite3_sleep(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = sqlite3_vfs_find(0);
  if (iVar1 != 0) {
    uVar2 = (**(code **)(iVar1 + 0x3c))
                      (iVar1,param_1 * 1000,param_3,*(code **)(iVar1 + 0x3c),param_4);
    __divsi3(uVar2,1000);
  }
  return;
}


