/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002650fc sqlite3_shutdown */

undefined4 sqlite3_shutdown(void)

{
  int iVar1;
  code *pcVar2;
  
  iVar1 = DAT_0026519c + 4;
  if (*(int *)(sqlite3_realloc + iVar1) != 0) {
    sqlite3_os_end();
    sqlite3_reset_auto_extension();
    *(undefined4 *)(sqlite3_realloc + iVar1) = 0;
  }
  if (*(int *)(DAT_002651a0 + 0x2651f0) != 0) {
    if (*(code **)(DAT_002651a0 + 0x265188) != (code *)0x0) {
      (**(code **)(DAT_002651a0 + 0x265188))(*(undefined4 *)(DAT_002651a0 + 0x265180));
    }
    *(undefined4 *)(DAT_002651a4 + 0x26520a) = 0;
  }
  if (*(int *)(DAT_002651a8 + 0x26520e) != 0) {
    if (*(code **)(DAT_002651a8 + 0x265172) != (code *)0x0) {
      (**(code **)(DAT_002651a8 + 0x265172))(*(undefined4 *)(DAT_002651a8 + 0x265176));
    }
    memset((void *)((int)&DAT_002651b8 + DAT_002651ac + 2),0,0x28);
    *(undefined4 *)(DAT_002651b0 + 0x265236) = 0;
    **(undefined4 **)(DAT_002651b4 + 0x26516e) = 0;
    **(undefined4 **)(DAT_002651b8 + 0x265176) = 0;
  }
  if (*(int *)(DAT_002651bc + 0x26524a) != 0) {
    pcVar2 = *(code **)((int)&DAT_002651bc + DAT_002651bc + 2);
    if (pcVar2 != (code *)0x0) {
      (*pcVar2)();
    }
    *(undefined4 *)(DAT_002651c0 + 0x265262) = 0;
  }
  return 0;
}


