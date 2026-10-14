/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0027a49c FUN_0027a49c */

void FUN_0027a49c(void)

{
  byte bVar1;
  char cVar2;
  undefined2 uVar3;
  uint uVar4;
  uint uVar5;
  int *piVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  byte *pbVar11;
  char *pcVar12;
  int *piVar13;
  undefined1 uVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  int iVar18;
  uint uVar19;
  uint uVar20;
  uint *puVar21;
  undefined1 *puVar22;
  int iVar23;
  int iVar24;
  int *piVar25;
  undefined4 *puVar26;
  int *unaff_r5;
  uint *puVar27;
  int iVar28;
  uint uVar29;
  int iVar30;
  uint uVar31;
  uint uVar32;
  int unaff_r6;
  int *unaff_r7;
  int iVar33;
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
  int in_stack_00000068;
  int *in_stack_00000070;
  uint in_stack_00000074;
  int in_stack_00000078;
  int in_stack_0000007c;
  int in_stack_00000080;
  uint in_stack_00000088;
  uint in_stack_0000008c;
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
      in_stack_00000044 = in_stack_00000044 | in_stack_0000003c;
      in_stack_00000040 = in_stack_00000040 | in_stack_00000038;
      *(int *)(unaff_r5[1] + (int)in_stack_00000030 * 4) = in_stack_0000007c;
      piVar6 = (int *)FUN_0026d3c4(in_stack_0000005c,*(undefined4 *)(in_stack_00000080 + 8),
                                   *(undefined4 *)(in_stack_00000080 + 0xc));
      iVar17 = in_stack_00000078;
      if (piVar6 != (int *)0x0) {
        iVar17 = *piVar6;
      }
      *(int *)(unaff_r5[8] + (int)in_stack_00000030 * 4) = iVar17;
      in_stack_00000030 = (int *)((int)in_stack_00000030 + 1);
    }
    do {
      do {
        unaff_r7 = unaff_r7 + 10;
        while (in_stack_00000094 <= unaff_r7) {
          iVar33 = DAT_0027a740 + 0x27a4f2;
          for (iVar17 = 0; iVar17 < in_stack_00000068; iVar17 = iVar17 + 1) {
            uVar20 = __lshrdi3(in_stack_00000088,in_stack_0000008c,iVar17);
            if ((uVar20 & 1) != 0) {
              *(int *)(unaff_r5[1] + (int)in_stack_00000030 * 4) = iVar17;
              *(int *)(unaff_r5[8] + (int)in_stack_00000030 * 4) = iVar33;
              in_stack_00000030 = (int *)((int)in_stack_00000030 + 1);
            }
          }
          if (*(int *)(unaff_r6 + 0x34) < 0) {
            iVar33 = (int)in_stack_00000030 << 2;
            iVar17 = DAT_0027a744 + 0x27a52e;
            for (iVar18 = 0x3f; iVar18 < *(int *)(in_stack_00000060 + 8); iVar18 = iVar18 + 1) {
              *(int *)(unaff_r5[1] + iVar33) = iVar18;
              *(int *)(unaff_r5[8] + iVar33) = iVar17;
              iVar33 = iVar33 + 4;
            }
          }
          FUN_0026e770(in_stack_0000005c,unaff_r5);
          FUN_002662da(in_stack_00000024,0x29,in_stack_00000020[8],in_stack_00000028 + 1);
          iVar17 = FUN_002665da(in_stack_00000024,0x48,in_stack_00000020[7]);
          uVar7 = FUN_002627dc(in_stack_0000005c);
          FUN_002707d4(in_stack_0000005c,unaff_r5,in_stack_00000020[7],uVar7);
          FUN_0026641e(in_stack_00000024,0x61,in_stack_00000020[8],uVar7);
          FUN_0025c3b8(in_stack_00000024,0x10);
          FUN_0026641e(in_stack_00000024,0x5f,in_stack_00000020[7],iVar17 + 1);
          FUN_0025c3b8(in_stack_00000024,3);
          FUN_002624c2(in_stack_00000024,iVar17);
          FUN_002627fe(in_stack_0000005c,uVar7);
          FUN_002624c2(in_stack_00000024,in_stack_000000a0);
          puVar27 = in_stack_00000020;
          do {
            while( true ) {
              in_stack_00000020 = puVar27;
              FUN_00275ec4(in_stack_0000005c,in_stack_00000058);
              uVar35 = FUN_0025d3f8(*(undefined4 *)(in_stack_00000074 + 4),
                                    *(undefined4 *)(unaff_r6 + 0x20));
              in_stack_00000050 = in_stack_00000050 & ~(uint)uVar35;
              in_stack_00000054 = in_stack_00000054 & ~(uint)((ulonglong)uVar35 >> 0x20);
              in_stack_00000070 = (int *)((int)in_stack_00000070 + 1);
              puVar27 = in_stack_00000020 + 0x14;
              if (in_stack_0000009c <= (int)in_stack_00000070) {
                in_stack_0000004c[4] = *(undefined4 *)(in_stack_00000064 + 0x1c);
                uVar20 = (uint)*(byte *)((int)in_stack_00000048 + 0x36);
                if (uVar20 != 0) {
                  FUN_0027b228();
                }
                in_stack_000000ac = in_stack_00000098 & 0x20;
                FUN_0027b21a();
                puVar27 = in_stack_0000004c + uVar20 * 0x14 + 0xe;
                if (*(char *)(in_stack_0000005c + 0x75) == '\x02') {
                  FUN_0026aa30(in_stack_0000005c,in_stack_00000090,puVar27,uVar20);
                }
                piVar6 = (int *)*in_stack_0000004c;
                iVar17 = in_stack_0000004c[8];
                iVar33 = piVar6[2];
                in_stack_00000030 =
                     (int *)(in_stack_0000004c[3] + (uint)(byte)puVar27[0xd] * 0x40 + 8);
                in_stack_00000024 = (int *)*puVar27;
                uVar5 = *(uint *)((int)in_stack_00000030 + 0x20);
                in_stack_00000094 = (int *)((uint)in_stack_00000024 & 0x800000);
                if (in_stack_00000094 != (int *)0x0) {
                  in_stack_00000094 = (int *)(uint)(in_stack_000000ac == 0);
                }
                in_stack_00000048 = (undefined2 *)FUN_00266020(iVar33);
                puVar27[10] = (uint)in_stack_00000048;
                puVar27[9] = (uint)in_stack_00000048;
                uVar4 = FUN_00266020(iVar33);
                puVar27[0xb] = uVar4;
                if (((char)puVar27[0xd] != '\0') &&
                   ((int)((uint)*(byte *)((int)in_stack_00000030 + 0x1c) << 0x1c) < 0)) {
                  iVar18 = piVar6[0x13];
                  piVar6[0x13] = iVar18 + 1U;
                  puVar27[6] = iVar18 + 1U;
                  FUN_0026641e(iVar33,7,0);
                }
                uVar19 = *puVar27;
                if ((uVar19 & 0x8000000) == 0) goto LAB_0027a838;
                puVar21 = (uint *)puVar27[4];
                in_stack_00000024 = (int *)*puVar21;
                piVar25 = (int *)puVar21[4];
                uVar19 = puVar21[1];
                piVar6[0x17] = piVar6[0x17] + 1;
                iVar18 = FUN_00262834(piVar6,(int)in_stack_00000024 + 2U);
                iVar23 = 1;
                goto LAB_0027a78e;
              }
              unaff_r6 = in_stack_00000090 + (uint)(byte)in_stack_00000020[0x21] * 0x40 + 8;
              iVar17 = *(int *)(unaff_r6 + 0xc);
              in_stack_00000020[0x1b] = *(uint *)(unaff_r6 + 0x20);
              uVar35 = __muldf3(in_stack_0000004c[0xc],in_stack_0000004c[0xd],
                                in_stack_00000020[0x16],in_stack_00000020[0x17]);
              *(undefined8 *)(in_stack_0000004c + 0xc) = uVar35;
              in_stack_00000058 = FUN_0025d12c(in_stack_00000048,*(undefined4 *)(iVar17 + 0x44));
              if (((*(byte *)(iVar17 + 0x22) & 2) == 0) && (*(int *)(iVar17 + 0x1c) == 0)) {
                if ((int)(*puVar27 << 4) < 0) {
                  FUN_0025d364(in_stack_00000048,iVar17);
                  FUN_002662da(in_stack_00000064,0x87,*(undefined4 *)(unaff_r6 + 0x20),0);
                }
                else if (((int)(*puVar27 << 8) < 0) || ((int)(in_stack_00000098 << 0x1b) < 0)) {
                  FUN_00265f96(in_stack_0000005c,in_stack_00000058,*(undefined4 *)(iVar17 + 0x14),0)
                  ;
                }
                else {
                  FUN_002663cc(in_stack_0000005c,*(undefined4 *)(unaff_r6 + 0x20),in_stack_00000058,
                               iVar17);
                  if ((*(char *)((int)in_stack_0000004c + 6) == '\0') &&
                     (*(int *)(iVar17 + 8) < 0x40)) {
                    uVar5 = *(uint *)(unaff_r6 + 0x34);
                    iVar17 = 0;
                    for (uVar20 = *(uint *)(unaff_r6 + 0x30); uVar20 != 0 || uVar5 != 0;
                        uVar20 = uVar20 >> 1 | uVar4) {
                      uVar4 = uVar5 << 0x1f;
                      uVar5 = uVar5 >> 1;
                      iVar17 = iVar17 + 1;
                    }
                    FUN_00263832(in_stack_00000064,*(int *)(in_stack_00000064 + 0x1c) + -1,iVar17,
                                 0xfffffff2);
                  }
                }
              }
              if ((int)(*puVar27 << 2) < 0) break;
              if ((*puVar27 & 0xf0000) != 0) {
                uVar20 = in_stack_00000020[0x18];
                FUN_0026e770(in_stack_0000005c,uVar20);
                FUN_002662da(in_stack_00000064,0x27,in_stack_00000020[0x1c],
                             *(undefined4 *)(uVar20 + 0x28));
              }
            }
            in_stack_00000024 = (int *)in_stack_0000005c[2];
            in_stack_000000a0 = FUN_002665e6(in_stack_0000005c);
            in_stack_00000060 = *(int *)(unaff_r6 + 0xc);
            in_stack_00000040 = 0;
            in_stack_00000044 = 0;
            piVar6 = *(int **)(in_stack_00000074 + 0x20);
            in_stack_00000028 = 0;
            in_stack_00000094 = piVar6 + *(int *)(in_stack_00000074 + 0x18) * 10;
            for (; piVar6 < in_stack_00000094; piVar6 = piVar6 + 10) {
              if (((piVar6[2] == *(int *)(unaff_r6 + 0x20)) && ((short)piVar6[4] == 2)) &&
                 ((piVar6[7] & in_stack_00000054) == 0 && (piVar6[6] & in_stack_00000050) == 0)) {
                iVar33 = piVar6[3];
                bVar1 = *(byte *)(*(int *)(in_stack_00000060 + 0xc) + iVar33 * 0x18 + 0x16);
                iVar17 = FUN_0025cd42(*piVar6);
                if (iVar17 == 0x61) {
LAB_0027a32e:
                  bVar34 = bVar1 == 0x61;
                }
                else {
                  if (iVar17 == 0x62) {
                    FUN_0027b258();
                    goto LAB_0027a32e;
                  }
                  bVar34 = 0x62 < bVar1;
                }
                if (bVar34) {
                  FUN_0027b258();
                  uVar35 = __ashldi3(1,0,iVar33);
                  uVar20 = (uint)((ulonglong)uVar35 >> 0x20);
                  if ((in_stack_00000044 & uVar20) == 0 && (in_stack_00000040 & (uint)uVar35) == 0)
                  {
                    in_stack_00000040 = in_stack_00000040 | (uint)uVar35;
                    in_stack_00000028 = in_stack_00000028 + 1;
                    in_stack_00000044 = in_stack_00000044 | uVar20;
                  }
                }
              }
            }
            in_stack_00000020[0x15] = in_stack_00000028;
            uVar20 = *(uint *)(unaff_r6 + 0x34);
            iVar17 = *(int *)(in_stack_00000060 + 8);
            in_stack_0000008c = (~in_stack_00000044 | 0x80000000) & uVar20;
            in_stack_00000088 = *(uint *)(unaff_r6 + 0x30) & ~in_stack_00000040;
            in_stack_00000068 = iVar17;
            if (0x3f < iVar17) {
              in_stack_00000068 = 0x3f;
            }
            for (iVar33 = 0; iVar33 < in_stack_00000068; iVar33 = iVar33 + 1) {
              uVar5 = __lshrdi3(in_stack_00000088,in_stack_0000008c,iVar33);
              in_stack_00000028 = in_stack_00000028 + (uVar5 & 1);
            }
            if ((int)uVar20 < 0) {
              in_stack_00000028 = in_stack_00000028 + iVar17 + -0x3f;
            }
            *puVar27 = *puVar27 | DAT_0027a734;
            unaff_r5 = (int *)FUN_0025f04c(*in_stack_0000005c,in_stack_00000028 * 9 + 0x30);
          } while (unaff_r5 == (int *)0x0);
          piVar6 = unaff_r5 + 0xc;
          in_stack_00000020[0x18] = (uint)unaff_r5;
          unaff_r5[8] = (int)piVar6;
          unaff_r5[7] = (int)(piVar6 + in_stack_00000028 + in_stack_00000028);
          unaff_r5[1] = (int)(piVar6 + in_stack_00000028);
          iVar17 = DAT_0027a738;
          unaff_r5[9] = in_stack_00000028;
          *unaff_r5 = iVar17 + 0x27a41a;
          unaff_r5[3] = in_stack_00000060;
          in_stack_00000040 = 0;
          in_stack_00000044 = 0;
          unaff_r7 = *(int **)(in_stack_00000074 + 0x20);
          in_stack_00000030 = (int *)0x0;
          in_stack_00000078 = DAT_0027a73c + 0x27a432;
          in_stack_00000020 = puVar27;
        }
      } while (((unaff_r7[2] != *(int *)(unaff_r6 + 0x20)) || ((short)unaff_r7[4] != 2)) ||
              ((unaff_r7[7] & in_stack_00000054) != 0 || (unaff_r7[6] & in_stack_00000050) != 0));
      in_stack_0000007c = unaff_r7[3];
      in_stack_00000080 = *unaff_r7;
      bVar1 = *(byte *)(*(int *)(*(int *)(unaff_r6 + 0xc) + 0xc) + in_stack_0000007c * 0x18 + 0x16);
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
    } while (!bVar34);
    FUN_0027b26c();
    uVar35 = __ashldi3(1,0,in_stack_0000007c);
  } while( true );
