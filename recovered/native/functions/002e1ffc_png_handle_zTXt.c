/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002e1ffc png_handle_zTXt */

void png_handle_zTXt(int param_1,undefined4 param_2,uint param_3)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int local_38;
  uint local_34;
  int local_30;
  int local_2c;
  int local_28;
  uint local_24;
  uint local_20;
  uint local_1c;
  
  iVar2 = *(int *)(param_1 + 0x358);
  if (iVar2 != 0) {
    if (iVar2 == 1) {
      png_crc_finish(param_1,param_3);
      return;
    }
    *(int *)(param_1 + 0x358) = iVar2 + -1;
    if (iVar2 + -1 == 1) {
      png_crc_finish(param_1,param_3);
      iVar2 = DAT_002e2120 + 0x2e2030;
      goto LAB_002e206a;
    }
  }
  iVar2 = param_1 + 0xfc;
  uVar3 = *(uint *)(param_1 + 0x134);
  if (-1 < (int)(uVar3 << 0x1f)) {
    png_chunk_error(param_1,DAT_002e2124 + 0x2e2042);
  }
  if ((int)(uVar3 << 0x1d) < 0) {
    *(uint *)(iVar2 + 0x38) = uVar3 | 8;
  }
  iVar2 = FUN_002e040c(param_1,param_3,2);
  if (iVar2 == 0) {
    png_crc_finish(param_1,param_3);
    iVar2 = DAT_002e2128 + 0x2e206c;
  }
  else {
    png_crc_read(param_1,iVar2,param_3);
    uVar3 = png_crc_finish(param_1,0);
    if (uVar3 != 0) {
      return;
    }
    for (; (uVar3 != param_3 && (*(char *)(iVar2 + uVar3) != '\0')); uVar3 = uVar3 + 1) {
    }
    if (uVar3 - 1 < 0x4f) {
      if (param_3 < uVar3 + 3) {
        iVar2 = DAT_002e2130 + 0x2e2110;
      }
      else {
        bVar1 = *(byte *)(iVar2 + uVar3 + 1);
        uVar5 = (uint)bVar1;
        if (uVar5 == 0) {
          local_38 = -1;
          iVar4 = uVar3 + 2;
          iVar2 = FUN_002e0588(param_1,param_3,iVar4,&local_38,iVar4);
          if (iVar2 == 1) {
            local_30 = *(int *)(param_1 + 0x378);
            *(byte *)(local_30 + uVar3 + local_38 + 2) = bVar1;
            local_2c = local_30 + iVar4;
            local_28 = local_38;
            local_34 = uVar5;
            local_24 = uVar5;
            local_20 = uVar5;
            local_1c = uVar5;
            iVar2 = png_set_text_2(param_1,param_2,&local_34,1);
            if (iVar2 == 0) {
              return;
            }
            iVar2 = DAT_002e2138 + 0x2e211c;
          }
          else {
            iVar2 = *(int *)(param_1 + 0x15c);
            if (iVar2 == 0) {
              return;
            }
          }
        }
        else {
          iVar2 = DAT_002e2134 + 0x2e2116;
        }
      }
    }
    else {
      iVar2 = DAT_002e212c + 0x2e210a;
    }
  }
LAB_002e206a:
  png_chunk_benign_error(param_1,iVar2);
  return;
}


