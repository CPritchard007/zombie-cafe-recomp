/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002de354 png_do_read_transformations */

/* WARNING: Function: __gnu_thumb1_case_uhi replaced with injection: switch16_uhi_r0 */
/* WARNING (jumptable): Removing unreachable block (ram,0x002de9d6) */
/* WARNING: Removing unreachable block (ram,0x002de9d6) */

void png_do_read_transformations(int param_1,uint *param_2)

{
  byte *pbVar1;
  char cVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  ushort uVar6;
  int iVar7;
  int extraout_r1;
  undefined1 *puVar8;
  uint uVar9;
  byte *pbVar10;
  int iVar11;
  int iVar12;
  byte *pbVar13;
  byte *pbVar14;
  uint uVar15;
  undefined1 uVar16;
  undefined1 *puVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uStack_3c;
  
  iVar7 = *(int *)(param_1 + 0x1e4);
  if (iVar7 == 0) {
    FUN_002de382(param_1,DAT_002de694 + 0x2de36c);
    return;
  }
  iVar12 = param_1 + 0xfc;
  if ((DAT_002de698 & *(uint *)(param_1 + 0x138)) != 0x4000) goto LAB_002de388;
  iVar7 = DAT_002de69c + 0x2de384;
  while( true ) {
    png_error(param_1,iVar7);
    iVar7 = extraout_r1;
LAB_002de388:
    if (*(int *)(iVar12 + 0x40) << 0x13 < 0) {
      iVar7 = iVar7 + 1;
      if ((char)param_2[2] == '\x03') {
        iVar12 = *(int *)(param_1 + 0x204);
        iVar11 = *(int *)(param_1 + 0x274);
        uVar6 = *(ushort *)(param_1 + 0x210);
        bVar3 = *(byte *)((int)param_2 + 9);
        uVar5 = *param_2;
        if (bVar3 < 8) {
          if (bVar3 == 2) {
            pbVar13 = (byte *)((uVar5 - 1 >> 2) + iVar7);
            uVar9 = (~(uVar5 + 3) & 3) << 1;
            pbVar14 = (byte *)(iVar7 + (uVar5 - 1));
            for (uVar19 = 0; uVar19 != uVar5; uVar19 = uVar19 + 1) {
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
            pbVar14 = (byte *)(iVar7 + (uVar5 - 1 >> 1));
            pbVar13 = (byte *)(iVar7 + (uVar5 - 1));
            uVar19 = (uVar5 & 1) << 2;
            for (uVar9 = 0; uVar9 != uVar5; uVar9 = uVar9 + 1) {
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
            uVar19 = ~(uVar5 + 7) & 7;
            pbVar14 = (byte *)(iVar7 + (uVar5 - 1 >> 3));
            pbVar13 = (byte *)(iVar7 + (uVar5 - 1));
            for (uVar9 = 0; uVar9 != uVar5; uVar9 = uVar9 + 1) {
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
          *(undefined1 *)((int)param_2 + 9) = 8;
          *(undefined1 *)((int)param_2 + 0xb) = 8;
          param_2[1] = uVar5;
        }
        if (*(char *)((int)param_2 + 9) == '\b') {
          pbVar13 = (byte *)(iVar7 + (uVar5 - 1));
          if (uVar6 == 0) {
            puVar8 = (undefined1 *)(iVar7 + (uVar5 * 3 - 1));
            for (uVar9 = 0; uVar9 != uVar5; uVar9 = uVar9 + 1) {
              *puVar8 = *(undefined1 *)(iVar12 + (uint)*pbVar13 * 3 + 2);
              puVar8[-1] = *(undefined1 *)(iVar12 + (uint)*pbVar13 * 3 + 1);
              bVar3 = *pbVar13;
              pbVar13 = pbVar13 + -1;
              puVar8[-2] = *(undefined1 *)((uint)bVar3 * 3 + iVar12);
              puVar8 = puVar8 + -3;
            }
            *(undefined1 *)((int)param_2 + 9) = 8;
            *(undefined1 *)((int)param_2 + 0xb) = 0x18;
            *(undefined1 *)(param_2 + 2) = 2;
            param_2[1] = uVar5 * 3;
            uVar16 = 3;
          }
          else {
            puVar8 = (undefined1 *)(iVar7 + uVar5 * 4 + -2);
            for (uVar9 = 0; uVar9 != uVar5; uVar9 = uVar9 + 1) {
              if ((uint)*pbVar13 < (uint)uVar6) {
                uVar16 = *(undefined1 *)(iVar11 + (uint)*pbVar13);
              }
              else {
                uVar16 = 0xff;
              }
              puVar8[1] = uVar16;
              *puVar8 = *(undefined1 *)(iVar12 + (uint)*pbVar13 * 3 + 2);
              puVar8[-1] = *(undefined1 *)(iVar12 + (uint)*pbVar13 * 3 + 1);
              bVar3 = *pbVar13;
              pbVar13 = pbVar13 + -1;
              puVar17 = puVar8 + -2;
              puVar8 = puVar8 + -4;
              *puVar17 = *(undefined1 *)((uint)bVar3 * 3 + iVar12);
            }
            *(undefined1 *)((int)param_2 + 9) = 8;
            *(undefined1 *)((int)param_2 + 0xb) = 0x20;
            *(undefined1 *)(param_2 + 2) = 6;
            param_2[1] = uVar9 << 2;
            uVar16 = 4;
          }
          *(undefined1 *)((int)param_2 + 10) = uVar16;
        }
      }
      else {
        if ((*(short *)(param_1 + 0x210) == 0) || (-1 < *(int *)(iVar12 + 0x40) << 6)) {
          iVar12 = 0;
        }
        else {
          iVar12 = param_1 + 0x278;
        }
        FUN_002dc880(param_2,iVar7,iVar12);
      }
    }
    if (((*(uint *)(param_1 + 0x13c) & DAT_002de6a0) == 0x40000) &&
       (((char)param_2[2] == '\x04' || ((char)param_2[2] == '\x06')))) {
      png_do_strip_channel(param_2,*(int *)(param_1 + 0x1e4) + 1,0);
    }
    if ((*(uint *)(param_1 + 0x13c) & 0x600000) == 0) break;
    if (((byte)param_2[2] & 3) != 2) break;
    uVar19 = *param_2;
    uVar5 = (uint)*(ushort *)(param_1 + DAT_002de6a4);
    iVar12 = (uint)(byte)param_2[2] << 0x1d;
    uVar9 = (uint)*(ushort *)(param_1 + 0x324);
    iVar7 = 0x8000 - (uVar9 + uVar5);
    pbVar13 = (byte *)(*(int *)(param_1 + 0x1e4) + 1);
    if (*(char *)((int)param_2 + 9) == '\b') {
      if ((*(int *)(param_1 + 600) == 0) || (*(int *)(param_1 + 0x25c) == 0)) {
        uVar4 = 0;
        pbVar14 = pbVar13;
        uVar21 = uVar4;
        for (; uVar4 != uVar19; uVar4 = uVar4 + 1) {
          uVar18 = (uint)*pbVar13;
          if ((uVar18 == pbVar13[2]) && (uVar18 == pbVar13[1])) {
            *pbVar14 = *pbVar13;
          }
          else {
            *pbVar14 = (byte)(uVar9 * pbVar13[1] + uVar5 * uVar18 + iVar7 * (uint)pbVar13[2] >> 0xf)
            ;
            uVar21 = 1;
          }
          pbVar10 = pbVar14 + 1;
          if (iVar12 < 0) {
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
        for (uVar4 = 0; uVar4 != uVar19; uVar4 = uVar4 + 1) {
          bVar3 = *pbVar13;
          uVar18 = (uint)bVar3;
          if ((uVar18 == pbVar13[2]) && (uVar18 == pbVar13[1])) {
            if (*(int *)(param_1 + 0x250) != 0) {
              bVar3 = *(byte *)(*(int *)(param_1 + 0x250) + uVar18);
            }
            *pbVar14 = bVar3;
          }
          else {
            iVar11 = *(int *)(param_1 + 0x25c);
            *pbVar14 = *(byte *)(*(int *)(param_1 + 600) +
                                (uVar5 * *(byte *)(iVar11 + uVar18) +
                                 uVar9 * *(byte *)(iVar11 + (uint)pbVar13[1]) + 0x4000 +
                                 iVar7 * (uint)*(byte *)(iVar11 + (uint)pbVar13[2]) >> 0xf));
            uVar21 = 1;
          }
          pbVar10 = pbVar14 + 1;
          if (iVar12 < 0) {
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
    else if ((*(int *)(param_1 + 0x264) == 0) || (*(int *)(param_1 + 0x260) == 0)) {
      uVar4 = 0;
      pbVar14 = pbVar13;
      uVar21 = uVar4;
      for (; uVar4 != uVar19; uVar4 = uVar4 + 1) {
        uVar18 = (uint)CONCAT11(*pbVar14,pbVar14[1]);
        if ((uVar18 != CONCAT11(pbVar14[4],pbVar14[5])) ||
           (uVar18 != CONCAT11(pbVar14[2],pbVar14[3]))) {
          uVar21 = 1;
        }
        uVar18 = uVar5 * uVar18 + CONCAT11(pbVar14[2],pbVar14[3]) * uVar9 + 0x4000 +
                 iVar7 * (uint)CONCAT11(pbVar14[4],pbVar14[5]) >> 0xf;
        *pbVar13 = (byte)(uVar18 >> 8);
        pbVar13[1] = (byte)uVar18;
        if (iVar12 < 0) {
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
      for (uStack_3c = 0; uStack_3c != uVar19; uStack_3c = uStack_3c + 1) {
        uVar6 = CONCAT11(*pbVar14,pbVar14[1]);
        uVar4 = (uint)uVar6;
        uVar18 = (uint)CONCAT11(pbVar14[2],pbVar14[3]);
        uVar20 = (uint)CONCAT11(pbVar14[4],pbVar14[5]);
        if ((uVar4 == uVar20) && (uVar4 == uVar18)) {
          if (*(int *)(param_1 + 0x254) != 0) {
            uVar6 = *(ushort *)
                     (*(int *)(((int)(uVar4 & 0xff) >> (*(uint *)(param_1 + 0x248) & 0xff)) * 4 +
                              *(int *)(param_1 + 0x254)) + ((uVar4 << 0x10) >> 0x18) * 2);
          }
        }
        else {
          uVar15 = *(uint *)(param_1 + 0x248);
          iVar11 = *(int *)(param_1 + 0x264);
          uVar21 = *(ushort *)
                    ((uint)*pbVar14 * 2 +
                    *(int *)(((int)(uVar4 & 0xff) >> (uVar15 & 0xff)) * 4 + iVar11)) * uVar5 +
                   uVar9 * *(ushort *)
                            ((uint)pbVar14[2] * 2 +
                            *(int *)(((int)(uVar18 & 0xff) >> (uVar15 & 0xff)) * 4 + iVar11)) +
                   0x4000 + iVar7 * (uint)*(ushort *)
                                           ((uint)pbVar14[4] * 2 +
                                           *(int *)(((int)(uVar20 & 0xff) >> (uVar15 & 0xff)) * 4 +
                                                   iVar11)) >> 0xf;
          uVar6 = *(ushort *)
                   (((uVar21 << 0x10) >> 0x18) * 2 +
                   *(int *)(((int)(uVar21 & 0xff) >> (uVar15 & 0xff)) * 4 +
                           *(int *)(param_1 + 0x260)));
          uVar21 = 1;
        }
        *pbVar13 = (byte)(uVar6 >> 8);
        pbVar13[1] = (byte)uVar6;
        if (iVar12 < 0) {
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
    cVar2 = *(char *)((int)param_2 + 10);
    *(byte *)(param_2 + 2) = (byte)param_2[2] & 0xfd;
    *(char *)((int)param_2 + 10) = cVar2 + -2;
    bVar3 = *(char *)((int)param_2 + 9) * (cVar2 + -2);
    *(byte *)((int)param_2 + 0xb) = bVar3;
    if (bVar3 < 8) {
      uVar19 = uVar19 * bVar3 + 7 >> 3;
    }
    else {
      uVar19 = uVar19 * (bVar3 >> 3);
    }
    param_2[1] = uVar19;
    if (uVar21 == 0) break;
    *(undefined1 *)(param_1 + 800) = 1;
    if ((*(uint *)(param_1 + 0x13c) & 0x600000) == 0x400000) {
      png_warning(param_1,DAT_002dec4c + 0x2de930);
    }
    iVar12 = 0x200000;
    if ((*(uint *)(param_1 + 0x13c) & 0x600000) != 0x200000) break;
    iVar7 = DAT_002dec50 + 0x2de94c;
  }
  if (((*(uint *)(param_1 + 0x13c) & 0x4000) != 0) && (-1 < *(int *)(param_1 + 0x134) << 0x14)) {
    FUN_002dc74c(param_2,*(int *)(param_1 + 0x1e4) + 1);
  }
  if (-1 < *(int *)(param_1 + 0x13c) << 0x18) {
    FUN_002df53e();
  }
  uVar5 = (uint)(byte)param_2[2];
  if (6 < uVar5) {
    uVar5 = FUN_002df53e(uVar5,*param_2,*(undefined4 *)(param_1 + 0x250),
                         *(int *)(param_1 + 0x1e4) + 1);
  }
                    /* WARNING: Could not recover jumptable at 0x002de9d6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&UNK_002de9db + (uint)*(ushort *)(&UNK_002de9da + uVar5 * 2) * 2))();
  return;
}


