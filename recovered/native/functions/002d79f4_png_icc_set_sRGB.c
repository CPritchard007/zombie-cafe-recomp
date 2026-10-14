/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002d79f4 png_icc_set_sRGB */

void png_icc_set_sRGB(undefined4 param_1,undefined4 param_2,byte *param_3,int param_4)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 uVar4;
  int iVar5;
  
  iVar3 = 0;
  iVar5 = 0;
  while ((((iVar1 = DAT_002d7bd4 + 0x2d7a52 + iVar3,
           (uint)param_3[0x54] * 0x1000000 + (uint)param_3[0x55] * 0x10000 + (uint)param_3[0x57] +
           (uint)param_3[0x56] * 0x100 != *(int *)(iVar1 + 0xc) ||
           ((uint)param_3[0x58] * 0x1000000 + (uint)param_3[0x59] * 0x10000 + (uint)param_3[0x5b] +
            (uint)param_3[0x5a] * 0x100 != *(int *)(iVar1 + 0x10))) ||
          ((uint)param_3[0x5c] * 0x1000000 + (uint)param_3[0x5d] * 0x10000 + (uint)param_3[0x5f] +
           (uint)param_3[0x5e] * 0x100 != *(int *)(iVar1 + 0x14))) ||
         ((uint)param_3[0x60] * 0x1000000 + (uint)param_3[0x61] * 0x10000 + (uint)param_3[99] +
          (uint)param_3[0x62] * 0x100 != *(int *)(iVar1 + 0x18)))) {
    iVar3 = iVar3 + 0x20;
    iVar5 = iVar5 + 1;
    if (iVar3 == 0xe0) {
      return;
    }
  }
  iVar3 = (uint)*param_3 * 0x1000000 + (uint)param_3[1] * 0x10000 + (uint)param_3[3] +
          (uint)param_3[2] * 0x100;
  iVar1 = DAT_002d7bd4 + 0x2d7a32 + iVar5 * 0x20;
  if ((iVar3 != *(int *)(iVar1 + 0x28)) ||
     ((uint)param_3[0x40] * 0x1000000 + (uint)param_3[0x41] * 0x10000 + (uint)param_3[0x43] +
      (uint)param_3[0x42] * 0x100 != (uint)*(ushort *)(iVar1 + 0x3e))) {
LAB_002d7bb6:
    png_chunk_report(param_1,DAT_002d7be4 + 0x2d7bc0,0);
    return;
  }
  if (param_4 == 0) {
    uVar2 = adler32(0,0,0);
    param_4 = adler32(uVar2,param_3,iVar3);
  }
  iVar5 = DAT_002d7bd8 + 0x2d7b4c + iVar5 * 0x20;
  if (param_4 != *(int *)(iVar5 + 0x20)) goto LAB_002d7bb6;
  uVar2 = crc32(0,0,0);
  iVar3 = crc32(uVar2,param_3,iVar3);
  if (iVar3 != *(int *)(iVar5 + 0x24)) goto LAB_002d7bb6;
  if (*(char *)(iVar5 + 0x3d) == '\0') {
    if (*(char *)(iVar5 + 0x3c) != '\0') goto LAB_002d7b8c;
    iVar3 = DAT_002d7be0 + 0x2d7b8a;
    uVar4 = 0;
  }
  else {
    uVar4 = 2;
    iVar3 = DAT_002d7bdc + 0x2d7b7c;
  }
  png_chunk_report(param_1,iVar3,uVar4);
LAB_002d7b8c:
  png_colorspace_set_sRGB
            (param_1,param_2,
             (uint)param_3[0x40] * 0x1000000 + (uint)param_3[0x41] * 0x10000 + (uint)param_3[0x43] +
             (uint)param_3[0x42] * 0x100);
  return;
}


