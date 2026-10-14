/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002dbec8 png_read_end */

undefined8 png_read_end(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int local_20;
  int local_1c;
  
  local_1c = param_2;
  if (param_1 == 0) {
    local_20 = 0;
  }
  else {
    iVar1 = png_chunk_unknown_handling(param_1,DAT_002dc108);
    if (iVar1 == 0) {
      png_read_finish_IDAT(param_1);
    }
    if ((*(char *)(param_1 + DAT_002dc10c) == '\x03') &&
       ((int)(uint)*(ushort *)(param_1 + 0x208) < *(int *)(param_1 + 0x20c))) {
      png_benign_error(param_1,DAT_002dc110 + 0x2dbf04);
    }
    local_20 = DAT_002dc114 + 0x2dbf0c;
    do {
      iVar1 = png_read_chunk_header(param_1);
      iVar2 = *(int *)(param_1 + 0x1dc);
      if (iVar2 == DAT_002dc118) {
        png_handle_IEND(param_1,param_2,iVar1);
      }
      else if (iVar2 == DAT_002dc11c) {
        png_handle_IHDR(param_1,param_2,iVar1);
      }
      else if (param_2 == 0) {
LAB_002dbfa6:
        png_crc_finish(param_1,iVar1);
      }
      else {
        local_1c = png_chunk_unknown_handling(param_1,iVar2);
        if (local_1c == 0) {
          if (iVar2 == DAT_002dc108) {
            if ((iVar1 != 0) || (*(int *)(param_1 + 0x134) << 0x12 < 0)) {
              png_benign_error(param_1,local_20);
            }
            goto LAB_002dbfa6;
          }
          if (iVar2 == DAT_002dc124) {
            png_handle_PLTE(param_1,param_2,iVar1);
          }
          else if (iVar2 == DAT_002dc128) {
            png_handle_bKGD(param_1,param_2,iVar1);
          }
          else if (iVar2 == DAT_002dc12c) {
            png_handle_cHRM(param_1,param_2,iVar1);
          }
          else if (iVar2 == DAT_002dc130) {
            png_handle_gAMA(param_1,param_2,iVar1);
          }
          else if (iVar2 == DAT_002dc134) {
            png_handle_hIST(param_1,param_2,iVar1);
          }
          else if (iVar2 == DAT_002dc138) {
            png_handle_oFFs(param_1,param_2,iVar1);
          }
          else if (iVar2 == DAT_002dc13c) {
            png_handle_pCAL(param_1,param_2,iVar1);
          }
          else if (iVar2 == DAT_002dc140) {
            png_handle_sCAL(param_1,param_2,iVar1);
          }
          else if (iVar2 == DAT_002dc144) {
            png_handle_pHYs(param_1,param_2,iVar1);
          }
          else if (iVar2 == DAT_002dc148) {
            png_handle_sBIT(param_1,param_2,iVar1);
          }
          else if (iVar2 == DAT_002dc14c) {
            png_handle_sRGB(param_1,param_2,iVar1);
          }
          else if (iVar2 == DAT_002dc150) {
            png_handle_iCCP(param_1,param_2,iVar1);
          }
          else if (iVar2 == DAT_002dc154) {
            png_handle_sPLT(param_1,param_2,iVar1);
          }
          else if (iVar2 == DAT_002dc158) {
            png_handle_tEXt(param_1,param_2,iVar1);
          }
          else if (iVar2 == DAT_002dc15c) {
            png_handle_tIME(param_1,param_2,iVar1);
          }
          else if (iVar2 == DAT_002dc160) {
            png_handle_tRNS(param_1,param_2,iVar1);
          }
          else if (iVar2 == DAT_002dc164) {
            png_handle_zTXt(param_1,param_2,iVar1);
          }
          else if (iVar2 == DAT_002dc168) {
            png_handle_iTXt();
          }
          else {
            png_handle_unknown(param_1,param_2,iVar1,0);
          }
        }
        else {
          if ((iVar2 == DAT_002dc108) && ((iVar1 != 0 || (*(int *)(param_1 + 0x134) << 0x12 < 0))))
          {
            png_benign_error(param_1,DAT_002dc120 + 0x2dbf6a);
          }
          png_handle_unknown(param_1,param_2,iVar1,local_1c);
          if (iVar2 == DAT_002dc124) {
            *(uint *)(param_1 + 0x134) = *(uint *)(param_1 + 0x134) | 2;
          }
        }
      }
    } while (-1 < *(int *)(param_1 + 0x134) << 0x1b);
  }
  return CONCAT44(local_1c,local_20);
}


