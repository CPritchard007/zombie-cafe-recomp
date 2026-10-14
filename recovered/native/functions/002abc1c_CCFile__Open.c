/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002abc1c CCFile::Open */

/* CCFile::Open(char const*, CCFile::ccFileOpenMode) */

undefined4 * CCFile::Open(char *param_1,int param_2)

{
  undefined4 *puVar1;
  FILE *pFVar2;
  
  puVar1 = (undefined4 *)malloc(8);
  if (puVar1 != (undefined4 *)0x0) {
    pFVar2 = fopen(param_1,*(char **)(param_2 * 4 + DAT_002abc54 + 0x2abc36));
    *puVar1 = pFVar2;
    if (pFVar2 != (FILE *)0x0) {
      puVar1[1] = param_2;
      return puVar1;
    }
    Close(puVar1);
  }
  return (undefined4 *)0xffffffff;
}


