/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002644fc sqlite3_stricmp */

int sqlite3_stricmp(byte *param_1,byte *param_2)

{
  uint uVar1;
  
  while ((uVar1 = (uint)*param_1, uVar1 != 0 &&
         (*(char *)(DAT_0026452c + 0x264544 + uVar1) ==
          *(char *)(DAT_0026452c + 0x264544 + (uint)*param_2)))) {
    param_1 = param_1 + 1;
    param_2 = param_2 + 1;
  }
  return (uint)*(byte *)(DAT_00264530 + 0x264562 + uVar1) -
         (uint)*(byte *)(DAT_00264530 + 0x264562 + (uint)*param_2);
}


