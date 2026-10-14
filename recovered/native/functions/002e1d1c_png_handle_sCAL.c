/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002e1d1c png_handle_sCAL */

void png_handle_sCAL(int param_1,int param_2,uint param_3)

{
  byte *pbVar1;
  int iVar2;
  byte *pbVar3;
  uint uVar4;
  int iVar5;
  uint local_20;
  uint local_1c [2];
  
  iVar5 = *(int *)(param_1 + 0x134);
  iVar2 = param_1;
  if (-1 < iVar5 << 0x1f) {
    iVar2 = png_chunk_error(param_1,DAT_002e1e4c + 0x2e1d36);
  }
  if (iVar5 << 0x1d < 0) {
    png_crc_finish(iVar2,param_3);
    iVar2 = DAT_002e1e50 + 0x2e1d48;
  }
  else if ((param_2 == 0) || (-1 < *(int *)(param_2 + 8) << 0x11)) {
    if (param_3 < 4) {
      png_crc_finish(param_1,param_3);
      iVar2 = DAT_002e1e58 + 0x2e1d70;
    }
    else {
      pbVar3 = (byte *)FUN_002e040c(param_1,param_3 + 1,2);
      if (pbVar3 == (byte *)0x0) {
        png_chunk_benign_error(param_1,DAT_002e1e5c + 0x2e1d86);
        png_crc_finish(param_1,param_3);
        return;
      }
      png_crc_read(param_1,pbVar3,param_3);
      pbVar3[param_3] = 0;
      uVar4 = png_crc_finish(param_1);
      if (uVar4 != 0) {
        return;
      }
      if (*pbVar3 - 1 < 2) {
        local_20 = 1;
        local_1c[0] = uVar4;
        iVar2 = png_check_fp_number(pbVar3,param_3,local_1c,&local_20);
        if ((iVar2 != 0) && (local_20 < param_3)) {
          pbVar1 = pbVar3 + local_20;
          uVar4 = local_20 + 1;
          local_20 = uVar4;
          if (*pbVar1 == 0) {
            if ((local_1c[0] & 0x188) == 0x108) {
              local_1c[0] = (uint)*pbVar1;
              iVar2 = png_check_fp_number(pbVar3,param_3,local_1c,&local_20);
              if ((iVar2 == 0) || (local_20 != param_3)) {
                iVar2 = DAT_002e1e6c + 0x2e1e1a;
              }
              else {
                if ((local_1c[0] & 0x188) == 0x108) {
                  png_set_sCAL_s(param_1,param_2,*pbVar3,pbVar3 + 1,pbVar3 + uVar4);
                  return;
                }
                iVar2 = DAT_002e1e70 + 0x2e1e30;
              }
            }
            else {
              iVar2 = DAT_002e1e68 + 0x2e1dfc;
            }
            goto LAB_002e1e2e;
          }
        }
        iVar2 = DAT_002e1e64 + 0x2e1de6;
      }
      else {
        iVar2 = DAT_002e1e60 + 0x2e1db8;
      }
    }
  }
  else {
    png_crc_finish(iVar2,param_3);
    iVar2 = DAT_002e1e54 + 0x2e1d5e;
  }
LAB_002e1e2e:
  png_chunk_benign_error(param_1,iVar2);
  return;
}


