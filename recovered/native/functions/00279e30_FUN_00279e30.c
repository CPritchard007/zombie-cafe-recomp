/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00279e30 FUN_00279e30 */

void FUN_00279e30(void)

{
  byte bVar1;
  char cVar2;
  undefined2 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 uVar7;
  uint uVar8;
  int *piVar9;
  undefined4 uVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  undefined1 uVar13;
  uint uVar14;
  void *pvVar15;
  uint uVar16;
  undefined4 *puVar17;
  int iVar18;
  int iVar19;
  int *piVar20;
  int iVar21;
  uint *puVar22;
  undefined1 *puVar23;
  int iVar24;
  uint uVar25;
  uint uVar26;
  int iVar27;
  uint uVar28;
  uint uVar29;
  int unaff_r7;
  int *piVar30;
  uint *puVar31;
  bool bVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  uint *puStack00000020;
  byte *pbStack00000024;
  uint uStack00000028;
  uint uStack0000002c;
  int *piStack00000030;
  uint uStack00000034;
  int iStack00000038;
  uint *puStack00000040;
  uint uStack00000044;
  undefined2 *in_stack_00000048;
  undefined4 *in_stack_0000004c;
  uint uStack00000050;
  uint uStack00000054;
  uint uStack00000058;
  undefined4 *in_stack_0000005c;
  uint *in_stack_00000060;
  int in_stack_00000064;
  int iStack00000068;
  int *in_stack_00000070;
  uint uVar35;
  int iStack00000078;
  uint uStack0000007c;
  uint in_stack_00000088;
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
  uint in_stack_000000b8;
  undefined4 in_stack_000000c0;
  undefined4 in_stack_000000c4;
  undefined4 in_stack_000000d0;
  undefined4 in_stack_000000d4;
  uint in_stack_000000e0;
  undefined4 in_stack_000000e8;
  undefined4 in_stack_000000ec;
  undefined4 in_stack_000000f8;
  undefined4 in_stack_000000fc;
  uint in_stack_00000100;
  uint in_stack_00000104;
  undefined4 in_stack_00000120;
  uint in_stack_00000128;
  
  puStack00000020 = in_stack_0000004c + 0xe;
  pbStack00000024 = (byte *)0x0;
  uStack00000028 = 0xffffffff;
  uStack0000002c = 0xffffffff;
  uVar35 = 0xffffffff;
  puStack00000040 = puStack00000020;
  for (uStack0000007c = 0; (int)uStack0000007c < in_stack_0000009c;
      uStack0000007c = uStack0000007c + 1) {
    memset(&stack0x000000b8,0,0x28);
    in_stack_000000d0 = DAT_00279ef0;
    in_stack_000000d4 = DAT_00279ef4;
    piStack00000030 = (int *)0x0;
    uStack00000034 = 0;
    iStack00000078 = 0;
    iStack00000038 = -1;
    in_stack_000000a4 = CONCAT31(in_stack_000000a4._1_3_,uStack0000007c == 0);
    for (uStack00000058 = (uint)((int)pbStack00000024 < (int)in_stack_00000088);
        (uVar14 = in_stack_000000b8, iStack00000038 < 0 && (-1 < (int)uStack00000058));
        uStack00000058 = uStack00000058 - 1) {
      iVar19 = in_stack_00000090 + (int)pbStack00000024 * 0x40 + 8;
      for (iVar24 = (int)pbStack00000024;
          (iVar24 < in_stack_0000009c &&
          ((bVar32 = (*(byte *)(iVar19 + 0x1c) & 10) != 0, !bVar32 ||
           ((byte *)iVar24 == pbStack00000024)))); iVar24 = iVar24 + 1) {
        uVar33 = FUN_0025d3f8(in_stack_00000070,*(undefined4 *)(iVar19 + 0x20));
        uVar16 = (uint)((ulonglong)uVar33 >> 0x20);
        uVar14 = (uint)uVar33;
        if ((uVar16 & uStack0000002c) == 0 && (uVar14 & uStack00000028) == 0) {
          if ((byte *)iVar24 == pbStack00000024) {
            pbStack00000024 = (byte *)(iVar24 + 1);
          }
        }
        else {
          iStack00000078 = iStack00000078 + (uint)(*(int *)(iVar19 + 0x3c) == 0);
          if ((int)((uint)*(byte *)(*(int *)(iVar19 + 0xc) + 0x22) << 0x1b) < 0) {
            FUN_0026e390(in_stack_0000005c,unaff_r7,iVar19);
          }
          else {
            FUN_0026d5b8(in_stack_0000005c,unaff_r7,iVar19);
          }
          uVar5 = in_stack_000000fc;
          uVar4 = in_stack_000000f8;
          uVar10 = in_stack_000000d4;
          uVar7 = in_stack_000000d0;
          if ((uStack00000058 != 0) && ((in_stack_000000e0 & DAT_0027a290) == 0)) {
            piStack00000030 = (int *)((uint)piStack00000030 | uVar14);
            uStack00000034 = uStack00000034 | uVar16;
          }
          if (((((in_stack_00000104 & uStack0000002c) == 0 &&
                 (in_stack_00000100 & uStack00000028) == 0) &&
               ((((iStack00000038 < 0 ||
                  ((uVar14 & (uint)piStack00000030) != 0 || (uVar16 & uStack00000034) != 0)) ||
                 ((in_stack_000000b8 & DAT_0027a290) == 0)) ||
                ((in_stack_000000e0 & DAT_0027a290) != 0)))) &&
              (((iStack00000078 == 0 || (*(int *)(iVar19 + 0x3c) == 0)) ||
               ((in_stack_000000e0 & DAT_0027a290) != 0)))) &&
             (((iStack00000038 < 0 ||
               (iVar6 = __aeabi_dcmplt(in_stack_000000f8,in_stack_000000fc,in_stack_000000d0,
                                       in_stack_000000d4), iVar6 != 0)) ||
              ((iVar6 = __aeabi_dcmple(uVar4,uVar5,uVar7,uVar10), iVar6 != 0 &&
               (iVar6 = __aeabi_dcmplt(in_stack_000000e8,in_stack_000000ec,in_stack_000000c0,
                                       in_stack_000000c4), iVar6 != 0)))))) {
            memcpy(&stack0x000000b8,&stack0x000000e0,0x28);
            iStack00000038 = iVar24;
          }
          if (bVar32) break;
        }
        iVar19 = iVar19 + 0x40;
      }
    }
    if ((in_stack_00000060 != (uint *)0x0) && ((int)(in_stack_000000b8 << 7) < 0)) {
      *in_stack_00000060 = 0;
    }
    if ((int)(in_stack_000000b8 << 1) < 0) {
      *(undefined1 *)(in_stack_0000004c + 2) = 2;
    }
    memcpy(puStack00000040,&stack0x000000b8,0x18);
    if ((in_stack_000000b8 & DAT_0027a294) == 0) {
      puStack00000040[8] = 0xffffffff;
    }
    else if ((in_stack_00000094 == (int *)0x0) || ((int)(in_stack_000000b8 << 2) < 0)) {
      uVar16 = in_stack_0000005c[0x12];
      puStack00000040[8] = uVar16;
      in_stack_0000005c[0x12] = uVar16 + 1;
    }
    else {
      puStack00000040[8] = in_stack_00000128;
    }
    uVar33 = FUN_0025d3f8(in_stack_00000070,
                          *(undefined4 *)(in_stack_00000090 + iStack00000038 * 0x40 + 0x28));
    uVar10 = in_stack_000000c4;
    uVar7 = in_stack_000000c0;
    *(char *)(puStack00000040 + 0xd) = (char)iStack00000038;
    iVar24 = __aeabi_dcmpge(in_stack_000000c0,in_stack_000000c4,DAT_0027a288,DAT_0027a28c);
    if (iVar24 != 0) {
      uVar34 = __muldf3(in_stack_0000005c[0x6e],in_stack_0000005c[0x6f],uVar7,uVar10);
      *(undefined8 *)(in_stack_0000005c + 0x6e) = uVar34;
    }
    puVar17 = *(undefined4 **)(in_stack_00000090 + (iStack00000038 + 1) * 0x40 + 4);
    if ((puVar17 != (undefined4 *)0x0) && ((in_stack_000000b8 & 0xf0000) == 0)) {
      FUN_00268e48(in_stack_0000005c,DAT_0027a298 + 0x27a11a,*puVar17);
      FUN_0027b228();
    }
    uVar35 = uVar35 & uVar14;
    uStack00000028 = uStack00000028 & ~(uint)uVar33;
    uStack0000002c = uStack0000002c & ~(uint)((ulonglong)uVar33 >> 0x20);
    puStack00000040 = puStack00000040 + 0x14;
  }
  if (in_stack_0000005c[0x11] != 0) {
    FUN_0027b228();
  }
  uVar14 = (uint)*(byte *)((int)in_stack_00000048 + 0x36);
  if (uVar14 != 0) {
    FUN_0027b228();
  }
  bVar32 = (uVar35 & 0x4000000) != 0;
  if ((bVar32) && (in_stack_00000060 != (uint *)0x0)) {
    *in_stack_00000060 = uVar14;
  }
  if (((int)(in_stack_00000098 << 0x1d) < 0) && (bVar32)) {
    *(undefined1 *)((int)in_stack_0000004c + 6) = 1;
    in_stack_0000004c[0xe] = DAT_0027a29c & in_stack_0000004c[0xe];
  }
  FUN_00275ec4(in_stack_0000005c,0xffffffff);
  uVar7 = DAT_0027a28c;
  in_stack_0000004c[0xc] = DAT_0027a288;
  in_stack_0000004c[0xd] = uVar7;
  uStack00000050 = 0xffffffff;
  uStack00000054 = 0xffffffff;
  for (in_stack_00000070 = (int *)0x0; (int)in_stack_00000070 < in_stack_0000009c;
      in_stack_00000070 = (int *)((int)in_stack_00000070 + 1)) {
    iVar19 = in_stack_00000090 + (uint)(byte)puStack00000020[0xd] * 0x40 + 8;
    iVar24 = *(int *)(iVar19 + 0xc);
    puStack00000020[7] = *(uint *)(iVar19 + 0x20);
    uVar33 = __muldf3(in_stack_0000004c[0xc],in_stack_0000004c[0xd],puStack00000020[2],
                      puStack00000020[3]);
    *(undefined8 *)(in_stack_0000004c + 0xc) = uVar33;
    uVar7 = FUN_0025d12c(in_stack_00000048,*(undefined4 *)(iVar24 + 0x44));
    if (((*(byte *)(iVar24 + 0x22) & 2) == 0) && (*(int *)(iVar24 + 0x1c) == 0)) {
      if ((int)(*puStack00000020 << 4) < 0) {
        FUN_0025d364(in_stack_00000048,iVar24);
        FUN_002662da(in_stack_00000064,0x87,*(undefined4 *)(iVar19 + 0x20),0);
      }
      else if (((int)(*puStack00000020 << 8) < 0) || ((int)(in_stack_00000098 << 0x1b) < 0)) {
        FUN_00265f96(in_stack_0000005c,uVar7,*(undefined4 *)(iVar24 + 0x14),0);
      }
      else {
        FUN_002663cc(in_stack_0000005c,*(undefined4 *)(iVar19 + 0x20),uVar7,iVar24);
        if ((*(char *)((int)in_stack_0000004c + 6) == '\0') && (*(int *)(iVar24 + 8) < 0x40)) {
          uVar14 = *(uint *)(iVar19 + 0x34);
          iVar24 = 0;
          for (uVar35 = *(uint *)(iVar19 + 0x30); uVar35 != 0 || uVar14 != 0;
              uVar35 = uVar35 >> 1 | uVar16) {
            uVar16 = uVar14 << 0x1f;
            uVar14 = uVar14 >> 1;
            iVar24 = iVar24 + 1;
          }
          FUN_00263832(in_stack_00000064,*(int *)(in_stack_00000064 + 0x1c) + -1,iVar24,0xfffffff2);
        }
      }
    }
    puVar31 = puStack00000020;
    if ((int)(*puStack00000020 << 2) < 0) {
      pbStack00000024 = (byte *)in_stack_0000005c[2];
      in_stack_000000a0 = FUN_002665e6(in_stack_0000005c);
      iVar24 = *(int *)(iVar19 + 0xc);
      puStack00000040 = (uint *)0x0;
      uStack00000044 = 0;
      piVar20 = *(int **)(unaff_r7 + 0x20);
      uStack00000028 = 0;
      in_stack_00000094 = piVar20 + *(int *)(unaff_r7 + 0x18) * 10;
      uStack0000007c = uStack00000054;
      for (; piVar20 < in_stack_00000094; piVar20 = piVar20 + 10) {
        if (((piVar20[2] == *(int *)(iVar19 + 0x20)) && ((short)piVar20[4] == 2)) &&
           ((piVar20[7] & uStack0000007c) == 0 && (piVar20[6] & uStack00000050) == 0)) {
          iVar21 = piVar20[3];
          bVar1 = *(byte *)(*(int *)(iVar24 + 0xc) + iVar21 * 0x18 + 0x16);
          iVar6 = FUN_0025cd42(*piVar20);
          if (iVar6 == 0x61) {
LAB_0027a32e:
            bVar32 = bVar1 == 0x61;
          }
          else {
            if (iVar6 == 0x62) {
              FUN_0027b258();
              goto LAB_0027a32e;
            }
            bVar32 = 0x62 < bVar1;
          }
          if (bVar32) {
            FUN_0027b258();
            uVar33 = __ashldi3(1,0,iVar21);
            uVar35 = (uint)((ulonglong)uVar33 >> 0x20);
            if ((uStack00000044 & uVar35) == 0 && ((uint)puStack00000040 & (uint)uVar33) == 0) {
              puStack00000040 = (uint *)((uint)puStack00000040 | (uint)uVar33);
              uStack00000028 = uStack00000028 + 1;
              uStack00000044 = uStack00000044 | uVar35;
            }
          }
        }
      }
      puStack00000020[1] = uStack00000028;
      uVar16 = *(uint *)(iVar19 + 0x34);
      iVar6 = *(int *)(iVar24 + 8);
      uVar14 = (~uStack00000044 | 0x80000000) & uVar16;
      uVar35 = *(uint *)(iVar19 + 0x30) & ~(uint)puStack00000040;
      iStack00000068 = iVar6;
      if (0x3f < iVar6) {
        iStack00000068 = 0x3f;
      }
      for (iVar21 = 0; iVar21 < iStack00000068; iVar21 = iVar21 + 1) {
        uVar8 = __lshrdi3(uVar35,uVar14,iVar21);
        uStack00000028 = uStack00000028 + (uVar8 & 1);
      }
      if ((int)uVar16 < 0) {
        uStack00000028 = uStack00000028 + iVar6 + -0x3f;
      }
      uVar16 = uStack00000028;
      *puStack00000020 = *puStack00000020 | DAT_0027a734;
      piVar20 = (int *)FUN_0025f04c(*in_stack_0000005c,uStack00000028 * 9 + 0x30);
      if (piVar20 != (int *)0x0) {
        piVar30 = piVar20 + 0xc;
        puStack00000020[4] = (uint)piVar20;
        piVar20[8] = (int)piVar30;
        piVar20[7] = (int)(piVar30 + uVar16 + uVar16);
        piVar20[1] = (int)(piVar30 + uVar16);
        iVar6 = DAT_0027a738;
        piVar20[9] = uStack00000028;
        *piVar20 = iVar6 + 0x27a41a;
        piVar20[3] = iVar24;
        puStack00000040 = (uint *)0x0;
        uStack00000044 = 0;
        piVar30 = *(int **)(unaff_r7 + 0x20);
        piStack00000030 = (int *)0x0;
        iVar6 = DAT_0027a73c + 0x27a432;
        for (; piVar30 < in_stack_00000094; piVar30 = piVar30 + 10) {
          if (((piVar30[2] == *(int *)(iVar19 + 0x20)) && ((short)piVar30[4] == 2)) &&
             ((piVar30[7] & uStack00000054) == 0 && (piVar30[6] & uStack00000050) == 0)) {
            uStack0000007c = piVar30[3];
            iVar21 = *piVar30;
            bVar1 = *(byte *)(*(int *)(*(int *)(iVar19 + 0xc) + 0xc) + uStack0000007c * 0x18 + 0x16)
            ;
            iVar18 = FUN_0025cd42();
            if (iVar18 == 0x61) {
LAB_0027a476:
              bVar32 = bVar1 == 0x61;
            }
            else {
              if (iVar18 == 0x62) {
                FUN_0027b26c();
                goto LAB_0027a476;
              }
              bVar32 = 0x62 < bVar1;
            }
            if (bVar32) {
              FUN_0027b26c();
              uVar33 = __ashldi3(1,0,uStack0000007c);
              uVar16 = (uint)((ulonglong)uVar33 >> 0x20);
              if ((uStack00000044 & uVar16) == 0 && ((uint)puStack00000040 & (uint)uVar33) == 0) {
                uStack00000044 = uStack00000044 | uVar16;
                puStack00000040 = (uint *)((uint)puStack00000040 | (uint)uVar33);
                *(uint *)(piVar20[1] + (int)piStack00000030 * 4) = uStack0000007c;
                piVar9 = (int *)FUN_0026d3c4(in_stack_0000005c,*(undefined4 *)(iVar21 + 8),
                                             *(undefined4 *)(iVar21 + 0xc));
                iVar21 = iVar6;
                if (piVar9 != (int *)0x0) {
                  iVar21 = *piVar9;
                }
                *(int *)(piVar20[8] + (int)piStack00000030 * 4) = iVar21;
                piStack00000030 = (int *)((int)piStack00000030 + 1);
              }
            }
          }
        }
        iVar21 = DAT_0027a740 + 0x27a4f2;
        for (iVar6 = 0; iVar6 < iStack00000068; iVar6 = iVar6 + 1) {
          uVar16 = __lshrdi3(uVar35,uVar14,iVar6);
          if ((uVar16 & 1) != 0) {
            *(int *)(piVar20[1] + (int)piStack00000030 * 4) = iVar6;
            *(int *)(piVar20[8] + (int)piStack00000030 * 4) = iVar21;
            piStack00000030 = (int *)((int)piStack00000030 + 1);
          }
        }
        if (*(int *)(iVar19 + 0x34) < 0) {
          iVar21 = (int)piStack00000030 << 2;
          iVar6 = DAT_0027a744 + 0x27a52e;
          for (iVar18 = 0x3f; iVar18 < *(int *)(iVar24 + 8); iVar18 = iVar18 + 1) {
            *(int *)(piVar20[1] + iVar21) = iVar18;
            *(int *)(piVar20[8] + iVar21) = iVar6;
            iVar21 = iVar21 + 4;
          }
        }
        FUN_0026e770(in_stack_0000005c,piVar20);
        puVar31 = puStack00000020;
        FUN_002662da(pbStack00000024,0x29,puStack00000020[8],uStack00000028 + 1);
        iVar24 = FUN_002665da(pbStack00000024,0x48,puVar31[7]);
        uVar10 = FUN_002627dc(in_stack_0000005c);
        FUN_002707d4(in_stack_0000005c,piVar20,puStack00000020[7],uVar10);
        puVar31 = puStack00000020;
        FUN_0026641e(pbStack00000024,0x61,puStack00000020[8],uVar10);
        FUN_0025c3b8(pbStack00000024,0x10);
        FUN_0026641e(pbStack00000024,0x5f,puVar31[7],iVar24 + 1);
        FUN_0025c3b8(pbStack00000024,3);
        FUN_002624c2(pbStack00000024,iVar24);
        FUN_002627fe(in_stack_0000005c,uVar10);
        FUN_002624c2(pbStack00000024,in_stack_000000a0);
      }
    }
    else if ((*puStack00000020 & 0xf0000) != 0) {
      uVar35 = puStack00000020[4];
      FUN_0026e770(in_stack_0000005c,uVar35);
      FUN_002662da(in_stack_00000064,0x27,puVar31[8],*(undefined4 *)(uVar35 + 0x28));
    }
    FUN_00275ec4(in_stack_0000005c,uVar7);
    uVar33 = FUN_0025d3f8(*(undefined4 *)(unaff_r7 + 4),*(undefined4 *)(iVar19 + 0x20));
    uStack00000050 = uStack00000050 & ~(uint)uVar33;
    uStack00000054 = uStack00000054 & ~(uint)((ulonglong)uVar33 >> 0x20);
    puStack00000020 = puStack00000020 + 0x14;
  }
  in_stack_0000004c[4] = *(undefined4 *)(in_stack_00000064 + 0x1c);
  uVar35 = (uint)*(byte *)((int)in_stack_00000048 + 0x36);
  if (uVar35 != 0) {
    FUN_0027b228();
  }
  puStack00000040 = (uint *)0xffffffff;
  in_stack_000000ac = in_stack_00000098 & 0x20;
  uStack0000007c = uVar35;
  FUN_0027b21a();
  puVar31 = in_stack_0000004c + uStack0000007c * 0x14 + 0xe;
  if (*(char *)(in_stack_0000005c + 0x75) == '\x02') {
    FUN_0026aa30(in_stack_0000005c,in_stack_00000090,puVar31,uStack0000007c);
  }
  piVar20 = (int *)*in_stack_0000004c;
  iVar24 = in_stack_0000004c[8];
  puStack00000020 = (uint *)piVar20[2];
  piStack00000030 = (int *)(in_stack_0000004c[3] + (uint)(byte)puVar31[0xd] * 0x40 + 8);
  pbStack00000024 = (byte *)*puVar31;
  uStack00000028 = *(uint *)((int)piStack00000030 + 0x20);
  in_stack_00000094 = (int *)((uint)pbStack00000024 & 0x800000);
  if (in_stack_00000094 != (int *)0x0) {
    in_stack_00000094 = (int *)(uint)(in_stack_000000ac == 0);
  }
  in_stack_00000048 = (undefined2 *)FUN_00266020(puStack00000020);
  puVar31[10] = (uint)in_stack_00000048;
  puVar31[9] = (uint)in_stack_00000048;
  uVar35 = FUN_00266020(puStack00000020);
  puVar31[0xb] = uVar35;
  if (((char)puVar31[0xd] != '\0') &&
     ((int)((uint)*(byte *)((int)piStack00000030 + 0x1c) << 0x1c) < 0)) {
    iVar19 = piVar20[0x13];
    piVar20[0x13] = iVar19 + 1U;
    puVar31[6] = iVar19 + 1U;
    FUN_0026641e(puStack00000020,7,0);
  }
  uVar14 = *puVar31;
  if ((uVar14 & 0x8000000) != 0) {
    puVar22 = (uint *)puVar31[4];
    pbStack00000024 = (byte *)*puVar22;
    piVar30 = (int *)puVar22[4];
    uVar14 = puVar22[1];
    piVar20[0x17] = piVar20[0x17] + 1;
    iVar6 = (int)pbStack00000024 + 2;
    iVar19 = FUN_00262834(piVar20,iVar6);
    for (iVar21 = 1; iVar21 <= (int)pbStack00000024; iVar21 = iVar21 + 1) {
      piStack00000030 = (int *)0x0;
      piVar9 = piVar30;
      do {
        if (*piVar9 == iVar21) {
          FUN_002786f4(piVar20,*(undefined4 *)
                                (*(int *)(*(int *)(uVar14 + (int)piStack00000030 * 0xc + 8) * 0x28 +
                                         *(int *)(iVar24 + 0x20)) + 0xc),iVar19 + 1 + iVar21);
          break;
        }
        piVar9 = piVar9 + 2;
        piStack00000030 = (int *)((int)piStack00000030 + 1);
      } while ((int)piStack00000030 < (int)pbStack00000024);
      if ((byte *)piStack00000030 == pbStack00000024) break;
    }
    FUN_0026641e(puStack00000020,7,puVar22[5],iVar19);
    FUN_0026641e(puStack00000020,7,iVar21 + -1,iVar19 + 1);
    FUN_002662da(puStack00000020,0x88,uStack00000028,in_stack_00000048);
    puVar22[7] = 0;
    for (in_stack_00000048 = (undefined2 *)0x0; (int)in_stack_00000048 < (int)pbStack00000024;
        in_stack_00000048 = (undefined2 *)((int)in_stack_00000048 + 1)) {
      if ((char)piVar30[1] != '\0') {
        FUN_0025d578(puVar31,*(int *)(iVar24 + 0x20) + *(int *)(uVar14 + 8) * 0x28);
      }
      piVar30 = piVar30 + 2;
      uVar14 = uVar14 + 0xc;
    }
    *(undefined1 *)((int)puVar31 + 0x35) = 0x8a;
    puVar31[0xe] = uStack00000028;
    uVar14 = *(uint *)((int)puStack00000020 + 0x1c);
    puVar31[0xf] = uVar14;
    FUN_0025cbb8(piVar20,iVar19,iVar6);
    FUN_002644ac(piVar20);
    FUN_0027b12e();
  }
  if ((uVar14 & 0x1000) != 0) {
    uVar7 = FUN_002627dc(piVar20);
    uVar10 = FUN_0026d44c(iVar24,uStack00000028,0xffffffff);
    uVar7 = FUN_00278240(piVar20,uVar10,puVar31,uVar7);
    in_stack_00000048 = (undefined2 *)puVar31[10];
    FUN_0026641e(puStack00000020,0x15,uVar7,in_stack_00000048);
    FUN_00266266(puStack00000020,0x36,uStack00000028,in_stack_00000048);
    uVar33 = FUN_00262718(piVar20,uStack00000028,0xffffffff,uVar7);
    uVar14 = (int)puVar31 + 0x35;
    FUN_0027b12c((int)uVar33,(int)((ulonglong)uVar33 >> 0x20),0x95);
  }
  iVar6 = DAT_0027b290;
  iVar19 = ((int)pbStack00000024 << 6) >> 0x1f;
  uVar16 = -iVar19;
  if ((int)(uVar14 << 0x12) < 0) {
    puVar11 = (undefined4 *)FUN_0026d44c(iVar24,uStack00000028,0xffffffff);
    puVar12 = (undefined4 *)FUN_0026d44c(iVar24,uStack00000028,0xffffffff);
    puVar17 = puVar11;
    if (uVar16 == 0) {
      puVar17 = puVar12;
      puVar12 = puVar11;
    }
    if (puVar12 == (undefined4 *)0x0) {
      uVar7 = 0x48;
      if (uVar16 != 0) {
        uVar7 = 0x43;
      }
      FUN_0026641e(puStack00000020,uVar7,uStack00000028,in_stack_00000048);
    }
    else {
      memcpy(&stack0x000000e0,(void *)(DAT_0027abf8 + 0x27a97d),4);
      pbStack00000024 = (byte *)*puVar12;
      uVar7 = FUN_002786c2(piVar20,*(undefined4 *)(pbStack00000024 + 0xc),&stack0x000000b4);
      FUN_00266266(puStack00000020,*(undefined1 *)((int)&stack0x00000090 + *pbStack00000024 + 3),
                   uStack00000028,in_stack_00000048);
      FUN_0025cb14(piVar20,uVar7,1);
      FUN_002627fe(piVar20,in_stack_000000b4);
      FUN_0025d578(puVar31,puVar12);
    }
    if (puVar17 == (undefined4 *)0x0) {
      pbStack00000024 = (byte *)0x95;
      piStack00000030 = (int *)0x0;
    }
    else {
      pbStack00000024 = (byte *)*puVar17;
      piStack00000030 = (int *)(piVar20[0x13] + 1);
      piVar20[0x13] = (int)piStack00000030;
      FUN_002786f4(piVar20,*(undefined4 *)((char *)pbStack00000024 + 0xc),piStack00000030);
      if ((*pbStack00000024 == 'M') || (*pbStack00000024 == 'O')) {
        pbStack00000024 = (byte *)0x50;
        if (uVar16 != 0) {
          pbStack00000024 = (byte *)0x4e;
        }
      }
      else {
        pbStack00000024 = (byte *)0x4d;
        if (uVar16 != 0) {
          pbStack00000024 = (byte *)0x4f;
        }
      }
      FUN_0025d578(puVar31,puVar17);
    }
    uVar35 = *(uint *)((int)puStack00000020 + 0x1c);
    uVar13 = 0x5f;
    if (uVar16 != 0) {
      uVar13 = 0x5c;
    }
    *(undefined1 *)((int)puVar31 + 0x35) = uVar13;
    puVar31[0xe] = uStack00000028;
    puVar31[0xf] = uVar35;
    if ((puVar17 == (undefined4 *)0x0) && (puVar12 == (undefined4 *)0x0)) {
      *(undefined1 *)((int)puVar31 + 0x36) = 1;
    }
    if (pbStack00000024 == (byte *)0x95) {
      FUN_0027b12e();
      return;
    }
    uVar7 = FUN_002627dc(piVar20);
    FUN_0026641e(puStack00000020,0x41,uStack00000028,uVar7);
    FUN_00262718(piVar20,uStack00000028,0xffffffff,uVar7);
    FUN_00266266(puStack00000020,pbStack00000024,piStack00000030,in_stack_00000048);
    FUN_0025c3b8(puStack00000020,0x6b);
    FUN_0027b12e();
    return;
  }
  if ((uVar14 & 0x30000) != 0) {
    uVar28 = puVar31[1];
    uVar8 = puVar31[4];
    uVar29 = puVar31[8];
    if (uVar28 == *(uint *)(uVar8 + 0x24)) {
      uVar7 = 0xffffffff;
    }
    else {
      uVar7 = *(undefined4 *)(uVar28 * 4 + *(int *)(uVar8 + 4));
    }
    uVar25 = in_stack_00000098 & 1;
    if (((uVar25 != 0) && (uVar25 = uVar14 & 0x1000000, uVar25 != 0)) &&
       (uVar25 = 1, (int)*(uint *)(uVar8 + 0x24) <= (int)uVar28)) {
      uVar25 = 0;
    }
    if ((uVar14 & 0x100000) == 0) {
      pbStack00000024 = (byte *)0x0;
      uVar14 = uVar25;
    }
    else {
      pbStack00000024 = (byte *)FUN_0026d44c(iVar24,uStack00000028,uVar7);
      uVar14 = 1;
    }
    piStack00000030 = (int *)(*puVar31 & 0x200000);
    if (piStack00000030 != (int *)0x0) {
      piStack00000030 = (int *)FUN_0026d44c(iVar24,uStack00000028,uVar7);
      uVar14 = 1;
    }
    iVar21 = piVar20[2];
    in_stack_000000a0 = puVar31[1];
    uVar26 = puVar31[4];
    in_stack_000000a8 = puVar31[7];
    in_stack_00000064 = piVar20[0x13] + 1;
    in_stack_000000a4 = uVar14 + in_stack_000000a0;
    piVar20[0x13] = piVar20[0x13] + in_stack_000000a4;
    iVar6 = *piVar20;
    uVar7 = FUN_0025ef9c(iVar21,uVar26);
    iVar6 = FUN_0025f25a(iVar6,uVar7);
    if (iVar6 == 0) {
      *(undefined1 *)(*piVar20 + 0x36) = 1;
    }
    in_stack_00000060 = (uint *)0x0;
    while (((int)in_stack_00000060 < (int)in_stack_000000a0 &&
           (piVar30 = (int *)FUN_0026d44c(iVar24,in_stack_000000a8,
                                          *(undefined4 *)
                                           ((int)in_stack_00000060 * 4 + *(int *)(uVar26 + 4))),
           piVar30 != (int *)0x0))) {
      iVar27 = in_stack_00000064 + (int)in_stack_00000060;
      iVar18 = FUN_00278240(piVar20,piVar30,puVar31,iVar27);
      if (iVar18 != iVar27) {
        if (in_stack_000000a4 == 1) {
          FUN_002627fe(piVar20,in_stack_00000064);
          in_stack_00000064 = iVar18;
        }
        else {
          FUN_0026641e(iVar21,0xf,iVar18,iVar27);
        }
      }
      if ((*(ushort *)(piVar30 + 4) & 0x81) == 0) {
        uVar7 = *(undefined4 *)(*piVar30 + 0xc);
        FUN_002664d8(iVar21,uVar7,in_stack_00000064 + (int)in_stack_00000060,puVar31[9]);
        if (iVar6 != 0) {
          iVar18 = FUN_0025cd0e(uVar7,*(undefined1 *)(iVar6 + (int)in_stack_00000060));
          if (iVar18 == 0x62) {
            *(undefined1 *)(iVar6 + (int)in_stack_00000060) = 0x62;
          }
          iVar18 = FUN_0025ca94(uVar7,*(undefined1 *)(iVar6 + (int)in_stack_00000060));
          if (iVar18 != 0) {
            *(undefined1 *)(iVar6 + (int)in_stack_00000060) = 0x62;
          }
        }
      }
      in_stack_00000060 = (uint *)((int)in_stack_00000060 + 1);
    }
    iVar24 = FUN_0025f25a(*piVar20,iVar6);
    piVar30 = (int *)pbStack00000024;
    uVar14 = puVar31[10];
    if ((((int)*(uint *)(uVar8 + 0x24) <= (int)uVar28) ||
        (uVar16 != (*(char *)(*(int *)(uVar8 + 0x1c) + uVar28) == '\0'))) &&
       ((uVar16 == 0 || (*(uint *)(uVar8 + 0x24) != uVar28)))) {
      pbStack00000024 = (byte *)piStack00000030;
      piStack00000030 = piVar30;
    }
    in_stack_00000070 = (int *)0x1;
    if (pbStack00000024 != (byte *)0x0) {
      in_stack_00000070 = (int *)(uint)((*(ushort *)((int)pbStack00000024 + 0x10) & 0x28) != 0);
    }
    uStack0000008c = 1;
    if (piStack00000030 != (int *)0x0) {
      uStack0000008c = (uint)((*(ushort *)(piStack00000030 + 4) & 0x28) != 0);
    }
    in_stack_00000088 =
         (uint)(pbStack00000024 != (byte *)0x0) | ((int)uVar28 >> 0x1f) - uVar28 >> 0x1f;
    if (pbStack00000024 == (byte *)0x0) {
      uVar8 = uVar28;
      if (uVar25 != 0) {
        FUN_0026641e(puStack00000020,10,0,in_stack_00000064 + uVar28);
        in_stack_00000088 = 1;
        uVar8 = uVar28 + 1;
        in_stack_00000070 = (int *)pbStack00000024;
      }
    }
    else {
      uVar7 = *(undefined4 *)(*(int *)pbStack00000024 + 0xc);
      FUN_002786f4(piVar20,uVar7,in_stack_00000064 + uVar28);
      FUN_002664d8(puStack00000020,uVar7,in_stack_00000064 + uVar28,uVar14);
      if (iVar6 != 0) {
        puVar23 = (undefined1 *)(iVar6 + uVar28);
        iVar21 = FUN_0025cd0e(uVar7,*puVar23);
        if (iVar21 == 0x62) {
          *puVar23 = 0x62;
        }
        iVar21 = FUN_0025ca94(uVar7,*puVar23);
        if (iVar21 != 0) {
          *puVar23 = 0x62;
        }
      }
      uVar8 = uVar28 + 1;
    }
    FUN_0026650c(piVar20,in_stack_00000064,uVar8,iVar6);
    FUN_00266944(puStack00000020,
                 *(undefined1 *)
                  (DAT_0027af9c + 0x27ad51 + uVar16 + in_stack_00000088 * 4 +
                  (int)in_stack_00000070 * 2),uVar29,uVar14);
    if (piStack00000030 != (int *)0x0) {
      uVar7 = *(undefined4 *)(*piStack00000030 + 0xc);
      iVar21 = in_stack_00000064 + uVar28;
      FUN_0025cb14(piVar20,iVar21,1);
      FUN_002786f4(piVar20,uVar7,iVar21);
      FUN_002664d8(puStack00000020,uVar7,iVar21,uVar14);
      if (iVar24 != 0) {
        puVar23 = (undefined1 *)(iVar24 + uVar28);
        iVar21 = FUN_0025cd0e(uVar7,*puVar23);
        if (iVar21 == 0x62) {
          *puVar23 = 0x62;
        }
        iVar21 = FUN_0025ca94(uVar7,*puVar23);
        if (iVar21 != 0) {
          *puVar23 = 0x62;
        }
      }
      FUN_0026650c(piVar20,in_stack_00000064,uVar28 + 1,iVar24);
    }
    FUN_0025fbda(*piVar20,iVar6);
    FUN_0025fbda(*piVar20,iVar24);
    puVar31[0xf] = *(uint *)((int)puStack00000020 + 0x1c);
    cVar2 = *(char *)(DAT_0027afa0 + 0x27ad77 +
                     (uVar16 + 1) * (uint)(uVar28 != 0 || piStack00000030 != (int *)0x0));
    if (cVar2 != -0x6b) {
      FUN_00266944(puStack00000020,cVar2,uVar29,uVar14);
      FUN_0025c3b8(puStack00000020,uStack0000008c + iVar19 != 0);
    }
    uVar7 = FUN_002627dc(piVar20);
    if ((*puVar31 & 0x300000) != 0) {
      FUN_00266266(puStack00000020,0x1d,uVar29,uVar28);
      FUN_0026641e(puStack00000020,0x49,uVar7,uVar35);
    }
    FUN_002627fe(piVar20,uVar7);
    FUN_0025d578(puVar31,pbStack00000024);
    FUN_0025d578(puVar31,piStack00000030);
    if (in_stack_00000094 == (int *)0x0) {
      uVar7 = FUN_002627dc(piVar20);
      FUN_0026641e(puStack00000020,99,uVar29,uVar7);
      FUN_00262718(piVar20,uStack00000028,0xffffffff,uVar7);
      FUN_0026641e(puStack00000020,0x32,uStack00000028,uVar7);
    }
    if ((*puVar31 & 0x4000000) == 0) {
      uVar13 = 0x5c;
      if (uVar16 == 0) {
        uVar13 = 0x5f;
      }
    }
    else {
      uVar13 = 0x95;
    }
    *(undefined1 *)((int)puVar31 + 0x35) = uVar13;
    puVar31[0xe] = uVar29;
    FUN_0027b12e();
    return;
  }
  if ((uVar14 & 0x10000000) == 0) {
    *(undefined1 *)((int)puVar31 + 0x35) = *(undefined1 *)(DAT_0027b290 + uVar16 + 0x27b110);
    puVar31[0xe] = uStack00000028;
    iVar19 = FUN_0026641e(puStack00000020,*(undefined1 *)(iVar6 + 0x27b112 + uVar16),uStack00000028,
                          in_stack_00000048);
    puVar31[0xf] = iVar19 + 1;
    *(undefined1 *)((int)puVar31 + 0x36) = 1;
  }
  else {
    uVar8 = piVar20[0x12];
    piVar20[0x12] = uVar8 + 1;
    uVar14 = piVar20[0x13] + 1;
    piVar20[0x13] = uVar14;
    uVar7 = FUN_00266020(puStack00000020);
    uVar16 = puVar31[4];
    iVar19 = *(int *)(uVar16 + 0xc);
    *(undefined1 *)((int)puVar31 + 0x35) = 3;
    puVar31[0xe] = uVar14;
    if ((int)in_stack_0000004c[7] < 2) {
      in_stack_00000048 = (undefined2 *)in_stack_0000004c[3];
    }
    else {
      iVar6 = in_stack_0000004c[7] - uStack0000007c;
      pbStack00000024 = (byte *)(iVar6 - 1);
      in_stack_00000048 = (undefined2 *)FUN_0025ee10(*piVar20,(int)pbStack00000024 * 0x40 + 0x48);
      if (in_stack_00000048 == (undefined2 *)0x0) goto LAB_0027b20e;
      uVar3 = (undefined2)iVar6;
      in_stack_00000048[1] = uVar3;
      *in_stack_00000048 = uVar3;
      memcpy(in_stack_00000048 + 4,piStack00000030,0x40);
      iVar6 = in_stack_0000004c[3];
      puVar22 = puVar31;
      for (iVar21 = 1; iVar21 <= (int)pbStack00000024; iVar21 = iVar21 + 1) {
        memcpy(in_stack_00000048 + iVar21 * 0x20 + 4,
               (void *)(iVar6 + (uint)(byte)puVar22[0x21] * 0x40 + 8),0x40);
        puVar22 = puVar22 + 0x14;
      }
    }
    uVar28 = in_stack_00000098 & 8;
    if (uVar28 == 0) {
      in_stack_00000070 = (int *)(piVar20[0x13] + 1);
      piVar20[0x13] = piVar20[0x13] + 2;
      FUN_0026641e(puStack00000020,10,0,in_stack_00000070);
    }
    else {
      in_stack_00000070 = (int *)0x0;
    }
    in_stack_000000a0 = FUN_0026641e(puStack00000020,7,0,uVar14);
    iVar6 = 0;
    if (1 < *(int *)(iVar24 + 0x18)) {
      iVar6 = 0;
      for (iVar21 = 0; iVar21 < *(int *)(iVar24 + 0x18); iVar21 = iVar21 + 1) {
        piVar30 = (int *)(*(int *)(iVar24 + 0x20) + iVar21 * 0x28);
        if ((((*(ushort *)(*piVar30 + 2) & 1) == 0) &&
            ((*(byte *)((int)piVar30 + 0x12) & 0x12) == 0)) &&
           ((*(ushort *)(piVar30 + 4) & 0xfff) != 0)) {
          uVar10 = FUN_002606fc(*piVar20,*piVar30);
          iVar6 = FUN_00262684(*piVar20,iVar6,uVar10);
        }
      }
      if (iVar6 != 0) {
        iVar6 = FUN_00269118(piVar20,0x45,0,iVar6);
      }
    }
    bVar32 = false;
    pbStack00000024 = (byte *)0x0;
    for (uVar29 = 0; (int)uVar29 < *(int *)(iVar19 + 0x18); uVar29 = uVar29 + 1) {
      piVar30 = (int *)(*(int *)(iVar19 + 0x20) + uVar29 * 0x28);
      if ((piVar30[2] == uStack00000028) || ((short)piVar30[4] == 0x200)) {
        iVar21 = *piVar30;
        if (iVar6 != 0) {
          *(int *)(iVar6 + 8) = *piVar30;
          iVar21 = iVar6;
        }
        iVar21 = FUN_00279b98(piVar20,in_stack_00000048,iVar21,0);
        if (iVar21 != 0) {
          if ((char)piVar20[0x75] == '\x02') {
            FUN_0026aa30(piVar20,in_stack_00000048,iVar21 + 0x38,uStack0000007c);
          }
          if (uVar28 == 0) {
            in_stack_00000094 = (int *)uVar29;
            if (uVar29 == *(int *)(iVar19 + 0x18) - 1U) {
              in_stack_00000094 = (int *)0xffffffff;
            }
            FUN_0027074a(piVar20,*(undefined4 *)((int)piStack00000030 + 0xc),0xffffffff,
                         uStack00000028);
            FUN_00266944(puStack00000020,0x72,in_stack_00000070,
                         *(int *)((int)puStack00000020 + 0x1c) + 2);
          }
          FUN_0026641e(puStack00000020,2,uVar14,uVar7);
          if (*(char *)(iVar21 + 7) != '\0') {
            bVar32 = true;
          }
          pvVar15 = (void *)(*(uint *)(iVar21 + 0x38) & 0xf0000);
          if (pvVar15 != (void *)0x0) {
            if ((*(uint *)(iVar21 + 0x38) & 0x20000000) == 0) {
              pvVar15 = *(void **)(iVar21 + 0x48);
              if ((uVar29 != 0) && ((byte *)pvVar15 != pbStack00000024)) {
                pvVar15 = (void *)0x0;
              }
            }
            else {
              pbStack00000024 = (byte *)0x0;
              pvVar15 = pbStack00000024;
            }
          }
          pbStack00000024 = (byte *)pvVar15;
          FUN_0026663a(iVar21);
        }
      }
    }
    puVar31[0x10] = (uint)pbStack00000024;
    puVar31[8] = uVar8;
    if (iVar6 != 0) {
      *(undefined4 *)(iVar6 + 8) = 0;
      FUN_002610aa(*piVar20,iVar6);
    }
    FUN_0025c394(puStack00000020,in_stack_000000a0,*(undefined4 *)((int)puStack00000020 + 0x1c));
    FUN_0026641e(puStack00000020,1,0,puVar31[9]);
    FUN_0025c384(puStack00000020,uVar7);
    if (1 < (int)in_stack_0000004c[7]) {
      FUN_0025fbda(*piVar20,in_stack_00000048);
    }
    if (!bVar32) {
      FUN_0025d578(puVar31,uVar16);
      FUN_0027b12e();
      return;
    }
  }
  uVar33 = FUN_0025d3f8(*(undefined4 *)(iVar24 + 4),uStack00000028);
  uVar16 = (uint)puStack00000040 & ~(uint)uVar33;
  uVar14 = ~(uint)((ulonglong)uVar33 >> 0x20);
  piVar30 = *(int **)(iVar24 + 0x20);
  puStack00000040 = (uint *)uVar16;
  for (uStack00000028 = *(uint *)(iVar24 + 0x18); 0 < (int)uStack00000028;
      uStack00000028 = uStack00000028 - 1) {
    if ((*(byte *)((int)piVar30 + 0x12) & 6) == 0) {
      if ((piVar30[9] & uVar14) == 0 && (piVar30[8] & uVar16) == 0) {
        if ((puVar31[6] == 0) || ((int)((uint)*(ushort *)(*piVar30 + 2) << 0x1f) < 0)) {
          FUN_00278ac2(piVar20,*piVar30,uVar35,8);
          *(byte *)((int)piVar30 + 0x12) = *(byte *)((int)piVar30 + 0x12) | 4;
        }
      }
      else {
        *(undefined1 *)((int)in_stack_0000004c + 7) = 1;
      }
    }
    piVar30 = piVar30 + 10;
  }
  if (puVar31[6] != 0) {
    puVar31[0xc] = *(uint *)((int)puStack00000020 + 0x1c);
    FUN_0026641e(puStack00000020,7,1);
    FUN_0025cb7c(piVar20);
    puVar17 = *(undefined4 **)(iVar24 + 0x20);
    uStack00000028 = (uint)puStack00000040;
    for (puStack00000020 = (uint *)0x0; (int)puStack00000020 < *(int *)(iVar24 + 0x18);
        puStack00000020 = (uint *)((int)puStack00000020 + 1)) {
      if (((*(byte *)((int)puVar17 + 0x12) & 6) == 0) &&
         ((puVar17[9] & uVar14) == 0 && (puVar17[8] & uStack00000028) == 0)) {
        FUN_00278ac2(piVar20,*puVar17,uVar35,8);
        *(byte *)((int)puVar17 + 0x12) = *(byte *)((int)puVar17 + 0x12) | 4;
      }
      puVar17 = puVar17 + 10;
    }
  }
  FUN_002627fe(piVar20,0);
LAB_0027b20e:
  uStack0000007c = uStack0000007c + 1;
  in_stack_0000004c[5] = puVar31[0xb];
  if ((int)uStack0000007c < in_stack_0000009c) {
    FUN_0027a65e();
  }
  FUN_0027b244();
  return;
}


