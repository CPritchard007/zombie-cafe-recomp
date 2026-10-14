/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00274a3e FUN_00274a3e */

longlong FUN_00274a3e(uint *param_1)

{
  uint uVar1;
  uint *puVar2;
  uint uVar3;
  int iVar4;
  
  uVar1 = *param_1;
  if (uVar1 != 0) {
    uVar3 = param_1[1];
    FUN_00261f68(uVar1);
    sqlite3_free(param_1[0x14]);
    param_1[0x14] = 0;
    *(undefined1 *)((int)param_1 + 0x5b) = 0;
    if (param_1[3] == 0) {
      *(uint *)(uVar3 + 8) = param_1[2];
    }
    else {
      *(uint *)(param_1[3] + 8) = param_1[2];
    }
    if (param_1[2] != 0) {
      *(uint *)(param_1[2] + 0xc) = param_1[3];
    }
    iVar4 = 0;
    puVar2 = param_1;
    while( true ) {
      if (*(short *)((int)param_1 + 0x5e) < iVar4) break;
      FUN_00274a30(puVar2[0x22]);
      iVar4 = iVar4 + 1;
      puVar2 = puVar2 + 1;
    }
    if ((*(char *)(uVar3 + 0x13) == '\0') && (*(int *)(uVar3 + 0xc) != 0)) {
      FUN_00274a30();
      *(undefined4 *)(uVar3 + 0xc) = 0;
    }
    sqlite3_free(param_1[5]);
    param_1[5] = 0;
    FUN_00262002(uVar1);
  }
  return (ulonglong)uVar1 << 0x20;
}


