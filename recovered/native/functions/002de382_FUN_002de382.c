/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002de382 FUN_002de382 */

/* WARNING: Function: __gnu_thumb1_case_uhi replaced with injection: switch16_uhi_r0 */
/* WARNING (jumptable): Removing unreachable block (ram,0x002de9d6) */
/* WARNING: Removing unreachable block (ram,0x002de9d6) */

void FUN_002de382(undefined4 param_1,int param_2,undefined4 param_3,int param_4)

{
  byte *pbVar1;
  char cVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  ushort uVar7;
  int extraout_r1;
  undefined1 *puVar8;
  uint uVar9;
  byte *pbVar10;
  int iVar11;
  int iVar12;
  byte *pbVar13;
  byte *pbVar14;
  int unaff_r4;
  uint *unaff_r5;
  uint uVar15;
  undefined1 uVar16;
  undefined1 *puVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uStack0000001c;
  
  while( true ) {
    png_error(unaff_r4,param_2);
    if (*(int *)(param_4 + 0x40) << 0x13 < 0) {
      iVar4 = extraout_r1 + 1;
      if ((char)unaff_r5[2] == '\x03') {
        iVar11 = *(int *)(unaff_r4 + 0x204);
        iVar12 = *(int *)(unaff_r4 + 0x274);
        uVar7 = *(ushort *)(unaff_r4 + 0x210);
        bVar3 = *(byte *)((int)unaff_r5 + 9);
        uVar6 = *unaff_r5;
        if (bVar3 < 8) {
          if (bVar3 == 2) {
            pbVar13 = (byte *)((uVar6 - 1 >> 2) + iVar4);
            uVar9 = (~(uVar6 + 3) & 3) << 1;
            pbVar14 = (byte *)(iVar4 + (uVar6 - 1));
            for (uVar19 = 0; uVar19 != uVar6; uVar19 = uVar19 + 1) {
              *pbVar14 = (byte)((int)(uint)*pbVar13 >> (uVar9 & 0xff)) & 3;
              if (uVar9 == 6) {
                pbVar13 = pbVar13 + -1;
                uVar9 = 0;
              }
              else {
                uVar9 = uVar9 + 2;
              }
              pbVar14 = pbVar14 + -1;
            }
          }
          else if (bVar3 == 4) {
            pbVar14 = (byte *)(iVar4 + (uVar6 - 1 >> 1));
            pbVar13 = (byte *)(iVar4 + (uVar6 - 1));
            uVar19 = (uVar6 & 1) << 2;
            for (uVar9 = 0; uVar9 != uVar6; uVar9 = uVar9 + 1) {
              *pbVar13 = (byte)((int)(uint)*pbVar14 >> (uVar19 & 0xff)) & 0xf;
              if (uVar19 == 4) {
                pbVar14 = pbVar14 + -1;
                uVar19 = 0;
              }
              else {
                uVar19 = uVar19 + 4;
              }
              pbVar13 = pbVar13 + -1;
            }
          }
          else if (bVar3 == 1) {
            uVar19 = ~(uVar6 + 7) & 7;
            pbVar14 = (byte *)(iVar4 + (uVar6 - 1 >> 3));
            pbVar13 = (byte *)(iVar4 + (uVar6 - 1));
            for (uVar9 = 0; uVar9 != uVar6; uVar9 = uVar9 + 1) {
              *pbVar13 = (byte)((int)(uint)*pbVar14 >> (uVar19 & 0xff)) & 1;
              if (uVar19 == 7) {
                pbVar14 = pbVar14 + -1;
                uVar19 = 0;
              }
              else {
                uVar19 = uVar19 + 1;
              }
              pbVar13 = pbVar13 + -1;
            }
          }
          *(undefined1 *)((int)unaff_r5 + 9) = 8;
          *(undefined1 *)((int)unaff_r5 + 0xb) = 8;
          unaff_r5[1] = uVar6;
        }
        if (*(char *)((int)unaff_r5 + 9) == '\b') {
          pbVar13 = (byte *)(iVar4 + (uVar6 - 1));
          if (uVar7 == 0) {
            puVar8 = (undefined1 *)(iVar4 + (uVar6 * 3 - 1));
            for (uVar9 = 0; uVar9 != uVar6; uVar9 = uVar9 + 1) {
              *puVar8 = *(undefined1 *)(iVar11 + (uint)*pbVar13 * 3 + 2);
              puVar8[-1] = *(undefined1 *)(iVar11 + (uint)*pbVar13 * 3 + 1);
              bVar3 = *pbVar13;
              pbVar13 = pbVar13 + -1;
              puVar8[-2] = *(undefined1 *)((uint)bVar3 * 3 + iVar11);
              puVar8 = puVar8 + -3;
            }
            *(undefined1 *)((int)unaff_r5 + 9) = 8;
            *(undefined1 *)((int)unaff_r5 + 0xb) = 0x18;
            *(undefined1 *)(unaff_r5 + 2) = 2;
            unaff_r5[1] = uVar6 * 3;
            uVar16 = 3;
          }
          else {
            puVar8 = (undefined1 *)(iVar4 + uVar6 * 4 + -2);
            for (uVar9 = 0; uVar9 != uVar6; uVar9 = uVar9 + 1) {
              if ((uint)*pbVar13 < (uint)uVar7) {
                uVar16 = *(undefined1 *)(iVar12 + (uint)*pbVar13);
              }
              else {
                uVar16 = 0xff;
              }
              puVar8[1] = uVar16;
              *puVar8 = *(undefined1 *)(iVar11 + (uint)*pbVar13 * 3 + 2);
              puVar8[-1] = *(undefined1 *)(iVar11 + (uint)*pbVar13 * 3 + 1);
              bVar3 = *pbVar13;
              pbVar13 = pbVar13 + -1;
              puVar17 = puVar8 + -2;
              puVar8 = puVar8 + -4;
              *puVar17 = *(undefined1 *)((uint)bVar3 * 3 + iVar11);
            }
            *(undefined1 *)((int)unaff_r5 + 9) = 8;
            *(undefined1 *)((int)unaff_r5 + 0xb) = 0x20;
            *(undefined1 *)(unaff_r5 + 2) = 6;
            unaff_r5[1] = uVar9 << 2;
            uVar16 = 4;
          }
          *(undefined1 *)((int)unaff_r5 + 10) = uVar16;
        }
      }
      else {
        if ((*(short *)(unaff_r4 + 0x210) == 0) || (-1 < *(int *)(param_4 + 0x40) << 6)) {
          iVar11 = 0;
        }
        else {
          iVar11 = unaff_r4 + 0x278;
        }
        FUN_002dc880(unaff_r5,iVar4,iVar11);
      }
    }
    if (((*(uint *)(unaff_r4 + 0x13c) & DAT_002de6a0) == 0x40000) &&
       (((char)unaff_r5[2] == '\x04' || ((char)unaff_r5[2] == '\x06')))) {
      png_do_strip_channel(unaff_r5,*(int *)(unaff_r4 + 0x1e4) + 1,0);
    }
    if ((*(uint *)(unaff_r4 + 0x13c) & 0x600000) == 0) break;
    if (((byte)unaff_r5[2] & 3) != 2) break;
    uVar19 = *unaff_r5;
    uVar6 = (uint)*(ushort *)(unaff_r4 + DAT_002de6a4);
    iVar11 = (uint)(byte)unaff_r5[2] << 0x1d;
    uVar9 = (uint)*(ushort *)(unaff_r4 + 0x324);
    iVar4 = 0x8000 - (uVar9 + uVar6);
    pbVar13 = (byte *)(*(int *)(unaff_r4 + 0x1e4) + 1);
    if (*(char *)((int)unaff_r5 + 9) == '\b') {
      if ((*(int *)(unaff_r4 + 600) == 0) || (*(int *)(unaff_r4 + 0x25c) == 0)) {
        uVar5 = 0;
        pbVar14 = pbVar13;
        uVar21 = uVar5;
        for (; uVar5 != uVar19; uVar5 = uVar5 + 1) {
          uVar18 = (uint)*pbVar13;
          if ((uVar18 == pbVar13[2]) && (uVar18 == pbVar13[1])) {
            *pbVar14 = *pbVar13;
          }
          else {
            *pbVar14 = (byte)(uVar9 * pbVar13[1] + uVar6 * uVar18 + iVar4 * (uint)pbVar13[2] >> 0xf)
            ;
            uVar21 = 1;
          }
          pbVar10 = pbVar14 + 1;
          if (iVar11 < 0) {
            pbVar1 = pbVar13 + 3;
            pbVar13 = pbVar13 + 4;
            *pbVar10 = *pbVar1;
            pbVar10 = pbVar14 + 2;
          }
          else {
            pbVar13 = pbVar13 + 3;
          }
          pbVar14 = pbVar10;
        }
      }
      else {
        uVar21 = 0;
        pbVar14 = pbVar13;
        for (uVar5 = 0; uVar5 != uVar19; uVar5 = uVar5 + 1) {
          bVar3 = *pbVar13;
          uVar18 = (uint)bVar3;
          if ((uVar18 == pbVar13[2]) && (uVar18 == pbVar13[1])) {
            if (*(int *)(unaff_r4 + 0x250) != 0) {
              bVar3 = *(byte *)(*(int *)(unaff_r4 + 0x250) + uVar18);
            }
            *pbVar14 = bVar3;
          }
          else {
            iVar12 = *(int *)(unaff_r4 + 0x25c);
            *pbVar14 = *(byte *)(*(int *)(unaff_r4 + 600) +
                                (uVar6 * *(byte *)(iVar12 + uVar18) +
                                 uVar9 * *(byte *)(iVar12 + (uint)pbVar13[1]) + 0x4000 +
                                 iVar4 * (uint)*(byte *)(iVar12 + (uint)pbVar13[2]) >> 0xf));
            uVar21 = 1;
          }
          pbVar10 = pbVar14 + 1;
          if (iVar11 < 0) {
            pbVar1 = pbVar13 + 3;
            pbVar13 = pbVar13 + 4;
            *pbVar10 = *pbVar1;
            pbVar10 = pbVar14 + 2;
          }
          else {
            pbVar13 = pbVar13 + 3;
          }
          pbVar14 = pbVar10;
        }
      }
    }
    else if ((*(int *)(unaff_r4 + 0x264) == 0) || (*(int *)(unaff_r4 + 0x260) == 0)) {
      uVar5 = 0;
      pbVar14 = pbVar13;
      uVar21 = uVar5;
      for (; uVar5 != uVar19; uVar5 = uVar5 + 1) {
        uVar18 = (uint)CONCAT11(*pbVar14,pbVar14[1]);
        if ((uVar18 != CONCAT11(pbVar14[4],pbVar14[5])) ||
           (uVar18 != CONCAT11(pbVar14[2],pbVar14[3]))) {
          uVar21 = 1;
        }
        uVar18 = uVar6 * uVar18 + CONCAT11(pbVar14[2],pbVar14[3]) * uVar9 + 0x4000 +
                 iVar4 * (uint)CONCAT11(pbVar14[4],pbVar14[5]) >> 0xf;
        *pbVar13 = (byte)(uVar18 >> 8);
        pbVar13[1] = (byte)uVar18;
        if (iVar11 < 0) {
          pbVar13[2] = pbVar14[6];
          pbVar10 = pbVar14 + 7;
          pbVar14 = pbVar14 + 8;
          pbVar13[3] = *pbVar10;
          pbVar13 = pbVar13 + 4;
        }
        else {
          pbVar14 = pbVar14 + 6;
          pbVar13 = pbVar13 + 2;
        }
      }
    }
    else {
      uVar21 = 0;
      pbVar14 = pbVar13;
      for (uStack0000001c = 0; uStack0000001c != uVar19; uStack0000001c = uStack0000001c + 1) {
        uVar7 = CONCAT11(*pbVar14,pbVar14[1]);
        uVar5 = (uint)uVar7;
        uVar18 = (uint)CONCAT11(pbVar14[2],pbVar14[3]);
        uVar20 = (uint)CONCAT11(pbVar14[4],pbVar14[5]);
        if ((uVar5 == uVar20) && (uVar5 == uVar18)) {
          if (*(int *)(unaff_r4 + 0x254) != 0) {
            uVar7 = *(ushort *)
                     (*(int *)(((int)(uVar5 & 0xff) >> (*(uint *)(unaff_r4 + 0x248) & 0xff)) * 4 +
                              *(int *)(unaff_r4 + 0x254)) + ((uVar5 << 0x10) >> 0x18) * 2);
          }
        }
        else {
          uVar15 = *(uint *)(unaff_r4 + 0x248);
          iVar12 = *(int *)(unaff_r4 + 0x264);
          uVar21 = *(ushort *)
                    ((uint)*pbVar14 * 2 +
                    *(int *)(((int)(uVar5 & 0xff) >> (uVar15 & 0xff)) * 4 + iVar12)) * uVar6 +
                   uVar9 * *(ushort *)
                            ((uint)pbVar14[2] * 2 +
                            *(int *)(((int)(uVar18 & 0xff) >> (uVar15 & 0xff)) * 4 + iVar12)) +
                   0x4000 + iVar4 * (uint)*(ushort *)
                                           ((uint)pbVar14[4] * 2 +
                                           *(int *)(((int)(uVar20 & 0xff) >> (uVar15 & 0xff)) * 4 +
                                                   iVar12)) >> 0xf;
          uVar7 = *(ushort *)
                   (((uVar21 << 0x10) >> 0x18) * 2 +
                   *(int *)(((int)(uVar21 & 0xff) >> (uVar15 & 0xff)) * 4 +
                           *(int *)(unaff_r4 + 0x260)));
          uVar21 = 1;
        }
        *pbVar13 = (byte)(uVar7 >> 8);
        pbVar13[1] = (byte)uVar7;
        if (iVar11 < 0) {
          pbVar13[2] = pbVar14[6];
          pbVar10 = pbVar14 + 7;
          pbVar14 = pbVar14 + 8;
          pbVar13[3] = *pbVar10;
          pbVar13 = pbVar13 + 4;
        }
        else {
          pbVar14 = pbVar14 + 6;
          pbVar13 = pbVar13 + 2;
        }
      }
    }
    cVar2 = *(char *)((int)unaff_r5 + 10);
    *(byte *)(unaff_r5 + 2) = (byte)unaff_r5[2] & 0xfd;
    *(char *)((int)unaff_r5 + 10) = cVar2 + -2;
    bVar3 = *(char *)((int)unaff_r5 + 9) * (cVar2 + -2);
    *(byte *)((int)unaff_r5 + 0xb) = bVar3;
    if (bVar3 < 8) {
      uVar19 = uVar19 * bVar3 + 7 >> 3;
    }
    else {
      uVar19 = uVar19 * (bVar3 >> 3);
    }
    unaff_r5[1] = uVar19;
    if (uVar21 == 0) break;
    *(undefined1 *)(unaff_r4 + 800) = 1;
    if ((*(uint *)(unaff_r4 + 0x13c) & 0x600000) == 0x400000) {
      png_warning(unaff_r4,DAT_002dec4c + 0x2de930);
    }
    param_4 = 0x200000;
    if ((*(uint *)(unaff_r4 + 0x13c) & 0x600000) != 0x200000) break;
    param_2 = DAT_002dec50 + 0x2de94c;
  }
  if (((*(uint *)(unaff_r4 + 0x13c) & 0x4000) != 0) && (-1 < *(int *)(unaff_r4 + 0x134) << 0x14)) {
    FUN_002dc74c(unaff_r5,*(int *)(unaff_r4 + 0x1e4) + 1);
  }
  if (-1 < *(int *)(unaff_r4 + 0x13c) << 0x18) {
    FUN_002df53e();
  }
  uVar6 = (uint)(byte)unaff_r5[2];
  if (6 < uVar6) {
    uVar6 = FUN_002df53e(uVar6,*unaff_r5,*(undefined4 *)(unaff_r4 + 0x250),
                         *(int *)(unaff_r4 + 0x1e4) + 1);
  }
                    /* WARNING: Could not recover jumptable at 0x002de9d6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&UNK_002de9db + (uint)*(ushort *)(&UNK_002de9da + uVar6 * 2) * 2))();
  return;
}


