/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002e22ec png_handle_unknown */

undefined8 png_handle_unknown(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = param_1;
  if (*(int *)(param_1 + 0x310) == 0) {
    if (param_4 == 0) {
      param_4 = *(int *)(param_1 + 0x314);
    }
    if ((param_4 == 3) || ((param_4 == 2 && (*(int *)(param_1 + 0x1dc) << 2 < 0)))) {
      iVar1 = FUN_002e09bc(param_1);
      if (iVar1 == 0) goto LAB_002e23c8;
LAB_002e237c:
      if (param_4 != 3) goto LAB_002e2382;
LAB_002e2390:
      iVar2 = DAT_002e2404;
      iVar1 = 0;
      iVar3 = *(int *)(param_1 + 0x358);
      if (iVar3 != 1) {
        if (iVar3 != 0) {
          if (iVar3 == 2) {
            *(undefined4 *)(param_1 + 0x358) = 1;
            png_chunk_benign_error(param_1,iVar2 + 0x2e23ac);
            goto LAB_002e23c8;
          }
          *(int *)(param_1 + 0x358) = iVar3 + -1;
        }
        png_set_unknown_chunks(param_1,param_2,param_1 + 0x360,1,iVar4,param_2,param_3);
        iVar1 = 1;
      }
    }
    else {
      png_crc_finish(param_1,param_3);
LAB_002e2382:
      iVar1 = 0;
      if (param_4 == 2) {
LAB_002e2386:
        iVar1 = 0;
        if (*(int *)(param_1 + 0x1dc) << 2 < 0) goto LAB_002e2390;
      }
    }
LAB_002e23c8:
    if (*(int *)(param_1 + 0x368) != 0) {
      png_free(param_1);
    }
    *(undefined4 *)(param_1 + 0x368) = 0;
    if ((iVar1 != 0) || (*(int *)(param_1 + 0x1dc) << 2 < 0)) goto LAB_002e23f4;
    iVar1 = DAT_002e2408 + 0x2e23f0;
  }
  else {
    iVar1 = FUN_002e09bc();
    if (iVar1 == 0) goto LAB_002e23c8;
    iVar2 = (**(code **)(param_1 + 0x310))(param_1,param_1 + 0x360);
    if (-1 < iVar2) {
      iVar1 = 1;
      if (iVar2 == 0) {
        if (1 < param_4) goto LAB_002e237c;
        if (*(int *)(param_1 + 0x314) < 2) {
          png_chunk_warning(param_1,DAT_002e23fc + 0x2e233c);
          png_app_warning(param_1,DAT_002e2400 + 0x2e2346);
        }
        goto LAB_002e2386;
      }
      goto LAB_002e23c8;
    }
    iVar1 = DAT_002e23f8 + 0x2e231e;
  }
  png_chunk_error(param_1,iVar1);
LAB_002e23f4:
  return CONCAT44(param_2,iVar4);
}


