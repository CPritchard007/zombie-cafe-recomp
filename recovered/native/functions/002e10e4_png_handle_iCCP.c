/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002e10e4 png_handle_iCCP */

void png_handle_iCCP(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  void *__dest;
  void *__dest_00;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined4 *puVar6;
  uint uVar7;
  undefined4 uVar8;
  int *piVar9;
  uint uStack_4;
  int *piVar10;
  int *piVar11;
  undefined4 *puVar12;
  int *piVar13;
  
  iVar1 = DAT_002e1424;
  puVar6 = *(undefined4 **)(DAT_002e1420 + 0x2e10f0);
  piVar9 = (int *)(&stack0xffffffec + DAT_002e1424);
  piVar10 = (int *)(&stack0xffffffec + DAT_002e1424);
  piVar11 = (int *)(&stack0xffffffec + DAT_002e1424);
  puVar12 = (undefined4 *)(&stack0xffffffec + DAT_002e1424);
  piVar13 = (int *)(&stack0xffffffec + DAT_002e1424);
  *(undefined4 *)(&stack0x00000018 + DAT_002e1424) = param_3;
  *(undefined4 *)(&stack0xffffffec + DAT_002e1428 + DAT_002e1424) = *puVar6;
  uVar5 = *(uint *)(param_1 + 0x134);
  *(undefined4 **)(&stack0x00000014 + DAT_002e1424) = puVar6;
  if (-1 < (int)(uVar5 << 0x1f)) {
    png_chunk_error(param_1,DAT_002e142c + 0x2e1110);
  }
  if ((uVar5 & 6) == 0) {
    *(uint *)(&stack0xfffffff4 + iVar1) = *(uint *)(&stack0x00000018 + iVar1);
    if (*(uint *)(&stack0x00000018 + iVar1) < 9) {
      png_crc_finish();
      iVar3 = DAT_002e1434 + 0x2e1134;
    }
    else {
      if ((short)*(ushort *)(param_1 + DAT_002e1438) < 0) {
        png_crc_finish(param_1);
        goto LAB_002e140e;
      }
      if ((int)((uint)*(ushort *)(param_1 + DAT_002e1438) << 0x1d) < 0) {
        iVar3 = DAT_002e145c + 0x2e13ec;
LAB_002e13c2:
        png_crc_finish(param_1,*(undefined4 *)(&stack0x00000018 + iVar1));
      }
      else {
        if (0x50 < *(uint *)(&stack0xfffffff4 + iVar1)) {
          *(undefined4 *)(&stack0xfffffff4 + iVar1) = 0x51;
        }
        png_crc_read(param_1,&stack0x00000020 + iVar1,*(undefined4 *)(&stack0xfffffff4 + iVar1));
        *(int *)(&stack0x00000018 + iVar1) =
             *(int *)(&stack0x00000018 + iVar1) - *(int *)(&stack0xfffffff4 + iVar1);
        for (uVar5 = 0;
            ((uVar5 < *(uint *)(&stack0xfffffff4 + iVar1) && (uVar5 < 0x50)) &&
            ((&stack0x00000020)[uVar5 + iVar1] != '\0')); uVar5 = uVar5 + 1) {
        }
        if (0x4e < uVar5 - 1) {
          iVar3 = DAT_002e1460 + 0x2e13f2;
          goto LAB_002e13c2;
        }
        uVar7 = uVar5 + 1;
        *(uint *)(&stack0x00000000 + iVar1) = uVar7;
        if (*(uint *)(&stack0xfffffff4 + iVar1) <= uVar7) {
          iVar3 = DAT_002e1464 + 0x2e13f8;
          goto LAB_002e13c2;
        }
        if ((&stack0x00000021)[uVar7 + iVar1 + -1] != '\0') {
          iVar3 = DAT_002e1468 + 0x2e13fe;
          goto LAB_002e13c2;
        }
        iVar3 = FUN_002e0358(param_1,DAT_002e143c);
        *(int *)(&stack0xfffffff8 + iVar1) = iVar3;
        if (iVar3 != 0) {
          iVar3 = *(int *)(param_1 + 0x15c);
          goto LAB_002e13c2;
        }
        *(undefined4 *)(&stack0x0000001c + iVar1) = 0x84;
        *(undefined1 **)(param_1 + 0x144) = &stack0x00000022 + uVar5 + iVar1;
        *(uint *)(param_1 + 0x148) = (*(int *)(&stack0xfffffff4 + iVar1) + -2) - uVar5;
        *piVar9 = (int)(&stack0x0000001c + iVar1);
        *(undefined4 *)(&stack0xfffffff0 + iVar1) = 0;
        FUN_002e07ec(param_1,&stack0x000000f8 + iVar1,&stack0x00000018 + iVar1,
                     &stack0x00000074 + iVar1);
        *(int *)(&stack0x00000004 + iVar1) = *(int *)(&stack0x0000001c + iVar1);
        if (*(int *)(&stack0x0000001c + iVar1) != 0) {
          iVar2 = *(int *)(&stack0xfffffff8 + iVar1);
          iVar3 = *(int *)(param_1 + 0x15c);
          goto LAB_002e13b2;
        }
        *(int *)(&stack0xfffffff8 + iVar1) = param_1 + 0x39c;
        *(uint *)(&stack0xfffffff4 + iVar1) =
             (uint)(byte)(&stack0x00000074)[iVar1] * 0x1000000 +
             (uint)(byte)(&stack0x00000075)[iVar1] * 0x10000 + (uint)(byte)(&stack0x00000077)[iVar1]
             + (uint)(byte)(&stack0x00000076)[iVar1] * 0x100;
        iVar3 = png_icc_check_length(param_1,param_1 + 0x39c,&stack0x00000020 + iVar1);
        if (iVar3 == 0) {
LAB_002e13a2:
          iVar2 = 0;
          iVar3 = iVar2;
        }
        else {
          *piVar10 = (int)(&stack0x00000074 + iVar1);
          *(uint *)(&stack0xfffffff0 + iVar1) = (uint)*(byte *)(param_1 + DAT_002e1440);
          iVar3 = png_icc_check_header
                            (param_1,*(undefined4 *)(&stack0xfffffff8 + iVar1),
                             &stack0x00000020 + iVar1,*(undefined4 *)(&stack0xfffffff4 + iVar1));
          if (iVar3 == 0) goto LAB_002e13a2;
          *(uint *)((int)&uStack_4 + iVar1) = (uint)(byte)(&stack0x000000f4)[iVar1];
          *(uint *)(&stack0x00000008 + iVar1) = (uint)(byte)(&stack0x000000f5)[iVar1];
          *(uint *)(&stack0x0000000c + iVar1) = (uint)(byte)(&stack0x000000f6)[iVar1];
          *(uint *)(&stack0x00000010 + iVar1) = (uint)(byte)(&stack0x000000f7)[iVar1];
          __dest = (void *)FUN_002e040c(param_1,*(undefined4 *)(&stack0xfffffff4 + iVar1),2);
          if (__dest == (void *)0x0) {
            iVar3 = DAT_002e1450 + 0x2e13a0;
            iVar2 = 0;
          }
          else {
            memcpy(__dest,&stack0x00000074 + iVar1,0x84);
            iVar3 = (*(int *)((int)&uStack_4 + iVar1) * 0x1000000 +
                     *(int *)(&stack0x00000008 + iVar1) * 0x10000 +
                     *(int *)(&stack0x00000010 + iVar1) + *(int *)(&stack0x0000000c + iVar1) * 0x100
                    ) * 0xc;
            *(int *)((int)&uStack_4 + iVar1) = iVar3;
            *(int *)(&stack0x0000001c + iVar1) = iVar3;
            uVar4 = *(undefined4 *)(&stack0x00000004 + iVar1);
            *piVar11 = (int)(&stack0x0000001c + iVar1);
            *(undefined4 *)(&stack0xfffffff0 + iVar1) = uVar4;
            FUN_002e07ec(param_1,&stack0x000000f8 + iVar1,&stack0x00000018 + iVar1,
                         (int)__dest + 0x84);
            if (*(int *)(&stack0x0000001c + iVar1) == 0) {
              uVar4 = *(undefined4 *)(&stack0xfffffff8 + iVar1);
              uVar8 = *(undefined4 *)(&stack0xfffffff4 + iVar1);
              *puVar12 = __dest;
              iVar3 = png_icc_check_tag_table(param_1,uVar4,&stack0x00000020 + iVar1,uVar8);
              if (iVar3 == 0) goto LAB_002e13a2;
              iVar3 = *(int *)((int)&uStack_4 + iVar1);
              *(int *)(&stack0x0000001c + iVar1) =
                   (*(int *)(&stack0xfffffff4 + iVar1) + -0x84) - iVar3;
              *piVar13 = (int)(&stack0x0000001c + iVar1);
              *(undefined4 *)(&stack0xfffffff0 + iVar1) = 1;
              FUN_002e07ec(param_1,&stack0x000000f8 + iVar1,&stack0x00000018 + iVar1,
                           (int)__dest + iVar3 + 0x84);
              if ((*(int *)(&stack0x00000018 + iVar1) == 0) ||
                 ((*(uint *)(param_1 + 0x138) & 0x100000) != 0)) {
                if (*(int *)(&stack0x0000001c + iVar1) == 0) {
                  if (*(int *)(&stack0x00000018 + iVar1) != 0) {
                    png_chunk_warning(param_1,DAT_002e1444 + 0x2e1310);
                  }
                  png_crc_finish(param_1,*(undefined4 *)(&stack0x00000018 + iVar1));
                  png_icc_set_sRGB(param_1,*(undefined4 *)(&stack0xfffffff8 + iVar1),__dest,
                                   *(undefined4 *)(param_1 + 0x174));
                  if (param_2 != 0) {
                    png_free_data(param_1,param_2,0x10,0);
                    __dest_00 = (void *)png_malloc_base(param_1,*(undefined4 *)
                                                                 (&stack0x00000000 + iVar1));
                    *(void **)(param_2 + 0x74) = __dest_00;
                    if (__dest_00 == (void *)0x0) {
                      iVar3 = DAT_002e144c + 0x2e1382;
                      *(ushort *)(param_1 + DAT_002e1438) =
                           *(ushort *)(param_1 + DAT_002e1438) | (ushort)DAT_002e1448;
                    }
                    else {
                      memcpy(__dest_00,&stack0x00000020 + iVar1,
                             *(size_t *)(&stack0x00000000 + iVar1));
                      uVar4 = *(undefined4 *)(&stack0xfffffff4 + iVar1);
                      *(void **)(param_2 + 0x78) = __dest;
                      iVar3 = 0;
                      *(undefined4 *)(param_2 + 0x7c) = uVar4;
                      *(undefined4 *)(param_1 + 0x378) = 0;
                      *(uint *)(param_2 + 0xe8) = *(uint *)(param_2 + 0xe8) | 0x10;
                      *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) | 0x1000;
                    }
                    png_colorspace_sync(param_1,param_2);
                    iVar2 = 1;
                    if (iVar3 != 0) goto LAB_002e13b2;
                  }
                  *(undefined4 *)(param_1 + 0x140) = 0;
                  goto LAB_002e140e;
                }
                iVar2 = 0;
                iVar3 = DAT_002e1458 + 0x2e13b4;
              }
              else {
                iVar3 = DAT_002e1454 + 0x2e13ac;
                iVar2 = 0;
              }
            }
            else {
              iVar3 = *(int *)(param_1 + 0x15c);
              iVar2 = *(int *)(&stack0x00000004 + iVar1);
            }
          }
        }
LAB_002e13b2:
        *(undefined4 *)(param_1 + 0x140) = 0;
        if (iVar2 == 0) goto LAB_002e13c2;
      }
      *(ushort *)(param_1 + DAT_002e1438) =
           *(ushort *)(param_1 + DAT_002e1438) | (ushort)DAT_002e1448;
      png_colorspace_sync(param_1,param_2);
      if (iVar3 == 0) goto LAB_002e140e;
    }
  }
  else {
    png_crc_finish();
    iVar3 = DAT_002e1430 + 0x2e1124;
  }
  png_chunk_benign_error(param_1,iVar3);
LAB_002e140e:
  if (*(int *)(&stack0xffffffec + DAT_002e1428 + iVar1) == **(int **)(&stack0x00000014 + iVar1)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


