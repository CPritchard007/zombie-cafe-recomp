/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002629bc FUN_002629bc */

undefined1 FUN_002629bc(undefined4 param_1,int param_2,undefined1 param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  uVar2 = FUN_0025b154();
  iVar1 = DAT_00262a18;
  iVar4 = 0;
  while( true ) {
    if (7 - param_2 <= iVar4) {
      return param_3;
    }
    if ((*(byte *)(iVar4 + iVar1 + 0x2629df) == uVar2) &&
       (iVar3 = sqlite3_strnicmp(iVar1 + 0x2629e6 + (uint)*(byte *)(iVar4 + iVar1 + 0x2629fb),
                                 param_1), iVar3 == 0)) break;
    iVar4 = iVar4 + 1;
  }
  return *(undefined1 *)(iVar1 + iVar4 + 0x262a02);
}


