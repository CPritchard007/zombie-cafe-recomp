/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0026e0f8 FUN_0026e0f8 */

void FUN_0026e0f8(undefined4 *param_1,undefined4 param_2,int param_3)

{
  if ((*(byte *)(*(int *)(param_3 + 0xc) + 0x22) & 0x10) == 0) {
    FUN_0026d5b8(param_1);
  }
  else {
    FUN_0026e390(param_1);
    if (iRam0000001c != 0) {
      sqlite3_free(uRam00000018);
    }
    FUN_0025fbda(*param_1,0);
  }
  return;
}


