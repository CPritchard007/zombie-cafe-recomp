/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002650cc sqlite3_reset_auto_extension */

void sqlite3_reset_auto_extension(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = sqlite3_initialize();
  if (iVar1 == 0) {
    uVar2 = FUN_0025ad68(2);
    iVar1 = DAT_002650f8;
    sqlite3_mutex_enter();
    sqlite3_free(*(undefined4 *)(iVar1 + 0x265140));
    *(undefined4 *)(iVar1 + 0x265140) = 0;
    *(undefined4 *)(iVar1 + 0x26513c) = 0;
    sqlite3_mutex_leave(uVar2);
  }
  return;
}


