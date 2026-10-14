/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0027a354 FUN_0027a354 */

void FUN_0027a354(void)

{
  byte bVar1;
  char cVar2;
  undefined2 uVar3;
  int *piVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  byte *pbVar9;
  char *pcVar10;
  int *piVar11;
  uint uVar12;
  undefined1 uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  uint uVar18;
  int *unaff_r4;
  int iVar19;
  uint *puVar20;
  undefined1 *puVar21;
  int iVar22;
  int iVar23;
  int *piVar24;
  undefined4 *puVar25;
  int iVar26;
  uint *puVar27;
  int iVar28;
  uint uVar29;
  int iVar30;
  uint uVar31;
  uint uVar32;
  int unaff_r6;
  uint uVar33;
  bool bVar34;
  undefined8 uVar35;
  uint *in_stack_00000020;
  int *in_stack_00000024;
  uint in_stack_00000028;
  int *in_stack_00000030;
  uint in_stack_00000038;
  uint in_stack_0000003c;
  uint in_stack_00000040;
  uint in_stack_00000044;
  undefined2 *in_stack_00000048;
  undefined4 *in_stack_0000004c;
  uint in_stack_00000050;
  uint in_stack_00000054;
  undefined4 in_stack_00000058;
  undefined4 *in_stack_0000005c;
  int in_stack_00000060;
  int in_stack_00000064;
  int iStack00000068;
  int *in_stack_00000070;
  uint in_stack_00000074;
  uint in_stack_0000007c;
  uint uStack00000088;
  uint uStack0000008c;
  int in_stack_00000090;
  int *in_stack_00000094;
  uint in_stack_00000098;
  int in_stack_0000009c;
  uint in_stack_000000a0;
  int in_stack_000000a4;
  uint in_stack_000000a8;
  uint in_stack_000000ac;
  undefined4 in_stack_000000b4;
  
  uVar35 = CONCAT44(in_stack_0000003c,in_stack_00000038);
  do {
    in_stack_0000003c = (uint)((ulonglong)uVar35 >> 0x20);
    in_stack_00000038 = (uint)uVar35;
    if ((in_stack_00000044 & in_stack_0000003c) == 0 && (in_stack_00000040 & in_stack_00000038) == 0
       ) {
      in_stack_00000040 = in_stack_00000040 | in_stack_00000038;
      in_stack_00000028 = in_stack_00000028 + 1;
      in_stack_00000044 = in_stack_00000044 | in_stack_0000003c;
    }
    do {
      do {
        unaff_r4 = unaff_r4 + 10;
        while (in_stack_00000094 <= unaff_r4) {
          in_stack_00000020[1] = in_stack_00000028;
          uVar33 = *(uint *)(unaff_r6 + 0x34);
          iVar26 = *(int *)(in_stack_00000060 + 8);
          uVar16 = (~in_stack_00000044 | 0x80000000) & uVar33;
          uVar12 = *(uint *)(unaff_r6 + 0x30) & ~in_stack_00000040;
          iStack00000068 = iVar26;
          if (0x3f < iVar26) {
            iStack00000068 = 0x3f;
          }
          for (iVar19 = 0; iVar19 < iStack00000068; iVar19 = iVar19 + 1) {
            uVar18 = __lshrdi3(uVar12,uVar16,iVar19);
            in_stack_00000028 = in_stack_00000028 + (uVar18 & 1);
          }
          if ((int)uVar33 < 0) {
            in_stack_00000028 = in_stack_00000028 + iVar26 + -0x3f;
          }
          *in_stack_00000020 = *in_stack_00000020 | DAT_0027a734;
          piVar4 = (int *)FUN_0025f04c(*in_stack_0000005c,in_stack_00000028 * 9 + 0x30);
          puVar27 = in_stack_00000020;
          if (piVar4 != (int *)0x0) {
            piVar24 = piVar4 + 0xc;
            in_stack_00000020[4] = (uint)piVar4;
            piVar4[8] = (int)piVar24;
            piVar4[7] = (int)(piVar24 + in_stack_00000028 + in_stack_00000028);
            piVar4[1] = (int)(piVar24 + in_stack_00000028);
            iVar26 = DAT_0027a738;
            piVar4[9] = in_stack_00000028;
            *piVar4 = iVar26 + 0x27a41a;
            piVar4[3] = in_stack_00000060;
            in_stack_00000040 = 0;
            in_stack_00000044 = 0;
            piVar24 = *(int **)(in_stack_00000074 + 0x20);
            in_stack_00000030 = (int *)0x0;
            iVar26 = DAT_0027a73c + 0x27a432;
            for (; piVar24 < in_stack_00000094; piVar24 = piVar24 + 10) {
              if (((piVar24[2] == *(int *)(unaff_r6 + 0x20)) && ((short)piVar24[4] == 2)) &&
                 ((piVar24[7] & in_stack_00000054) == 0 && (piVar24[6] & in_stack_00000050) == 0)) {
                iVar22 = piVar24[3];
                iVar19 = *piVar24;
                bVar1 = *(byte *)(*(int *)(*(int *)(unaff_r6 + 0xc) + 0xc) + iVar22 * 0x18 + 0x16);
                iVar17 = FUN_0025cd42();
                if (iVar17 == 0x61) {
LAB_0027a476:
                  bVar34 = bVar1 == 0x61;
                }
                else {
                  if (iVar17 == 0x62) {
                    FUN_0027b26c();
                    goto LAB_0027a476;
                  }
                  bVar34 = 0x62 < bVar1;
                }
                if (bVar34) {
                  FUN_0027b26c();
                  uVar35 = __ashldi3(1,0,iVar22);
                  uVar33 = (uint)((ulonglong)uVar35 >> 0x20);
                  if ((in_stack_00000044 & uVar33) == 0 && (in_stack_00000040 & (uint)uVar35) == 0)
                  {
                    in_stack_00000044 = in_stack_00000044 | uVar33;
                    in_stack_00000040 = in_stack_00000040 | (uint)uVar35;
                    *(int *)(piVar4[1] + (int)in_stack_00000030 * 4) = iVar22;
                    piVar11 = (int *)FUN_0026d3c4(in_stack_0000005c,*(undefined4 *)(iVar19 + 8),
                                                  *(undefined4 *)(iVar19 + 0xc));
                    iVar19 = iVar26;
                    if (piVar11 != (int *)0x0) {
                      iVar19 = *piVar11;
                    }
                    *(int *)(piVar4[8] + (int)in_stack_00000030 * 4) = iVar19;
                    in_stack_00000030 = (int *)((int)in_stack_00000030 + 1);
                  }
                }
              }
            }
            iVar19 = DAT_0027a740 + 0x27a4f2;
            for (iVar26 = 0; iVar26 < iStack00000068; iVar26 = iVar26 + 1) {
              uVar33 = __lshrdi3(uVar12,uVar16,iVar26);
              if ((uVar33 & 1) != 0) {
                *(int *)(piVar4[1] + (int)in_stack_00000030 * 4) = iVar26;
                *(int *)(piVar4[8] + (int)in_stack_00000030 * 4) = iVar19;
                in_stack_00000030 = (int *)((int)in_stack_00000030 + 1);
              }
            }
            if (*(int *)(unaff_r6 + 0x34) < 0) {
              iVar19 = (int)in_stack_00000030 << 2;
              iVar26 = DAT_0027a744 + 0x27a52e;
              for (iVar17 = 0x3f; iVar17 < *(int *)(in_stack_00000060 + 8); iVar17 = iVar17 + 1) {
                *(int *)(piVar4[1] + iVar19) = iVar17;
                *(int *)(piVar4[8] + iVar19) = iVar26;
                iVar19 = iVar19 + 4;
              }
            }
            FUN_0026e770(in_stack_0000005c,piVar4);
            FUN_002662da(in_stack_00000024,0x29,in_stack_00000020[8],in_stack_00000028 + 1);
            iVar26 = FUN_002665da(in_stack_00000024,0x48,in_stack_00000020[7]);
            uVar5 = FUN_002627dc(in_stack_0000005c);
            FUN_002707d4(in_stack_0000005c,piVar4,in_stack_00000020[7],uVar5);
            FUN_0026641e(in_stack_00000024,0x61,in_stack_00000020[8],uVar5);
            FUN_0025c3b8(in_stack_00000024,0x10);
            FUN_0026641e(in_stack_00000024,0x5f,in_stack_00000020[7],iVar26 + 1);
            FUN_0025c3b8(in_stack_00000024,3);
            FUN_002624c2(in_stack_00000024,iVar26);
            FUN_002627fe(in_stack_0000005c,uVar5);
            FUN_002624c2(in_stack_00000024,in_stack_000000a0);
          }
          while( true ) {
            in_stack_00000020 = puVar27;
            FUN_00275ec4(in_stack_0000005c,in_stack_00000058);
            uVar35 = FUN_0025d3f8(*(undefined4 *)(in_stack_00000074 + 4),
                                  *(undefined4 *)(unaff_r6 + 0x20));
            in_stack_00000030 = (int *)(in_stack_00000050 & ~(uint)uVar35);
            in_stack_00000054 = in_stack_00000054 & ~(uint)((ulonglong)uVar35 >> 0x20);
            in_stack_00000070 = (int *)((int)in_stack_00000070 + 1);
            puVar27 = in_stack_00000020 + 0x14;
            if (in_stack_0000009c <= (int)in_stack_00000070) {
              in_stack_0000004c[4] = *(undefined4 *)(in_stack_00000064 + 0x1c);
              uVar12 = (uint)*(byte *)((int)in_stack_00000048 + 0x36);
              if (uVar12 != 0) {
                FUN_0027b228();
              }
              in_stack_000000ac = in_stack_00000098 & 0x20;
              FUN_0027b21a();
              puVar27 = in_stack_0000004c + uVar12 * 0x14 + 0xe;
              if (*(char *)(in_stack_0000005c + 0x75) == '\x02') {
                FUN_0026aa30(in_stack_0000005c,in_stack_00000090,puVar27,uVar12);
              }
              piVar4 = (int *)*in_stack_0000004c;
              iVar26 = in_stack_0000004c[8];
              iVar19 = piVar4[2];
              in_stack_00000030 =
                   (int *)(in_stack_0000004c[3] + (uint)(byte)puVar27[0xd] * 0x40 + 8);
              in_stack_00000024 = (int *)*puVar27;
              uVar16 = *(uint *)((int)in_stack_00000030 + 0x20);
              in_stack_00000094 = (int *)((uint)in_stack_00000024 & 0x800000);
              if (in_stack_00000094 != (int *)0x0) {
                in_stack_00000094 = (int *)(uint)(in_stack_000000ac == 0);
              }
              in_stack_00000048 = (undefined2 *)FUN_00266020(iVar19);
              puVar27[10] = (uint)in_stack_00000048;
              puVar27[9] = (uint)in_stack_00000048;
              uVar33 = FUN_00266020(iVar19);
              puVar27[0xb] = uVar33;
              if (((char)puVar27[0xd] != '\0') &&
                 ((int)((uint)*(byte *)((int)in_stack_00000030 + 0x1c) << 0x1c) < 0)) {
                iVar17 = piVar4[0x13];
                piVar4[0x13] = iVar17 + 1U;
                puVar27[6] = iVar17 + 1U;
                FUN_0026641e(iVar19,7,0);
              }
              uVar18 = *puVar27;
              if ((uVar18 & 0x8000000) == 0) goto LAB_0027a838;
              puVar20 = (uint *)puVar27[4];
              in_stack_00000024 = (int *)*puVar20;
              piVar24 = (int *)puVar20[4];
              uVar18 = puVar20[1];
              piVar4[0x17] = piVar4[0x17] + 1;
              iVar17 = FUN_00262834(piVar4,(int)in_stack_00000024 + 2U);
              iVar22 = 1;
              goto LAB_0027a78e;
            }
            unaff_r6 = in_stack_00000090 + (uint)(byte)in_stack_00000020[0x21] * 0x40 + 8;
            iVar26 = *(int *)(unaff_r6 + 0xc);
            in_stack_00000020[0x1b] = *(uint *)(unaff_r6 + 0x20);
            uVar35 = __muldf3(in_stack_0000004c[0xc],in_stack_0000004c[0xd],in_stack_00000020[0x16],
                              in_stack_00000020[0x17]);
            *(undefined8 *)(in_stack_0000004c + 0xc) = uVar35;
            in_stack_00000058 = FUN_0025d12c(in_stack_00000048,*(undefined4 *)(iVar26 + 0x44));
            if (((*(byte *)(iVar26 + 0x22) & 2) == 0) && (*(int *)(iVar26 + 0x1c) == 0)) {
              if ((int)(*puVar27 << 4) < 0) {
                FUN_0025d364(in_stack_00000048,iVar26);
                FUN_002662da(in_stack_00000064,0x87,*(undefined4 *)(unaff_r6 + 0x20),0);
              }
              else if (((int)(*puVar27 << 8) < 0) || ((int)(in_stack_00000098 << 0x1b) < 0)) {
                FUN_00265f96(in_stack_0000005c,in_stack_00000058,*(undefined4 *)(iVar26 + 0x14),0);
              }
              else {
                FUN_002663cc(in_stack_0000005c,*(undefined4 *)(unaff_r6 + 0x20),in_stack_00000058,
                             iVar26);
                if ((*(char *)((int)in_stack_0000004c + 6) == '\0') && (*(int *)(iVar26 + 8) < 0x40)
                   ) {
                  uVar16 = *(uint *)(unaff_r6 + 0x34);
                  iVar26 = 0;
                  for (uVar12 = *(uint *)(unaff_r6 + 0x30); uVar12 != 0 || uVar16 != 0;
                      uVar12 = uVar12 >> 1 | uVar33) {
                    uVar33 = uVar16 << 0x1f;
                    uVar16 = uVar16 >> 1;
                    iVar26 = iVar26 + 1;
                  }
                  FUN_00263832(in_stack_00000064,*(int *)(in_stack_00000064 + 0x1c) + -1,iVar26,
                               0xfffffff2);
                }
              }
            }
            in_stack_00000050 = (uint)in_stack_00000030;
            if ((int)(*puVar27 << 2) < 0) break;
            if ((*puVar27 & 0xf0000) != 0) {
              uVar12 = in_stack_00000020[0x18];
              FUN_0026e770(in_stack_0000005c,uVar12);
              FUN_002662da(in_stack_00000064,0x27,in_stack_00000020[0x1c],
                           *(undefined4 *)(uVar12 + 0x28));
            }
          }
          in_stack_00000024 = (int *)in_stack_0000005c[2];
          in_stack_000000a0 = FUN_002665e6(in_stack_0000005c);
          in_stack_00000060 = *(int *)(unaff_r6 + 0xc);
          in_stack_00000040 = 0;
          in_stack_00000044 = 0;
          unaff_r4 = *(int **)(in_stack_00000074 + 0x20);
          in_stack_00000028 = 0;
          in_stack_00000020 = puVar27;
          in_stack_0000007c = in_stack_00000054;
          in_stack_00000094 = unaff_r4 + *(int *)(in_stack_00000074 + 0x18) * 10;
        }
      } while (((unaff_r4[2] != *(int *)(unaff_r6 + 0x20)) || ((short)unaff_r4[4] != 2)) ||
              ((unaff_r4[7] & in_stack_0000007c) != 0 ||
               (unaff_r4[6] & (uint)in_stack_00000030) != 0));
      iVar19 = unaff_r4[3];
      bVar1 = *(byte *)(*(int *)(in_stack_00000060 + 0xc) + iVar19 * 0x18 + 0x16);
      iVar26 = FUN_0025cd42(*unaff_r4);
      if (iVar26 == 0x61) {
LAB_0027a32e:
        bVar34 = bVar1 == 0x61;
      }
      else {
        if (iVar26 == 0x62) {
          FUN_0027b258();
          goto LAB_0027a32e;
        }
        bVar34 = 0x62 < bVar1;
      }
    } while (!bVar34);
    FUN_0027b258();
    uVar35 = __ashldi3(1,0,iVar19);
  } while( true );
LAB_0027a78e:
  if ((int)in_stack_00000024 < iVar22) goto LAB_0027a79c;
  in_stack_00000030 = (int *)0x0;
  piVar11 = piVar24;
  do {
    if (*piVar11 == iVar22) {
      FUN_002786f4(piVar4,*(undefined4 *)
                           (*(int *)(*(int *)(uVar18 + (int)in_stack_00000030 * 0xc + 8) * 0x28 +
                                    *(int *)(iVar26 + 0x20)) + 0xc),iVar17 + 1 + iVar22);
      break;
    }
    piVar11 = piVar11 + 2;
    in_stack_00000030 = (int *)((int)in_stack_00000030 + 1);
  } while ((int)in_stack_00000030 < (int)in_stack_00000024);
  if (in_stack_00000030 == in_stack_00000024) goto LAB_0027a79c;
  iVar22 = iVar22 + 1;
  goto LAB_0027a78e;
LAB_0027a79c:
  FUN_0026641e(iVar19,7,puVar20[5],iVar17);
  FUN_0026641e(iVar19,7,iVar22 + -1,iVar17 + 1);
  FUN_002662da(iVar19,0x88,uVar16,in_stack_00000048);
  puVar20[7] = 0;
  for (in_stack_00000048 = (undefined2 *)0x0; (int)in_stack_00000048 < (int)in_stack_00000024;
      in_stack_00000048 = (undefined2 *)((int)in_stack_00000048 + 1)) {
    if ((char)piVar24[1] != '\0') {
      FUN_0025d578(puVar27,*(int *)(iVar26 + 0x20) + *(int *)(uVar18 + 8) * 0x28);
    }
    piVar24 = piVar24 + 2;
    uVar18 = uVar18 + 0xc;
  }
  *(undefined1 *)((int)puVar27 + 0x35) = 0x8a;
  puVar27[0xe] = uVar16;
  uVar18 = *(uint *)(iVar19 + 0x1c);
  puVar27[0xf] = uVar18;
  FUN_0025cbb8(piVar4,iVar17,(int)in_stack_00000024 + 2U);
  FUN_002644ac(piVar4);
  FUN_0027b12e();
LAB_0027a838:
  if ((uVar18 & 0x1000) != 0) {
    uVar5 = FUN_002627dc(piVar4);
    uVar6 = FUN_0026d44c(iVar26,uVar16,0xffffffff);
    uVar5 = FUN_00278240(piVar4,uVar6,puVar27,uVar5);
    in_stack_00000048 = (undefined2 *)puVar27[10];
    FUN_0026641e(iVar19,0x15,uVar5,in_stack_00000048);
    FUN_00266266(iVar19,0x36,uVar16,in_stack_00000048);
    uVar35 = FUN_00262718(piVar4,uVar16,0xffffffff,uVar5);
    uVar18 = (int)puVar27 + 0x35;
    FUN_0027b12c((int)uVar35,(int)((ulonglong)uVar35 >> 0x20),0x95);
  }
  iVar22 = DAT_0027b290;
  iVar17 = ((int)in_stack_00000024 << 6) >> 0x1f;
  uVar14 = -iVar17;
  if ((int)(uVar18 << 0x12) < 0) {
    puVar7 = (undefined4 *)FUN_0026d44c(iVar26,uVar16,0xffffffff);
    puVar8 = (undefined4 *)FUN_0026d44c(iVar26,uVar16,0xffffffff);
    puVar25 = puVar7;
    if (uVar14 == 0) {
      puVar25 = puVar8;
      puVar8 = puVar7;
    }
    if (puVar8 == (undefined4 *)0x0) {
      uVar5 = 0x48;
      if (uVar14 != 0) {
        uVar5 = 0x43;
      }
      FUN_0026641e(iVar19,uVar5,uVar16,in_stack_00000048);
    }
    else {
      memcpy(&stack0x000000e0,(void *)(DAT_0027abf8 + 0x27a97d),4);
      pbVar9 = (byte *)*puVar8;
      uVar5 = FUN_002786c2(piVar4,*(undefined4 *)(pbVar9 + 0xc),&stack0x000000b4);
      FUN_00266266(iVar19,*(undefined1 *)((int)&stack0x00000090 + *pbVar9 + 3),uVar16,
                   in_stack_00000048);
      FUN_0025cb14(piVar4,uVar5,1);
      FUN_002627fe(piVar4,in_stack_000000b4);
      FUN_0025d578(puVar27,puVar8);
    }
    if (puVar25 == (undefined4 *)0x0) {
      in_stack_00000024 = (int *)0x95;
      in_stack_00000030 = (int *)0x0;
    }
    else {
      pcVar10 = (char *)*puVar25;
      in_stack_00000030 = (int *)(piVar4[0x13] + 1);
      piVar4[0x13] = (int)in_stack_00000030;
      FUN_002786f4(piVar4,*(undefined4 *)(pcVar10 + 0xc),in_stack_00000030);
      cVar2 = *pcVar10;
      if ((cVar2 == 'M') || (cVar2 == 'O')) {
        in_stack_00000024 = (int *)0x50;
        if (uVar14 != 0) {
          in_stack_00000024 = (int *)0x4e;
        }
      }
      else {
        in_stack_00000024 = (int *)0x4d;
        if (uVar14 != 0) {
          in_stack_00000024 = (int *)0x4f;
        }
      }
      FUN_0025d578(puVar27,puVar25);
    }
    uVar12 = *(uint *)(iVar19 + 0x1c);
    uVar13 = 0x5f;
    if (uVar14 != 0) {
      uVar13 = 0x5c;
    }
    *(undefined1 *)((int)puVar27 + 0x35) = uVar13;
    puVar27[0xe] = uVar16;
    puVar27[0xf] = uVar12;
    if ((puVar25 == (undefined4 *)0x0) && (puVar8 == (undefined4 *)0x0)) {
      *(undefined1 *)((int)puVar27 + 0x36) = 1;
    }
    if (in_stack_00000024 == (int *)0x95) {
      FUN_0027b12e();
      return;
    }
    uVar5 = FUN_002627dc(piVar4);
    FUN_0026641e(iVar19,0x41,uVar16,uVar5);
    FUN_00262718(piVar4,uVar16,0xffffffff,uVar5);
    FUN_00266266(iVar19,in_stack_00000024,in_stack_00000030,in_stack_00000048);
    FUN_0025c3b8(iVar19,0x6b);
    FUN_0027b12e();
    return;
  }
  if ((uVar18 & 0x30000) != 0) {
    uVar29 = puVar27[1];
    uVar12 = puVar27[4];
    uVar31 = puVar27[8];
    if (uVar29 == *(uint *)(uVar12 + 0x24)) {
      uVar5 = 0xffffffff;
    }
    else {
      uVar5 = *(undefined4 *)(uVar29 * 4 + *(int *)(uVar12 + 4));
    }
    in_stack_00000074 = in_stack_00000098 & 1;
    if (((in_stack_00000074 != 0) &&
        (in_stack_00000074 = uVar18 & 0x1000000, in_stack_00000074 != 0)) &&
       (in_stack_00000074 = 1, (int)*(uint *)(uVar12 + 0x24) <= (int)uVar29)) {
      in_stack_00000074 = 0;
    }
    if ((uVar18 & 0x100000) == 0) {
      in_stack_00000024 = (int *)0x0;
      uVar18 = in_stack_00000074;
    }
    else {
      in_stack_00000024 = (int *)FUN_0026d44c(iVar26,uVar16,uVar5);
      uVar18 = 1;
    }
    piVar24 = in_stack_00000024;
    in_stack_00000030 = (int *)(*puVar27 & 0x200000);
    if (in_stack_00000030 != (int *)0x0) {
      in_stack_00000030 = (int *)FUN_0026d44c(iVar26,uVar16,uVar5);
      uVar18 = 1;
    }
    iVar30 = piVar4[2];
    in_stack_000000a0 = puVar27[1];
    uVar32 = puVar27[4];
    in_stack_000000a8 = puVar27[7];
    in_stack_00000064 = piVar4[0x13] + 1;
    in_stack_000000a4 = uVar18 + in_stack_000000a0;
    piVar4[0x13] = piVar4[0x13] + in_stack_000000a4;
    iVar22 = *piVar4;
    uVar5 = FUN_0025ef9c(iVar30,uVar32);
    iVar22 = FUN_0025f25a(iVar22,uVar5);
    if (iVar22 == 0) {
      *(undefined1 *)(*piVar4 + 0x36) = 1;
    }
    in_stack_00000060 = 0;
    while ((in_stack_00000060 < (int)in_stack_000000a0 &&
           (piVar11 = (int *)FUN_0026d44c(iVar26,in_stack_000000a8,
                                          *(undefined4 *)
                                           (in_stack_00000060 * 4 + *(int *)(uVar32 + 4))),
           piVar11 != (int *)0x0))) {
      iVar28 = in_stack_00000064 + in_stack_00000060;
      iVar23 = FUN_00278240(piVar4,piVar11,puVar27,iVar28);
      if (iVar23 != iVar28) {
        if (in_stack_000000a4 == 1) {
          FUN_002627fe(piVar4,in_stack_00000064);
          in_stack_00000064 = iVar23;
        }
        else {
          FUN_0026641e(iVar30,0xf,iVar23,iVar28);
        }
      }
      if ((*(ushort *)(piVar11 + 4) & 0x81) == 0) {
        uVar5 = *(undefined4 *)(*piVar11 + 0xc);
        FUN_002664d8(iVar30,uVar5,in_stack_00000064 + in_stack_00000060,puVar27[9]);
        if (iVar22 != 0) {
          iVar23 = FUN_0025cd0e(uVar5,*(undefined1 *)(iVar22 + in_stack_00000060));
          if (iVar23 == 0x62) {
            *(undefined1 *)(iVar22 + in_stack_00000060) = 0x62;
          }
          iVar23 = FUN_0025ca94(uVar5,*(undefined1 *)(iVar22 + in_stack_00000060));
          if (iVar23 != 0) {
            *(undefined1 *)(iVar22 + in_stack_00000060) = 0x62;
          }
        }
      }
      in_stack_00000060 = in_stack_00000060 + 1;
    }
    iVar26 = FUN_0025f25a(*piVar4,iVar22);
    uVar18 = puVar27[10];
    if ((((int)*(uint *)(uVar12 + 0x24) <= (int)uVar29) ||
        (uVar14 != (*(char *)(*(int *)(uVar12 + 0x1c) + uVar29) == '\0'))) &&
       ((uVar14 == 0 || (*(uint *)(uVar12 + 0x24) != uVar29)))) {
      in_stack_00000024 = in_stack_00000030;
      in_stack_00000030 = piVar24;
    }
    in_stack_00000070 = (int *)0x1;
    if (in_stack_00000024 != (int *)0x0) {
      in_stack_00000070 = (int *)(uint)((*(ushort *)(in_stack_00000024 + 4) & 0x28) != 0);
    }
    uStack0000008c = 1;
    if (in_stack_00000030 != (int *)0x0) {
      uStack0000008c = (uint)((*(ushort *)(in_stack_00000030 + 4) & 0x28) != 0);
    }
    uStack00000088 =
         (uint)(in_stack_00000024 != (int *)0x0) | ((int)uVar29 >> 0x1f) - uVar29 >> 0x1f;
    if (in_stack_00000024 == (int *)0x0) {
      uVar12 = uVar29;
      if (in_stack_00000074 != 0) {
        FUN_0026641e(iVar19,10,0,in_stack_00000064 + uVar29);
        uStack00000088 = 1;
        uVar12 = uVar29 + 1;
        in_stack_00000070 = in_stack_00000024;
      }
    }
    else {
      uVar5 = *(undefined4 *)(*in_stack_00000024 + 0xc);
      FUN_002786f4(piVar4,uVar5,in_stack_00000064 + uVar29);
      FUN_002664d8(iVar19,uVar5,in_stack_00000064 + uVar29,uVar18);
      if (iVar22 != 0) {
        puVar21 = (undefined1 *)(iVar22 + uVar29);
        iVar30 = FUN_0025cd0e(uVar5,*puVar21);
        if (iVar30 == 0x62) {
          *puVar21 = 0x62;
        }
        iVar30 = FUN_0025ca94(uVar5,*puVar21);
        if (iVar30 != 0) {
          *puVar21 = 0x62;
        }
      }
      uVar12 = uVar29 + 1;
    }
    FUN_0026650c(piVar4,in_stack_00000064,uVar12,iVar22);
    FUN_00266944(iVar19,*(undefined1 *)
                         (DAT_0027af9c + 0x27ad51 + uVar14 + uStack00000088 * 4 +
                         (int)in_stack_00000070 * 2),uVar31,uVar18);
    if (in_stack_00000030 != (int *)0x0) {
      uVar5 = *(undefined4 *)(*in_stack_00000030 + 0xc);
      iVar30 = in_stack_00000064 + uVar29;
      FUN_0025cb14(piVar4,iVar30,1);
      FUN_002786f4(piVar4,uVar5,iVar30);
      FUN_002664d8(iVar19,uVar5,iVar30,uVar18);
      if (iVar26 != 0) {
        puVar21 = (undefined1 *)(iVar26 + uVar29);
        iVar30 = FUN_0025cd0e(uVar5,*puVar21);
        if (iVar30 == 0x62) {
          *puVar21 = 0x62;
        }
        iVar30 = FUN_0025ca94(uVar5,*puVar21);
        if (iVar30 != 0) {
          *puVar21 = 0x62;
        }
      }
      FUN_0026650c(piVar4,in_stack_00000064,uVar29 + 1,iVar26);
    }
    FUN_0025fbda(*piVar4,iVar22);
    FUN_0025fbda(*piVar4,iVar26);
    puVar27[0xf] = *(uint *)(iVar19 + 0x1c);
    cVar2 = *(char *)(DAT_0027afa0 + 0x27ad77 +
                     (uVar14 + 1) * (uint)(uVar29 != 0 || in_stack_00000030 != (int *)0x0));
    if (cVar2 != -0x6b) {
      FUN_00266944(iVar19,cVar2,uVar31,uVar18);
      FUN_0025c3b8(iVar19,uStack0000008c + iVar17 != 0);
    }
    uVar5 = FUN_002627dc(piVar4);
    if ((*puVar27 & 0x300000) != 0) {
      FUN_00266266(iVar19,0x1d,uVar31,uVar29);
      FUN_0026641e(iVar19,0x49,uVar5,uVar33);
    }
    FUN_002627fe(piVar4,uVar5);
    FUN_0025d578(puVar27,in_stack_00000024);
    FUN_0025d578(puVar27,in_stack_00000030);
    if (in_stack_00000094 == (int *)0x0) {
      uVar5 = FUN_002627dc(piVar4);
      FUN_0026641e(iVar19,99,uVar31,uVar5);
      FUN_00262718(piVar4,uVar16,0xffffffff,uVar5);
      FUN_0026641e(iVar19,0x32,uVar16,uVar5);
    }
    if ((*puVar27 & 0x4000000) == 0) {
      uVar13 = 0x5c;
      if (uVar14 == 0) {
        uVar13 = 0x5f;
      }
    }
    else {
      uVar13 = 0x95;
    }
    *(undefined1 *)((int)puVar27 + 0x35) = uVar13;
    puVar27[0xe] = uVar31;
    FUN_0027b12e();
    return;
  }
  if ((uVar18 & 0x10000000) == 0) {
    *(undefined1 *)((int)puVar27 + 0x35) = *(undefined1 *)(DAT_0027b290 + uVar14 + 0x27b110);
    puVar27[0xe] = uVar16;
    iVar17 = FUN_0026641e(iVar19,*(undefined1 *)(iVar22 + 0x27b112 + uVar14),uVar16,
                          in_stack_00000048);
    puVar27[0xf] = iVar17 + 1;
    *(undefined1 *)((int)puVar27 + 0x36) = 1;
  }
  else {
    uVar29 = piVar4[0x12];
    piVar4[0x12] = uVar29 + 1;
    uVar18 = piVar4[0x13] + 1;
    piVar4[0x13] = uVar18;
    uVar5 = FUN_00266020(iVar19);
    uVar14 = puVar27[4];
    iVar17 = *(int *)(uVar14 + 0xc);
    *(undefined1 *)((int)puVar27 + 0x35) = 3;
    puVar27[0xe] = uVar18;
    if ((int)in_stack_0000004c[7] < 2) {
      in_stack_00000048 = (undefined2 *)in_stack_0000004c[3];
    }
    else {
      iVar22 = in_stack_0000004c[7] - uVar12;
      iVar30 = iVar22 + -1;
      in_stack_00000048 = (undefined2 *)FUN_0025ee10(*piVar4,iVar30 * 0x40 + 0x48);
      if (in_stack_00000048 == (undefined2 *)0x0) goto LAB_0027b20e;
      uVar3 = (undefined2)iVar22;
      in_stack_00000048[1] = uVar3;
      *in_stack_00000048 = uVar3;
      memcpy(in_stack_00000048 + 4,in_stack_00000030,0x40);
      iVar22 = in_stack_0000004c[3];
      puVar20 = puVar27;
      for (iVar23 = 1; iVar23 <= iVar30; iVar23 = iVar23 + 1) {
        memcpy(in_stack_00000048 + iVar23 * 0x20 + 4,
               (void *)(iVar22 + (uint)(byte)puVar20[0x21] * 0x40 + 8),0x40);
        puVar20 = puVar20 + 0x14;
      }
    }
    uVar31 = in_stack_00000098 & 8;
    if (uVar31 == 0) {
      in_stack_00000070 = (int *)(piVar4[0x13] + 1);
      piVar4[0x13] = piVar4[0x13] + 2;
      FUN_0026641e(iVar19,10,0,in_stack_00000070);
    }
    else {
      in_stack_00000070 = (int *)0x0;
    }
    in_stack_000000a0 = FUN_0026641e(iVar19,7,0,uVar18);
    iVar22 = 0;
    if (1 < *(int *)(iVar26 + 0x18)) {
      iVar22 = 0;
      for (iVar30 = 0; iVar30 < *(int *)(iVar26 + 0x18); iVar30 = iVar30 + 1) {
        piVar24 = (int *)(*(int *)(iVar26 + 0x20) + iVar30 * 0x28);
        if ((((*(ushort *)(*piVar24 + 2) & 1) == 0) &&
            ((*(byte *)((int)piVar24 + 0x12) & 0x12) == 0)) &&
           ((*(ushort *)(piVar24 + 4) & 0xfff) != 0)) {
          uVar6 = FUN_002606fc(*piVar4,*piVar24);
          iVar22 = FUN_00262684(*piVar4,iVar22,uVar6);
        }
      }
      if (iVar22 != 0) {
        iVar22 = FUN_00269118(piVar4,0x45,0,iVar22);
      }
    }
    bVar34 = false;
    in_stack_00000024 = (int *)0x0;
    for (uVar32 = 0; (int)uVar32 < *(int *)(iVar17 + 0x18); uVar32 = uVar32 + 1) {
      piVar24 = (int *)(*(int *)(iVar17 + 0x20) + uVar32 * 0x28);
      if ((piVar24[2] == uVar16) || ((short)piVar24[4] == 0x200)) {
        iVar30 = *piVar24;
        if (iVar22 != 0) {
          *(int *)(iVar22 + 8) = *piVar24;
          iVar30 = iVar22;
        }
        iVar30 = FUN_00279b98(piVar4,in_stack_00000048,iVar30,0);
        if (iVar30 != 0) {
          if ((char)piVar4[0x75] == '\x02') {
            FUN_0026aa30(piVar4,in_stack_00000048,iVar30 + 0x38,uVar12);
          }
          if (uVar31 == 0) {
            in_stack_00000094 = (int *)uVar32;
            if (uVar32 == *(int *)(iVar17 + 0x18) - 1U) {
              in_stack_00000094 = (int *)0xffffffff;
            }
            FUN_0027074a(piVar4,*(undefined4 *)((int)in_stack_00000030 + 0xc),0xffffffff,uVar16);
            FUN_00266944(iVar19,0x72,in_stack_00000070,*(int *)(iVar19 + 0x1c) + 2);
          }
          FUN_0026641e(iVar19,2,uVar18,uVar5);
          if (*(char *)(iVar30 + 7) != '\0') {
            bVar34 = true;
          }
          uVar15 = *(uint *)(iVar30 + 0x38) & 0xf0000;
          if (uVar15 != 0) {
            if ((*(uint *)(iVar30 + 0x38) & 0x20000000) == 0) {
              uVar15 = *(uint *)(iVar30 + 0x48);
              if ((uVar32 != 0) && ((int *)uVar15 != in_stack_00000024)) {
                uVar15 = 0;
              }
            }
            else {
              in_stack_00000024 = (int *)0x0;
              uVar15 = (uint)in_stack_00000024;
            }
          }
          in_stack_00000024 = (int *)uVar15;
          FUN_0026663a(iVar30);
        }
      }
    }
    puVar27[0x10] = (uint)in_stack_00000024;
    puVar27[8] = uVar29;
    if (iVar22 != 0) {
      *(undefined4 *)(iVar22 + 8) = 0;
      FUN_002610aa(*piVar4,iVar22);
    }
    FUN_0025c394(iVar19,in_stack_000000a0,*(undefined4 *)(iVar19 + 0x1c));
    FUN_0026641e(iVar19,1,0,puVar27[9]);
    FUN_0025c384(iVar19,uVar5);
    if (1 < (int)in_stack_0000004c[7]) {
      FUN_0025fbda(*piVar4,in_stack_00000048);
    }
    if (!bVar34) {
      FUN_0025d578(puVar27,uVar14);
      FUN_0027b12e();
      return;
    }
  }
  uVar35 = FUN_0025d3f8(*(undefined4 *)(iVar26 + 4),uVar16);
  uVar16 = ~(uint)((ulonglong)uVar35 >> 0x20);
  piVar24 = *(int **)(iVar26 + 0x20);
  for (in_stack_00000028 = *(int *)(iVar26 + 0x18); 0 < (int)in_stack_00000028;
      in_stack_00000028 = in_stack_00000028 + -1) {
    if ((*(byte *)((int)piVar24 + 0x12) & 6) == 0) {
      if ((piVar24[9] & uVar16) == 0 && (piVar24[8] & ~(uint)uVar35) == 0) {
        if ((puVar27[6] == 0) || ((int)((uint)*(ushort *)(*piVar24 + 2) << 0x1f) < 0)) {
          FUN_00278ac2(piVar4,*piVar24,uVar33,8);
          *(byte *)((int)piVar24 + 0x12) = *(byte *)((int)piVar24 + 0x12) | 4;
        }
      }
      else {
        *(undefined1 *)((int)in_stack_0000004c + 7) = 1;
      }
    }
    piVar24 = piVar24 + 10;
  }
  if (puVar27[6] != 0) {
    puVar27[0xc] = *(uint *)(iVar19 + 0x1c);
    FUN_0026641e(iVar19,7,1);
    FUN_0025cb7c(piVar4);
    puVar25 = *(undefined4 **)(iVar26 + 0x20);
    for (in_stack_00000020 = (uint *)0x0; (int)in_stack_00000020 < *(int *)(iVar26 + 0x18);
        in_stack_00000020 = (uint *)((int)in_stack_00000020 + 1)) {
      if (((*(byte *)((int)puVar25 + 0x12) & 6) == 0) &&
         ((puVar25[9] & uVar16) == 0 && (puVar25[8] & ~(uint)uVar35) == 0)) {
        FUN_00278ac2(piVar4,*puVar25,uVar33,8);
        *(byte *)((int)puVar25 + 0x12) = *(byte *)((int)puVar25 + 0x12) | 4;
      }
      puVar25 = puVar25 + 10;
    }
  }
  FUN_002627fe(piVar4,0);
LAB_0027b20e:
  in_stack_0000004c[5] = puVar27[0xb];
  if ((int)(uVar12 + 1) < in_stack_0000009c) {
    FUN_0027a65e();
  }
  FUN_0027b244();
  return;
}


