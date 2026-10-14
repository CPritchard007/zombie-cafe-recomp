/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002e5cd4 FUN_002e5cd4 */

undefined4 FUN_002e5cd4(undefined4 *param_1)

{
  bool bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  undefined4 uVar7;
  bool bVar8;
  bool bVar9;
  uint local_40;
  uint local_2c;
  uint local_24;
  
  piVar6 = (int *)*param_1;
  local_40 = piVar6[4];
  uVar7 = *(undefined4 *)*piVar6;
  uVar3 = ((undefined4 *)*piVar6)[1];
  bVar8 = (local_40 & 8) != 0;
  if (bVar8) {
    local_2c = 0;
    local_24 = 0;
  }
  else {
    local_2c = (local_40 << 0x1d) >> 0x1f;
    local_24 = local_40 & 1;
  }
  bVar1 = !bVar8;
  if ((local_2c == 0) || (!bVar1)) {
    bVar9 = false;
  }
  else {
    bVar9 = param_1[4] == 0;
  }
  png_set_benign_errors(uVar7,0);
  if (param_1[2] == 0) {
    iVar4 = 1;
    if (-1 < piVar6[4] << 0x1c) {
      iVar4 = (piVar6[4] & 3U) + 1;
    }
    param_1[2] = piVar6[2] * iVar4;
  }
  if ((local_40 & 8) == 0) {
    png_set_IHDR(uVar7,uVar3,piVar6[2],piVar6[3]);
LAB_002e5de6:
    if (bVar9) {
      png_set_gAMA_fixed(uVar7,uVar3,DAT_002e5f80);
      if (-1 < piVar6[5] << 0x1f) {
        png_set_cHRM_fixed(uVar7,uVar3,DAT_002e5f8c,DAT_002e5f9c);
      }
    }
    else if (piVar6[5] << 0x1f < 0) {
      png_set_gAMA_fixed(uVar7,uVar3,DAT_002e5fa0);
    }
    else {
      png_set_sRGB(uVar7,uVar3,0);
    }
    png_write_info(uVar7,uVar3);
    if (bVar9) {
      png_set_swap(uVar7);
    }
    if ((local_40 & 0x10) != 0) {
      if ((bVar1) && ((int)(local_40 << 0x1e) < 0)) {
        png_set_bgr(uVar7);
      }
      local_40 = local_40 & 0xffffffef;
    }
    if ((local_40 & 0x20) != 0) {
      if ((bVar1) && ((int)(local_40 << 0x1f) < 0)) {
        png_set_swap_alpha(uVar7);
      }
      local_40 = local_40 & 0xffffffdf;
    }
    if ((bVar8) && ((uint)piVar6[6] < 0x11)) {
      png_set_packing(uVar7);
    }
    if ((local_40 & 0xfffffff0) == 0) goto LAB_002e5ec0;
    iVar4 = DAT_002e5fa4 + 0x2e5ebe;
    uVar2 = uVar7;
  }
  else {
    if ((param_1[3] != 0) && (piVar6[6] != 0)) {
      png_set_IHDR(uVar7,uVar3,piVar6[2],piVar6[3]);
      FUN_002e4994(param_1);
      goto LAB_002e5de6;
    }
    uVar2 = *(undefined4 *)*piVar6;
    iVar4 = DAT_002e5f7c + 0x2e5dae;
  }
  png_error(uVar2,iVar4);
LAB_002e5ec0:
  iVar4 = param_1[1];
  iVar5 = param_1[2];
  if (local_2c != 0) {
    iVar5 = iVar5 << 1;
  }
  if (iVar5 < 0) {
    iVar4 = iVar4 + iVar5 * (1 - piVar6[3]);
  }
  param_1[5] = iVar4;
  param_1[6] = iVar5;
  if (piVar6[5] << 0x1e < 0) {
    png_set_filter(uVar7,0,0);
    png_set_compression_level(uVar7,3);
  }
  if (((local_24 != 0) && (local_2c != 0)) || ((bVar1 && (param_1[4] != 0)))) {
    uVar2 = png_get_rowbytes(uVar7,uVar3);
    uVar2 = png_malloc(uVar7,uVar2);
    param_1[7] = uVar2;
    if (bVar9) {
      iVar4 = DAT_002e5fa8 + 0x2e5f2e;
    }
    else {
      iVar4 = DAT_002e5fac + 0x2e5f34;
    }
    iVar4 = png_safe_execute(piVar6,iVar4,param_1);
    param_1[7] = 0;
    png_free(uVar7,uVar2);
    if (iVar4 == 0) {
      return 0;
    }
  }
  else {
    local_40 = param_1[5];
    iVar5 = param_1[6];
    for (iVar4 = piVar6[3]; iVar4 != 0; iVar4 = iVar4 + -1) {
      png_write_row(uVar7,local_40);
      local_40 = local_40 + iVar5;
    }
  }
  png_write_end(uVar7,uVar3);
  return 1;
}


