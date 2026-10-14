/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00276702 FUN_00276702 */

/* WARNING: Function: __gnu_thumb1_case_uqi replaced with injection: switch8_r0 */
/* WARNING (jumptable): Removing unreachable block (ram,0x0027730e) */
/* WARNING: Removing unreachable block (ram,0x0027730e) */

void FUN_00276702(void)

{
  int *piVar1;
  char cVar2;
  byte bVar3;
  ushort uVar4;
  short sVar5;
  undefined1 uVar6;
  int *piVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined1 *puVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  int iVar15;
  undefined4 *puVar16;
  int iVar17;
  uint uVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  uint uVar23;
  int iVar24;
  int iVar25;
  undefined4 *puVar26;
  int iVar27;
  short *psVar28;
  int *piVar29;
  undefined4 uVar30;
  int iVar31;
  char *pcVar32;
  short *psVar33;
  int *unaff_r6;
  short *psVar34;
  short *psVar35;
  int *piVar36;
  int iVar37;
  int *piVar38;
  int iVar39;
  bool bVar40;
  int *piStack00000018;
  int in_stack_00000020;
  int *in_stack_00000024;
  int iStack00000028;
  int *piStack0000002c;
  int in_stack_00000030;
  int *piStack00000034;
  uint in_stack_00000038;
  byte *in_stack_0000003c;
  short *psStack00000040;
  int in_stack_00000048;
  int iStack00000058;
  int *in_stack_00000070;
  int *in_stack_00000080;
  int *in_stack_00000084;
  uint in_stack_00000088;
  int in_stack_0000008c;
  int in_stack_00000090;
  undefined4 *in_stack_0000009c;
  int *in_stack_000000a0;
  short *in_stack_000000a4;
  undefined4 in_stack_000000a8;
  undefined4 *in_stack_000000ac;
  byte in_stack_000000bc;
  undefined1 uStack000000c0;
  undefined1 uStack000000c1;
  int in_stack_000000c4;
  int *in_stack_000000c8;
  int *in_stack_000000cc;
  int *in_stack_000000d0;
  int in_stack_000000d4;
  int in_stack_000000d8;
  int in_stack_000000dc;
  int in_stack_000000e0;
  int in_stack_000000e4;
  
  piVar7 = in_stack_00000024;
  do {
    uVar18 = (uint)*(byte *)(in_stack_00000048 + 0x36);
    if (uVar18 != 0) {
      FUN_00277442();
    }
    iVar27 = in_stack_00000024[0x78];
    in_stack_00000088 = uVar18;
    FUN_0025c94a(unaff_r6,&stack0x00000088);
    in_stack_00000024[0x78] = iVar27 - in_stack_00000088;
    psVar28 = (short *)unaff_r6[10];
    iVar27 = in_stack_00000030;
    if (4 < *in_stack_0000003c) {
      in_stack_00000080 = (int *)unaff_r6[0xe];
    }
LAB_0027673c:
    do {
      in_stack_00000030 = iVar27;
      iVar27 = in_stack_00000030 + 1;
      piVar29 = (int *)unaff_r6[0xf];
      if ((piVar29 != (int *)0x0) || (*psVar28 <= iVar27)) {
        piVar38 = (int *)*unaff_r6;
        piVar36 = (int *)unaff_r6[0xc];
        iVar27 = unaff_r6[0xb];
        iVar24 = unaff_r6[0xd];
        uVar4 = *(ushort *)((int)unaff_r6 + 6);
        in_stack_00000084 = piVar36;
        if (piVar29 != (int *)0x0) {
          if (unaff_r6[0x11] == 0) {
            iVar25 = 0;
            piVar29 = (int *)0x0;
            piVar36 = unaff_r6;
            do {
              piVar1 = piVar36 + 0xf;
              piVar36[0x11] = (int)unaff_r6;
              piVar36[0x10] = (int)piVar29;
              iVar25 = iVar25 + 1;
              piVar29 = piVar36;
              piVar36 = (int *)*piVar1;
            } while ((int *)*piVar1 != (int *)0x0);
            if ((*(int *)(in_stack_00000048 + 0x5c) < iVar25) &&
               (*(int *)(in_stack_00000048 + 0x5c) != 0)) {
              FUN_00268e48(in_stack_00000024,DAT_00276ab0 + 0x2767a0);
              FUN_00277444();
            }
          }
          FUN_0027b444(in_stack_00000024,unaff_r6,in_stack_0000003c);
          in_stack_00000024[0x79] = (int)in_stack_00000070;
          piVar36 = (int *)FUN_00277474();
          piVar29 = in_stack_00000070;
        }
        iVar25 = FUN_002631c8(piVar36,in_stack_00000080);
        if ((iVar25 == 0) && (-1 < *(int *)(in_stack_00000048 + 0x18) << 0x1a)) {
          in_stack_00000080 = piVar29;
        }
        if (((uVar4 & 5) == 1) && (iVar25 = FUN_002631c8(in_stack_00000080,piVar38), iVar25 == 0)) {
          *(ushort *)((int)unaff_r6 + 6) = uVar4 & 0xfffe;
          in_stack_00000084 = (int *)FUN_002604c0(in_stack_00000048,piVar38,0);
          unaff_r6[0xc] = (int)in_stack_00000084;
          in_stack_00000080 = (int *)0x0;
        }
        if (in_stack_00000080 == (int *)0x0) {
          in_stack_00000030 = -1;
        }
        else {
          FUN_0026d2ac(in_stack_00000024);
          iVar25 = in_stack_00000024[0x12];
          in_stack_00000080[1] = iVar25;
          in_stack_00000024[0x12] = iVar25 + 1;
          in_stack_00000030 =
               FUN_002662da(in_stack_00000020,0x2a,in_stack_00000080[1],*in_stack_00000080 + 2);
          unaff_r6[6] = in_stack_00000030;
        }
        if (*in_stack_0000003c == 9) {
          FUN_0026641e(in_stack_00000020,0x2a,*(undefined4 *)(in_stack_0000003c + 4),*piVar38);
        }
        uVar10 = FUN_00266020(in_stack_00000020);
        iVar25 = DAT_00276aa4;
        unaff_r6[8] = DAT_00276aa0;
        unaff_r6[9] = iVar25;
        FUN_00278c6c(in_stack_00000024,unaff_r6,uVar10);
        if ((-1 < in_stack_00000030) && (unaff_r6[2] == 0)) {
          puVar11 = (undefined1 *)FUN_0025c3cc(in_stack_00000020,in_stack_00000030);
          *puVar11 = 0x2b;
          *(ushort *)((int)unaff_r6 + 6) = *(ushort *)((int)unaff_r6 + 6) | 0x40;
        }
        if ((int)((uint)*(ushort *)((int)unaff_r6 + 6) << 0x1f) < 0) {
          iVar25 = in_stack_00000024[0x12];
          in_stack_00000024[0x12] = iVar25 + 1;
          FUN_0026d2ac(in_stack_00000024,*unaff_r6);
          piStack0000002c = (int *)FUN_002662da(in_stack_00000020,0x2a,iVar25);
          FUN_0025c3b8(in_stack_00000020,8);
          in_stack_00000024 = (int *)iVar25;
        }
        else {
          piStack0000002c = (int *)0xffffffff;
          in_stack_00000024 = (int *)0xffffffff;
        }
        iVar25 = DAT_00276dd4;
        if ((in_stack_00000038 == 0) && (in_stack_00000084 == (int *)0x0)) {
          iVar24 = FUN_00279b98(piVar7,psVar28,iVar27,&stack0x00000080);
          iVar27 = iVar24;
          if (iVar24 == 0) {
            iVar27 = FUN_00277446();
          }
          iVar37 = *(int *)(iVar27 + 0x34);
          iVar27 = *(int *)(iVar27 + 0x30);
          iVar25 = __aeabi_dcmplt(iVar27,iVar37,unaff_r6[8],unaff_r6[9]);
          if (iVar25 != 0) {
            unaff_r6[8] = iVar27;
            unaff_r6[9] = iVar37;
          }
          if ((-1 < in_stack_00000030) && (in_stack_00000080 == (int *)0x0)) {
            FUN_00263806(in_stack_00000020,in_stack_00000030);
            unaff_r6[6] = -1;
          }
          cVar2 = *(char *)(iVar24 + 8);
          if (cVar2 != '\0') {
            puVar11 = (undefined1 *)FUN_0025c3cc(in_stack_00000020,piStack0000002c);
            if (cVar2 == '\x02') {
              iVar37 = piVar7[0x13];
              iVar8 = iVar37 + 1;
              piVar7[0x13] = iVar8;
              iVar17 = iVar37 + 2;
              iVar27 = *piVar38;
              piVar7[0x13] = iVar8 + iVar27 * 2;
              *puVar11 = 7;
              *(undefined4 *)(puVar11 + 4) = 1;
              *(int *)(puVar11 + 8) = iVar8;
              FUN_00278300(piVar7,piVar38,iVar17);
              iVar25 = *(int *)(in_stack_00000020 + 0x1c) + 1 + *piVar38;
              FUN_0026641e(in_stack_00000020,0x1b,iVar8,iVar25 + 1);
              for (iVar15 = 0; iVar15 < *piVar38; iVar15 = iVar15 + 1) {
                uVar9 = FUN_0026cf38(piVar7,*(undefined4 *)(iVar15 * 0x14 + piVar38[2]));
                FUN_00266266(in_stack_00000020,0x4b,iVar37 + 2 + iVar15,iVar25 + 2);
                FUN_00263832(in_stack_00000020,0xffffffff,uVar9,0xfffffffc);
                FUN_0025c3b8(in_stack_00000020,0x80);
              }
              FUN_0026641e(in_stack_00000020,1,0,*(undefined4 *)(iVar24 + 0x14));
              FUN_0026641e(in_stack_00000020,7,0,iVar8);
              FUN_00266266(in_stack_00000020,0xd,iVar17,iVar17 + iVar27);
            }
            else {
              *puVar11 = 0x95;
            }
            in_stack_00000024 = (int *)0xffffffff;
          }
          FUN_00278436(piVar7,unaff_r6,piVar38);
          FUN_0026663a(iVar24);
          goto LAB_002771c8;
        }
        if (in_stack_00000084 == (int *)0x0) {
          unaff_r6[8] = DAT_00276dd0;
          unaff_r6[9] = iVar25;
        }
        else {
          iVar37 = ((int *)*unaff_r6)[2];
          for (iVar25 = *(int *)*unaff_r6; 0 < iVar25; iVar25 = iVar25 + -1) {
            *(undefined2 *)(iVar37 + 0x10) = 0;
            iVar37 = iVar37 + 0x14;
          }
          iVar37 = in_stack_00000084[2];
          for (iVar25 = *in_stack_00000084; 0 < iVar25; iVar25 = iVar25 + -1) {
            *(undefined2 *)(iVar37 + 0x10) = 0;
            iVar37 = iVar37 + 0x14;
          }
          iVar37 = __aeabi_dcmpgt(unaff_r6[8],unaff_r6[9],DAT_00276aa8,DAT_00276aac);
          iVar25 = DAT_00276aac;
          if (iVar37 != 0) {
            unaff_r6[8] = DAT_00276aa8;
            unaff_r6[9] = iVar25;
          }
        }
        uVar9 = FUN_00266020(in_stack_00000020);
        memset(&stack0x000000a0,0,0x20);
        in_stack_000000ac = (undefined4 *)&stack0x000000c0;
        in_stack_000000a0 = piVar7;
        in_stack_000000cc = in_stack_00000084;
        if (in_stack_00000084 != (int *)0x0) {
          in_stack_000000cc = (int *)(*in_stack_00000084 + 1);
        }
        in_stack_000000d0 = in_stack_00000084;
        in_stack_000000a4 = psVar28;
        FUN_0025df00(&stack0x000000a0,piVar38);
        FUN_0025df00(&stack0x000000a0,in_stack_00000080);
        if (iVar24 != 0) {
          memset(&stack0x0000008c,0,0x14);
          in_stack_0000008c = DAT_00276dd8 + 0x276b12;
          in_stack_00000090 = DAT_00276ddc + 0x276b1a;
          in_stack_0000009c = &stack0x000000a0;
          FUN_0025c882(&stack0x0000008c,iVar24);
        }
        in_stack_000000dc = in_stack_000000d8;
        for (iVar25 = 0; iVar25 < in_stack_000000e4; iVar25 = iVar25 + 1) {
          in_stack_000000bc = in_stack_000000bc | 8;
          FUN_0025df00(&stack0x000000a0,
                       *(undefined4 *)(*(int *)(iVar25 * 0x10 + in_stack_000000e0) + 0x10));
          in_stack_000000bc = in_stack_000000bc & 0xf7;
        }
        cVar2 = *(char *)(in_stack_00000048 + 0x36);
        iVar25 = in_stack_000000e4;
        if (cVar2 != '\0') {
          FUN_00277446();
        }
        if (in_stack_00000084 == (int *)0x0) {
          piVar29 = (int *)*unaff_r6;
          if ((((unaff_r6[0xb] == 0) && (*piVar29 == 1)) &&
              (psVar33 = (short *)unaff_r6[10], *psVar33 == 1)) && (*(int *)(psVar33 + 0xc) == 0)) {
            puVar26 = *(undefined4 **)(psVar33 + 10);
            if ((((int)((uint)*(byte *)((int)puVar26 + 0x22) << 0x1b) < 0) ||
                (**(char **)piVar29[2] != -0x67)) ||
               ((iVar25 == 0 ||
                (((*(byte *)(*(int *)(in_stack_000000e0 + 4) + 3) & 0x10) == 0 ||
                 (uVar4 = *(ushort *)(*(char **)piVar29[2] + 2), uVar18 = uVar4 & 0x10,
                 (uVar4 & 0x10) != 0)))))) goto LAB_002770bc;
            uVar14 = FUN_0025d12c(*piVar7,puVar26[0x11]);
            iVar27 = piVar7[0x12];
            piVar7[0x12] = iVar27 + 1;
            iStack00000028 = puVar26[5];
            FUN_00275ec4(piVar7,uVar14);
            FUN_00265f96(piVar7,uVar14,puVar26[5],uVar18);
            for (uVar23 = puVar26[4]; uVar23 != 0; uVar23 = *(uint *)(uVar23 + 0x14)) {
              if ((*(char *)(uVar23 + 0x2e) == '\0') &&
                 ((uVar18 == 0 || (*(int *)(uVar23 + 0x24) < *(int *)(uVar18 + 0x24))))) {
                uVar18 = uVar23;
              }
            }
            piStack00000018 = (int *)uVar18;
            if ((uVar18 != 0) &&
               (piStack00000018 = (int *)uVar23, *(int *)(uVar18 + 0x24) < (int)puVar26[2])) {
              iStack00000028 = *(undefined4 *)(uVar18 + 0x28);
              piStack00000018 = (int *)FUN_0026e770(piVar7,uVar18);
            }
            FUN_00266266(in_stack_00000020,0x27,iVar27,iStack00000028);
            if (piStack00000018 != (int *)0x0) {
              FUN_00263832(in_stack_00000020,0xffffffff,piStack00000018,0xfffffff0);
            }
            FUN_0026641e(in_stack_00000020,0x20,iVar27,*(undefined4 *)(in_stack_000000e0 + 8));
            FUN_002665da(in_stack_00000020,0x2d,iVar27);
            piStack00000018 = (int *)0x0;
            if ((char)piVar7[0x75] == '\x02') {
              if (uVar18 == 0) {
                iVar27 = DAT_002773cc + 0x27708c;
              }
              else {
                iVar27 = DAT_002773c8 + 0x277086;
              }
              FUN_0026877c(*piVar7,DAT_002773d0 + 0x277096,*puVar26,iVar27);
              FUN_002662da(piVar7[2],0x96,piVar7[0x79],0);
              piStack00000018 = (int *)0x0;
            }
          }
          else {
LAB_002770bc:
            in_stack_00000088 = 0;
            if ((((*piVar29 == 1) && (pcVar32 = *(char **)piVar29[2], *pcVar32 == -0x67)) &&
                (-1 < (int)((uint)*(ushort *)(pcVar32 + 2) << 0x14))) &&
               (((piVar29 = *(int **)(pcVar32 + 0x10), piVar29 != (int *)0x0 && (*piVar29 == 1)) &&
                (**(char **)piVar29[2] == -0x66)))) {
              iVar25 = sqlite3_stricmp(*(undefined4 *)(pcVar32 + 4),DAT_002773d4 + 0x2770f4);
              if (iVar25 == 0) {
                iVar25 = 1;
              }
              else {
                iVar25 = 2;
                iVar37 = sqlite3_stricmp(*(undefined4 *)(pcVar32 + 4),DAT_002773d8 + 0x277106);
                if (iVar37 != 0) goto LAB_0027710e;
              }
              piStack00000018 =
                   (int *)FUN_002604c0(in_stack_00000048,
                                       *(undefined4 *)(**(int **)(*unaff_r6 + 8) + 0x10),0);
              in_stack_00000088 = (uint)piStack00000018;
              if ((piStack00000018 != (int *)0x0) && (*(char *)(in_stack_00000048 + 0x36) == '\0'))
              {
                *(char *)(*(int *)((int)piStack00000018 + 8) + 0xc) = '\x01' - (iVar25 == 1);
                *(undefined1 *)**(undefined4 **)((int)piStack00000018 + 8) = 0x98;
              }
            }
            else {
LAB_0027710e:
              iVar25 = 0;
              piStack00000018 = (int *)0x0;
            }
            FUN_0026d31c(piVar7,&stack0x000000c0);
            iVar27 = FUN_00279b98(piVar7,psVar28,iVar27,&stack0x00000088);
            if (iVar27 == 0) {
              FUN_00261102(in_stack_00000048,piStack00000018);
              FUN_00277444();
              return;
            }
            FUN_00278d8a(piVar7,&stack0x000000c0);
            if ((iVar25 != 0) && (in_stack_00000088 == 0)) {
              FUN_0026641e(in_stack_00000020,1,0,*(undefined4 *)(iVar27 + 0x18));
            }
            FUN_0026663a(iVar27);
            FUN_0026638e(piVar7,&stack0x000000c0);
          }
          in_stack_00000080 = (int *)0x0;
          FUN_00278ac2(piVar7,iVar24,uVar9,8);
          FUN_00278436(piVar7,unaff_r6,*unaff_r6,0);
          FUN_00261102(in_stack_00000048,piStack00000018);
        }
        else {
          in_stack_000000c4 = piVar7[0x12];
          piVar7[0x12] = in_stack_000000c4 + 1;
          FUN_0026d2ac(piVar7);
          uVar14 = FUN_002662da(in_stack_00000020,0x2b,in_stack_000000c4,in_stack_000000cc);
          iVar19 = piVar7[0x13];
          iVar17 = iVar19 + 1;
          iVar25 = iVar19 + 2;
          iVar19 = iVar19 + 3;
          piVar7[0x13] = iVar19;
          uVar12 = FUN_00266020(in_stack_00000020);
          iVar20 = piVar7[0x13] + 1;
          piVar7[0x13] = iVar20;
          uVar13 = FUN_00266020(in_stack_00000020);
          iVar8 = piVar7[0x13] + 1;
          iVar15 = piVar7[0x13] + *in_stack_00000084;
          piVar7[0x13] = iVar15;
          iVar37 = iVar15 + 1;
          piVar7[0x13] = iVar15 + *in_stack_00000084;
          FUN_0026641e(in_stack_00000020,7,cVar2,iVar25);
          FUN_0026641e(in_stack_00000020,7,cVar2,iVar17);
          FUN_00266266(in_stack_00000020,10,cVar2,iVar8);
          FUN_0026641e(in_stack_00000020,2,iVar20,uVar13);
          iVar27 = FUN_00279b98(piVar7,psVar28,iVar27,&stack0x00000084);
          if (iVar27 == 0) {
            FUN_00277446();
          }
          if (in_stack_00000084 == (int *)0x0) {
            piStack0000002c = in_stack_00000084;
            piStack00000018 = in_stack_00000084;
            piStack00000034 = in_stack_00000084;
            in_stack_00000084 = (int *)unaff_r6[0xc];
          }
          else {
            if ((uVar4 & 1) == 0) {
              iVar15 = DAT_00276de4 + 0x276c50;
            }
            else if ((*(ushort *)((int)unaff_r6 + 6) & 1) == 0) {
              iVar15 = DAT_00276de8 + 0x276c56;
            }
            else {
              iVar15 = DAT_00276de0 + 0x276c4a;
            }
            if ((char)piVar7[0x75] == '\x02') {
              FUN_00268b58(piVar7,iVar15);
            }
            iVar21 = *in_stack_00000084;
            piStack00000034 = (int *)(iVar21 + 1);
            iVar15 = in_stack_000000d4;
            iVar31 = (int)piStack00000034;
            iVar39 = (int)piStack00000034;
            for (iVar22 = 0; iVar22 < in_stack_000000d8; iVar22 = iVar22 + 1) {
              if (iVar31 <= *(int *)(iVar15 + 0xc)) {
                iVar39 = iVar39 + 1;
                iVar31 = iVar31 + 1;
              }
              iVar15 = iVar15 + 0x18;
            }
            iVar15 = FUN_00262834(piVar7,iVar39);
            FUN_0025cb7c(piVar7);
            FUN_00278300(piVar7,in_stack_00000084,iVar15,0);
            FUN_0026641e(in_stack_00000020,0x37,in_stack_000000c4,iVar15 + iVar21);
            for (iVar31 = 0; iVar31 < in_stack_000000d8; iVar31 = iVar31 + 1) {
              puVar26 = (undefined4 *)(in_stack_000000d4 + iVar31 * 0x18);
              if ((int)piStack00000034 <= (int)puVar26[3]) {
                iVar21 = FUN_0027074a(piVar7,*puVar26,puVar26[2],puVar26[1]);
                if ((int)piStack00000034 + iVar15 != iVar21) {
                  FUN_0026641e(in_stack_00000020,0xf,iVar21,(int)piStack00000034 + iVar15);
                }
                piStack00000034 = (int *)((int)piStack00000034 + 1);
              }
            }
            uVar30 = FUN_002627dc(piVar7);
            FUN_00266266(in_stack_00000020,0x1f,iVar15,iVar39);
            FUN_0026641e(in_stack_00000020,0x60,in_stack_000000c4,uVar30);
            FUN_002627fe(piVar7,uVar30);
            FUN_0025cbb8(piVar7,iVar15,iVar39);
            FUN_0026663a(iVar27);
            piStack00000018 = (int *)piVar7[0x12];
            piVar7[0x12] = (int)piStack00000018 + 1;
            in_stack_000000c8 = piStack00000018;
            piStack0000002c = (int *)FUN_002627dc(piVar7);
            FUN_00266266(in_stack_00000020,0x2c,piStack00000018,piStack0000002c);
            FUN_0026641e(in_stack_00000020,0x46,in_stack_000000c4,uVar9);
            uStack000000c1 = 1;
            FUN_0025cb7c(piVar7);
            piStack00000034 = (int *)0x1;
          }
          uVar30 = *(undefined4 *)(in_stack_00000020 + 0x1c);
          FUN_0025cb7c(piVar7);
          if (piStack00000034 != (int *)0x0) {
            FUN_0026641e(in_stack_00000020,0x3e,in_stack_000000c4,piStack0000002c);
          }
          iVar15 = iVar37;
          for (iVar31 = 0; iVar31 < *in_stack_00000084; iVar31 = iVar31 + 1) {
            if (piStack00000034 == (int *)0x0) {
              uStack000000c0 = 1;
              FUN_002786f4(piVar7,*(undefined4 *)(iVar31 * 0x14 + in_stack_00000084[2]),iVar15);
            }
            else {
              FUN_00266266(in_stack_00000020,0x1d,piStack00000018,iVar31);
              if (iVar31 == 0) {
                FUN_0025c3b8(in_stack_00000020,0x20);
              }
            }
            iVar15 = iVar15 + 1;
          }
          FUN_002662da(in_stack_00000020,0x18,iVar8,iVar37);
          iVar15 = *(int *)(in_stack_00000020 + 0x1c);
          FUN_00266266(in_stack_00000020,0x19,iVar15 + 1,0);
          if (iVar37 != iVar8) {
            FUN_00266966(piVar7,iVar37,iVar8,*in_stack_00000084);
          }
          FUN_0026641e(in_stack_00000020,2,iVar19,uVar12);
          FUN_0026641e(in_stack_00000020,0x78,iVar25,uVar9);
          FUN_0026641e(in_stack_00000020,2,iVar20,uVar13);
          FUN_002624c2(in_stack_00000020,iVar15);
          FUN_00278d8a(piVar7,&stack0x000000c0);
          FUN_0026641e(in_stack_00000020,7,1,iVar17);
          if (piStack00000034 == (int *)0x0) {
            FUN_0026663a(iVar27);
            FUN_00263806(in_stack_00000020,uVar14);
          }
          else {
            FUN_0026641e(in_stack_00000020,0x51,in_stack_000000c4,uVar30);
          }
          FUN_0026641e(in_stack_00000020,2,iVar19,uVar12);
          FUN_0026641e(in_stack_00000020,1,0,uVar9);
          FUN_0026641e(in_stack_00000020,7,1,iVar25);
          FUN_002665da(in_stack_00000020,3,iVar19);
          FUN_0025c384(in_stack_00000020,uVar12);
          iVar27 = *(int *)(in_stack_00000020 + 0x1c);
          FUN_0026641e(in_stack_00000020,0x78,iVar17,iVar27 + 2);
          FUN_002665da(in_stack_00000020,3,iVar19);
          FUN_0026638e(piVar7,&stack0x000000c0);
          FUN_00278ac2(piVar7,iVar24,iVar27 + 1,8);
          FUN_00278436(piVar7,unaff_r6,*unaff_r6);
          FUN_002665da(in_stack_00000020,3,iVar19);
          FUN_0025c384(in_stack_00000020,uVar13);
          FUN_0026d31c(piVar7,&stack0x000000c0);
          FUN_002665da(in_stack_00000020,3,iVar20);
        }
        FUN_0025c384(in_stack_00000020,uVar9);
LAB_002771c8:
        if ((-1 < (int)in_stack_00000024) && ((char)piVar7[0x75] == '\x02')) {
          FUN_00268b58(piVar7,DAT_002773dc + 0x2771e0);
        }
        if (in_stack_00000080 != (int *)0x0) {
          if ((char)piVar7[0x75] == '\x02') {
            FUN_00268b58(piVar7,DAT_002773e0 + 0x2771fc);
          }
          iVar24 = *piVar38;
          uVar9 = FUN_00266020(in_stack_00000020);
          uVar14 = FUN_00266020(in_stack_00000020);
          piVar29 = (int *)unaff_r6[0xe];
          bVar3 = *in_stack_0000003c;
          iVar25 = *(int *)(in_stack_0000003c + 4);
          iVar37 = piVar29[1];
          iVar27 = FUN_002627dc(piVar7);
          bVar40 = bVar3 == 5;
          if (bVar40 || bVar3 == 10) {
            in_stack_00000038 = piVar7[0x12];
            piVar7[0x12] = in_stack_00000038 + 1;
            FUN_00266266(in_stack_00000020,0x2c,in_stack_00000038,iVar27);
            in_stack_00000024 = (int *)0x0;
          }
          else {
            in_stack_00000024 = (int *)FUN_002627dc(piVar7);
            in_stack_00000038 = 0;
          }
          if ((int)((uint)*(ushort *)((int)unaff_r6 + 6) << 0x19) < 0) {
            iVar8 = piVar7[0x12];
            iVar17 = piVar7[0x13] + 1;
            piVar7[0x13] = iVar17;
            piVar7[0x12] = iVar8 + 1;
            FUN_00266266(in_stack_00000020,0x2c,iVar8,iVar17);
            iStack00000058 = FUN_0026641e(in_stack_00000020,0x46,iVar37,uVar9);
            FUN_002665fc(in_stack_00000020,unaff_r6,uVar14);
            FUN_0026641e(in_stack_00000020,0x3e,iVar37,iVar17);
            FUN_00266266(in_stack_00000020,0x1d,iVar8,*piVar29 + 1);
            FUN_0025c3b8(in_stack_00000020,0x20);
          }
          else {
            iStack00000058 = FUN_0026641e(in_stack_00000020,0x47,iVar37,uVar9);
            FUN_002665fc(in_stack_00000020,unaff_r6,uVar14);
            FUN_00266266(in_stack_00000020,0x1d,iVar37,*piVar29 + 1);
          }
          iStack00000058 = iStack00000058 + 1;
          iVar8 = 0;
          switch(bVar3) {
          case 6:
            if (iVar27 != iVar25) {
              FUN_00266966(piVar7,iVar27,iVar25,1);
            }
            break;
          case 7:
            FUN_002662da(in_stack_00000020,0x1f,iVar27,1);
            FUN_0025cb14(piVar7,iVar27,1);
            FUN_0026641e(in_stack_00000020,0x61,iVar25,in_stack_00000024);
            break;
          case 8:
          case 9:
            FUN_0026641e(in_stack_00000020,0x38,iVar25,in_stack_00000024);
            FUN_00266266(in_stack_00000020,0x39,iVar25,iVar27);
            FUN_0025c3b8(in_stack_00000020,8);
            break;
          default:
            for (; iVar8 < iVar24; iVar8 = iVar8 + 1) {
              FUN_00266266(in_stack_00000020,0x1d,in_stack_00000038,iVar8);
              if (iVar8 == 0) {
                FUN_0025c3b8(in_stack_00000020,0x20);
              }
            }
            if (bVar40) {
              FUN_0026641e(in_stack_00000020,0x10,*(undefined4 *)(in_stack_0000003c + 8),iVar24);
              FUN_0025cb14(piVar7,*(undefined4 *)(in_stack_0000003c + 8),iVar24);
            }
            else {
              FUN_002665da(in_stack_00000020,4,*(undefined4 *)(in_stack_0000003c + 4));
            }
          }
          FUN_002627fe(piVar7,iVar27);
          FUN_002627fe(piVar7,in_stack_00000024);
          FUN_0025c384(in_stack_00000020,uVar14);
          uVar14 = 0x51;
          if (-1 < (int)((uint)*(ushort *)((int)unaff_r6 + 6) << 0x19)) {
            uVar14 = 0x5f;
          }
          FUN_0026641e(in_stack_00000020,uVar14,iVar37,iStack00000058);
          FUN_0025c384(in_stack_00000020,uVar9);
          if (bVar40 || bVar3 == 10) {
            FUN_0026641e(in_stack_00000020,0x2d,in_stack_00000038,0);
          }
        }
        FUN_0025c384(in_stack_00000020,uVar10);
        FUN_00277446();
        return;
      }
      psVar33 = psVar28 + iVar27 * 0x20 + 4;
      piStack00000034 = *(int **)(psVar33 + 8);
    } while (piStack00000034 == (int *)0x0);
    if (*(int *)(psVar33 + 10) != 0) {
      FUN_0026641e(in_stack_00000020,2,*(undefined4 *)(psVar33 + 0xc));
      goto LAB_0027673c;
    }
    iVar24 = in_stack_00000024[0x78];
    in_stack_00000088 = *(int *)(psVar33 + 10);
    FUN_0025c94a(unaff_r6,&stack0x00000088);
    in_stack_00000024[0x78] = iVar24 + in_stack_00000088;
    iVar24 = in_stack_00000024[0x81];
    iVar25 = *in_stack_00000024;
    if (-1 < *(int *)(iVar25 + 0x18) << 0x1f) {
      psVar28 = (short *)unaff_r6[10];
      iVar37 = (uint)*(ushort *)((int)piStack00000034 + 6) << 0x1d;
      psVar34 = psVar28 + iVar27 * 0x20 + 4;
      uVar10 = *(undefined4 *)(psVar34 + 0x10);
      puVar26 = *(undefined4 **)(psVar34 + 8);
      if ((((in_stack_00000038 & 0xff) == 0) || (-1 < iVar37)) && ((-1 < iVar37 || (*psVar28 < 2))))
      {
        iVar8 = puVar26[0x12];
        if (((((iVar8 == 0) || (unaff_r6[0x12] == 0)) && (puVar26[0x13] == 0)) &&
            (((unaff_r6[0x11] == 0 || (iVar8 == 0)) &&
             ((*(short *)puVar26[10] != 0 &&
              (-1 < (int)((uint)*(ushort *)((int)puVar26 + 6) << 0x1f))))))) &&
           ((iVar8 == 0 || (((in_stack_00000038 & 0xff) == 0 && (*psVar28 < 2)))))) {
          uVar4 = *(ushort *)((int)unaff_r6 + 6);
          if (((-1 < iVar37) || ((uVar4 & 1) == 0)) &&
             (((((piVar29 = (int *)unaff_r6[0xe], piVar29 == (int *)0x0 || (puVar26[0xe] == 0)) &&
                ((in_stack_00000038 == 0 || (puVar26[0xe] == 0)))) &&
               ((iVar8 == 0 || ((unaff_r6[0xb] == 0 && ((uVar4 & 1) == 0)))))) &&
              (-1 < (int)((uint)*(byte *)(psVar34 + 0xe) << 0x1a))))) {
            if (puVar26[0xf] == 0) {
LAB_002763bc:
              in_stack_00000024[0x81] = *(int *)(psVar34 + 2);
              FUN_00268e90(in_stack_00000024,0x15,0,0);
              in_stack_00000024[0x81] = iVar24;
              while (puVar26 = (undefined4 *)puVar26[0xf], puVar26 != (undefined4 *)0x0) {
                iVar8 = unaff_r6[0xe];
                piStack00000034 = (int *)unaff_r6[0xf];
                iVar17 = unaff_r6[0x12];
                unaff_r6[0xe] = 0;
                unaff_r6[10] = 0;
                unaff_r6[0xf] = 0;
                unaff_r6[0x12] = 0;
                iVar24 = FUN_002607da(iVar25,unaff_r6,0);
                unaff_r6[0x12] = iVar17;
                unaff_r6[0xe] = iVar8;
                unaff_r6[10] = (int)psVar28;
                *(undefined1 *)(unaff_r6 + 1) = 0x71;
                unaff_r6[0x11] = 0;
                if (iVar24 != 0) {
                  *(undefined4 *)(iVar24 + 0x44) = 0;
                  *(int **)(iVar24 + 0x3c) = piStack00000034;
                  piStack00000034 = (int *)iVar24;
                }
                unaff_r6[0xf] = (int)piStack00000034;
                if (*(char *)(iVar25 + 0x36) != '\0') {
                  FUN_0027747a();
                }
              }
              psVar28 = *(short **)(psVar34 + 8);
              FUN_0025fbda(iVar25,*(undefined4 *)psVar34);
              FUN_0025fbda(iVar25,*(undefined4 *)(psVar34 + 2));
              FUN_0025fbda(iVar25,*(undefined4 *)(psVar34 + 4));
              iVar24 = *(int *)(psVar34 + 6);
              psVar34[0] = 0;
              psVar34[1] = 0;
              psVar34[2] = 0;
              psVar34[3] = 0;
              psVar34[4] = 0;
              psVar34[5] = 0;
              psVar34[8] = 0;
              psVar34[9] = 0;
              if (iVar24 != 0) {
                if (*(short *)(iVar24 + 0x20) == 1) {
                  piVar29 = (int *)in_stack_00000024[0x6c];
                  if ((int *)in_stack_00000024[0x6c] == (int *)0x0) {
                    piVar29 = in_stack_00000024;
                  }
                  *(int *)(iVar24 + 0x48) = piVar29[0x89];
                  piVar29[0x89] = iVar24;
                }
                else {
                  *(short *)(iVar24 + 0x20) = *(short *)(iVar24 + 0x20) + -1;
                }
                psVar34[6] = 0;
                psVar34[7] = 0;
              }
              piVar29 = unaff_r6;
              psVar33 = psVar28;
              do {
                psVar35 = *(short **)(psVar33 + 0x14);
                iVar24 = piVar29[10];
                sVar5 = *psVar35;
                if (iVar24 == 0) {
                  iVar24 = FUN_00266f0c(iVar25,0,0,0);
                  piVar29[10] = iVar24;
                  if (iVar24 == 0) break;
                  uVar6 = 0;
                }
                else {
                  uVar6 = (undefined1)psVar34[0xe];
                }
                iVar8 = (int)sVar5;
                if (1 < iVar8) {
                  iVar24 = FUN_00266e60(iVar25,iVar24,iVar8 + -1,in_stack_00000030 + 2);
                  piVar29[10] = iVar24;
                  if (*(char *)(iVar25 + 0x36) != '\0') break;
                }
                puVar26 = (undefined4 *)(iVar24 + iVar27 * 0x40 + 0x30);
                psStack00000040 = psVar35;
                for (piStack00000034 = (int *)0x0; (int)piStack00000034 < iVar8;
                    piStack00000034 = (int *)((int)piStack00000034 + 1)) {
                  FUN_00260004(iVar25,*puVar26);
                  memcpy(puVar26 + -10,psStack00000040 + 4,0x40);
                  puVar26 = puVar26 + 0x10;
                  memset(psVar35 + (int)piStack00000034 * 0x20 + 4,0,0x40);
                  psStack00000040 = psStack00000040 + 0x20;
                }
                *(undefined1 *)(iVar24 + iVar27 * 0x40 + 0x24) = uVar6;
                piVar36 = (int *)*piVar29;
                for (iStack00000028 = 0; iStack00000028 < *piVar36;
                    iStack00000028 = iStack00000028 + 1) {
                  iVar24 = piVar36[2] + iStack00000028 * 0x14;
                  if ((*(int *)(iVar24 + 4) == 0) && (*(int *)(iVar24 + 8) != 0)) {
                    uVar9 = FUN_0025f25a(iVar25);
                    *(undefined4 *)(iVar24 + 4) = uVar9;
                  }
                }
                FUN_00261336(iVar25,*piVar29,uVar10,*(undefined4 *)psVar33);
                if (in_stack_00000038 != 0) {
                  FUN_00261336(iVar25,piVar29[0xc],uVar10,*(undefined4 *)psVar33);
                  iVar24 = FUN_002612ac(iVar25,piVar29[0xd],uVar10,*(undefined4 *)psVar33);
                  piVar29[0xd] = iVar24;
                }
                if (*(int *)(psVar33 + 0x1c) == 0) {
                  if (piVar29[0xe] != 0) {
                    FUN_00261336(iVar25,piVar29[0xe],uVar10,*(undefined4 *)psVar33);
                  }
                }
                else {
                  piVar29[0xe] = *(int *)(psVar33 + 0x1c);
                  psVar33[0x1c] = 0;
                  psVar33[0x1d] = 0;
                }
                iVar24 = *(int *)(psVar33 + 0x16);
                if (iVar24 != 0) {
                  iVar24 = FUN_002606fc(iVar25,iVar24,0);
                }
                iVar8 = piVar29[0xb];
                if (iVar37 < 0) {
                  piVar29[0xd] = iVar8;
                  piVar29[0xb] = iVar24;
                  iVar24 = FUN_002612ac(iVar25,iVar8,uVar10,*(undefined4 *)psVar33);
                  piVar29[0xd] = iVar24;
                  uVar9 = FUN_002606fc(iVar25,*(undefined4 *)(psVar33 + 0x1a),0);
                  iVar24 = FUN_00262684(iVar25,iVar24,uVar9);
                  piVar29[0xd] = iVar24;
                  iVar24 = FUN_002604c0(iVar25,*(undefined4 *)(psVar33 + 0x18),0);
                  piVar29[0xc] = iVar24;
                }
                else {
                  iVar8 = FUN_002612ac(iVar25,iVar8,uVar10,*(undefined4 *)psVar33);
                  piVar29[0xb] = iVar8;
                  iVar24 = FUN_00262684(iVar25,iVar8,iVar24);
                  piVar29[0xb] = iVar24;
                }
                *(ushort *)((int)piVar29 + 6) = *(ushort *)((int)piVar29 + 6) | psVar33[3] & 1U;
                if (*(int *)(psVar33 + 0x24) != 0) {
                  piVar29[0x12] = *(int *)(psVar33 + 0x24);
                  psVar33[0x24] = 0;
                  psVar33[0x25] = 0;
                }
                piVar29 = (int *)piVar29[0xf];
                psVar33 = *(short **)(psVar33 + 0x1e);
              } while (piVar29 != (int *)0x0);
              FUN_00261092(iVar25,psVar28);
              FUN_0027747a();
            }
            else if ((((puVar26[0xe] == 0) && (in_stack_00000038 == 0)) && ((uVar4 & 1) == 0)) &&
                    (puVar16 = puVar26, *psVar28 == 1)) {
              do {
                if (puVar16 == (undefined4 *)0x0) {
                  if (piVar29 == (int *)0x0) goto LAB_002763bc;
                  iVar8 = 0;
                  iVar17 = 0;
                  goto LAB_002763b8;
                }
              } while (((((*(ushort *)((int)puVar16 + 6) & 5) == 0) &&
                        (((undefined4 *)puVar16[0xf] == (undefined4 *)0x0 ||
                         (*(char *)(puVar16 + 1) == 'q')))) && (0 < *(short *)puVar16[10])) &&
                      (piVar36 = (int *)*puVar16, puVar16 = (undefined4 *)puVar16[0xf],
                      *(int *)*puVar26 == *piVar36));
            }
          }
        }
      }
    }
LAB_0027666a:
    iVar24 = in_stack_00000024[0x13];
    in_stack_00000024[0x13] = iVar24 + 1;
    *(int *)(psVar33 + 0xc) = iVar24 + 1;
    iVar24 = FUN_0026641e(in_stack_00000020,7,0);
    *(int *)(psVar33 + 10) = iVar24 + 1;
    iVar25 = 0;
    if ((char)psVar33[0xf] == '\0') {
      iVar25 = FUN_002665e6(in_stack_00000024);
    }
    in_stack_000000a4 = *(short **)(psVar33 + 0x10);
    in_stack_000000a0 = (int *)CONCAT22(in_stack_000000a0._2_2_,9);
    in_stack_000000a8 = 0;
    in_stack_000000ac = (undefined4 *)0x0;
    *(char *)((int)psVar33 + 0x1f) = (char)in_stack_00000024[0x7a];
    FUN_00276118(in_stack_00000024,piStack00000034);
    iVar37 = *(int *)(psVar33 + 6);
    uVar10 = __fixunsdfsi(*(undefined4 *)((int)piStack00000034 + 0x20),
                          *(undefined4 *)((int)piStack00000034 + 0x24));
    *(undefined4 *)(iVar37 + 0x18) = uVar10;
    if (iVar25 != 0) {
      FUN_002624c2(in_stack_00000020,iVar25);
    }
    uVar10 = FUN_002665da(in_stack_00000020,3,*(undefined4 *)(psVar33 + 0xc));
    FUN_0025c394(in_stack_00000020,iVar24,uVar10);
    *(undefined1 *)((int)in_stack_00000024 + 0x13) = 0;
    in_stack_00000024[0xf] = 0;
    in_stack_00000030 = iVar27;
  } while( true );
LAB_002763b8:
  if (*piVar29 <= iVar8) goto LAB_002763bc;
  iVar15 = piVar29[2] + iVar17;
  iVar17 = iVar17 + 0x14;
  if (*(short *)(iVar15 + 0xe) == 0) goto LAB_0027666a;
  iVar8 = iVar8 + 1;
  goto LAB_002763b8;
}