LAB_0027a78e:
  if ((int)in_stack_00000024 < iVar23) goto LAB_0027a79c;
  in_stack_00000030 = (int *)0x0;
  piVar13 = piVar25;
  do {
    if (*piVar13 == iVar23) {
      FUN_002786f4(piVar6,*(undefined4 *)
                           (*(int *)(*(int *)(uVar19 + (int)in_stack_00000030 * 0xc + 8) * 0x28 +
                                    *(int *)(iVar17 + 0x20)) + 0xc),iVar18 + 1 + iVar23);
      break;
    }
    piVar13 = piVar13 + 2;
    in_stack_00000030 = (int *)((int)in_stack_00000030 + 1);
  } while ((int)in_stack_00000030 < (int)in_stack_00000024);
  if (in_stack_00000030 == in_stack_00000024) goto LAB_0027a79c;
  iVar23 = iVar23 + 1;
  goto LAB_0027a78e;
LAB_0027a79c:
  FUN_0026641e(iVar33,7,puVar21[5],iVar18);
  FUN_0026641e(iVar33,7,iVar23 + -1,iVar18 + 1);
  FUN_002662da(iVar33,0x88,uVar5,in_stack_00000048);
  puVar21[7] = 0;
  for (in_stack_00000048 = (undefined2 *)0x0; (int)in_stack_00000048 < (int)in_stack_00000024;
      in_stack_00000048 = (undefined2 *)((int)in_stack_00000048 + 1)) {
    if ((char)piVar25[1] != '\0') {
      FUN_0025d578(puVar27,*(int *)(iVar17 + 0x20) + *(int *)(uVar19 + 8) * 0x28);
    }
    piVar25 = piVar25 + 2;
    uVar19 = uVar19 + 0xc;
  }
  *(undefined1 *)((int)puVar27 + 0x35) = 0x8a;
  puVar27[0xe] = uVar5;
  uVar19 = *(uint *)(iVar33 + 0x1c);
  puVar27[0xf] = uVar19;
  FUN_0025cbb8(piVar6,iVar18,(int)in_stack_00000024 + 2U);
  FUN_002644ac(piVar6);
  FUN_0027b12e();
