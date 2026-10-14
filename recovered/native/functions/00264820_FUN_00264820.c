/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00264820 FUN_00264820 */

bool FUN_00264820(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  bool bVar2;
  
  bVar2 = true;
  iVar1 = sqlite3_stricmp(param_1,DAT_00264854 + 0x26482c,param_3,param_4,param_4);
  if ((iVar1 != 0) && (iVar1 = sqlite3_stricmp(param_1,DAT_00264858 + 0x26483a), iVar1 != 0)) {
    iVar1 = sqlite3_stricmp(param_1,DAT_0026485c + 0x264848);
    bVar2 = iVar1 == 0;
  }
  return bVar2;
}


