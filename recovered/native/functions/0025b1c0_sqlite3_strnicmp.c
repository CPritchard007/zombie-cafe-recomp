/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0025b1c0 sqlite3_strnicmp */

int sqlite3_strnicmp(byte *param_1,byte *param_2,int param_3)

{
  int iVar1;
  
  while (((0 < param_3 && (*param_1 != 0)) &&
         (*(char *)(DAT_0025b204 + 0x25b20a + (uint)*param_1) ==
          *(char *)(DAT_0025b204 + 0x25b20a + (uint)*param_2)))) {
    param_1 = param_1 + 1;
    param_2 = param_2 + 1;
    param_3 = param_3 + -1;
  }
  iVar1 = 0;
  if (-1 < param_3 + -1) {
    iVar1 = (uint)*(byte *)(DAT_0025b208 + 0x25b238 + (uint)*param_1) -
            (uint)*(byte *)(DAT_0025b208 + 0x25b238 + (uint)*param_2);
  }
  return iVar1;
}


