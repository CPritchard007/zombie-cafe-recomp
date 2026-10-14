/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00276690 FUN_00276690 */

/* WARNING: Function: __gnu_thumb1_case_uqi replaced with injection: switch8_r0 */
/* WARNING (jumptable): Removing unreachable block (ram,0x0027730e) */
/* WARNING: Removing unreachable block (ram,0x0027730e) */

void FUN_00276690(void)

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
  int iVar10;
  undefined4 uVar11;
  undefined1 *puVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  int iVar16;
  short *psVar17;
  int iVar18;
  undefined4 *puVar19;
  int iVar20;
  uint uVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  uint uVar25;
  int iVar26;
  undefined4 *puVar27;
  short *psVar28;
  int *piVar29;
  undefined4 uVar30;
  int iVar31;
  char *pcVar32;
  short *unaff_r5;
  int *unaff_r6;
  short *psVar33;
  int *piVar34;
  int iVar35;
  int *piVar36;
  int iVar37;
  bool bVar38;
  int *in_stack_00000018;
  int in_stack_00000020;
  int *in_stack_00000024;
  int iStack00000028;
  int *piStack0000002c;
  int in_stack_00000030;
  int *in_stack_00000034;
  uint uStack00000038;
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
  *(ushort *)((int)unaff_r6 + 6) = *(ushort *)((int)unaff_r6 + 6) | 4;
  uStack00000038 = 1;
  FUN_00277486();
  do {
    iVar10 = FUN_002665e6(in_stack_00000024);
    do {
      in_stack_000000a4 = *(short **)(unaff_r5 + 0x10);
      in_stack_000000a0 = (int *)CONCAT22(in_stack_000000a0._2_2_,9);
      in_stack_000000a8 = 0;
      in_stack_000000ac = (undefined4 *)0x0;
      *(char *)((int)unaff_r5 + 0x1f) = (char)in_stack_00000024[0x7a];
      FUN_00276118(in_stack_00000024,in_stack_00000034);
      iVar35 = *(int *)(unaff_r5 + 6);
      uVar11 = __fixunsdfsi(*(undefined4 *)((int)in_stack_00000034 + 0x20),
                            *(undefined4 *)((int)in_stack_00000034 + 0x24));
      *(undefined4 *)(iVar35 + 0x18) = uVar11;
      if (iVar10 != 0) {
        FUN_002624c2(in_stack_00000020,iVar10);
      }
      uVar11 = FUN_002665da(in_stack_00000020,3,*(undefined4 *)(unaff_r5 + 0xc));
      FUN_0025c394(in_stack_00000020,in_stack_00000018,uVar11);
      *(undefined1 *)((int)in_stack_00000024 + 0x13) = 0;
      in_stack_00000024[0xf] = 0;
      uVar21 = (uint)*(byte *)(in_stack_00000048 + 0x36);
      if (uVar21 != 0) {
        FUN_00277442();
      }
      iVar10 = in_stack_00000024[0x78];
      in_stack_00000088 = uVar21;
      FUN_0025c94a(unaff_r6,&stack0x00000088);
      in_stack_00000024[0x78] = iVar10 - in_stack_00000088;
      psVar28 = (short *)unaff_r6[10];
      iVar35 = in_stack_00000030;
      if (4 < *in_stack_0000003c) {
        in_stack_00000080 = (int *)unaff_r6[0xe];
      }
LAB_0027673c:
      do {
        in_stack_00000030 = iVar35;
        iVar35 = in_stack_00000030 + 1;
        piVar29 = (int *)unaff_r6[0xf];
        if ((piVar29 != (int *)0x0) || (*psVar28 <= iVar35)) {
          piVar36 = (int *)*unaff_r6;
          piVar34 = (int *)unaff_r6[0xc];
          iVar10 = unaff_r6[0xb];
          iVar35 = unaff_r6[0xd];
          uVar4 = *(ushort *)((int)unaff_r6 + 6);
          in_stack_00000084 = piVar34;
          if (piVar29 != (int *)0x0) {
            if (unaff_r6[0x11] == 0) {
              iVar26 = 0;
              piVar29 = (int *)0x0;
              piVar34 = unaff_r6;
              do {
                piVar1 = piVar34 + 0xf;
                piVar34[0x11] = (int)unaff_r6;
                piVar34[0x10] = (int)piVar29;
                iVar26 = iVar26 + 1;
                piVar29 = piVar34;
                piVar34 = (int *)*piVar1;
              } while ((int *)*piVar1 != (int *)0x0);
              if ((*(int *)(in_stack_00000048 + 0x5c) < iVar26) &&
                 (*(int *)(in_stack_00000048 + 0x5c) != 0)) {
                FUN_00268e48(in_stack_00000024,DAT_00276ab0 + 0x2767a0);
                FUN_00277444();
              }
            }
            FUN_0027b444(in_stack_00000024,unaff_r6,in_stack_0000003c);
            in_stack_00000024[0x79] = (int)in_stack_00000070;
            piVar34 = (int *)FUN_00277474();
            piVar29 = in_stack_00000070;
          }
          iVar26 = FUN_002631c8(piVar34,in_stack_00000080);
          if ((iVar26 == 0) && (-1 < *(int *)(in_stack_00000048 + 0x18) << 0x1a)) {
            in_stack_00000080 = piVar29;
          }
          if (((uVar4 & 5) == 1) && (iVar26 = FUN_002631c8(in_stack_00000080,piVar36), iVar26 == 0))
          {
            *(ushort *)((int)unaff_r6 + 6) = uVar4 & 0xfffe;
            in_stack_00000084 = (int *)FUN_002604c0(in_stack_00000048,piVar36,0);
            unaff_r6[0xc] = (int)in_stack_00000084;
            in_stack_00000080 = (int *)0x0;
          }
          if (in_stack_00000080 == (int *)0x0) {
            in_stack_00000030 = -1;
          }
          else {
            FUN_0026d2ac(in_stack_00000024);
            iVar26 = in_stack_00000024[0x12];
            in_stack_00000080[1] = iVar26;
            in_stack_00000024[0x12] = iVar26 + 1;
            in_stack_00000030 =
                 FUN_002662da(in_stack_00000020,0x2a,in_stack_00000080[1],*in_stack_00000080 + 2);
            unaff_r6[6] = in_stack_00000030;
          }
          if (*in_stack_0000003c == 9) {
            FUN_0026641e(in_stack_00000020,0x2a,*(undefined4 *)(in_stack_0000003c + 4),*piVar36);
          }
          uVar11 = FUN_00266020(in_stack_00000020);
          iVar26 = DAT_00276aa4;
          unaff_r6[8] = DAT_00276aa0;
          unaff_r6[9] = iVar26;
          FUN_00278c6c(in_stack_00000024,unaff_r6,uVar11);
          if ((-1 < in_stack_00000030) && (unaff_r6[2] == 0)) {
            puVar12 = (undefined1 *)FUN_0025c3cc(in_stack_00000020,in_stack_00000030);
            *puVar12 = 0x2b;
            *(ushort *)((int)unaff_r6 + 6) = *(ushort *)((int)unaff_r6 + 6) | 0x40;
          }
          if ((int)((uint)*(ushort *)((int)unaff_r6 + 6) << 0x1f) < 0) {
            iVar26 = in_stack_00000024[0x12];
            in_stack_00000024[0x12] = iVar26 + 1;
            FUN_0026d2ac(in_stack_00000024,*unaff_r6);
            piStack0000002c = (int *)FUN_002662da(in_stack_00000020,0x2a,iVar26);
            FUN_0025c3b8(in_stack_00000020,8);
            in_stack_00000024 = (int *)iVar26;
          }
          else {
            piStack0000002c = (int *)0xffffffff;
            in_stack_00000024 = (int *)0xffffffff;
          }
          iVar26 = DAT_00276dd4;
          if ((uStack00000038 == 0) && (in_stack_00000084 == (int *)0x0)) {
            iVar35 = FUN_00279b98(piVar7,psVar28,iVar10,&stack0x00000080);
            iVar10 = iVar35;
            if (iVar35 == 0) {
              iVar10 = FUN_00277446();
            }
            iVar18 = *(int *)(iVar10 + 0x34);
            iVar10 = *(int *)(iVar10 + 0x30);
            iVar26 = __aeabi_dcmplt(iVar10,iVar18,unaff_r6[8],unaff_r6[9]);
            if (iVar26 != 0) {
              unaff_r6[8] = iVar10;
              unaff_r6[9] = iVar18;
            }
            if ((-1 < in_stack_00000030) && (in_stack_00000080 == (int *)0x0)) {
              FUN_00263806(in_stack_00000020,in_stack_00000030);
              unaff_r6[6] = -1;
            }
            cVar2 = *(char *)(iVar35 + 8);
            if (cVar2 != '\0') {
              puVar12 = (undefined1 *)FUN_0025c3cc(in_stack_00000020,piStack0000002c);
              if (cVar2 == '\x02') {
                iVar26 = piVar7[0x13];
                iVar18 = iVar26 + 1;
                piVar7[0x13] = iVar18;
                iVar8 = iVar26 + 2;
                uStack00000038 = iVar8 + *piVar36;
                piVar7[0x13] = iVar18 + *piVar36 * 2;
                *puVar12 = 7;
                *(undefined4 *)(puVar12 + 4) = 1;
                *(int *)(puVar12 + 8) = iVar18;
                FUN_00278300(piVar7,piVar36,iVar8);
                iVar10 = *(int *)(in_stack_00000020 + 0x1c) + 1 + *piVar36;
                FUN_0026641e(in_stack_00000020,0x1b,iVar18,iVar10 + 1);
                for (iVar20 = 0; iVar20 < *piVar36; iVar20 = iVar20 + 1) {
                  uVar9 = FUN_0026cf38(piVar7,*(undefined4 *)(iVar20 * 0x14 + piVar36[2]));
                  FUN_00266266(in_stack_00000020,0x4b,iVar26 + 2 + iVar20,iVar10 + 2);
                  FUN_00263832(in_stack_00000020,0xffffffff,uVar9,0xfffffffc);
                  FUN_0025c3b8(in_stack_00000020,0x80);
                }
                FUN_0026641e(in_stack_00000020,1,0,*(undefined4 *)(iVar35 + 0x14));
                FUN_0026641e(in_stack_00000020,7,0,iVar18);
                FUN_00266266(in_stack_00000020,0xd,iVar8,uStack00000038);
              }
              else {
                *puVar12 = 0x95;
              }
              in_stack_00000024 = (int *)0xffffffff;
            }
            FUN_00278436(piVar7,unaff_r6,piVar36);
            FUN_0026663a(iVar35);
            goto LAB_002771c8;
          }
          if (in_stack_00000084 == (int *)0x0) {
            unaff_r6[8] = DAT_00276dd0;
            unaff_r6[9] = iVar26;
          }
          else {
            iVar18 = ((int *)*unaff_r6)[2];
            for (iVar26 = *(int *)*unaff_r6; 0 < iVar26; iVar26 = iVar26 + -1) {
              *(undefined2 *)(iVar18 + 0x10) = 0;
              iVar18 = iVar18 + 0x14;
            }
            iVar18 = in_stack_00000084[2];
            for (iVar26 = *in_stack_00000084; 0 < iVar26; iVar26 = iVar26 + -1) {
              *(undefined2 *)(iVar18 + 0x10) = 0;
              iVar18 = iVar18 + 0x14;
            }
            iVar18 = __aeabi_dcmpgt(unaff_r6[8],unaff_r6[9],DAT_00276aa8,DAT_00276aac);
            iVar26 = DAT_00276aac;
            if (iVar18 != 0) {
              unaff_r6[8] = DAT_00276aa8;
              unaff_r6[9] = iVar26;
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
          FUN_0025df00(&stack0x000000a0,piVar36);
          FUN_0025df00(&stack0x000000a0,in_stack_00000080);
          if (iVar35 != 0) {
            memset(&stack0x0000008c,0,0x14);
            in_stack_0000008c = DAT_00276dd8 + 0x276b12;
            in_stack_00000090 = DAT_00276ddc + 0x276b1a;
            in_stack_0000009c = &stack0x000000a0;
            FUN_0025c882(&stack0x0000008c,iVar35);
          }
          in_stack_000000dc = in_stack_000000d8;
          for (iVar26 = 0; iVar26 < in_stack_000000e4; iVar26 = iVar26 + 1) {
            in_stack_000000bc = in_stack_000000bc | 8;
            FUN_0025df00(&stack0x000000a0,
                         *(undefined4 *)(*(int *)(iVar26 * 0x10 + in_stack_000000e0) + 0x10));
            in_stack_000000bc = in_stack_000000bc & 0xf7;
          }
          cVar2 = *(char *)(in_stack_00000048 + 0x36);
          iVar26 = in_stack_000000e4;
          if (cVar2 != '\0') {
            FUN_00277446();
          }
          if (in_stack_00000084 == (int *)0x0) {
            piVar29 = (int *)*unaff_r6;
            if ((((unaff_r6[0xb] == 0) && (*piVar29 == 1)) &&
                (psVar17 = (short *)unaff_r6[10], *psVar17 == 1)) && (*(int *)(psVar17 + 0xc) == 0))
            {
              puVar27 = *(undefined4 **)(psVar17 + 10);
              if ((((int)((uint)*(byte *)((int)puVar27 + 0x22) << 0x1b) < 0) ||
                  (**(char **)piVar29[2] != -0x67)) ||
                 ((iVar26 == 0 ||
                  (((*(byte *)(*(int *)(in_stack_000000e0 + 4) + 3) & 0x10) == 0 ||
                   (uVar4 = *(ushort *)(*(char **)piVar29[2] + 2), uVar21 = uVar4 & 0x10,
                   (uVar4 & 0x10) != 0)))))) goto LAB_002770bc;
              uVar15 = FUN_0025d12c(*piVar7,puVar27[0x11]);
              uStack00000038 = piVar7[0x12];
              piVar7[0x12] = uStack00000038 + 1;
              iStack00000028 = puVar27[5];
              FUN_00275ec4(piVar7,uVar15);
              FUN_00265f96(piVar7,uVar15,puVar27[5],uVar21);
              for (uVar25 = puVar27[4]; uVar25 != 0; uVar25 = *(uint *)(uVar25 + 0x14)) {
                if ((*(char *)(uVar25 + 0x2e) == '\0') &&
                   ((uVar21 == 0 || (*(int *)(uVar25 + 0x24) < *(int *)(uVar21 + 0x24))))) {
                  uVar21 = uVar25;
                }
              }
              in_stack_00000018 = (int *)uVar21;
              if ((uVar21 != 0) &&
                 (in_stack_00000018 = (int *)uVar25, *(int *)(uVar21 + 0x24) < (int)puVar27[2])) {
                iStack00000028 = *(undefined4 *)(uVar21 + 0x28);
                in_stack_00000018 = (int *)FUN_0026e770(piVar7,uVar21);
              }
              FUN_00266266(in_stack_00000020,0x27,uStack00000038,iStack00000028);
              if (in_stack_00000018 != (int *)0x0) {
                FUN_00263832(in_stack_00000020,0xffffffff,in_stack_00000018,0xfffffff0);
              }
              FUN_0026641e(in_stack_00000020,0x20,uStack00000038,
                           *(undefined4 *)(in_stack_000000e0 + 8));
              FUN_002665da(in_stack_00000020,0x2d,uStack00000038);
              in_stack_00000018 = (int *)0x0;
              if ((char)piVar7[0x75] == '\x02') {
                if (uVar21 == 0) {
                  iVar10 = DAT_002773cc + 0x27708c;
                }
                else {
                  iVar10 = DAT_002773c8 + 0x277086;
                }
                FUN_0026877c(*piVar7,DAT_002773d0 + 0x277096,*puVar27,iVar10);
                FUN_002662da(piVar7[2],0x96,piVar7[0x79],0);
                in_stack_00000018 = (int *)0x0;
              }
            }
            else {
LAB_002770bc:
              in_stack_00000088 = 0;
              if ((((*piVar29 == 1) && (pcVar32 = *(char **)piVar29[2], *pcVar32 == -0x67)) &&
                  (-1 < (int)((uint)*(ushort *)(pcVar32 + 2) << 0x14))) &&
                 (((piVar29 = *(int **)(pcVar32 + 0x10), piVar29 != (int *)0x0 && (*piVar29 == 1))
                  && (**(char **)piVar29[2] == -0x66)))) {
                iVar26 = sqlite3_stricmp(*(undefined4 *)(pcVar32 + 4),DAT_002773d4 + 0x2770f4);
                if (iVar26 == 0) {
                  iVar26 = 1;
                }
                else {
                  iVar26 = 2;
                  iVar18 = sqlite3_stricmp(*(undefined4 *)(pcVar32 + 4),DAT_002773d8 + 0x277106);
                  if (iVar18 != 0) goto LAB_0027710e;
                }
                in_stack_00000018 =
                     (int *)FUN_002604c0(in_stack_00000048,
                                         *(undefined4 *)(**(int **)(*unaff_r6 + 8) + 0x10),0);
                in_stack_00000088 = (uint)in_stack_00000018;
                if ((in_stack_00000018 != (int *)0x0) &&
                   (*(char *)(in_stack_00000048 + 0x36) == '\0')) {
                  *(char *)(*(int *)((int)in_stack_00000018 + 8) + 0xc) = '\x01' - (iVar26 == 1);
                  *(undefined1 *)**(undefined4 **)((int)in_stack_00000018 + 8) = 0x98;
                }
              }
              else {
LAB_0027710e:
                iVar26 = 0;
                in_stack_00000018 = (int *)0x0;
              }
              FUN_0026d31c(piVar7,&stack0x000000c0);
              iVar10 = FUN_00279b98(piVar7,psVar28,iVar10,&stack0x00000088);
              if (iVar10 == 0) {
                FUN_00261102(in_stack_00000048,in_stack_00000018);
                FUN_00277444();
                return;
              }
              FUN_00278d8a(piVar7,&stack0x000000c0);
              if ((iVar26 != 0) && (in_stack_00000088 == 0)) {
                FUN_0026641e(in_stack_00000020,1,0,*(undefined4 *)(iVar10 + 0x18));
              }
              FUN_0026663a(iVar10);
              FUN_0026638e(piVar7,&stack0x000000c0);
            }
            in_stack_00000080 = (int *)0x0;
            FUN_00278ac2(piVar7,iVar35,uVar9,8);
            FUN_00278436(piVar7,unaff_r6,*unaff_r6,0);
            FUN_00261102(in_stack_00000048,in_stack_00000018);
          }
          else {
            in_stack_000000c4 = piVar7[0x12];
            piVar7[0x12] = in_stack_000000c4 + 1;
            FUN_0026d2ac(piVar7);
            uVar15 = FUN_002662da(in_stack_00000020,0x2b,in_stack_000000c4,in_stack_000000cc);
            iVar18 = piVar7[0x13];
            iVar20 = iVar18 + 1;
            iVar26 = iVar18 + 2;
            uStack00000038 = iVar18 + 3;
            piVar7[0x13] = uStack00000038;
            uVar13 = FUN_00266020(in_stack_00000020);
            iVar22 = piVar7[0x13] + 1;
            piVar7[0x13] = iVar22;
            uVar14 = FUN_00266020(in_stack_00000020);
            iVar8 = piVar7[0x13] + 1;
            iVar16 = piVar7[0x13] + *in_stack_00000084;
            piVar7[0x13] = iVar16;
            iVar18 = iVar16 + 1;
            piVar7[0x13] = iVar16 + *in_stack_00000084;
            FUN_0026641e(in_stack_00000020,7,cVar2,iVar26);
            FUN_0026641e(in_stack_00000020,7,cVar2,iVar20);
            FUN_00266266(in_stack_00000020,10,cVar2,iVar8);
            FUN_0026641e(in_stack_00000020,2,iVar22,uVar14);
            iVar10 = FUN_00279b98(piVar7,psVar28,iVar10,&stack0x00000084);
            if (iVar10 == 0) {
              FUN_00277446();
            }
            if (in_stack_00000084 == (int *)0x0) {
              piStack0000002c = in_stack_00000084;
              in_stack_00000018 = in_stack_00000084;
              in_stack_00000034 = in_stack_00000084;
              in_stack_00000084 = (int *)unaff_r6[0xc];
            }
            else {
              if ((uVar4 & 1) == 0) {
                iVar16 = DAT_00276de4 + 0x276c50;
              }
              else if ((*(ushort *)((int)unaff_r6 + 6) & 1) == 0) {
                iVar16 = DAT_00276de8 + 0x276c56;
              }
              else {
                iVar16 = DAT_00276de0 + 0x276c4a;
              }
              if ((char)piVar7[0x75] == '\x02') {
                FUN_00268b58(piVar7,iVar16);
              }
              iVar23 = *in_stack_00000084;
              in_stack_00000034 = (int *)(iVar23 + 1);
              iVar16 = in_stack_000000d4;
              iVar31 = (int)in_stack_00000034;
              iVar37 = (int)in_stack_00000034;
              for (iVar24 = 0; iVar24 < in_stack_000000d8; iVar24 = iVar24 + 1) {
                if (iVar31 <= *(int *)(iVar16 + 0xc)) {
                  iVar37 = iVar37 + 1;
                  iVar31 = iVar31 + 1;
                }
                iVar16 = iVar16 + 0x18;
              }
              iVar16 = FUN_00262834(piVar7,iVar37);
              FUN_0025cb7c(piVar7);
              FUN_00278300(piVar7,in_stack_00000084,iVar16,0);
              FUN_0026641e(in_stack_00000020,0x37,in_stack_000000c4,iVar16 + iVar23);
              for (iVar31 = 0; iVar31 < in_stack_000000d8; iVar31 = iVar31 + 1) {
                puVar27 = (undefined4 *)(in_stack_000000d4 + iVar31 * 0x18);
                if ((int)in_stack_00000034 <= (int)puVar27[3]) {
                  iVar23 = FUN_0027074a(piVar7,*puVar27,puVar27[2],puVar27[1]);
                  if ((int)in_stack_00000034 + iVar16 != iVar23) {
                    FUN_0026641e(in_stack_00000020,0xf,iVar23,(int)in_stack_00000034 + iVar16);
                  }
                  in_stack_00000034 = (int *)((int)in_stack_00000034 + 1);
                }
              }
              uVar30 = FUN_002627dc(piVar7);
              FUN_00266266(in_stack_00000020,0x1f,iVar16,iVar37);
              FUN_0026641e(in_stack_00000020,0x60,in_stack_000000c4,uVar30);
              FUN_002627fe(piVar7,uVar30);
              FUN_0025cbb8(piVar7,iVar16,iVar37);
              FUN_0026663a(iVar10);
              in_stack_00000018 = (int *)piVar7[0x12];
              piVar7[0x12] = (int)in_stack_00000018 + 1;
              in_stack_000000c8 = in_stack_00000018;
              piStack0000002c = (int *)FUN_002627dc(piVar7);
              FUN_00266266(in_stack_00000020,0x2c,in_stack_00000018,piStack0000002c);
              FUN_0026641e(in_stack_00000020,0x46,in_stack_000000c4,uVar9);
              uStack000000c1 = 1;
              FUN_0025cb7c(piVar7);
              in_stack_00000034 = (int *)0x1;
            }
            uVar30 = *(undefined4 *)(in_stack_00000020 + 0x1c);
            FUN_0025cb7c(piVar7);
            if (in_stack_00000034 != (int *)0x0) {
              FUN_0026641e(in_stack_00000020,0x3e,in_stack_000000c4,piStack0000002c);
            }
            iVar16 = iVar18;
            for (iVar31 = 0; iVar31 < *in_stack_00000084; iVar31 = iVar31 + 1) {
              if (in_stack_00000034 == (int *)0x0) {
                uStack000000c0 = 1;
                FUN_002786f4(piVar7,*(undefined4 *)(iVar31 * 0x14 + in_stack_00000084[2]),iVar16);
              }
              else {
                FUN_00266266(in_stack_00000020,0x1d,in_stack_00000018,iVar31);
                if (iVar31 == 0) {
                  FUN_0025c3b8(in_stack_00000020,0x20);
                }
              }
              iVar16 = iVar16 + 1;
            }
            FUN_002662da(in_stack_00000020,0x18,iVar8,iVar18);
            iVar16 = *(int *)(in_stack_00000020 + 0x1c);
            FUN_00266266(in_stack_00000020,0x19,iVar16 + 1,0);
            if (iVar18 != iVar8) {
              FUN_00266966(piVar7,iVar18,iVar8,*in_stack_00000084);
            }
            FUN_0026641e(in_stack_00000020,2,uStack00000038,uVar13);
            FUN_0026641e(in_stack_00000020,0x78,iVar26,uVar9);
            FUN_0026641e(in_stack_00000020,2,iVar22,uVar14);
            FUN_002624c2(in_stack_00000020,iVar16);
            FUN_00278d8a(piVar7,&stack0x000000c0);
            FUN_0026641e(in_stack_00000020,7,1,iVar20);
            if (in_stack_00000034 == (int *)0x0) {
              FUN_0026663a(iVar10);
              FUN_00263806(in_stack_00000020,uVar15);
            }
            else {
              FUN_0026641e(in_stack_00000020,0x51,in_stack_000000c4,uVar30);
            }
            FUN_0026641e(in_stack_00000020,2,uStack00000038,uVar13);
            FUN_0026641e(in_stack_00000020,1,0,uVar9);
            FUN_0026641e(in_stack_00000020,7,1,iVar26);
            FUN_002665da(in_stack_00000020,3,uStack00000038);
            FUN_0025c384(in_stack_00000020,uVar13);
            iVar10 = *(int *)(in_stack_00000020 + 0x1c);
            FUN_0026641e(in_stack_00000020,0x78,iVar20,iVar10 + 2);
            FUN_002665da(in_stack_00000020,3,uStack00000038);
            FUN_0026638e(piVar7,&stack0x000000c0);
            FUN_00278ac2(piVar7,iVar35,iVar10 + 1,8);
            FUN_00278436(piVar7,unaff_r6,*unaff_r6);
            FUN_002665da(in_stack_00000020,3,uStack00000038);
            FUN_0025c384(in_stack_00000020,uVar14);
            FUN_0026d31c(piVar7,&stack0x000000c0);
            FUN_002665da(in_stack_00000020,3,iVar22);
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
            iVar35 = *piVar36;
            uVar9 = FUN_00266020(in_stack_00000020);
            uVar15 = FUN_00266020(in_stack_00000020);
            piVar29 = (int *)unaff_r6[0xe];
            bVar3 = *in_stack_0000003c;
            iVar26 = *(int *)(in_stack_0000003c + 4);
            iVar18 = piVar29[1];
            iVar10 = FUN_002627dc(piVar7);
            bVar38 = bVar3 == 5;
            if (bVar38 || bVar3 == 10) {
              uStack00000038 = piVar7[0x12];
              piVar7[0x12] = uStack00000038 + 1;
              FUN_00266266(in_stack_00000020,0x2c,uStack00000038,iVar10);
              in_stack_00000024 = (int *)0x0;
            }
            else {
              in_stack_00000024 = (int *)FUN_002627dc(piVar7);
              uStack00000038 = 0;
            }
            if ((int)((uint)*(ushort *)((int)unaff_r6 + 6) << 0x19) < 0) {
              iVar8 = piVar7[0x12];
              iVar20 = piVar7[0x13] + 1;
              piVar7[0x13] = iVar20;
              piVar7[0x12] = iVar8 + 1;
              FUN_00266266(in_stack_00000020,0x2c,iVar8,iVar20);
              iStack00000058 = FUN_0026641e(in_stack_00000020,0x46,iVar18,uVar9);
              FUN_002665fc(in_stack_00000020,unaff_r6,uVar15);
              FUN_0026641e(in_stack_00000020,0x3e,iVar18,iVar20);
              FUN_00266266(in_stack_00000020,0x1d,iVar8,*piVar29 + 1);
              FUN_0025c3b8(in_stack_00000020,0x20);
            }
            else {
              iStack00000058 = FUN_0026641e(in_stack_00000020,0x47,iVar18,uVar9);
              FUN_002665fc(in_stack_00000020,unaff_r6,uVar15);
              FUN_00266266(in_stack_00000020,0x1d,iVar18,*piVar29 + 1);
            }
            iStack00000058 = iStack00000058 + 1;
            iVar8 = 0;
            switch(bVar3) {
            case 6:
              if (iVar10 != iVar26) {
                FUN_00266966(piVar7,iVar10,iVar26,1);
              }
              break;
            case 7:
              FUN_002662da(in_stack_00000020,0x1f,iVar10,1);
              FUN_0025cb14(piVar7,iVar10,1);
              FUN_0026641e(in_stack_00000020,0x61,iVar26,in_stack_00000024);
              break;
            case 8:
            case 9:
              FUN_0026641e(in_stack_00000020,0x38,iVar26,in_stack_00000024);
              FUN_00266266(in_stack_00000020,0x39,iVar26,iVar10);
              FUN_0025c3b8(in_stack_00000020,8);
              break;
            default:
              for (; iVar8 < iVar35; iVar8 = iVar8 + 1) {
                FUN_00266266(in_stack_00000020,0x1d,uStack00000038,iVar8);
                if (iVar8 == 0) {
                  FUN_0025c3b8(in_stack_00000020,0x20);
                }
              }
              if (bVar38) {
                FUN_0026641e(in_stack_00000020,0x10,*(undefined4 *)(in_stack_0000003c + 8),iVar35);
                FUN_0025cb14(piVar7,*(undefined4 *)(in_stack_0000003c + 8),iVar35);
              }
              else {
                FUN_002665da(in_stack_00000020,4,*(undefined4 *)(in_stack_0000003c + 4));
              }
            }
            FUN_002627fe(piVar7,iVar10);
            FUN_002627fe(piVar7,in_stack_00000024);
            FUN_0025c384(in_stack_00000020,uVar15);
            uVar15 = 0x51;
            if (-1 < (int)((uint)*(ushort *)((int)unaff_r6 + 6) << 0x19)) {
              uVar15 = 0x5f;
            }
            FUN_0026641e(in_stack_00000020,uVar15,iVar18,iStack00000058);
            FUN_0025c384(in_stack_00000020,uVar9);
            if (bVar38 || bVar3 == 10) {
              FUN_0026641e(in_stack_00000020,0x2d,uStack00000038,0);
            }
          }
          FUN_0025c384(in_stack_00000020,uVar11);
          FUN_00277446();
          return;
        }
        unaff_r5 = psVar28 + iVar35 * 0x20 + 4;
        in_stack_00000034 = *(int **)(unaff_r5 + 8);
      } while (in_stack_00000034 == (int *)0x0);
      if (*(int *)(unaff_r5 + 10) != 0) {
        FUN_0026641e(in_stack_00000020,2,*(undefined4 *)(unaff_r5 + 0xc));
        goto LAB_0027673c;
      }
      iVar10 = in_stack_00000024[0x78];
      in_stack_00000088 = *(int *)(unaff_r5 + 10);
      FUN_0025c94a(unaff_r6,&stack0x00000088);
      in_stack_00000024[0x78] = iVar10 + in_stack_00000088;
      iVar10 = in_stack_00000024[0x81];
      iVar26 = *in_stack_00000024;
      if (-1 < *(int *)(iVar26 + 0x18) << 0x1f) {
        psVar28 = (short *)unaff_r6[10];
        iVar18 = (uint)*(ushort *)((int)in_stack_00000034 + 6) << 0x1d;
        psVar17 = psVar28 + iVar35 * 0x20 + 4;
        uVar11 = *(undefined4 *)(psVar17 + 0x10);
        puVar27 = *(undefined4 **)(psVar17 + 8);
        if ((((uStack00000038 & 0xff) == 0) || (-1 < iVar18)) && ((-1 < iVar18 || (*psVar28 < 2))))
        {
          iVar8 = puVar27[0x12];
          if (((((iVar8 == 0) || (unaff_r6[0x12] == 0)) && (puVar27[0x13] == 0)) &&
              (((unaff_r6[0x11] == 0 || (iVar8 == 0)) &&
               ((*(short *)puVar27[10] != 0 &&
                (-1 < (int)((uint)*(ushort *)((int)puVar27 + 6) << 0x1f))))))) &&
             ((iVar8 == 0 || (((uStack00000038 & 0xff) == 0 && (*psVar28 < 2)))))) {
            uVar4 = *(ushort *)((int)unaff_r6 + 6);
            if (((-1 < iVar18) || ((uVar4 & 1) == 0)) &&
               (((((piVar29 = (int *)unaff_r6[0xe], piVar29 == (int *)0x0 || (puVar27[0xe] == 0)) &&
                  ((uStack00000038 == 0 || (puVar27[0xe] == 0)))) &&
                 ((iVar8 == 0 || ((unaff_r6[0xb] == 0 && ((uVar4 & 1) == 0)))))) &&
                (-1 < (int)((uint)*(byte *)(psVar17 + 0xe) << 0x1a))))) {
              if (puVar27[0xf] == 0) {
LAB_002763bc:
                in_stack_00000024[0x81] = *(int *)(psVar17 + 2);
                FUN_00268e90(in_stack_00000024,0x15,0,0);
                in_stack_00000024[0x81] = iVar10;
                while (puVar27 = (undefined4 *)puVar27[0xf], puVar27 != (undefined4 *)0x0) {
                  iVar8 = unaff_r6[0xe];
                  in_stack_00000034 = (int *)unaff_r6[0xf];
                  iVar20 = unaff_r6[0x12];
                  unaff_r6[0xe] = 0;
                  unaff_r6[10] = 0;
                  unaff_r6[0xf] = 0;
                  unaff_r6[0x12] = 0;
                  iVar10 = FUN_002607da(iVar26,unaff_r6,0);
                  unaff_r6[0x12] = iVar20;
                  unaff_r6[0xe] = iVar8;
                  unaff_r6[10] = (int)psVar28;
                  *(undefined1 *)(unaff_r6 + 1) = 0x71;
                  unaff_r6[0x11] = 0;
                  if (iVar10 != 0) {
                    *(undefined4 *)(iVar10 + 0x44) = 0;
                    *(int **)(iVar10 + 0x3c) = in_stack_00000034;
                    in_stack_00000034 = (int *)iVar10;
                  }
                  unaff_r6[0xf] = (int)in_stack_00000034;
                  if (*(char *)(iVar26 + 0x36) != '\0') {
                    FUN_0027747a();
                  }
                }
                psVar28 = *(short **)(psVar17 + 8);
                FUN_0025fbda(iVar26,*(undefined4 *)psVar17);
                FUN_0025fbda(iVar26,*(undefined4 *)(psVar17 + 2));
                FUN_0025fbda(iVar26,*(undefined4 *)(psVar17 + 4));
                iVar10 = *(int *)(psVar17 + 6);
                psVar17[0] = 0;
                psVar17[1] = 0;
                psVar17[2] = 0;
                psVar17[3] = 0;
                psVar17[4] = 0;
                psVar17[5] = 0;
                psVar17[8] = 0;
                psVar17[9] = 0;
                if (iVar10 != 0) {
                  if (*(short *)(iVar10 + 0x20) == 1) {
                    piVar29 = (int *)in_stack_00000024[0x6c];
                    if ((int *)in_stack_00000024[0x6c] == (int *)0x0) {
                      piVar29 = in_stack_00000024;
                    }
                    *(int *)(iVar10 + 0x48) = piVar29[0x89];
                    piVar29[0x89] = iVar10;
                  }
                  else {
                    *(short *)(iVar10 + 0x20) = *(short *)(iVar10 + 0x20) + -1;
                  }
                  psVar17[6] = 0;
                  psVar17[7] = 0;
                }
                piVar29 = unaff_r6;
                unaff_r5 = psVar28;
                do {
                  psVar33 = *(short **)(unaff_r5 + 0x14);
                  iVar10 = piVar29[10];
                  sVar5 = *psVar33;
                  if (iVar10 == 0) {
                    iVar10 = FUN_00266f0c(iVar26,0,0,0);
                    piVar29[10] = iVar10;
                    if (iVar10 == 0) break;
                    uVar6 = 0;
                  }
                  else {
                    uVar6 = (undefined1)psVar17[0xe];
                  }
                  iVar8 = (int)sVar5;
                  if (1 < iVar8) {
                    iVar10 = FUN_00266e60(iVar26,iVar10,iVar8 + -1,in_stack_00000030 + 2);
                    piVar29[10] = iVar10;
                    if (*(char *)(iVar26 + 0x36) != '\0') break;
                  }
                  puVar27 = (undefined4 *)(iVar10 + iVar35 * 0x40 + 0x30);
                  psStack00000040 = psVar33;
                  for (in_stack_00000034 = (int *)0x0; (int)in_stack_00000034 < iVar8;
                      in_stack_00000034 = (int *)((int)in_stack_00000034 + 1)) {
                    FUN_00260004(iVar26,*puVar27);
                    memcpy(puVar27 + -10,psStack00000040 + 4,0x40);
                    puVar27 = puVar27 + 0x10;
                    memset(psVar33 + (int)in_stack_00000034 * 0x20 + 4,0,0x40);
                    psStack00000040 = psStack00000040 + 0x20;
                  }
                  *(undefined1 *)(iVar10 + iVar35 * 0x40 + 0x24) = uVar6;
                  piVar34 = (int *)*piVar29;
                  for (iStack00000028 = 0; iStack00000028 < *piVar34;
                      iStack00000028 = iStack00000028 + 1) {
                    iVar10 = piVar34[2] + iStack00000028 * 0x14;
                    if ((*(int *)(iVar10 + 4) == 0) && (*(int *)(iVar10 + 8) != 0)) {
                      uVar9 = FUN_0025f25a(iVar26);
                      *(undefined4 *)(iVar10 + 4) = uVar9;
                    }
                  }
                  FUN_00261336(iVar26,*piVar29,uVar11,*(undefined4 *)unaff_r5);
                  if (uStack00000038 != 0) {
                    FUN_00261336(iVar26,piVar29[0xc],uVar11,*(undefined4 *)unaff_r5);
                    iVar10 = FUN_002612ac(iVar26,piVar29[0xd],uVar11,*(undefined4 *)unaff_r5);
                    piVar29[0xd] = iVar10;
                  }
                  if (*(int *)(unaff_r5 + 0x1c) == 0) {
                    if (piVar29[0xe] != 0) {
                      FUN_00261336(iVar26,piVar29[0xe],uVar11,*(undefined4 *)unaff_r5);
                    }
                  }
                  else {
                    piVar29[0xe] = *(int *)(unaff_r5 + 0x1c);
                    unaff_r5[0x1c] = 0;
                    unaff_r5[0x1d] = 0;
                  }
                  iVar10 = *(int *)(unaff_r5 + 0x16);
                  if (iVar10 != 0) {
                    iVar10 = FUN_002606fc(iVar26,iVar10,0);
                  }
                  iVar8 = piVar29[0xb];
                  if (iVar18 < 0) {
                    piVar29[0xd] = iVar8;
                    piVar29[0xb] = iVar10;
                    iVar10 = FUN_002612ac(iVar26,iVar8,uVar11,*(undefined4 *)unaff_r5);
                    piVar29[0xd] = iVar10;
                    uVar9 = FUN_002606fc(iVar26,*(undefined4 *)(unaff_r5 + 0x1a),0);
                    iVar10 = FUN_00262684(iVar26,iVar10,uVar9);
                    piVar29[0xd] = iVar10;
                    iVar10 = FUN_002604c0(iVar26,*(undefined4 *)(unaff_r5 + 0x18),0);
                    piVar29[0xc] = iVar10;
                  }
                  else {
                    iVar8 = FUN_002612ac(iVar26,iVar8,uVar11,*(undefined4 *)unaff_r5);
                    piVar29[0xb] = iVar8;
                    iVar10 = FUN_00262684(iVar26,iVar8,iVar10);
                    piVar29[0xb] = iVar10;
                  }
                  *(ushort *)((int)piVar29 + 6) = *(ushort *)((int)piVar29 + 6) | unaff_r5[3] & 1U;
                  if (*(int *)(unaff_r5 + 0x24) != 0) {
                    piVar29[0x12] = *(int *)(unaff_r5 + 0x24);
                    unaff_r5[0x24] = 0;
                    unaff_r5[0x25] = 0;
                  }
                  piVar29 = (int *)piVar29[0xf];
                  unaff_r5 = *(short **)(unaff_r5 + 0x1e);
                } while (piVar29 != (int *)0x0);
                FUN_00261092(iVar26,psVar28);
                FUN_0027747a();
              }
              else if ((((puVar27[0xe] == 0) && (uStack00000038 == 0)) && ((uVar4 & 1) == 0)) &&
                      (puVar19 = puVar27, *psVar28 == 1)) {
                do {
                  if (puVar19 == (undefined4 *)0x0) {
                    if (piVar29 == (int *)0x0) goto LAB_002763bc;
                    iVar8 = 0;
                    iVar20 = 0;
                    goto LAB_002763b8;
                  }
                } while (((((*(ushort *)((int)puVar19 + 6) & 5) == 0) &&
                          (((undefined4 *)puVar19[0xf] == (undefined4 *)0x0 ||
                           (*(char *)(puVar19 + 1) == 'q')))) && (0 < *(short *)puVar19[10])) &&
                        (piVar34 = (int *)*puVar19, puVar19 = (undefined4 *)puVar19[0xf],
                        *(int *)*puVar27 == *piVar34));
              }
            }
          }
        }
      }
LAB_0027666a:
      iVar10 = in_stack_00000024[0x13];
      in_stack_00000024[0x13] = iVar10 + 1;
      *(int *)(unaff_r5 + 0xc) = iVar10 + 1;
      in_stack_00000018 = (int *)FUN_0026641e(in_stack_00000020,7,0);
      *(int *)(unaff_r5 + 10) = (int)in_stack_00000018 + 1;
      iVar10 = 0;
      in_stack_00000030 = iVar35;
    } while ((char)unaff_r5[0xf] != '\0');
  } while( true );
LAB_002763b8:
  if (*piVar29 <= iVar8) goto LAB_002763bc;
  iVar16 = piVar29[2] + iVar20;
  iVar20 = iVar20 + 0x14;
  if (*(short *)(iVar16 + 0xe) == 0) goto LAB_0027666a;
  iVar8 = iVar8 + 1;
  goto LAB_002763b8;
}


