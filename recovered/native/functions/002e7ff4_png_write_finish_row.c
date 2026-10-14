/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002e7ff4 png_write_finish_row */

undefined8 png_write_finish_row(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  
  uVar5 = *(int *)(param_1 + 0x1d8) + 1;
  *(uint *)(param_1 + 0x1d8) = uVar5;
  iVar3 = param_1;
  if (*(uint *)(param_1 + 0x1c8) <= uVar5) {
    if (*(char *)(param_1 + 0x214) != '\0') {
      *(undefined4 *)(param_1 + 0x1d8) = 0;
      iVar2 = DAT_002e80e4;
      iVar1 = DAT_002e80e0;
      if (*(int *)(param_1 + 0x13c) << 0x1e < 0) {
        *(char *)(param_1 + DAT_002e80e0) = *(char *)(param_1 + DAT_002e80e0) + '\x01';
      }
      else {
        uVar5 = (uint)*(byte *)(param_1 + DAT_002e80e0);
        param_2 = DAT_002e80e4 + 0x2e8045;
        do {
          uVar6 = uVar5 + 1;
          uVar5 = uVar6 & 0xff;
          if (6 < uVar5) break;
          iVar3 = __udivsi3((*(int *)(param_1 + 0x1c0) + -1 +
                            (uint)*(byte *)(iVar2 + uVar5 + 0x2e803e)) -
                            (uint)*(byte *)(param_2 + uVar5));
          *(int *)(param_1 + 0x1cc) = iVar3;
          iVar4 = __udivsi3((*(int *)(param_1 + 0x1c4) + -1 +
                            (uint)*(byte *)(iVar2 + 0x2e804c + uVar5)) -
                            (uint)*(byte *)(iVar2 + 0x2e8053 + uVar5));
          *(int *)(param_1 + 0x1c8) = iVar4;
        } while ((iVar3 == 0) || (iVar4 == 0));
        *(char *)(param_1 + iVar1) = (char)uVar6;
      }
      if (*(byte *)(param_1 + iVar1) < 7) {
        if (*(void **)(param_1 + 0x1e0) != (void *)0x0) {
          uVar5 = (uint)*(byte *)(param_1 + 0x21c) * (uint)*(byte *)(param_1 + DAT_002e80e8);
          if (uVar5 < 8) {
            uVar5 = *(int *)(param_1 + 0x1c0) * uVar5 + 7 >> 3;
          }
          else {
            uVar5 = *(int *)(param_1 + 0x1c0) * (uVar5 >> 3);
          }
          memset(*(void **)(param_1 + 0x1e0),0,uVar5 + 1);
        }
        goto LAB_002e80dc;
      }
    }
    png_compress_IDAT(param_1,0,0,4,iVar3,param_2,param_3);
  }
LAB_002e80dc:
  return CONCAT44(param_2,iVar3);
}


