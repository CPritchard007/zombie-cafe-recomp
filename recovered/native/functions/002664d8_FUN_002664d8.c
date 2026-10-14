/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002664d8 FUN_002664d8 */

void FUN_002664d8(undefined4 param_1,byte *param_2,undefined4 param_3,undefined4 param_4)

{
  byte bVar1;
  
  for (; bVar1 = *param_2, (byte)(bVar1 + 100) < 2; param_2 = *(byte **)(param_2 + 8)) {
  }
  if (bVar1 == 0x84) {
    bVar1 = param_2[0x23];
  }
  if ((bVar1 != 0x5e) && ((bVar1 < 0x5e || (2 < (byte)(bVar1 + 0x7f))))) {
    FUN_0026641e(param_1,0x49,param_3,param_4,param_4);
  }
  return;
}


