/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002e44f8 png_do_packswap */

void png_do_packswap(int param_1,byte *param_2)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  
  bVar1 = *(byte *)(param_1 + 9);
  if (bVar1 < 8) {
    pbVar2 = param_2 + *(int *)(param_1 + 4);
    if (bVar1 == 1) {
      iVar3 = DAT_002e4534 + 0x2e451a;
    }
    else if (bVar1 == 2) {
      iVar3 = DAT_002e4538 + 0x2e4520;
    }
    else {
      if (bVar1 != 4) {
        return;
      }
      iVar3 = DAT_002e4530 + 0x2e4514;
    }
    for (; param_2 < pbVar2; param_2 = param_2 + 1) {
      *param_2 = *(byte *)(iVar3 + (uint)*param_2);
    }
  }
  return;
}


