/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0025ca94 FUN_0025ca94 */

bool FUN_0025ca94(byte *param_1,int param_2)

{
  byte bVar1;
  
  if (param_2 == 0x62) {
    return true;
  }
  for (; bVar1 = *param_1, (byte)(bVar1 + 100) < 2; param_1 = *(byte **)(param_1 + 8)) {
  }
  if (bVar1 == 0x84) {
    bVar1 = param_1[0x23];
  }
  if (bVar1 == 0x82) {
    return param_2 == 99 || param_2 == 0x65;
  }
  if (bVar1 < 0x83) {
    if (bVar1 == 0x5e) {
      return param_2 == 0x61;
    }
    if (bVar1 != 0x81) {
      return false;
    }
  }
  else {
    if (bVar1 == 0x83) {
      return true;
    }
    if (bVar1 != 0x98) {
      return false;
    }
    if (-1 < *(short *)(param_1 + 0x1c)) {
      return false;
    }
  }
  return (param_2 - 99U & 0xff) < 2;
}


