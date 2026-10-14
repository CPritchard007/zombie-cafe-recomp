/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002db014 FUN_002db014 */

undefined4 FUN_002db014(int *param_1)

{
  byte bVar1;
  uint uVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  byte *pbVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  bool bVar14;
  uint local_48;
  uint local_44;
  int local_40;
  byte local_3c;
  uint local_2c;
  undefined4 local_28;
  byte local_24 [2];
  ushort local_22;
  ushort local_20;
  ushort local_1e;
  ushort local_1c;
  
  piVar3 = (int *)*param_1;
  local_44 = piVar3[4];
  iVar11 = *(int *)*piVar3;
  iVar8 = ((int *)*piVar3)[1];
  iVar9 = local_44 << 0x1d;
  png_set_expand(iVar11);
  uVar4 = FUN_002d97f4(iVar11);
  uVar12 = uVar4 & 0xfffffff7 ^ local_44;
  local_48 = uVar12 & 2;
  if (local_48 != 0) {
    if ((local_44 & 2) == 0) {
      local_48 = uVar4 & 1;
      png_set_rgb_to_gray_fixed(iVar11,1,0xffffffff,0xffffffff);
    }
    else {
      png_set_gray_to_rgb(iVar11);
      local_48 = 0;
    }
    uVar12 = uVar12 & 0xfffffffd;
  }
  if ((uVar4 & 4) == 0) {
    uVar7 = 0xffffffff;
  }
  else {
    uVar7 = DAT_002db380 | -(uint)((piVar3[5] & 4U) != 0);
  }
  png_set_alpha_mode_fixed(iVar11,0,uVar7);
  if (iVar9 < 0) {
    if ((uVar4 & 1) == 0) {
      local_2c = DAT_002db380;
      local_40 = 0;
    }
    else {
      local_40 = 1;
      local_2c = DAT_002db380;
    }
  }
  else {
    local_2c = 0xffffffff;
    local_40 = 0;
  }
  if ((local_48 != 0) &&
     ((iVar5 = png_muldiv(&local_28,local_2c,*(undefined4 *)(iVar11 + 0x39c),DAT_002db380),
      iVar5 == 0 || (local_48 = png_gamma_significant(local_28), local_48 != 0)))) {
    if (local_40 == 1) {
      local_40 = 0;
      local_48 = 2;
    }
    else {
      local_40 = 0;
      local_48 = 1;
    }
  }
  if ((uVar12 & 4) != 0) {
    if (iVar9 < 0) {
      png_set_expand_16(iVar11);
    }
    else {
      png_set_scale_16(iVar11);
    }
    uVar12 = uVar12 & 0xfffffffb;
  }
  uVar7 = uVar12 & 1;
  if (uVar7 == 0) goto LAB_002db1a8;
  if ((uVar4 & 1) == 0) {
    uVar6 = 0xff;
    if (iVar9 < 0) {
      uVar6 = DAT_002db384;
    }
    bVar14 = (local_44 & 0x20) == 0;
    if (!bVar14) {
      uVar12 = uVar12 & 0xffffffdf;
    }
    png_set_add_alpha(iVar11,uVar6,bVar14);
LAB_002db19a:
    uVar7 = 0;
  }
  else {
    if (local_48 != 0) {
      local_48 = 2;
      goto LAB_002db19a;
    }
    if (iVar9 < 0) {
      png_set_strip_alpha(iVar11);
      uVar7 = 0;
    }
    else {
      pbVar10 = (byte *)param_1[4];
      if (pbVar10 == (byte *)0x0) {
        local_40 = 2;
        uVar7 = 1;
      }
      else {
        local_3c = (byte)((uint)iVar9 >> 0x1f);
        local_24[0] = local_3c;
        local_22 = (ushort)*pbVar10;
        local_20 = (ushort)pbVar10[1];
        local_1e = (ushort)pbVar10[2];
        local_1c = (ushort)pbVar10[1];
        png_set_background_fixed(iVar11,local_24,1,0,0);
        uVar7 = 0;
      }
    }
  }
  uVar12 = uVar12 & 0xfffffffe;
LAB_002db1a8:
  png_set_alpha_mode_fixed(iVar11,local_40,local_2c);
  if ((uVar12 & 0x10) != 0) {
    if ((int)(local_44 << 0x1e) < 0) {
      png_set_bgr(iVar11);
    }
    else {
      local_44 = local_44 & 0xffffffef;
    }
    uVar12 = uVar12 & 0xffffffef;
  }
  if ((uVar12 & 0x20) != 0) {
    if ((int)(local_44 << 0x1f) < 0) {
      if (local_48 != 2) {
        png_set_swap_alpha(iVar11);
      }
    }
    else {
      local_44 = local_44 & 0xffffffdf;
    }
    uVar12 = uVar12 & 0xffffffdf;
  }
  uVar4 = 0x20;
  if (iVar9 < 0) {
    uVar4 = 1;
    local_28 = CONCAT22(local_28._2_2_,1);
    png_set_swap(iVar11);
  }
  if (uVar12 == 0) {
    png_set_keep_unknown_chunks(iVar11,1,0,0xffffffff);
    png_set_keep_unknown_chunks(iVar11,0,DAT_002db38c + 0x2db22a,6);
    uVar12 = (local_48 - 2) - (local_48 - 3);
    uVar2 = (uint)(local_48 - 2 == 0);
    if ((uVar12 == uVar2) || (uVar7 != 0)) {
      local_40 = 0;
    }
    else {
      local_40 = png_set_interlace_handling(iVar11);
    }
    png_read_update_info(iVar11,iVar8);
    bVar1 = *(byte *)(iVar8 + 0x19);
    uVar4 = bVar1 & 2;
    if ((bVar1 & 2) != 0) {
      uVar4 = 2;
    }
    if ((int)((uint)bVar1 << 0x1d) < 0) {
      if (uVar7 != 0) goto LAB_002db292;
      if ((uVar12 == uVar2) && ((local_44 & 1) == 0)) goto LAB_002db292;
      uVar4 = uVar4 | 1;
      goto LAB_002db292;
    }
    if (uVar7 == 0) goto LAB_002db292;
    iVar5 = DAT_002db390 + 0x2db28e;
  }
  else {
    iVar5 = DAT_002db388 + 0x2db214;
  }
  do {
    while( true ) {
      png_error(iVar11,iVar5);
LAB_002db292:
      if (*(char *)(iVar8 + 0x18) == '\x10') {
        uVar4 = uVar4 | 4;
      }
      iVar5 = *(int *)(iVar11 + 0x13c);
      if (iVar5 << 0x1f < 0) {
        uVar4 = uVar4 | 0x10;
      }
      if ((local_48 == 2) && ((local_44 & 0x20) != 0)) {
        uVar4 = uVar4 | 0x20;
      }
      if ((iVar5 << 0xe < 0) || ((iVar5 << 7 < 0 && (-1 < *(int *)(iVar11 + 0x138) << 0x18))))
      break;
LAB_002db2de:
      if (uVar4 == local_44) {
        iVar5 = param_1[1];
        iVar13 = param_1[2];
        if (iVar9 < 0) {
          iVar13 = iVar13 << 1;
        }
        if (iVar13 < 0) {
          iVar5 = iVar5 + iVar13 * (1 - piVar3[3]);
        }
        param_1[6] = iVar5;
        param_1[7] = iVar13;
        if (uVar7 == 0) {
          if (local_48 == 2) {
            uVar6 = png_get_rowbytes(iVar11,iVar8);
            iVar9 = png_malloc(iVar11,uVar6);
            iVar8 = DAT_002db3a0;
            param_1[5] = iVar9;
            uVar6 = png_safe_execute(piVar3,iVar8 + 0x2db35e,param_1);
            param_1[5] = 0;
            png_free(iVar11,iVar9);
          }
          else {
            while (local_40 = local_40 + -1, -1 < local_40) {
              local_48 = param_1[6];
              for (iVar8 = piVar3[3]; iVar8 != 0; iVar8 = iVar8 + -1) {
                png_read_row(iVar11,local_48,0);
                local_48 = local_48 + iVar13;
              }
            }
            uVar6 = 1;
          }
        }
        else {
          uVar6 = png_get_rowbytes(iVar11,iVar8);
          iVar9 = png_malloc(iVar11,uVar6);
          iVar8 = DAT_002db39c;
          param_1[5] = iVar9;
          uVar6 = png_safe_execute(piVar3,iVar8 + 0x2db328,param_1);
          param_1[5] = 0;
          png_free(iVar11,iVar9);
        }
        return uVar6;
      }
      iVar5 = DAT_002db398 + 0x2db2ea;
    }
    if (local_48 != 2) {
      uVar4 = uVar4 | 0x20;
      goto LAB_002db2de;
    }
    iVar5 = DAT_002db394 + 0x2db2da;
  } while( true );
}


