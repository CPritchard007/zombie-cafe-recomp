/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002822e0 FUN_002822e0 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Function: __gnu_thumb1_case_uqi replaced with injection: switch8_r0 */
/* WARNING (jumptable): Removing unreachable block (ram,0x0028270e) */
/* WARNING (jumptable): Removing unreachable block (ram,0x00282736) */
/* WARNING: Removing unreachable block (ram,0x0028270e) */
/* WARNING: Removing unreachable block (ram,0x00282736) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_002822e0(void)

{
  byte bVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 uVar7;
  int *extraout_r1;
  int iVar8;
  char cVar9;
  int *unaff_r4;
  undefined4 *puVar10;
  int iVar11;
  uint uVar12;
  undefined1 uVar13;
  int unaff_r5;
  int iVar14;
  int *unaff_r6;
  int unaff_r7;
  char cVar15;
  bool bVar16;
  int *piStack00000018;
  int *in_stack_0000001c;
  int in_stack_00000020;
  byte *in_stack_00000024;
  int in_stack_00000028;
  undefined4 *puStack0000002c;
  int in_stack_00000030;
  int iStack00000034;
  int in_stack_00000058;
  
  iVar2 = sqlite3_stricmp(in_stack_00000024,iRam002825d8 + 0x2822e8);
  if ((iVar2 == 0) && (in_stack_00000020 != 0)) {
    unaff_r4 = (int *)FUN_00287abc(unaff_r6);
    if (unaff_r4 != (int *)0x0) {
      FUN_00283142();
    }
    in_stack_0000001c = (int *)FUN_00264662(unaff_r7,in_stack_00000020,in_stack_00000028);
    if (in_stack_0000001c == (int *)0x0) {
      FUN_002830ca();
    }
    FUN_00263b94(unaff_r5,3);
    unaff_r6[0x13] = 3;
    FUN_00265916(unaff_r5,unaff_r4,unaff_r4,iRam002825dc + 0x282330);
    FUN_00265916(unaff_r5,1,unaff_r4,iRam002825e0 + 0x282340);
    FUN_00265916(unaff_r5,2,unaff_r4,iRam002825e4 + 0x282350);
    for (unaff_r6 = unaff_r4; (int)unaff_r6 < in_stack_0000001c[9];
        unaff_r6 = (int *)((int)unaff_r6 + 1)) {
      iVar2 = *(int *)((int)unaff_r6 * 4 + in_stack_0000001c[1]);
      FUN_0026641e(unaff_r5,7,unaff_r6,1);
      FUN_0026641e(unaff_r5,7,iVar2,2);
      unaff_r4 = (int *)(iVar2 * 0x18);
      FUN_002662da(unaff_r5,0x5e,0,3);
      FUN_0026641e(unaff_r5,0x10,1,3);
    }
    FUN_002830ca();
  }
  iVar2 = sqlite3_stricmp(in_stack_00000024,iRam002825e8 + 0x2823b8);
  piVar3 = unaff_r6;
  if ((iVar2 == 0) && (in_stack_00000020 != 0)) {
    unaff_r5 = FUN_00287abc(unaff_r6);
    if (unaff_r5 != 0) {
      FUN_00283142();
    }
    iVar2 = FUN_0026460e(unaff_r7,in_stack_00000020,in_stack_00000028);
    if (iVar2 == 0) {
      FUN_002830ca();
    }
    piVar3 = (int *)FUN_002662b8(unaff_r6);
    iVar2 = *(int *)(iVar2 + 0x10);
    piVar4 = piVar3;
    if (iVar2 == 0) {
      piVar4 = (int *)FUN_002830ca();
    }
    FUN_00263b94(piVar4,3);
    unaff_r6[0x13] = 3;
    FUN_00265916(piVar3,unaff_r5,unaff_r5,iRam002825ec + 0x28240a);
    FUN_00265916(piVar3,1,unaff_r5,iRam002825f0 + 0x28241a);
    FUN_00265916(piVar3,2,unaff_r5,iRam002825f4 + 0x28242a);
    do {
      FUN_0026641e(piVar3,7,unaff_r5,1);
      FUN_002662da(piVar3,0x5e,0,2);
      FUN_0026641e(piVar3,7,*(char *)(iVar2 + 0x2c) != '\0',3);
      FUN_0026641e(piVar3,0x10,1,3);
      iVar2 = *(int *)(iVar2 + 0x14);
      unaff_r5 = unaff_r5 + 1;
    } while (iVar2 != 0);
    FUN_002830ca();
    unaff_r4 = (int *)0x0;
    in_stack_0000001c = piVar3;
  }
  iVar2 = sqlite3_stricmp(in_stack_00000024,iRam002825f8 + 0x282486);
  if (iVar2 == 0) {
    unaff_r4 = (int *)FUN_00287abc(piVar3);
    if (unaff_r4 != (int *)0x0) {
      FUN_00283142();
    }
    FUN_00263b94(unaff_r5,3);
    piVar3[0x13] = 3;
    FUN_00265916(unaff_r5,unaff_r4,unaff_r4,iRam002825fc + 0x2824b0);
    FUN_00265916(unaff_r5,1,unaff_r4,iRam00282600 + 0x2824c0);
    piVar3 = (int *)(iRam00282608 + 0x2824d8);
    FUN_00265916(unaff_r5,2,unaff_r4,iRam00282604 + 0x2824d0);
    for (; (int)unaff_r4 < *(int *)(unaff_r7 + 0x14); unaff_r4 = (int *)((int)unaff_r4 + 1)) {
      in_stack_0000001c = (int *)((int)unaff_r4 * 0x10);
      if (*(int *)((int)in_stack_0000001c + *(int *)(unaff_r7 + 0x10) + 4) != 0) {
        FUN_0026641e(unaff_r5,7,unaff_r4,1);
        FUN_002662da(unaff_r5,0x5e,0,2);
        FUN_002662da(unaff_r5,0x5e,0,3);
        FUN_0026641e(unaff_r5,0x10,1,3);
      }
    }
    FUN_002830ca();
  }
  iVar2 = sqlite3_stricmp(in_stack_00000024,iRam0028260c + 0x28255e);
  if (iVar2 == 0) {
    FUN_00263b94(unaff_r5,2);
    piVar3[0x13] = 2;
    FUN_00265916(unaff_r5,0,0,iRam00282610 + 0x28257e);
    FUN_00265916(unaff_r5,1,0,iRam00282614 + 0x28258c);
    piVar3 = (int *)0x0;
    for (puVar10 = *(undefined4 **)(unaff_r7 + 0x1a4); puVar10 != (undefined4 *)0x0;
        puVar10 = (undefined4 *)*puVar10) {
      in_stack_0000001c = (int *)((int)piVar3 + 1);
      FUN_0026641e(unaff_r5,7,piVar3,1);
      FUN_002662da(unaff_r5,0x5e,0,2);
      FUN_0026641e(unaff_r5,0x10,1,2);
      piVar3 = in_stack_0000001c;
    }
    FUN_002830ca();
    unaff_r7 = 0x2a;
    piVar3 = (int *)&DAT_00000045;
    _DAT_00000074 = 0x74;
    _DAT_00000078 = 0x45;
    _DAT_0000007c = 0x2a;
    unaff_r5 = 0x26;
    unaff_r4 = extraout_r1;
  }
  iVar2 = sqlite3_stricmp(in_stack_00000024,iRam00282920 + 0x282620);
  if ((iVar2 == 0) && (in_stack_00000020 != 0)) {
    iStack00000034 = FUN_00287abc(piVar3);
    if (iStack00000034 != 0) {
      FUN_00283142();
    }
    iVar2 = FUN_0026460e(unaff_r7,in_stack_00000020,in_stack_00000028);
    if (iVar2 == 0) {
      FUN_002830ca();
    }
    uVar5 = FUN_002662b8(piVar3);
    piStack00000018 = *(int **)(iVar2 + 0x24);
    uVar7 = uVar5;
    if (piStack00000018 == (int *)0x0) {
      uVar7 = FUN_002830ca();
    }
    FUN_00263b94(uVar7,8);
    piVar3[0x13] = 8;
    FUN_00265916(uVar5,iStack00000034,iStack00000034,iRam00282924 + 0x28267c);
    FUN_00265916(uVar5,1,iStack00000034,iRam00282928 + 0x28268c);
    FUN_00265916(uVar5,2,iStack00000034,iRam0028292c + 0x28269c);
    FUN_00265916(uVar5,3,iStack00000034,iRam00282930 + 0x2826ac);
    FUN_00265916(uVar5,4,iStack00000034,iRam00282934 + 0x2826bc);
    FUN_00265916(uVar5,5,iStack00000034,iRam00282938 + 0x2826cc);
    FUN_00265916(uVar5,6,iStack00000034,iRam0028293c + 0x2826dc);
    FUN_00265916(uVar5,7,iStack00000034,iRam00282940 + 0x2826ec);
    do {
      iVar2 = (int)piStack00000018;
      for (in_stack_00000028 = 0; in_stack_00000028 < *(int *)((int)piStack00000018 + 0x14);
          in_stack_00000028 = in_stack_00000028 + 1) {
        iVar8 = *(int *)(iVar2 + 0x28);
        switch(*(undefined1 *)((int)piStack00000018 + 0x19)) {
        case 6:
          break;
        case 7:
          break;
        case 8:
          break;
        case 9:
        }
        switch(*(undefined1 *)((int)piStack00000018 + 0x1a)) {
        case 6:
          break;
        case 7:
          break;
        case 8:
          break;
        case 9:
        }
        FUN_0026641e(uVar5,7,iStack00000034,1);
        FUN_0026641e(uVar5,7,in_stack_00000028,2);
        FUN_002662da(uVar5,0x5e,0,3);
        FUN_002662da(uVar5,0x5e,0,4);
        uVar7 = 10;
        if (iVar8 != 0) {
          uVar7 = 0x5e;
        }
        FUN_002662da(uVar5,uVar7,0,5);
        FUN_002662da(uVar5,0x5e,0,6);
        FUN_002662da(uVar5,0x5e,0,7);
        FUN_002662da(uVar5,0x5e,0,8);
        FUN_0026641e(uVar5,0x10,1,8);
        iVar2 = iVar2 + 8;
      }
      piStack00000018 = *(int **)((int)piStack00000018 + 4);
      iStack00000034 = iStack00000034 + 1;
      if (piStack00000018 == (int *)0x0) {
        FUN_002830c8();
      }
    } while( true );
  }
  iVar2 = sqlite3_stricmp(in_stack_00000024,DAT_00282970 + 0x282840);
  if (iVar2 == 0) {
    if (in_stack_00000020 == 0) {
      FUN_002830ca();
    }
    iVar2 = FUN_00262a1c(in_stack_00000020);
    iVar8 = DAT_0028297c + 0x282876;
    FUN_0026affc(unaff_r7,iVar8,2,1);
    FUN_0026affc(unaff_r7,iVar8,3,1);
    iVar8 = DAT_00282988 + 0x2828b2;
    FUN_0026affc(unaff_r7,iVar8,2,1);
    uVar7 = FUN_0025b154(iVar8);
    iVar8 = FUN_00262898(unaff_r7,iVar8,uVar7,2);
    if (iVar8 != 0) {
      *(undefined1 *)(iVar8 + 3) = 3;
    }
    uVar13 = 1;
    if (iVar2 != 0) {
      uVar13 = 3;
    }
    iVar2 = DAT_0028298c + 0x2828f8;
    uVar7 = FUN_0025b154(iVar2);
    iVar2 = FUN_00262898(unaff_r7,iVar2,uVar7,2);
    if (iVar2 == 0) {
      iVar2 = FUN_002830ca();
    }
    *(undefined1 *)(iVar2 + 3) = uVar13;
    FUN_002830ca();
    software_interrupt(0xb8);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  iVar2 = sqlite3_stricmp(in_stack_00000024,DAT_00282c54 + 0x282998);
  if ((iVar2 == 0) ||
     (iVar2 = sqlite3_stricmp(in_stack_00000024,DAT_00282c58 + 0x2829a6), iVar2 == 0)) {
    cVar9 = *(char *)(DAT_00282c5c + 0x2829f8 + (uint)*in_stack_00000024);
    if (*unaff_r4 == 0) {
      in_stack_0000001c = (int *)0xffffffff;
    }
    iVar2 = FUN_00287abc(piVar3);
    if (iVar2 != 0) {
      FUN_00283142();
      return;
    }
    piVar3[0x13] = 6;
    FUN_00263b94(unaff_r5,1);
    FUN_00265916(unaff_r5,0,0,DAT_00282c60 + 0x2829ea);
    in_stack_00000058 = 100;
    if ((in_stack_00000020 != 0) &&
       (FUN_0025b880(in_stack_00000020,&stack0x00000058), in_stack_00000058 < 1)) {
      in_stack_00000058 = 100;
    }
    FUN_0026641e(unaff_r5,7,in_stack_00000058,1);
    iVar2 = DAT_00282c64 + 0x282a20;
    for (piStack00000018 = (int *)0x0; (int)piStack00000018 < *(int *)(unaff_r7 + 0x14);
        piStack00000018 = (int *)((int)piStack00000018 + 1)) {
      if ((piStack00000018 == in_stack_0000001c) || ((int)in_stack_0000001c < 0)) {
        FUN_00275ec4(piVar3,piStack00000018);
        uVar7 = FUN_002665da(unaff_r5,0x78,1);
        FUN_0026641e(unaff_r5,6,0,0);
        FUN_002624c2(unaff_r5,uVar7);
        iVar14 = 0;
        iVar8 = *(int *)(*(int *)(unaff_r7 + 0x10) + (int)piStack00000018 * 0x10 + 0xc);
        for (puStack0000002c = *(undefined4 **)(iVar8 + 0x10); puStack0000002c != (undefined4 *)0x0;
            puStack0000002c = (undefined4 *)*puStack0000002c) {
          iVar6 = puStack0000002c[2];
          FUN_0026641e(unaff_r5,7,*(undefined4 *)(iVar6 + 0x14),iVar14 + 2);
          iVar11 = *(int *)(iVar6 + 0x10);
          iVar6 = iVar14;
          for (; iVar14 = iVar6 + 1, iVar11 != 0; iVar11 = *(int *)(iVar11 + 0x14)) {
            FUN_0026641e(unaff_r5,7,*(undefined4 *)(iVar11 + 0x28),iVar6 + 3);
            iVar6 = iVar14;
          }
        }
        if (piVar3[0x13] <= iVar14 + 3) {
          piVar3[0x13] = iVar14 + 4;
        }
        FUN_00266266(unaff_r5,0x6f,2,iVar14);
        FUN_0025c3b8(unaff_r5,(uint)piStack00000018 & 0xff);
        uVar7 = FUN_002665da(unaff_r5,0x49,2);
        FUN_0026877c(unaff_r7,iVar2,
                     *(undefined4 *)(*(int *)(unaff_r7 + 0x10) + (int)piStack00000018 * 0x10));
        FUN_002662da(unaff_r5,0x5e,0,3);
        FUN_00266266(unaff_r5,0xd,2,4);
        FUN_00266266(unaff_r5,0x5b,4,3);
        FUN_0026641e(unaff_r5,0x10,2,1);
        FUN_002624c2(unaff_r5,uVar7);
        puStack0000002c = *(undefined4 **)(iVar8 + 0x10);
        while ((puStack0000002c != (undefined4 *)0x0 && (cVar9 != 'q'))) {
          iVar8 = puStack0000002c[2];
          if (*(int *)(iVar8 + 0x10) != 0) {
            uVar7 = FUN_002665da(unaff_r5,0x78,1);
            FUN_0026641e(unaff_r5,6,0,0);
            FUN_002624c2(unaff_r5,uVar7);
            if (-1 < (int)((uint)*(byte *)(iVar8 + 0x22) << 0x1b)) {
              FUN_0026e7ea(piVar3,iVar8,1,0x27);
            }
            FUN_0026641e(unaff_r5,7,0,2);
            iVar14 = FUN_0026641e(unaff_r5,0x48,1,0);
            FUN_0026641e(unaff_r5,0x14,2,1);
            puVar10 = *(undefined4 **)(iVar8 + 0x10);
            iStack00000034 = 1;
            for (; iStack00000034 = iStack00000034 + 1, puVar10 != (undefined4 *)0x0;
                puVar10 = (undefined4 *)puVar10[5]) {
              FUN_002707d4(piVar3,puVar10,1,3);
              uVar7 = FUN_00266944(unaff_r5,0x34,iStack00000034,0);
              iVar6 = FUN_00266dd0(unaff_r5,0xb,DAT_00282c68 + 0x282c43);
              FUN_00263832(unaff_r5,iVar6 + 1,DAT_00282c6c + 0x282bf4,0xfffffffe);
              FUN_00263832(unaff_r5,iVar6 + 3,DAT_00282c70 + 0x282c04,0xfffffffe);
              FUN_00263832(unaff_r5,iVar6 + 4,*puVar10,0);
              FUN_002624c2(unaff_r5,iVar6 + 9);
              FUN_002624c2(unaff_r5,uVar7);
            }
            FUN_0026641e(unaff_r5,0x5f,1,iVar14 + 1);
            FUN_002624c2(unaff_r5,iVar14);
            puVar10 = *(undefined4 **)(iVar8 + 0x10);
            iStack00000034 = 1;
            for (; iStack00000034 = iStack00000034 + 1, puVar10 != (undefined4 *)0x0;
                puVar10 = (undefined4 *)puVar10[5]) {
              uVar7 = FUN_002665da(unaff_r5,0x78,1);
              FUN_0026641e(unaff_r5,6,0,0);
              FUN_002624c2(unaff_r5,uVar7);
              iVar8 = FUN_00266dd0(unaff_r5,10,DAT_00282f84 + 0x282cab);
              FUN_0025c394(unaff_r5,iVar8 + 1,iStack00000034);
              FUN_0025c3a6(unaff_r5,iVar8 + 1,iVar8 + 4);
              FUN_0025c394(unaff_r5,iVar8 + 3,iStack00000034);
              FUN_0025c3a6(unaff_r5,iVar8 + 3,iVar8 + 2);
              FUN_002624c2(unaff_r5,iVar8 + 4);
              FUN_00263832(unaff_r5,iVar8 + 6,DAT_00282f88 + 0x282ce6,0xfffffffe);
              FUN_00263832(unaff_r5,iVar8 + 7,*puVar10,0);
            }
          }
          puStack0000002c = (undefined4 *)*puStack0000002c;
        }
      }
    }
    iVar2 = FUN_00266dd0(unaff_r5,4,DAT_00282f8c + 0x282d69);
    FUN_0025c3a6(unaff_r5,iVar2,-in_stack_00000058);
    FUN_002624c2(unaff_r5,iVar2 + 1);
    FUN_00263832(unaff_r5,iVar2 + 2,DAT_00282f90 + 0x282d58,0xfffffffe);
    FUN_002830ca();
    return;
  }
  iVar8 = DAT_00282f94 + 0x282d68;
  iVar2 = sqlite3_stricmp(in_stack_00000024);
  if (iVar2 == 0) {
    if (in_stack_00000020 == 0) {
      iVar2 = FUN_00287abc(piVar3);
      if (iVar2 != 0) {
        FUN_00283142();
        return;
      }
      FUN_00263b94(unaff_r5,1);
      FUN_00265916(unaff_r5,0,0,iVar8);
      FUN_0026641e(unaff_r5,0x5e,0,1);
      FUN_00263832(unaff_r5,0xffffffff,
                   *(undefined4 *)
                    (DAT_00282f98 +
                     (uint)*(byte *)(*(int *)(*(int *)(*piVar3 + 0x10) + 0xc) + 0x4d) * 8 + 0x282e12
                    ),0xfffffffe);
      FUN_00281fb2();
    }
    if ((*(ushort *)(*(int *)(*(int *)(unaff_r7 + 0x10) + 0xc) + 0x4e) & 5) == 1) {
      FUN_002830ca();
      return;
    }
    piVar4 = (int *)(DAT_00282fa0 + 0x282e74);
    do {
      if (*piVar4 == 0) {
LAB_00282e1a:
        if (*piVar4 != 0) {
          FUN_002830ca();
          return;
        }
        FUN_00268e48(piVar3,DAT_00282fa4 + 0x282e2c,in_stack_00000020);
        FUN_002830ca();
        return;
      }
      iVar2 = sqlite3_stricmp(in_stack_00000020);
      if (iVar2 == 0) {
        cVar9 = (char)piVar4[1];
        if (cVar9 == '\0') {
          cVar9 = '\x03' - ('\x01' - (*(char *)(DAT_00282f9c + 0x282e3a) == '\0'));
        }
        *(char *)(*(int *)(*(int *)(*piVar3 + 0x10) + 0xc) + 0x4d) = cVar9;
        goto LAB_00282e1a;
      }
      piVar4 = piVar4 + 2;
    } while( true );
  }
  iVar2 = sqlite3_stricmp(in_stack_00000024,DAT_00282fa8 + 0x282e38);
  if (((iVar2 == 0) ||
      (iVar2 = sqlite3_stricmp(in_stack_00000024,DAT_00282fac + 0x282e46), iVar2 == 0)) ||
     (iVar2 = sqlite3_stricmp(in_stack_00000024,DAT_00282fb0 + 0x282e54), iVar2 == 0)) {
    FUN_0025c3f4(unaff_r5,in_stack_0000001c);
    bVar1 = *in_stack_00000024;
    if (bVar1 == 0x53) {
LAB_00282e84:
      iVar2 = 1;
      goto LAB_00282e86;
    }
    if (bVar1 < 0x54) {
      if (bVar1 != 0x46) {
LAB_00282e80:
        iVar2 = 6;
        goto LAB_00282e86;
      }
    }
    else if (bVar1 != 0x66) {
      if (bVar1 == 0x73) goto LAB_00282e84;
      goto LAB_00282e80;
    }
    iVar2 = 0;
LAB_00282e86:
    if ((iVar2 != 0) && (in_stack_00000020 != 0)) {
      iVar8 = FUN_00266dd0(unaff_r5,3,DAT_00282fb4 + 0x282edf);
      FUN_0025c394(unaff_r5,iVar8,in_stack_0000001c);
      uVar7 = FUN_0025b90e(in_stack_00000020);
      FUN_0025c394(unaff_r5,iVar8 + 1,uVar7);
      FUN_0025c394(unaff_r5,iVar8 + 2,in_stack_0000001c);
      FUN_0025c3a6(unaff_r5,iVar8 + 2,iVar2);
      FUN_002830ca();
      return;
    }
    iVar8 = FUN_00266dd0(unaff_r5,3,DAT_00282fb8 + 0x282f2d);
    uVar12 = iVar8 + 1;
    FUN_0025c394(unaff_r5,iVar8,in_stack_0000001c);
    FUN_0025c394(unaff_r5,uVar12,in_stack_0000001c);
    if (uVar12 < *(uint *)(unaff_r5 + 0x1c)) {
      *(int *)(*(int *)(unaff_r5 + 4) + uVar12 * 0x14 + 0xc) = iVar2;
    }
    FUN_00263b94(unaff_r5,1);
    FUN_00265916(unaff_r5,0,0,in_stack_00000024);
    FUN_002830ca();
    return;
  }
  iVar2 = sqlite3_stricmp(in_stack_00000024,DAT_00282fbc + 0x282f2c);
  if (iVar2 == 0) {
    FUN_00263b94(unaff_r5,1);
    piVar3[0x13] = 1;
    FUN_00265916(unaff_r5,0,0,DAT_00282fc0 + 0x282f4c);
    iVar2 = 0;
    while( true ) {
      iVar8 = sqlite3_compileoption_get(iVar2);
      if (iVar8 == 0) break;
      FUN_002662da(unaff_r5,0x5e,0,1);
      FUN_0026641e(unaff_r5,0x10,1,1);
      iVar2 = iVar2 + 1;
    }
    FUN_002830ca();
    return;
  }
  iVar2 = sqlite3_stricmp(in_stack_00000024,DAT_00283170 + 0x282fcc);
  if (iVar2 == 0) {
    if (*unaff_r4 == 0) {
      in_stack_0000001c = (int *)0xa;
    }
    piStack00000018 = (int *)in_stack_00000020;
    if (in_stack_00000020 != 0) {
      iVar2 = sqlite3_stricmp(in_stack_00000020,DAT_00283174 + 0x282fea);
      piStack00000018 = (int *)0x1;
      if (iVar2 != 0) {
        iVar2 = sqlite3_stricmp(in_stack_00000020,DAT_00283178 + 0x282ffc);
        piStack00000018 = (int *)((uint)(iVar2 == 0) * 2);
      }
    }
    iVar2 = FUN_00287abc(piVar3);
    if (iVar2 != 0) {
      FUN_00283142();
      return;
    }
    FUN_00263b94(unaff_r5,3);
    iVar2 = DAT_0028317c;
    piVar3[0x13] = 3;
    FUN_00265916(unaff_r5,0,0,iVar2 + 0x283028);
    FUN_00265916(unaff_r5,1,0,DAT_00283180 + 0x283038);
    FUN_00265916(unaff_r5,2,0,DAT_00283184 + 0x283048);
    FUN_00266266(unaff_r5,0x7d,in_stack_0000001c,piStack00000018);
    FUN_00281fba(unaff_r5,0x10,1,3);
  }
  iVar2 = sqlite3_stricmp(in_stack_00000024,DAT_00283188 + 0x283072);
  if (iVar2 == 0) {
    if (in_stack_00000020 != 0) {
      uVar7 = FUN_0025b90e(in_stack_00000020);
      sqlite3_wal_autocheckpoint(unaff_r7,uVar7);
    }
    iVar2 = 0;
    iVar8 = 0;
    if (*(int *)(unaff_r7 + 0xbc) == DAT_0028318c + 0x28309c) {
      iVar2 = *(int *)(unaff_r7 + 0xc0);
      iVar8 = iVar2 >> 0x1f;
    }
    FUN_00281f08(piVar3,DAT_00283190 + 0x2830ae,iVar2,iVar8);
  }
  iVar2 = sqlite3_stricmp(in_stack_00000024,DAT_00283194 + 0x2830ba);
  if (iVar2 == 0) {
    sqlite3_db_release_memory(unaff_r7);
    FUN_002830ca();
    return;
  }
  if (*(char *)(unaff_r7 + 0x34) == '\0') goto code_r0x00283142;
  iVar2 = *(int *)(unaff_r7 + 0x18);
  iVar14 = *(int *)(in_stack_00000030 + 4);
  cVar9 = *(char *)(in_stack_00000030 + 9);
  piVar3 = *(int **)(iVar14 + 4);
  FUN_00261f68(iVar14);
  iVar8 = *piVar3;
  cVar15 = cVar9;
  if (cVar9 != '\x01') {
    cVar15 = *(char *)(iVar8 + 0xc) != '\0';
  }
  *(char *)(iVar8 + 7) = cVar15;
  bVar16 = false;
  if (cVar9 == '\x03') {
    bVar16 = *(char *)(iVar8 + 0xc) == '\0';
  }
  *(bool *)(iVar8 + 8) = bVar16;
  if (cVar15 == '\0') {
    if (iVar2 << 10 < 0) {
      uVar13 = 3;
      goto LAB_0028311c;
    }
    uVar13 = 2;
    *(undefined1 *)(iVar8 + 0xb) = 2;
    if (iVar2 << 9 < 0) {
      uVar13 = 3;
    }
  }
  else {
    uVar13 = 0;
LAB_0028311c:
    *(undefined1 *)(iVar8 + 0xb) = uVar13;
  }
  *(undefined1 *)(iVar8 + 9) = uVar13;
  *(byte *)(iVar8 + 10) = *(byte *)(iVar8 + 0xb);
  if (bVar16 != false) {
    *(byte *)(iVar8 + 10) = *(byte *)(iVar8 + 0xb) | 0x20;
  }
  FUN_00262002(iVar14);
code_r0x00283142:
  FUN_0025fbda(unaff_r7,in_stack_00000024);
  FUN_0025fbda(unaff_r7,in_stack_00000020);
  FUN_0028316a();
  return;
}


