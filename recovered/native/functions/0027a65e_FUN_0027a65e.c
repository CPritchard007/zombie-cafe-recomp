/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0027a65e FUN_0027a65e */

void FUN_0027a65e(void)

{
  char cVar1;
  undefined2 uVar2;
  bool bVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  byte *pbVar9;
  char *pcVar10;
  int *piVar11;
  undefined1 uVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  uint uVar16;
  int iVar17;
  uint uVar18;
  uint *puVar19;
  undefined1 *puVar20;
  int iVar21;
  int iVar22;
  int *piVar23;
  undefined4 *puVar24;
  int iVar25;
  int iVar26;
  uint uVar27;
  int iVar28;
  uint uVar29;
  uint uVar30;
  int *piVar31;
  uint *puVar32;
  undefined8 uVar33;
  int iStack00000020;
  int *piStack00000024;
  int iStack00000028;
  int *piStack00000030;
  uint in_stack_00000040;
  uint in_stack_00000044;
  undefined2 *puStack00000048;
  undefined4 *in_stack_0000004c;
  int in_stack_0000005c;
  int iStack00000060;
  int iStack00000064;
  int *piStack00000070;
  uint uStack00000074;
  int in_stack_0000007c;
  uint uStack00000088;
  uint uStack0000008c;
  undefined4 in_stack_00000090;
  uint in_stack_00000094;
  uint in_stack_00000098;
  int in_stack_0000009c;
  uint in_stack_000000a0;
  int in_stack_000000a4;
  uint in_stack_000000a8;
  int in_stack_000000ac;
  undefined4 in_stack_000000b4;
  
  puVar32 = in_stack_0000004c + in_stack_0000007c * 0x14 + 0xe;
  if (*(char *)(in_stack_0000005c + 0x1d4) == '\x02') {
    FUN_0026aa30(in_stack_0000005c,in_stack_00000090,puVar32,in_stack_0000007c);
  }
  piVar31 = (int *)*in_stack_0000004c;
  iVar17 = in_stack_0000004c[8];
  iVar25 = piVar31[2];
  piStack00000030 = (int *)(in_stack_0000004c[3] + (uint)(byte)puVar32[0xd] * 0x40 + 8);
  piStack00000024 = (int *)*puVar32;
  uVar18 = *(uint *)((int)piStack00000030 + 0x20);
  in_stack_00000094 = (uint)piStack00000024 & 0x800000;
  if (in_stack_00000094 != 0) {
    in_stack_00000094 = (uint)(in_stack_000000ac == 0);
  }
  puStack00000048 = (undefined2 *)FUN_00266020(iVar25);
  puVar32[10] = (uint)puStack00000048;
  puVar32[9] = (uint)puStack00000048;
  uVar4 = FUN_00266020(iVar25);
  puVar32[0xb] = uVar4;
  if (((char)puVar32[0xd] != '\0') &&
     ((int)((uint)*(byte *)((int)piStack00000030 + 0x1c) << 0x1c) < 0)) {
    iVar15 = piVar31[0x13];
    piVar31[0x13] = iVar15 + 1U;
    puVar32[6] = iVar15 + 1U;
    FUN_0026641e(iVar25,7,0);
  }
  uVar16 = *puVar32;
  if ((uVar16 & 0x8000000) != 0) {
    puVar19 = (uint *)puVar32[4];
    piStack00000024 = (int *)*puVar19;
    piVar23 = (int *)puVar19[4];
    uVar16 = puVar19[1];
    piVar31[0x17] = piVar31[0x17] + 1;
    iVar15 = FUN_00262834(piVar31,(int)piStack00000024 + 2U);
    for (iVar21 = 1; iVar21 <= (int)piStack00000024; iVar21 = iVar21 + 1) {
      piStack00000030 = (int *)0x0;
      piVar11 = piVar23;
      do {
        if (*piVar11 == iVar21) {
          FUN_002786f4(piVar31,*(undefined4 *)
                                (*(int *)(*(int *)(uVar16 + (int)piStack00000030 * 0xc + 8) * 0x28 +
                                         *(int *)(iVar17 + 0x20)) + 0xc),iVar15 + 1 + iVar21);
          break;
        }
        piVar11 = piVar11 + 2;
        piStack00000030 = (int *)((int)piStack00000030 + 1);
      } while ((int)piStack00000030 < (int)piStack00000024);
      if (piStack00000030 == piStack00000024) break;
    }
    FUN_0026641e(iVar25,7,puVar19[5],iVar15);
    FUN_0026641e(iVar25,7,iVar21 + -1,iVar15 + 1);
    FUN_002662da(iVar25,0x88,uVar18,puStack00000048);
    puVar19[7] = 0;
    for (puStack00000048 = (undefined2 *)0x0; (int)puStack00000048 < (int)piStack00000024;
        puStack00000048 = (undefined2 *)((int)puStack00000048 + 1)) {
      if ((char)piVar23[1] != '\0') {
        FUN_0025d578(puVar32,*(int *)(iVar17 + 0x20) + *(int *)(uVar16 + 8) * 0x28);
      }
      piVar23 = piVar23 + 2;
      uVar16 = uVar16 + 0xc;
    }
    *(undefined1 *)((int)puVar32 + 0x35) = 0x8a;
    puVar32[0xe] = uVar18;
    uVar16 = *(uint *)(iVar25 + 0x1c);
    puVar32[0xf] = uVar16;
    FUN_0025cbb8(piVar31,iVar15,(int)piStack00000024 + 2U);
    FUN_002644ac(piVar31);
    FUN_0027b12e();
  }
  if ((uVar16 & 0x1000) != 0) {
    uVar5 = FUN_002627dc(piVar31);
    uVar6 = FUN_0026d44c(iVar17,uVar18,0xffffffff);
    uVar5 = FUN_00278240(piVar31,uVar6,puVar32,uVar5);
    puStack00000048 = (undefined2 *)puVar32[10];
    FUN_0026641e(iVar25,0x15,uVar5,puStack00000048);
    FUN_00266266(iVar25,0x36,uVar18,puStack00000048);
    uVar33 = FUN_00262718(piVar31,uVar18,0xffffffff,uVar5);
    uVar16 = (int)puVar32 + 0x35;
    FUN_0027b12c((int)uVar33,(int)((ulonglong)uVar33 >> 0x20),0x95);
  }
  iVar21 = DAT_0027b290;
  iVar15 = ((int)piStack00000024 << 6) >> 0x1f;
  uVar13 = -iVar15;
  if ((int)(uVar16 << 0x12) < 0) {
    puVar7 = (undefined4 *)FUN_0026d44c(iVar17,uVar18,0xffffffff);
    puVar8 = (undefined4 *)FUN_0026d44c(iVar17,uVar18,0xffffffff);
    puVar24 = puVar7;
    if (uVar13 == 0) {
      puVar24 = puVar8;
      puVar8 = puVar7;
    }
    if (puVar8 == (undefined4 *)0x0) {
      uVar5 = 0x48;
      if (uVar13 != 0) {
        uVar5 = 0x43;
      }
      FUN_0026641e(iVar25,uVar5,uVar18,puStack00000048);
    }
    else {
      memcpy(&stack0x000000e0,(void *)(DAT_0027abf8 + 0x27a97d),4);
      pbVar9 = (byte *)*puVar8;
      uVar5 = FUN_002786c2(piVar31,*(undefined4 *)(pbVar9 + 0xc),&stack0x000000b4);
      FUN_00266266(iVar25,*(undefined1 *)((int)&stack0x00000090 + *pbVar9 + 3),uVar18,
                   puStack00000048);
      FUN_0025cb14(piVar31,uVar5,1);
      FUN_002627fe(piVar31,in_stack_000000b4);
      FUN_0025d578(puVar32,puVar8);
    }
    if (puVar24 == (undefined4 *)0x0) {
      piStack00000024 = (int *)0x95;
      piStack00000030 = (int *)0x0;
    }
    else {
      pcVar10 = (char *)*puVar24;
      piStack00000030 = (int *)(piVar31[0x13] + 1);
      piVar31[0x13] = (int)piStack00000030;
      FUN_002786f4(piVar31,*(undefined4 *)(pcVar10 + 0xc),piStack00000030);
      cVar1 = *pcVar10;
      if ((cVar1 == 'M') || (cVar1 == 'O')) {
        piStack00000024 = (int *)0x50;
        if (uVar13 != 0) {
          piStack00000024 = (int *)0x4e;
        }
      }
      else {
        piStack00000024 = (int *)0x4d;
        if (uVar13 != 0) {
          piStack00000024 = (int *)0x4f;
        }
      }
      FUN_0025d578(puVar32,puVar24);
    }
    uVar4 = *(uint *)(iVar25 + 0x1c);
    uVar12 = 0x5f;
    if (uVar13 != 0) {
      uVar12 = 0x5c;
    }
    *(undefined1 *)((int)puVar32 + 0x35) = uVar12;
    puVar32[0xe] = uVar18;
    puVar32[0xf] = uVar4;
    if ((puVar24 == (undefined4 *)0x0) && (puVar8 == (undefined4 *)0x0)) {
      *(undefined1 *)((int)puVar32 + 0x36) = 1;
    }
    if (piStack00000024 == (int *)0x95) {
      FUN_0027b12e();
      return;
    }
    uVar5 = FUN_002627dc(piVar31);
    FUN_0026641e(iVar25,0x41,uVar18,uVar5);
    FUN_00262718(piVar31,uVar18,0xffffffff,uVar5);
    FUN_00266266(iVar25,piStack00000024,piStack00000030,puStack00000048);
    FUN_0025c3b8(iVar25,0x6b);
    FUN_0027b12e();
    return;
  }
  if ((uVar16 & 0x30000) != 0) {
    uVar29 = puVar32[1];
    uVar27 = puVar32[4];
    uVar30 = puVar32[8];
    if (uVar29 == *(uint *)(uVar27 + 0x24)) {
      uVar5 = 0xffffffff;
    }
    else {
      uVar5 = *(undefined4 *)(uVar29 * 4 + *(int *)(uVar27 + 4));
    }
    uStack00000074 = in_stack_00000098 & 1;
    if (((uStack00000074 != 0) && (uStack00000074 = uVar16 & 0x1000000, uStack00000074 != 0)) &&
       (uStack00000074 = 1, (int)*(uint *)(uVar27 + 0x24) <= (int)uVar29)) {
      uStack00000074 = 0;
    }
    if ((uVar16 & 0x100000) == 0) {
      piStack00000024 = (int *)0x0;
      uVar16 = uStack00000074;
    }
    else {
      piStack00000024 = (int *)FUN_0026d44c(iVar17,uVar18,uVar5);
      uVar16 = 1;
    }
    piVar23 = piStack00000024;
    piStack00000030 = (int *)(*puVar32 & 0x200000);
    if (piStack00000030 != (int *)0x0) {
      piStack00000030 = (int *)FUN_0026d44c(iVar17,uVar18,uVar5);
      uVar16 = 1;
    }
    iVar28 = piVar31[2];
    in_stack_000000a0 = puVar32[1];
    uVar14 = puVar32[4];
    in_stack_000000a8 = puVar32[7];
    iStack00000064 = piVar31[0x13] + 1;
    in_stack_000000a4 = uVar16 + in_stack_000000a0;
    piVar31[0x13] = piVar31[0x13] + in_stack_000000a4;
    iVar21 = *piVar31;
    uVar5 = FUN_0025ef9c(iVar28,uVar14);
    iVar21 = FUN_0025f25a(iVar21,uVar5);
    if (iVar21 == 0) {
      *(undefined1 *)(*piVar31 + 0x36) = 1;
    }
    iStack00000060 = 0;
    while ((iStack00000060 < (int)in_stack_000000a0 &&
           (piVar11 = (int *)FUN_0026d44c(iVar17,in_stack_000000a8,
                                          *(undefined4 *)(iStack00000060 * 4 + *(int *)(uVar14 + 4))
                                         ), piVar11 != (int *)0x0))) {
      iVar26 = iStack00000064 + iStack00000060;
      iVar22 = FUN_00278240(piVar31,piVar11,puVar32,iVar26);
      if (iVar22 != iVar26) {
        if (in_stack_000000a4 == 1) {
          FUN_002627fe(piVar31,iStack00000064);
          iStack00000064 = iVar22;
        }
        else {
          FUN_0026641e(iVar28,0xf,iVar22,iVar26);
        }
      }
      if ((*(ushort *)(piVar11 + 4) & 0x81) == 0) {
        uVar5 = *(undefined4 *)(*piVar11 + 0xc);
        FUN_002664d8(iVar28,uVar5,iStack00000064 + iStack00000060,puVar32[9]);
        if (iVar21 != 0) {
          iVar22 = FUN_0025cd0e(uVar5,*(undefined1 *)(iVar21 + iStack00000060));
          if (iVar22 == 0x62) {
            *(undefined1 *)(iVar21 + iStack00000060) = 0x62;
          }
          iVar22 = FUN_0025ca94(uVar5,*(undefined1 *)(iVar21 + iStack00000060));
          if (iVar22 != 0) {
            *(undefined1 *)(iVar21 + iStack00000060) = 0x62;
          }
        }
      }
      iStack00000060 = iStack00000060 + 1;
    }
    iVar17 = FUN_0025f25a(*piVar31,iVar21);
    uVar16 = puVar32[10];
    if ((((int)*(uint *)(uVar27 + 0x24) <= (int)uVar29) ||
        (uVar13 != (*(char *)(*(int *)(uVar27 + 0x1c) + uVar29) == '\0'))) &&
       ((uVar13 == 0 || (*(uint *)(uVar27 + 0x24) != uVar29)))) {
      piStack00000024 = piStack00000030;
      piStack00000030 = piVar23;
    }
    piStack00000070 = (int *)0x1;
    if (piStack00000024 != (int *)0x0) {
      piStack00000070 = (int *)(uint)((*(ushort *)(piStack00000024 + 4) & 0x28) != 0);
    }
    uStack0000008c = 1;
    if (piStack00000030 != (int *)0x0) {
      uStack0000008c = (uint)((*(ushort *)(piStack00000030 + 4) & 0x28) != 0);
    }
    uStack00000088 = (uint)(piStack00000024 != (int *)0x0) | ((int)uVar29 >> 0x1f) - uVar29 >> 0x1f;
    if (piStack00000024 == (int *)0x0) {
      uVar27 = uVar29;
      if (uStack00000074 != 0) {
        FUN_0026641e(iVar25,10,0,iStack00000064 + uVar29);
        uStack00000088 = 1;
        uVar27 = uVar29 + 1;
        piStack00000070 = piStack00000024;
      }
    }
    else {
      uVar5 = *(undefined4 *)(*piStack00000024 + 0xc);
      FUN_002786f4(piVar31,uVar5,iStack00000064 + uVar29);
      FUN_002664d8(iVar25,uVar5,iStack00000064 + uVar29,uVar16);
      if (iVar21 != 0) {
        puVar20 = (undefined1 *)(iVar21 + uVar29);
        iVar28 = FUN_0025cd0e(uVar5,*puVar20);
        if (iVar28 == 0x62) {
          *puVar20 = 0x62;
        }
        iVar28 = FUN_0025ca94(uVar5,*puVar20);
        if (iVar28 != 0) {
          *puVar20 = 0x62;
        }
      }
      uVar27 = uVar29 + 1;
    }
    FUN_0026650c(piVar31,iStack00000064,uVar27,iVar21);
    FUN_00266944(iVar25,*(undefined1 *)
                         (DAT_0027af9c + 0x27ad51 + uVar13 + uStack00000088 * 4 +
                         (int)piStack00000070 * 2),uVar30,uVar16);
    if (piStack00000030 != (int *)0x0) {
      uVar5 = *(undefined4 *)(*piStack00000030 + 0xc);
      iVar28 = iStack00000064 + uVar29;
      FUN_0025cb14(piVar31,iVar28,1);
      FUN_002786f4(piVar31,uVar5,iVar28);
      FUN_002664d8(iVar25,uVar5,iVar28,uVar16);
      if (iVar17 != 0) {
        puVar20 = (undefined1 *)(iVar17 + uVar29);
        iVar28 = FUN_0025cd0e(uVar5,*puVar20);
        if (iVar28 == 0x62) {
          *puVar20 = 0x62;
        }
        iVar28 = FUN_0025ca94(uVar5,*puVar20);
        if (iVar28 != 0) {
          *puVar20 = 0x62;
        }
      }
      FUN_0026650c(piVar31,iStack00000064,uVar29 + 1,iVar17);
    }
    FUN_0025fbda(*piVar31,iVar21);
    FUN_0025fbda(*piVar31,iVar17);
    puVar32[0xf] = *(uint *)(iVar25 + 0x1c);
    cVar1 = *(char *)(DAT_0027afa0 + 0x27ad77 +
                     (uVar13 + 1) * (uint)(uVar29 != 0 || piStack00000030 != (int *)0x0));
    if (cVar1 != -0x6b) {
      FUN_00266944(iVar25,cVar1,uVar30,uVar16);
      FUN_0025c3b8(iVar25,uStack0000008c + iVar15 != 0);
    }
    uVar5 = FUN_002627dc(piVar31);
    if ((*puVar32 & 0x300000) != 0) {
      FUN_00266266(iVar25,0x1d,uVar30,uVar29);
      FUN_0026641e(iVar25,0x49,uVar5,uVar4);
    }
    FUN_002627fe(piVar31,uVar5);
    FUN_0025d578(puVar32,piStack00000024);
    FUN_0025d578(puVar32,piStack00000030);
    if (in_stack_00000094 == 0) {
      uVar5 = FUN_002627dc(piVar31);
      FUN_0026641e(iVar25,99,uVar30,uVar5);
      FUN_00262718(piVar31,uVar18,0xffffffff,uVar5);
      FUN_0026641e(iVar25,0x32,uVar18,uVar5);
    }
    if ((*puVar32 & 0x4000000) == 0) {
      uVar12 = 0x5c;
      if (uVar13 == 0) {
        uVar12 = 0x5f;
      }
    }
    else {
      uVar12 = 0x95;
    }
    *(undefined1 *)((int)puVar32 + 0x35) = uVar12;
    puVar32[0xe] = uVar30;
    FUN_0027b12e();
    return;
  }
  if ((uVar16 & 0x10000000) == 0) {
    *(undefined1 *)((int)puVar32 + 0x35) = *(undefined1 *)(DAT_0027b290 + uVar13 + 0x27b110);
    puVar32[0xe] = uVar18;
    iVar15 = FUN_0026641e(iVar25,*(undefined1 *)(iVar21 + 0x27b112 + uVar13),uVar18,puStack00000048)
    ;
    puVar32[0xf] = iVar15 + 1;
    *(undefined1 *)((int)puVar32 + 0x36) = 1;
  }
  else {
    uVar27 = piVar31[0x12];
    piVar31[0x12] = uVar27 + 1;
    uVar16 = piVar31[0x13] + 1;
    piVar31[0x13] = uVar16;
    uVar5 = FUN_00266020(iVar25);
    uVar13 = puVar32[4];
    iVar15 = *(int *)(uVar13 + 0xc);
    *(undefined1 *)((int)puVar32 + 0x35) = 3;
    puVar32[0xe] = uVar16;
    if ((int)in_stack_0000004c[7] < 2) {
      puStack00000048 = (undefined2 *)in_stack_0000004c[3];
    }
    else {
      iVar21 = in_stack_0000004c[7] - in_stack_0000007c;
      iVar28 = iVar21 + -1;
      puStack00000048 = (undefined2 *)FUN_0025ee10(*piVar31,iVar28 * 0x40 + 0x48);
      if (puStack00000048 == (undefined2 *)0x0) goto LAB_0027b20e;
      uVar2 = (undefined2)iVar21;
      puStack00000048[1] = uVar2;
      *puStack00000048 = uVar2;
      memcpy(puStack00000048 + 4,piStack00000030,0x40);
      iVar21 = in_stack_0000004c[3];
      puVar19 = puVar32;
      for (iVar22 = 1; iVar22 <= iVar28; iVar22 = iVar22 + 1) {
        memcpy(puStack00000048 + iVar22 * 0x20 + 4,
               (void *)(iVar21 + (uint)(byte)puVar19[0x21] * 0x40 + 8),0x40);
        puVar19 = puVar19 + 0x14;
      }
    }
    uVar29 = in_stack_00000098 & 8;
    if (uVar29 == 0) {
      piStack00000070 = (int *)(piVar31[0x13] + 1);
      piVar31[0x13] = piVar31[0x13] + 2;
      FUN_0026641e(iVar25,10,0,piStack00000070);
    }
    else {
      piStack00000070 = (int *)0x0;
    }
    in_stack_000000a0 = FUN_0026641e(iVar25,7,0,uVar16);
    iVar21 = 0;
    if (1 < *(int *)(iVar17 + 0x18)) {
      iVar21 = 0;
      for (iVar28 = 0; iVar28 < *(int *)(iVar17 + 0x18); iVar28 = iVar28 + 1) {
        piVar23 = (int *)(*(int *)(iVar17 + 0x20) + iVar28 * 0x28);
        if ((((*(ushort *)(*piVar23 + 2) & 1) == 0) &&
            ((*(byte *)((int)piVar23 + 0x12) & 0x12) == 0)) &&
           ((*(ushort *)(piVar23 + 4) & 0xfff) != 0)) {
          uVar6 = FUN_002606fc(*piVar31,*piVar23);
          iVar21 = FUN_00262684(*piVar31,iVar21,uVar6);
        }
      }
      if (iVar21 != 0) {
        iVar21 = FUN_00269118(piVar31,0x45,0,iVar21);
      }
    }
    bVar3 = false;
    piStack00000024 = (int *)0x0;
    for (uVar30 = 0; (int)uVar30 < *(int *)(iVar15 + 0x18); uVar30 = uVar30 + 1) {
      piVar23 = (int *)(*(int *)(iVar15 + 0x20) + uVar30 * 0x28);
      if ((piVar23[2] == uVar18) || ((short)piVar23[4] == 0x200)) {
        iVar28 = *piVar23;
        if (iVar21 != 0) {
          *(int *)(iVar21 + 8) = *piVar23;
          iVar28 = iVar21;
        }
        iVar28 = FUN_00279b98(piVar31,puStack00000048,iVar28,0);
        if (iVar28 != 0) {
          if ((char)piVar31[0x75] == '\x02') {
            FUN_0026aa30(piVar31,puStack00000048,iVar28 + 0x38,in_stack_0000007c);
          }
          if (uVar29 == 0) {
            in_stack_00000094 = uVar30;
            if (uVar30 == *(int *)(iVar15 + 0x18) - 1U) {
              in_stack_00000094 = 0xffffffff;
            }
            FUN_0027074a(piVar31,*(undefined4 *)((int)piStack00000030 + 0xc),0xffffffff,uVar18);
            FUN_00266944(iVar25,0x72,piStack00000070,*(int *)(iVar25 + 0x1c) + 2);
          }
          FUN_0026641e(iVar25,2,uVar16,uVar5);
          if (*(char *)(iVar28 + 7) != '\0') {
            bVar3 = true;
          }
          uVar14 = *(uint *)(iVar28 + 0x38) & 0xf0000;
          if (uVar14 != 0) {
            if ((*(uint *)(iVar28 + 0x38) & 0x20000000) == 0) {
              uVar14 = *(uint *)(iVar28 + 0x48);
              if ((uVar30 != 0) && ((int *)uVar14 != piStack00000024)) {
                uVar14 = 0;
              }
            }
            else {
              piStack00000024 = (int *)0x0;
              uVar14 = (uint)piStack00000024;
            }
          }
          piStack00000024 = (int *)uVar14;
          FUN_0026663a(iVar28);
        }
      }
    }
    puVar32[0x10] = (uint)piStack00000024;
    puVar32[8] = uVar27;
    if (iVar21 != 0) {
      *(undefined4 *)(iVar21 + 8) = 0;
      FUN_002610aa(*piVar31,iVar21);
    }
    FUN_0025c394(iVar25,in_stack_000000a0,*(undefined4 *)(iVar25 + 0x1c));
    FUN_0026641e(iVar25,1,0,puVar32[9]);
    FUN_0025c384(iVar25,uVar5);
    if (1 < (int)in_stack_0000004c[7]) {
      FUN_0025fbda(*piVar31,puStack00000048);
    }
    if (!bVar3) {
      FUN_0025d578(puVar32,uVar13);
      FUN_0027b12e();
      return;
    }
  }
  uVar33 = FUN_0025d3f8(*(undefined4 *)(iVar17 + 4),uVar18);
  in_stack_00000040 = in_stack_00000040 & ~(uint)uVar33;
  in_stack_00000044 = in_stack_00000044 & ~(uint)((ulonglong)uVar33 >> 0x20);
  piVar23 = *(int **)(iVar17 + 0x20);
  for (iStack00000028 = *(int *)(iVar17 + 0x18); 0 < iStack00000028;
      iStack00000028 = iStack00000028 + -1) {
    if ((*(byte *)((int)piVar23 + 0x12) & 6) == 0) {
      if ((piVar23[9] & in_stack_00000044) == 0 && (piVar23[8] & in_stack_00000040) == 0) {
        if ((puVar32[6] == 0) || ((int)((uint)*(ushort *)(*piVar23 + 2) << 0x1f) < 0)) {
          FUN_00278ac2(piVar31,*piVar23,uVar4,8);
          *(byte *)((int)piVar23 + 0x12) = *(byte *)((int)piVar23 + 0x12) | 4;
        }
      }
      else {
        *(undefined1 *)((int)in_stack_0000004c + 7) = 1;
      }
    }
    piVar23 = piVar23 + 10;
  }
  if (puVar32[6] != 0) {
    puVar32[0xc] = *(uint *)(iVar25 + 0x1c);
    FUN_0026641e(iVar25,7,1);
    FUN_0025cb7c(piVar31);
    puVar24 = *(undefined4 **)(iVar17 + 0x20);
    for (iStack00000020 = 0; iStack00000020 < *(int *)(iVar17 + 0x18);
        iStack00000020 = iStack00000020 + 1) {
      if (((*(byte *)((int)puVar24 + 0x12) & 6) == 0) &&
         ((puVar24[9] & in_stack_00000044) == 0 && (puVar24[8] & in_stack_00000040) == 0)) {
        FUN_00278ac2(piVar31,*puVar24,uVar4,8);
        *(byte *)((int)puVar24 + 0x12) = *(byte *)((int)puVar24 + 0x12) | 4;
      }
      puVar24 = puVar24 + 10;
    }
  }
  FUN_002627fe(piVar31,0);
LAB_0027b20e:
  in_stack_0000004c[5] = puVar32[0xb];
  if (in_stack_0000007c + 1 < in_stack_0000009c) {
    FUN_0027a65e();
  }
  FUN_0027b244();
  return;
}


