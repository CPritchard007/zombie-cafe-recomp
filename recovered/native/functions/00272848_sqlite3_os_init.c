/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00272848 sqlite3_os_init */

undefined4 sqlite3_os_init(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  
  iVar2 = 0;
  iVar3 = DAT_0027286c + 0x2728b0;
  do {
    iVar1 = iVar2 * 0x58;
    bVar4 = iVar2 == 0;
    iVar2 = iVar2 + 1;
    sqlite3_vfs_register(iVar3 + iVar1,bVar4);
  } while (iVar2 != 4);
  return 0;
}


