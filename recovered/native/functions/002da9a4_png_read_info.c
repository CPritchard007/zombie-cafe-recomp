/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002da9a4 png_read_info */

undefined8 png_read_info(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int local_1c;
  
  local_1c = param_2;
  if ((param_2 != 0) && (param_1 != 0)) {
    png_read_sig();
    local_1c = DAT_002dabdc + 0x2da9c0;
LAB_002da9c0:
    uVar1 = png_read_chunk_header(param_1);
    iVar4 = *(int *)(param_1 + 0x1dc);
    if (iVar4 == DAT_002dabe0) {
      iVar3 = *(int *)(param_1 + 0x134);
      if (iVar3 << 0x1f < 0) {
        if ((*(char *)(param_1 + DAT_002dabe8) == '\x03') && (-1 < iVar3 << 0x1e)) {
          iVar2 = DAT_002dabec + 0x2da9f6;
          goto LAB_002da9f4;
        }
      }
      else {
        iVar2 = DAT_002dabe4 + 0x2da9e4;
LAB_002da9f4:
        png_chunk_error(param_1,iVar2);
      }
      if (iVar3 << 0x1c < 0) {
        png_chunk_benign_error(param_1,local_1c);
      }
      *(uint *)(param_1 + 0x134) = *(uint *)(param_1 + 0x134) | 4;
    }
    else {
      if ((int)(*(uint *)(param_1 + 0x134) << 0x1d) < 0) {
        *(uint *)(param_1 + 0x134) = *(uint *)(param_1 + 0x134) | 8;
      }
      if (iVar4 == DAT_002dabf0) {
        png_handle_IHDR(param_1,param_2,uVar1);
        goto LAB_002da9c0;
      }
      if (iVar4 == DAT_002dabf4) {
        png_handle_IEND(param_1,param_2,uVar1);
        goto LAB_002da9c0;
      }
    }
    iVar2 = png_chunk_unknown_handling(param_1,iVar4);
    iVar3 = DAT_002dabf8;
    if (iVar2 == 0) {
      if (iVar4 == DAT_002dabf8) {
        png_handle_PLTE(param_1,param_2,uVar1,0);
      }
      else {
        if (iVar4 == DAT_002dabe0) {
          *(undefined4 *)(param_1 + 0x1fc) = uVar1;
          goto LAB_002dabd8;
        }
        if (iVar4 == DAT_002dabfc) {
          png_handle_bKGD(param_1,param_2,uVar1);
        }
        else if (iVar4 == DAT_002dac00) {
          png_handle_cHRM(param_1,param_2,uVar1);
        }
        else if (iVar4 == DAT_002dac04) {
          png_handle_gAMA(param_1,param_2,uVar1);
        }
        else if (iVar4 == DAT_002dac08) {
          png_handle_hIST(param_1,param_2,uVar1);
        }
        else if (iVar4 == DAT_002dac0c) {
          png_handle_oFFs(param_1,param_2,uVar1);
        }
        else if (iVar4 == DAT_002dac10) {
          png_handle_pCAL(param_1,param_2,uVar1);
        }
        else if (iVar4 == DAT_002dac14) {
          png_handle_sCAL(param_1,param_2,uVar1);
        }
        else if (iVar4 == DAT_002dac18) {
          png_handle_pHYs(param_1,param_2,uVar1);
        }
        else if (iVar4 == DAT_002dac1c) {
          png_handle_sBIT(param_1,param_2,uVar1);
        }
        else if (iVar4 == DAT_002dac20) {
          png_handle_sRGB(param_1,param_2,uVar1);
        }
        else if (iVar4 == DAT_002dac24) {
          png_handle_iCCP(param_1,param_2,uVar1);
        }
        else if (iVar4 == DAT_002dac28) {
          png_handle_sPLT(param_1,param_2,uVar1);
        }
        else if (iVar4 == DAT_002dac2c) {
          png_handle_tEXt(param_1,param_2,uVar1);
        }
        else if (iVar4 == DAT_002dac30) {
          png_handle_tIME(param_1,param_2,uVar1);
        }
        else if (iVar4 == DAT_002dac34) {
          png_handle_tRNS(param_1,param_2,uVar1);
        }
        else if (iVar4 == DAT_002dac38) {
          png_handle_zTXt(param_1,param_2,uVar1);
        }
        else if (iVar4 == DAT_002dac3c) {
          png_handle_iTXt();
        }
        else {
          png_handle_unknown(param_1,param_2,uVar1,0);
        }
      }
      goto LAB_002da9c0;
    }
    png_handle_unknown(param_1,param_2,uVar1);
    if (iVar4 == iVar3) {
      *(uint *)(param_1 + 0x134) = *(uint *)(param_1 + 0x134) | 2;
      goto LAB_002da9c0;
    }
    if (iVar4 != DAT_002dabe0) goto LAB_002da9c0;
    *(undefined4 *)(param_1 + 0x1fc) = 0;
  }
LAB_002dabd8:
  return CONCAT44(local_1c,param_2);
}


