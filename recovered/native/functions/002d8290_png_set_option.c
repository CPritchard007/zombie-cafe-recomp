/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002d8290 png_set_option */

int png_set_option(int param_1,uint param_2,int param_3)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = 1;
  if ((((-1 < (int)param_2) && (param_1 != 0)) && ((int)param_2 < 4)) && ((param_2 & 1) == 0)) {
    bVar1 = *(byte *)(param_1 + 0x2e8);
    uVar3 = 3 << (param_2 & 0xff);
    *(byte *)(param_1 + 0x2e8) =
         (byte)(3 - (uint)(param_3 == 0) << (param_2 & 0xff)) | bVar1 & ~(byte)uVar3;
    iVar2 = (int)(uVar3 & bVar1) >> (param_2 & 0xff);
  }
  return iVar2;
}