LAB_0027a838:
  if ((uVar19 & 0x1000) != 0) {
    uVar7 = FUN_002627dc(piVar6);
    uVar8 = FUN_0026d44c(iVar17,uVar5,0xffffffff);
    uVar7 = FUN_00278240(piVar6,uVar8,puVar27,uVar7);
    in_stack_00000048 = (undefined2 *)puVar27[10];
    FUN_0026641e(iVar33,0x15,uVar7,in_stack_00000048);
    FUN_00266266(iVar33,0x36,uVar5,in_stack_00000048);
    uVar35 = FUN_00262718(piVar6,uVar5,0xffffffff,uVar7);
    uVar19 = (int)puVar27 + 0x35;
    FUN_0027b12c((int)uVar35,(int)((ulonglong)uVar35 >> 0x20),0x95);
  }
  iVar23 = DAT_0027b290;
  iVar18 = ((int)in_stack_00000024 << 6) >> 0x1f;
  uVar15 = -iVar18;
  if ((int)(uVar19 << 0x12) < 0) {
    puVar9 = (undefined4 *)FUN_0026d44c(iVar17,uVar5,0xffffffff);
    puVar10 = (undefined4 *)FUN_0026d44c(iVar17,uVar5,0xffffffff);
    puVar26 = puVar9;
    if (uVar15 == 0) {
      puVar26 = puVar10;
      puVar10 = puVar9;
    }
    if (puVar10 == (undefined4 *)0x0) {
      uVar7 = 0x48;
      if (uVar15 != 0) {
        uVar7 = 0x43;
      }
      FUN_0026641e(iVar33,uVar7,uVar5,in_stack_00000048);
    }
    else {
      memcpy(&stack0x000000e0,(void *)(DAT_0027abf8 + 0x27a97d),4);
      pbVar11 = (byte *)*puVar10;
      uVar7 = FUN_002786c2(piVar6,*(undefined4 *)(pbVar11 + 0xc),&stack0x000000b4);
      FUN_00266266(iVar33,*(undefined1 *)((int)&stack0x00000090 + *pbVar11 + 3),uVar5,
                   in_stack_00000048);
      FUN_0025cb14(piVar6,uVar7,1);
      FUN_002627fe(piVar6,in_stack_000000b4);
      FUN_0025d578(puVar27,puVar10);
    }
    if (puVar26 == (undefined4 *)0x0) {
      in_stack_00000024 = (int *)0x95;
      in_stack_00000030 = (int *)0x0;
    }
    else {
      pcVar12 = (char *)*puVar26;
      in_stack_00000030 = (int *)(piVar6[0x13] + 1);
      piVar6[0x13] = (int)in_stack_00000030;
      FUN_002786f4(piVar6,*(undefined4 *)(pcVar12 + 0xc),in_stack_00000030);
      cVar2 = *pcVar12;
      if ((cVar2 == 'M') || (cVar2 == 'O')) {
        in_stack_00000024 = (int *)0x50;
        if (uVar15 != 0) {
          in_stack_00000024 = (int *)0x4e;
        }
      }
      else {
        in_stack_00000024 = (int *)0x4d;
        if (uVar15 != 0) {
          in_stack_00000024 = (int *)0x4f;
        }
      }
      FUN_0025d578(puVar27,puVar26);
    }
    uVar20 = *(uint *)(iVar33 + 0x1c);
    uVar14 = 0x5f;
    if (uVar15 != 0) {
      uVar14 = 0x5c;
    }
    *(undefined1 *)((int)puVar27 + 0x35) = uVar14;
    puVar27[0xe] = uVar5;
    puVar27[0xf] = uVar20;
    if ((puVar26 == (undefined4 *)0x0) && (puVar10 == (undefined4 *)0x0)) {
      *(undefined1 *)((int)puVar27 + 0x36) = 1;
    }
    if (in_stack_00000024 == (int *)0x95) {
      FUN_0027b12e();
      return;
    }
    uVar7 = FUN_002627dc(piVar6);
    FUN_0026641e(iVar33,0x41,uVar5,uVar7);
    FUN_00262718(piVar6,uVar5,0xffffffff,uVar7);
    FUN_00266266(iVar33,in_stack_00000024,in_stack_00000030,in_stack_00000048);
    FUN_0025c3b8(iVar33,0x6b);
    FUN_0027b12e();
    return;
  }
  if ((uVar19 & 0x30000) != 0) {
    uVar29 = puVar27[1];
    uVar20 = puVar27[4];
    uVar31 = puVar27[8];
    if (uVar29 == *(uint *)(uVar20 + 0x24)) {
      uVar7 = 0xffffffff;
    }
    else {
      uVar7 = *(undefined4 *)(uVar29 * 4 + *(int *)(uVar20 + 4));
    }
    in_stack_00000074 = in_stack_00000098 & 1;
    if (((in_stack_00000074 != 0) &&
        (in_stack_00000074 = uVar19 & 0x1000000, in_stack_00000074 != 0)) &&
       (in_stack_00000074 = 1, (int)*(uint *)(uVar20 + 0x24) <= (int)uVar29)) {
      in_stack_00000074 = 0;
    }
    if ((uVar19 & 0x100000) == 0) {
      in_stack_00000024 = (int *)0x0;
      uVar19 = in_stack_00000074;
    }
    else {
      in_stack_00000024 = (int *)FUN_0026d44c(iVar17,uVar5,uVar7);
      uVar19 = 1;
    }
    piVar25 = in_stack_00000024;
    in_stack_00000030 = (int *)(*puVar27 & 0x200000);
    if (in_stack_00000030 != (int *)0x0) {
      in_stack_00000030 = (int *)FUN_0026d44c(iVar17,uVar5,uVar7);
      uVar19 = 1;
    }
    iVar30 = piVar6[2];
    in_stack_000000a0 = puVar27[1];
    uVar32 = puVar27[4];
    in_stack_000000a8 = puVar27[7];
    in_stack_00000064 = piVar6[0x13] + 1;
    in_stack_000000a4 = uVar19 + in_stack_000000a0;
    piVar6[0x13] = piVar6[0x13] + in_stack_000000a4;
    iVar23 = *piVar6;
    uVar7 = FUN_0025ef9c(iVar30,uVar32);
    iVar23 = FUN_0025f25a(iVar23,uVar7);
    if (iVar23 == 0) {
      *(undefined1 *)(*piVar6 + 0x36) = 1;
    }
    in_stack_00000060 = 0;
    while ((in_stack_00000060 < (int)in_stack_000000a0 &&
           (piVar13 = (int *)FUN_0026d44c(iVar17,in_stack_000000a8,
                                          *(undefined4 *)
                                           (in_stack_00000060 * 4 + *(int *)(uVar32 + 4))),
           piVar13 != (int *)0x0))) {
      iVar28 = in_stack_00000064 + in_stack_00000060;
      iVar24 = FUN_00278240(piVar6,piVar13,puVar27,iVar28);
      if (iVar24 != iVar28) {
        if (in_stack_000000a4 == 1) {
          FUN_002627fe(piVar6,in_stack_00000064);
          in_stack_00000064 = iVar24;
        }
        else {
          FUN_0026641e(iVar30,0xf,iVar24,iVar28);
        }
      }
      if ((*(ushort *)(piVar13 + 4) & 0x81) == 0) {
        uVar7 = *(undefined4 *)(*piVar13 + 0xc);
        FUN_002664d8(iVar30,uVar7,in_stack_00000064 + in_stack_00000060,puVar27[9]);
        if (iVar23 != 0) {
          iVar24 = FUN_0025cd0e(uVar7,*(undefined1 *)(iVar23 + in_stack_00000060));
          if (iVar24 == 0x62) {
            *(undefined1 *)(iVar23 + in_stack_00000060) = 0x62;
          }
          iVar24 = FUN_0025ca94(uVar7,*(undefined1 *)(iVar23 + in_stack_00000060));
          if (iVar24 != 0) {
            *(undefined1 *)(iVar23 + in_stack_00000060) = 0x62;
          }
        }
      }
      in_stack_00000060 = in_stack_00000060 + 1;
    }
    iVar17 = FUN_0025f25a(*piVar6,iVar23);
    uVar19 = puVar27[10];
    if ((((int)*(uint *)(uVar20 + 0x24) <= (int)uVar29) ||
        (uVar15 != (*(char *)(*(int *)(uVar20 + 0x1c) + uVar29) == '\0'))) &&
       ((uVar15 == 0 || (*(uint *)(uVar20 + 0x24) != uVar29)))) {
      in_stack_00000024 = in_stack_00000030;
      in_stack_00000030 = piVar25;
    }
    in_stack_00000070 = (int *)0x1;
    if (in_stack_00000024 != (int *)0x0) {
      in_stack_00000070 = (int *)(uint)((*(ushort *)(in_stack_00000024 + 4) & 0x28) != 0);
    }
    in_stack_0000008c = 1;
    if (in_stack_00000030 != (int *)0x0) {
      in_stack_0000008c = (uint)((*(ushort *)(in_stack_00000030 + 4) & 0x28) != 0);
    }
    in_stack_00000088 =
         (uint)(in_stack_00000024 != (int *)0x0) | ((int)uVar29 >> 0x1f) - uVar29 >> 0x1f;
    if (in_stack_00000024 == (int *)0x0) {
      uVar20 = uVar29;
      if (in_stack_00000074 != 0) {
        FUN_0026641e(iVar33,10,0,in_stack_00000064 + uVar29);
        in_stack_00000088 = 1;
        uVar20 = uVar29 + 1;
        in_stack_00000070 = in_stack_00000024;
      }
    }
    else {
      uVar7 = *(undefined4 *)(*in_stack_00000024 + 0xc);
      FUN_002786f4(piVar6,uVar7,in_stack_00000064 + uVar29);
      FUN_002664d8(iVar33,uVar7,in_stack_00000064 + uVar29,uVar19);
      if (iVar23 != 0) {
        puVar22 = (undefined1 *)(iVar23 + uVar29);
        iVar30 = FUN_0025cd0e(uVar7,*puVar22);
        if (iVar30 == 0x62) {
          *puVar22 = 0x62;
        }
        iVar30 = FUN_0025ca94(uVar7,*puVar22);
        if (iVar30 != 0) {
          *puVar22 = 0x62;
        }
      }
      uVar20 = uVar29 + 1;
    }
    FUN_0026650c(piVar6,in_stack_00000064,uVar20,iVar23);
    FUN_00266944(iVar33,*(undefined1 *)
                         (DAT_0027af9c + 0x27ad51 + uVar15 + in_stack_00000088 * 4 +
                         (int)in_stack_00000070 * 2),uVar31,uVar19);
    if (in_stack_00000030 != (int *)0x0) {
      uVar7 = *(undefined4 *)(*in_stack_00000030 + 0xc);
      iVar30 = in_stack_00000064 + uVar29;
      FUN_0025cb14(piVar6,iVar30,1);
      FUN_002786f4(piVar6,uVar7,iVar30);
      FUN_002664d8(iVar33,uVar7,iVar30,uVar19);
      if (iVar17 != 0) {
        puVar22 = (undefined1 *)(iVar17 + uVar29);
        iVar30 = FUN_0025cd0e(uVar7,*puVar22);
        if (iVar30 == 0x62) {
          *puVar22 = 0x62;
        }
        iVar30 = FUN_0025ca94(uVar7,*puVar22);
        if (iVar30 != 0) {
          *puVar22 = 0x62;
        }
      }
      FUN_0026650c(piVar6,in_stack_00000064,uVar29 + 1,iVar17);
    }
    FUN_0025fbda(*piVar6,iVar23);
    FUN_0025fbda(*piVar6,iVar17);
    puVar27[0xf] = *(uint *)(iVar33 + 0x1c);
    cVar2 = *(char *)(DAT_0027afa0 + 0x27ad77 +
                     (uVar15 + 1) * (uint)(uVar29 != 0 || in_stack_00000030 != (int *)0x0));
    if (cVar2 != -0x6b) {
      FUN_00266944(iVar33,cVar2,uVar31,uVar19);
      FUN_0025c3b8(iVar33,in_stack_0000008c + iVar18 != 0);
    }
    uVar7 = FUN_002627dc(piVar6);
    if ((*puVar27 & 0x300000) != 0) {
      FUN_00266266(iVar33,0x1d,uVar31,uVar29);
      FUN_0026641e(iVar33,0x49,uVar7,uVar4);
    }
    FUN_002627fe(piVar6,uVar7);
    FUN_0025d578(puVar27,in_stack_00000024);
    FUN_0025d578(puVar27,in_stack_00000030);
    if (in_stack_00000094 == (int *)0x0) {
      uVar7 = FUN_002627dc(piVar6);
      FUN_0026641e(iVar33,99,uVar31,uVar7);
      FUN_00262718(piVar6,uVar5,0xffffffff,uVar7);
      FUN_0026641e(iVar33,0x32,uVar5,uVar7);
    }
    if ((*puVar27 & 0x4000000) == 0) {
      uVar14 = 0x5c;
      if (uVar15 == 0) {
        uVar14 = 0x5f;
      }
    }
    else {
      uVar14 = 0x95;
    }
    *(undefined1 *)((int)puVar27 + 0x35) = uVar14;
    puVar27[0xe] = uVar31;
    FUN_0027b12e();
    return;
  }
  if ((uVar19 & 0x10000000) == 0) {
    *(undefined1 *)((int)puVar27 + 0x35) = *(undefined1 *)(DAT_0027b290 + uVar15 + 0x27b110);
    puVar27[0xe] = uVar5;
    iVar18 = FUN_0026641e(iVar33,*(undefined1 *)(iVar23 + 0x27b112 + uVar15),uVar5,in_stack_00000048
                         );
    puVar27[0xf] = iVar18 + 1;
    *(undefined1 *)((int)puVar27 + 0x36) = 1;
  }
  else {
    uVar29 = piVar6[0x12];
    piVar6[0x12] = uVar29 + 1;
    uVar19 = piVar6[0x13] + 1;
    piVar6[0x13] = uVar19;
    uVar7 = FUN_00266020(iVar33);
    uVar15 = puVar27[4];
    iVar18 = *(int *)(uVar15 + 0xc);
    *(undefined1 *)((int)puVar27 + 0x35) = 3;
    puVar27[0xe] = uVar19;
    if ((int)in_stack_0000004c[7] < 2) {
      in_stack_00000048 = (undefined2 *)in_stack_0000004c[3];
    }
    else {
      iVar23 = in_stack_0000004c[7] - uVar20;
      iVar30 = iVar23 + -1;
      in_stack_00000048 = (undefined2 *)FUN_0025ee10(*piVar6,iVar30 * 0x40 + 0x48);
      if (in_stack_00000048 == (undefined2 *)0x0) goto LAB_0027b20e;
      uVar3 = (undefined2)iVar23;
      in_stack_00000048[1] = uVar3;
      *in_stack_00000048 = uVar3;
      memcpy(in_stack_00000048 + 4,in_stack_00000030,0x40);
      iVar23 = in_stack_0000004c[3];
      puVar21 = puVar27;
      for (iVar24 = 1; iVar24 <= iVar30; iVar24 = iVar24 + 1) {
        memcpy(in_stack_00000048 + iVar24 * 0x20 + 4,
               (void *)(iVar23 + (uint)(byte)puVar21[0x21] * 0x40 + 8),0x40);
        puVar21 = puVar21 + 0x14;
      }
    }
    uVar31 = in_stack_00000098 & 8;
    if (uVar31 == 0) {
      in_stack_00000070 = (int *)(piVar6[0x13] + 1);
      piVar6[0x13] = piVar6[0x13] + 2;
      FUN_0026641e(iVar33,10,0,in_stack_00000070);
    }
    else {
      in_stack_00000070 = (int *)0x0;
    }
    in_stack_000000a0 = FUN_0026641e(iVar33,7,0,uVar19);
    iVar23 = 0;
    if (1 < *(int *)(iVar17 + 0x18)) {
      iVar23 = 0;
      for (iVar30 = 0; iVar30 < *(int *)(iVar17 + 0x18); iVar30 = iVar30 + 1) {
        piVar25 = (int *)(*(int *)(iVar17 + 0x20) + iVar30 * 0x28);
        if ((((*(ushort *)(*piVar25 + 2) & 1) == 0) &&
            ((*(byte *)((int)piVar25 + 0x12) & 0x12) == 0)) &&
           ((*(ushort *)(piVar25 + 4) & 0xfff) != 0)) {
          uVar8 = FUN_002606fc(*piVar6,*piVar25);
          iVar23 = FUN_00262684(*piVar6,iVar23,uVar8);
        }
      }
      if (iVar23 != 0) {
        iVar23 = FUN_00269118(piVar6,0x45,0,iVar23);
      }
    }
    bVar34 = false;
    in_stack_00000024 = (int *)0x0;
    for (uVar32 = 0; (int)uVar32 < *(int *)(iVar18 + 0x18); uVar32 = uVar32 + 1) {
      piVar25 = (int *)(*(int *)(iVar18 + 0x20) + uVar32 * 0x28);
      if ((piVar25[2] == uVar5) || ((short)piVar25[4] == 0x200)) {
        iVar30 = *piVar25;
        if (iVar23 != 0) {
          *(int *)(iVar23 + 8) = *piVar25;
          iVar30 = iVar23;
        }
        iVar30 = FUN_00279b98(piVar6,in_stack_00000048,iVar30,0);
        if (iVar30 != 0) {
          if ((char)piVar6[0x75] == '\x02') {
            FUN_0026aa30(piVar6,in_stack_00000048,iVar30 + 0x38,uVar20);
          }
          if (uVar31 == 0) {
            in_stack_00000094 = (int *)uVar32;
            if (uVar32 == *(int *)(iVar18 + 0x18) - 1U) {
              in_stack_00000094 = (int *)0xffffffff;
            }
            FUN_0027074a(piVar6,*(undefined4 *)((int)in_stack_00000030 + 0xc),0xffffffff,uVar5);
            FUN_00266944(iVar33,0x72,in_stack_00000070,*(int *)(iVar33 + 0x1c) + 2);
          }
          FUN_0026641e(iVar33,2,uVar19,uVar7);
          if (*(char *)(iVar30 + 7) != '\0') {
            bVar34 = true;
          }
          uVar16 = *(uint *)(iVar30 + 0x38) & 0xf0000;
          if (uVar16 != 0) {
            if ((*(uint *)(iVar30 + 0x38) & 0x20000000) == 0) {
              uVar16 = *(uint *)(iVar30 + 0x48);
              if ((uVar32 != 0) && ((int *)uVar16 != in_stack_00000024)) {
                uVar16 = 0;
              }
            }
            else {
              in_stack_00000024 = (int *)0x0;
              uVar16 = (uint)in_stack_00000024;
            }
          }
          in_stack_00000024 = (int *)uVar16;
          FUN_0026663a(iVar30);
        }
      }
    }
    puVar27[0x10] = (uint)in_stack_00000024;
    puVar27[8] = uVar29;
    if (iVar23 != 0) {
      *(undefined4 *)(iVar23 + 8) = 0;
      FUN_002610aa(*piVar6,iVar23);
    }
    FUN_0025c394(iVar33,in_stack_000000a0,*(undefined4 *)(iVar33 + 0x1c));
    FUN_0026641e(iVar33,1,0,puVar27[9]);
    FUN_0025c384(iVar33,uVar7);
    if (1 < (int)in_stack_0000004c[7]) {
      FUN_0025fbda(*piVar6,in_stack_00000048);
    }
    if (!bVar34) {
      FUN_0025d578(puVar27,uVar15);
      FUN_0027b12e();
      return;
    }
  }
  uVar35 = FUN_0025d3f8(*(undefined4 *)(iVar17 + 4),uVar5);
  uVar5 = ~(uint)((ulonglong)uVar35 >> 0x20);
  piVar25 = *(int **)(iVar17 + 0x20);
  for (in_stack_00000028 = *(int *)(iVar17 + 0x18); 0 < (int)in_stack_00000028;
      in_stack_00000028 = in_stack_00000028 + -1) {
    if ((*(byte *)((int)piVar25 + 0x12) & 6) == 0) {
      if ((piVar25[9] & uVar5) == 0 && (piVar25[8] & ~(uint)uVar35) == 0) {
        if ((puVar27[6] == 0) || ((int)((uint)*(ushort *)(*piVar25 + 2) << 0x1f) < 0)) {
          FUN_00278ac2(piVar6,*piVar25,uVar4,8);
          *(byte *)((int)piVar25 + 0x12) = *(byte *)((int)piVar25 + 0x12) | 4;
        }
      }
      else {
        *(undefined1 *)((int)in_stack_0000004c + 7) = 1;
      }
    }
    piVar25 = piVar25 + 10;
  }
  if (puVar27[6] != 0) {
    puVar27[0xc] = *(uint *)(iVar33 + 0x1c);
    FUN_0026641e(iVar33,7,1);
    FUN_0025cb7c(piVar6);
    puVar26 = *(undefined4 **)(iVar17 + 0x20);
    for (in_stack_00000020 = (uint *)0x0; (int)in_stack_00000020 < *(int *)(iVar17 + 0x18);
        in_stack_00000020 = (uint *)((int)in_stack_00000020 + 1)) {
      if (((*(byte *)((int)puVar26 + 0x12) & 6) == 0) &&
         ((puVar26[9] & uVar5) == 0 && (puVar26[8] & ~(uint)uVar35) == 0)) {
        FUN_00278ac2(piVar6,*puVar26,uVar4,8);
        *(byte *)((int)puVar26 + 0x12) = *(byte *)((int)puVar26 + 0x12) | 4;
      }
      puVar26 = puVar26 + 10;
    }
  }
  FUN_002627fe(piVar6,0);
LAB_0027b20e:
  in_stack_0000004c[5] = puVar27[0xb];
  if ((int)(uVar20 + 1) < in_stack_0000009c) {
    FUN_0027a65e();
  }
  FUN_0027b244();
  return;
}


