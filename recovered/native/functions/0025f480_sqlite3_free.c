/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0025f480 sqlite3_free */

void sqlite3_free(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_0025f4cc;
  iVar1 = DAT_0025f4c8;
  if (param_1 != 0) {
    if (*(int *)(DAT_0025f4c8 + 0x25f48c) == 0) {
      (**(code **)(DAT_0025f4c8 + 0x25f4ac))(param_1);
    }
    else {
      sqlite3_mutex_enter(*(undefined4 *)(DAT_0025f4cc + 0x25f4f6));
      iVar3 = FUN_0025aeb8(param_1);
      FUN_0025ac94(0,-iVar3);
      FUN_0025ac94(9,0xffffffff);
      (**(code **)(iVar1 + 0x25f4ac))(param_1);
      sqlite3_mutex_leave(*(undefined4 *)(iVar2 + 0x25f4f6));
    }
  }
  return;
}


