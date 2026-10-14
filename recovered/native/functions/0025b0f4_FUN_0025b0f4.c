/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0025b0f4 FUN_0025b0f4 */

int FUN_0025b0f4(byte *param_1,int param_2)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  
  if (param_2 < 0) {
    pbVar3 = (byte *)0xffffffff;
  }
  else {
    pbVar3 = param_1 + param_2;
  }
  iVar2 = 0;
  while ((bVar1 = *param_1, bVar1 != 0 && (param_1 < pbVar3))) {
    param_1 = param_1 + 1;
    if (0xbf < bVar1) {
      for (; (*param_1 & 0xc0) == 0x80; param_1 = param_1 + 1) {
      }
    }
    iVar2 = iVar2 + 1;
  }
  return iVar2;
}


