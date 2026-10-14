/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00281fb2 FUN_00281fb2 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Function: __gnu_thumb1_case_uqi replaced with injection: switch8_r0 */
/* WARNING (jumptable): Removing unreachable block (ram,0x0028270e) */
/* WARNING (jumptable): Removing unreachable block (ram,0x00282736) */
/* WARNING: Removing unreachable block (ram,0x0028270e) */
/* WARNING: Removing unreachable block (ram,0x00282736) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00281fb2(void)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  int iVar6;
  undefined4 uVar7;
  int *extraout_r1;
  undefined4 uVar8;
  undefined4 *puVar9;
  uint uVar10;
  int iVar11;
  uint *puVar12;
  int *piVar13;
  int iVar14;
  undefined1 uVar15;
  byte *unaff_r5;
  byte *pbVar16;
  int iVar17;
  int *unaff_r6;
  int *unaff_r7;
  char cVar18;
  bool bVar19;
  byte *pbStack00000018;
  int *piStack0000001c;
  byte *in_stack_00000020;
  byte *in_stack_00000024;
  int in_stack_00000028;
  undefined4 *puStack0000002c;
  int in_stack_00000030;
  int iStack00000034;
  int in_stack_00000058;
  
code_r0x00281fb2:
  uVar7 = 0x10;
  uVar8 = 1;
  pbVar16 = unaff_r5;
LAB_00281fb8:
  FUN_0026641e(unaff_r5,uVar7,uVar8,uVar8);
  FUN_002830ca();
  if ((*in_stack_00000020 != 0) &&
     ((iVar3 = (**(code **)(*unaff_r7 + 0x20))(*unaff_r7,in_stack_00000020,1,&stack0x00000058),
      iVar3 != 0 || (in_stack_00000058 == 0)))) {
    FUN_00268e48(unaff_r6,DAT_00282200 + 0x281fe6);
    FUN_00283142();
  }
  if (*(byte *)((int)unaff_r7 + 0x35) < 2) {
    FUN_0027c994(unaff_r6);
  }
  puVar12 = *(uint **)(DAT_00282204 + 0x282002);
  sqlite3_free(*puVar12);
  uVar10 = (uint)*in_stack_00000020;
  if (uVar10 != 0) {
    uVar4 = sqlite3_mprintf(DAT_00282208 + 0x282018,in_stack_00000020);
    *puVar12 = uVar4;
    FUN_002830ca();
  }
  *puVar12 = uVar10;
  FUN_002830ca();
  unaff_r5 = pbVar16;
LAB_00282026:
  iVar11 = DAT_0028220c + 0x28202e;
  iVar3 = sqlite3_stricmp(in_stack_00000024,iVar11);
  if (iVar3 == 0) {
    iVar3 = FUN_00287abc(unaff_r6);
    if (iVar3 != 0) {
      FUN_00283142();
    }
    if (in_stack_00000020 == (byte *)0x0) {
      iVar3 = *(byte *)(in_stack_00000030 + 9) - 1;
      FUN_00281f08(unaff_r6,iVar11,iVar3,iVar3 >> 0x1f);
      return;
    }
    if ((char)unaff_r7[0xd] == '\0') {
      FUN_00268e48(unaff_r6,DAT_00282210 + 0x28206c);
      FUN_002830ca();
    }
    bVar1 = *(byte *)(DAT_00282214 + 0x2820bc + (uint)*in_stack_00000020);
    if ((bVar1 & 4) == 0) {
      cVar2 = FUN_002629bc(in_stack_00000020,bVar1 & 4,1);
    }
    else {
      cVar2 = FUN_0025b90e();
    }
    *(char *)(in_stack_00000030 + 9) = cVar2 + '\x01';
    FUN_002830ca();
  }
  puVar9 = (undefined4 *)(DAT_00282218 + 0x282186);
  pbStack00000018 = (byte *)(DAT_00282218 + 0x282116);
  do {
    iVar3 = sqlite3_stricmp(in_stack_00000024,*(undefined4 *)pbStack00000018);
    if (iVar3 == 0) goto code_r0x002820bc;
    pbStack00000018 = (byte *)((int)pbStack00000018 + 8);
  } while (pbStack00000018 != (byte *)puVar9);
  FUN_00283154();
  if (in_stack_00000020 == (byte *)0x0) {
    FUN_002822e0();
    return;
  }
  pbStack00000018 = (byte *)FUN_00287abc(unaff_r6);
  if (pbStack00000018 != (byte *)0x0) {
    FUN_00283142();
  }
  iVar3 = FUN_0026460e(unaff_r7,in_stack_00000020,in_stack_00000028);
  if (iVar3 == 0) {
    FUN_002830ca();
  }
  FUN_00263b94(unaff_r5,6);
  unaff_r6[0x13] = 6;
  FUN_00265916(unaff_r5,pbStack00000018,pbStack00000018,DAT_00282220 + 0x28216a);
  FUN_00265916(unaff_r5,1,pbStack00000018,DAT_00282224 + 0x282178);
  FUN_00265916(unaff_r5,2,pbStack00000018,DAT_00282228 + 0x28218a);
  FUN_00265916(unaff_r5,3,pbStack00000018,DAT_0028222c + 0x28219c);
  FUN_00265916(unaff_r5,4,pbStack00000018,DAT_00282230 + 0x2821ac);
  FUN_00265916(unaff_r5,5,pbStack00000018,DAT_00282234 + 0x2821be);
  FUN_0026d134(unaff_r6,iVar3);
  piVar13 = *(int **)(iVar3 + 0xc);
  piStack0000001c = (int *)pbStack00000018;
  for (; (int)pbStack00000018 < *(int *)(iVar3 + 8);
      pbStack00000018 = (byte *)((int)pbStack00000018 + 1)) {
    unaff_r6 = (int *)(uint)*(byte *)((int)piVar13 + 0x17);
    if (unaff_r6 == (int *)0x0) {
      FUN_0026641e(unaff_r5,7,(int)pbStack00000018 - (int)piStack0000001c,1);
      FUN_002662da(unaff_r5,0x5e,0,2);
      unaff_r6 = (int *)0x0;
      FUN_002662da(unaff_r5,0x5e,0,3);
      FUN_0026641e(unaff_r5,7,(char)piVar13[5] != '\0',4);
      if (piVar13[2] == 0) {
        FUN_0026641e(unaff_r5,10,0,5);
      }
      else {
        FUN_002662da(unaff_r5,0x5e,0,5);
      }
      FUN_0026641e(unaff_r5,7,*(undefined1 *)((int)piVar13 + 0x15),6);
      FUN_0026641e(unaff_r5,0x10,1,6);
    }
    else {
      piStack0000001c = (int *)((int)piStack0000001c + 1);
    }
    piVar13 = piVar13 + 6;
  }
  FUN_002830ca();
  iVar11 = sqlite3_stricmp(in_stack_00000024,iRam002825d8 + 0x2822e8);
  if ((iVar11 == 0) && (in_stack_00000020 != (byte *)0x0)) {
    piVar13 = (int *)FUN_00287abc(unaff_r6);
    if (piVar13 != (int *)0x0) {
      FUN_00283142();
    }
    piStack0000001c = (int *)FUN_00264662(unaff_r7,in_stack_00000020,iVar3);
    if (piStack0000001c == (int *)0x0) {
      FUN_002830ca();
    }
    FUN_00263b94(unaff_r5,3);
    unaff_r6[0x13] = 3;
    FUN_00265916(unaff_r5,piVar13,piVar13,iRam002825dc + 0x282330);
    FUN_00265916(unaff_r5,1,piVar13,iRam002825e0 + 0x282340);
    FUN_00265916(unaff_r5,2,piVar13,iRam002825e4 + 0x282350);
    for (unaff_r6 = piVar13; (int)unaff_r6 < piStack0000001c[9];
        unaff_r6 = (int *)((int)unaff_r6 + 1)) {
      iVar11 = *(int *)((int)unaff_r6 * 4 + piStack0000001c[1]);
      FUN_0026641e(unaff_r5,7,unaff_r6,1);
      FUN_0026641e(unaff_r5,7,iVar11,2);
      piVar13 = (int *)(iVar11 * 0x18);
      FUN_002662da(unaff_r5,0x5e,0,3);
      FUN_0026641e(unaff_r5,0x10,1,3);
    }
    FUN_002830ca();
  }
  iVar11 = sqlite3_stricmp(in_stack_00000024,iRam002825e8 + 0x2823b8);
  piVar5 = unaff_r6;
  if ((iVar11 == 0) && (in_stack_00000020 != (byte *)0x0)) {
    unaff_r5 = (byte *)FUN_00287abc(unaff_r6);
    if (unaff_r5 != (byte *)0x0) {
      FUN_00283142();
    }
    iVar11 = FUN_0026460e(unaff_r7,in_stack_00000020,iVar3);
    if (iVar11 == 0) {
      FUN_002830ca();
    }
    piVar5 = (int *)FUN_002662b8(unaff_r6);
    iVar11 = *(int *)(iVar11 + 0x10);
    piVar13 = piVar5;
    if (iVar11 == 0) {
      piVar13 = (int *)FUN_002830ca();
    }
    FUN_00263b94(piVar13,3);
    unaff_r6[0x13] = 3;
    FUN_00265916(piVar5,unaff_r5,unaff_r5,iRam002825ec + 0x28240a);
    FUN_00265916(piVar5,1,unaff_r5,iRam002825f0 + 0x28241a);
    FUN_00265916(piVar5,2,unaff_r5,iRam002825f4 + 0x28242a);
    do {
      FUN_0026641e(piVar5,7,unaff_r5,1);
      FUN_002662da(piVar5,0x5e,0,2);
      FUN_0026641e(piVar5,7,*(char *)(iVar11 + 0x2c) != '\0',3);
      FUN_0026641e(piVar5,0x10,1,3);
      iVar11 = *(int *)(iVar11 + 0x14);
      unaff_r5 = unaff_r5 + 1;
    } while (iVar11 != 0);
    FUN_002830ca();
    piVar13 = (int *)0x0;
    piStack0000001c = piVar5;
  }
  iVar11 = sqlite3_stricmp(in_stack_00000024,iRam002825f8 + 0x282486);
  if (iVar11 == 0) {
    piVar13 = (int *)FUN_00287abc(piVar5);
    if (piVar13 != (int *)0x0) {
      FUN_00283142();
    }
    FUN_00263b94(unaff_r5,3);
    piVar5[0x13] = 3;
    FUN_00265916(unaff_r5,piVar13,piVar13,iRam002825fc + 0x2824b0);
    FUN_00265916(unaff_r5,1,piVar13,iRam00282600 + 0x2824c0);
    piVar5 = (int *)(iRam00282608 + 0x2824d8);
    FUN_00265916(unaff_r5,2,piVar13,iRam00282604 + 0x2824d0);
    for (; (int)piVar13 < unaff_r7[5]; piVar13 = (int *)((int)piVar13 + 1)) {
      piStack0000001c = (int *)((int)piVar13 * 0x10);
      if (*(int *)((int)piStack0000001c + unaff_r7[4] + 4) != 0) {
        FUN_0026641e(unaff_r5,7,piVar13,1);
        FUN_002662da(unaff_r5,0x5e,0,2);
        FUN_002662da(unaff_r5,0x5e,0,3);
        FUN_0026641e(unaff_r5,0x10,1,3);
      }
    }
    FUN_002830ca();
  }
  iVar11 = sqlite3_stricmp(in_stack_00000024,iRam0028260c + 0x28255e);
  if (iVar11 == 0) {
    FUN_00263b94(unaff_r5,2);
    piVar5[0x13] = 2;
    FUN_00265916(unaff_r5,0,0,iRam00282610 + 0x28257e);
    FUN_00265916(unaff_r5,1,0,iRam00282614 + 0x28258c);
    piVar13 = (int *)0x0;
    for (puVar9 = (undefined4 *)unaff_r7[0x69]; puVar9 != (undefined4 *)0x0;
        puVar9 = (undefined4 *)*puVar9) {
      piStack0000001c = (int *)((int)piVar13 + 1);
      FUN_0026641e(unaff_r5,7,piVar13,1);
      FUN_002662da(unaff_r5,0x5e,0,2);
      FUN_0026641e(unaff_r5,0x10,1,2);
      piVar13 = piStack0000001c;
    }
    FUN_002830ca();
    unaff_r7 = (int *)&DAT_0000002a;
    piVar5 = (int *)&DAT_00000045;
    _DAT_00000074 = 0x74;
    _DAT_00000078 = 0x45;
    _DAT_0000007c = 0x2a;
    unaff_r5 = (byte *)0x26;
    piVar13 = extraout_r1;
  }
  iVar11 = sqlite3_stricmp(in_stack_00000024,iRam00282920 + 0x282620);
  if ((iVar11 == 0) && (in_stack_00000020 != (byte *)0x0)) {
    iStack00000034 = FUN_00287abc(piVar5);
    if (iStack00000034 != 0) {
      FUN_00283142();
    }
    iVar3 = FUN_0026460e(unaff_r7,in_stack_00000020,iVar3);
    if (iVar3 == 0) {
      FUN_002830ca();
    }
    uVar8 = FUN_002662b8(piVar5);
    pbStack00000018 = *(byte **)(iVar3 + 0x24);
    uVar7 = uVar8;
    if (pbStack00000018 == (byte *)0x0) {
      uVar7 = FUN_002830ca();
    }
    FUN_00263b94(uVar7,8);
    piVar5[0x13] = 8;
    FUN_00265916(uVar8,iStack00000034,iStack00000034,iRam00282924 + 0x28267c);
    FUN_00265916(uVar8,1,iStack00000034,iRam00282928 + 0x28268c);
    FUN_00265916(uVar8,2,iStack00000034,iRam0028292c + 0x28269c);
    FUN_00265916(uVar8,3,iStack00000034,iRam00282930 + 0x2826ac);
    FUN_00265916(uVar8,4,iStack00000034,iRam00282934 + 0x2826bc);
    FUN_00265916(uVar8,5,iStack00000034,iRam00282938 + 0x2826cc);
    FUN_00265916(uVar8,6,iStack00000034,iRam0028293c + 0x2826dc);
    FUN_00265916(uVar8,7,iStack00000034,iRam00282940 + 0x2826ec);
    do {
      iVar3 = (int)pbStack00000018;
      for (in_stack_00000028 = 0; in_stack_00000028 < *(int *)((int)pbStack00000018 + 0x14);
          in_stack_00000028 = in_stack_00000028 + 1) {
        iVar11 = *(int *)(iVar3 + 0x28);
        switch(*(undefined1 *)((int)pbStack00000018 + 0x19)) {
        case 6:
          break;
        case 7:
          break;
        case 8:
          break;
        case 9:
        }
        switch(*(undefined1 *)((int)pbStack00000018 + 0x1a)) {
        case 6:
          break;
        case 7:
          break;
        case 8:
          break;
        case 9:
        }
        FUN_0026641e(uVar8,7,iStack00000034,1);
        FUN_0026641e(uVar8,7,in_stack_00000028,2);
        FUN_002662da(uVar8,0x5e,0,3);
        FUN_002662da(uVar8,0x5e,0,4);
        uVar7 = 10;
        if (iVar11 != 0) {
          uVar7 = 0x5e;
        }
        FUN_002662da(uVar8,uVar7,0,5);
        FUN_002662da(uVar8,0x5e,0,6);
        FUN_002662da(uVar8,0x5e,0,7);
        FUN_002662da(uVar8,0x5e,0,8);
        FUN_0026641e(uVar8,0x10,1,8);
        iVar3 = iVar3 + 8;
      }
      pbStack00000018 = *(byte **)((int)pbStack00000018 + 4);
      iStack00000034 = iStack00000034 + 1;
      if (pbStack00000018 == (byte *)0x0) {
        FUN_002830c8();
      }
    } while( true );
  }
  iVar3 = sqlite3_stricmp(in_stack_00000024,DAT_00282970 + 0x282840);
  if (iVar3 == 0) {
    if (in_stack_00000020 == (byte *)0x0) {
      FUN_002830ca();
    }
    iVar3 = FUN_00262a1c(in_stack_00000020);
    iVar11 = DAT_0028297c + 0x282876;
    FUN_0026affc(unaff_r7,iVar11,2,1);
    FUN_0026affc(unaff_r7,iVar11,3,1);
    iVar11 = DAT_00282988 + 0x2828b2;
    FUN_0026affc(unaff_r7,iVar11,2,1);
    uVar7 = FUN_0025b154(iVar11);
    iVar11 = FUN_00262898(unaff_r7,iVar11,uVar7,2);
    if (iVar11 != 0) {
      *(undefined1 *)(iVar11 + 3) = 3;
    }
    uVar15 = 1;
    if (iVar3 != 0) {
      uVar15 = 3;
    }
    iVar3 = DAT_0028298c + 0x2828f8;
    uVar7 = FUN_0025b154(iVar3);
    iVar3 = FUN_00262898(unaff_r7,iVar3,uVar7,2);
    if (iVar3 == 0) {
      iVar3 = FUN_002830ca();
    }
    *(undefined1 *)(iVar3 + 3) = uVar15;
    FUN_002830ca();
    software_interrupt(0xb8);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  iVar3 = sqlite3_stricmp(in_stack_00000024,DAT_00282c54 + 0x282998);
  if ((iVar3 == 0) ||
     (iVar3 = sqlite3_stricmp(in_stack_00000024,DAT_00282c58 + 0x2829a6), iVar3 == 0)) {
    cVar2 = *(char *)(DAT_00282c5c + 0x2829f8 + (uint)*in_stack_00000024);
    if (*piVar13 == 0) {
      piStack0000001c = (int *)0xffffffff;
    }
    iVar3 = FUN_00287abc(piVar5);
    if (iVar3 == 0) {
      piVar5[0x13] = 6;
      FUN_00263b94(unaff_r5,1);
      FUN_00265916(unaff_r5,0,0,DAT_00282c60 + 0x2829ea);
      in_stack_00000058 = 100;
      if ((in_stack_00000020 != (byte *)0x0) &&
         (FUN_0025b880(in_stack_00000020,&stack0x00000058), in_stack_00000058 < 1)) {
        in_stack_00000058 = 100;
      }
      FUN_0026641e(unaff_r5,7,in_stack_00000058,1);
      iVar3 = DAT_00282c64 + 0x282a20;
      for (pbStack00000018 = (byte *)0x0; (int)pbStack00000018 < unaff_r7[5];
          pbStack00000018 = (byte *)((int)pbStack00000018 + 1)) {
        if ((pbStack00000018 == (byte *)piStack0000001c) || ((int)piStack0000001c < 0)) {
          FUN_00275ec4(piVar5,pbStack00000018);
          uVar7 = FUN_002665da(unaff_r5,0x78,1);
          FUN_0026641e(unaff_r5,6,0,0);
          FUN_002624c2(unaff_r5,uVar7);
          iVar17 = 0;
          iVar11 = *(int *)(unaff_r7[4] + (int)pbStack00000018 * 0x10 + 0xc);
          for (puStack0000002c = *(undefined4 **)(iVar11 + 0x10);
              puStack0000002c != (undefined4 *)0x0; puStack0000002c = (undefined4 *)*puStack0000002c
              ) {
            iVar6 = puStack0000002c[2];
            FUN_0026641e(unaff_r5,7,*(undefined4 *)(iVar6 + 0x14),iVar17 + 2);
            iVar14 = *(int *)(iVar6 + 0x10);
            iVar6 = iVar17;
            for (; iVar17 = iVar6 + 1, iVar14 != 0; iVar14 = *(int *)(iVar14 + 0x14)) {
              FUN_0026641e(unaff_r5,7,*(undefined4 *)(iVar14 + 0x28),iVar6 + 3);
              iVar6 = iVar17;
            }
          }
          if (piVar5[0x13] <= iVar17 + 3) {
            piVar5[0x13] = iVar17 + 4;
          }
          FUN_00266266(unaff_r5,0x6f,2,iVar17);
          FUN_0025c3b8(unaff_r5,(uint)pbStack00000018 & 0xff);
          uVar7 = FUN_002665da(unaff_r5,0x49,2);
          FUN_0026877c(unaff_r7,iVar3,*(undefined4 *)(unaff_r7[4] + (int)pbStack00000018 * 0x10));
          FUN_002662da(unaff_r5,0x5e,0,3);
          FUN_00266266(unaff_r5,0xd,2,4);
          FUN_00266266(unaff_r5,0x5b,4,3);
          FUN_0026641e(unaff_r5,0x10,2,1);
          FUN_002624c2(unaff_r5,uVar7);
          puStack0000002c = *(undefined4 **)(iVar11 + 0x10);
          while ((puStack0000002c != (undefined4 *)0x0 && (cVar2 != 'q'))) {
            iVar11 = puStack0000002c[2];
            if (*(int *)(iVar11 + 0x10) != 0) {
              uVar7 = FUN_002665da(unaff_r5,0x78,1);
              FUN_0026641e(unaff_r5,6,0,0);
              FUN_002624c2(unaff_r5,uVar7);
              if (-1 < (int)((uint)*(byte *)(iVar11 + 0x22) << 0x1b)) {
                FUN_0026e7ea(piVar5,iVar11,1,0x27);
              }
              FUN_0026641e(unaff_r5,7,0,2);
              iVar17 = FUN_0026641e(unaff_r5,0x48,1,0);
              FUN_0026641e(unaff_r5,0x14,2,1);
              puVar9 = *(undefined4 **)(iVar11 + 0x10);
              iStack00000034 = 1;
              for (; iStack00000034 = iStack00000034 + 1, puVar9 != (undefined4 *)0x0;
                  puVar9 = (undefined4 *)puVar9[5]) {
                FUN_002707d4(piVar5,puVar9,1,3);
                uVar7 = FUN_00266944(unaff_r5,0x34,iStack00000034,0);
                iVar6 = FUN_00266dd0(unaff_r5,0xb,DAT_00282c68 + 0x282c43);
                FUN_00263832(unaff_r5,iVar6 + 1,DAT_00282c6c + 0x282bf4,0xfffffffe);
                FUN_00263832(unaff_r5,iVar6 + 3,DAT_00282c70 + 0x282c04,0xfffffffe);
                FUN_00263832(unaff_r5,iVar6 + 4,*puVar9,0);
                FUN_002624c2(unaff_r5,iVar6 + 9);
                FUN_002624c2(unaff_r5,uVar7);
              }
              FUN_0026641e(unaff_r5,0x5f,1,iVar17 + 1);
              FUN_002624c2(unaff_r5,iVar17);
              puVar9 = *(undefined4 **)(iVar11 + 0x10);
              iStack00000034 = 1;
              for (; iStack00000034 = iStack00000034 + 1, puVar9 != (undefined4 *)0x0;
                  puVar9 = (undefined4 *)puVar9[5]) {
                uVar7 = FUN_002665da(unaff_r5,0x78,1);
                FUN_0026641e(unaff_r5,6,0,0);
                FUN_002624c2(unaff_r5,uVar7);
                iVar11 = FUN_00266dd0(unaff_r5,10,DAT_00282f84 + 0x282cab);
                FUN_0025c394(unaff_r5,iVar11 + 1,iStack00000034);
                FUN_0025c3a6(unaff_r5,iVar11 + 1,iVar11 + 4);
                FUN_0025c394(unaff_r5,iVar11 + 3,iStack00000034);
                FUN_0025c3a6(unaff_r5,iVar11 + 3,iVar11 + 2);
                FUN_002624c2(unaff_r5,iVar11 + 4);
                FUN_00263832(unaff_r5,iVar11 + 6,DAT_00282f88 + 0x282ce6,0xfffffffe);
                FUN_00263832(unaff_r5,iVar11 + 7,*puVar9,0);
              }
            }
            puStack0000002c = (undefined4 *)*puStack0000002c;
          }
        }
      }
      iVar3 = FUN_00266dd0(unaff_r5,4,DAT_00282f8c + 0x282d69);
      FUN_0025c3a6(unaff_r5,iVar3,-in_stack_00000058);
      FUN_002624c2(unaff_r5,iVar3 + 1);
      FUN_00263832(unaff_r5,iVar3 + 2,DAT_00282f90 + 0x282d58,0xfffffffe);
      FUN_002830ca();
      return;
    }
    FUN_00283142();
    return;
  }
  iVar11 = DAT_00282f94 + 0x282d68;
  iVar3 = sqlite3_stricmp(in_stack_00000024);
  if (iVar3 != 0) {
    iVar3 = sqlite3_stricmp(in_stack_00000024,DAT_00282fa8 + 0x282e38);
    if (((iVar3 == 0) ||
        (iVar3 = sqlite3_stricmp(in_stack_00000024,DAT_00282fac + 0x282e46), iVar3 == 0)) ||
       (iVar3 = sqlite3_stricmp(in_stack_00000024,DAT_00282fb0 + 0x282e54), iVar3 == 0)) {
      FUN_0025c3f4(unaff_r5,piStack0000001c);
      bVar1 = *in_stack_00000024;
      if (bVar1 == 0x53) {
LAB_00282e84:
        iVar3 = 1;
        goto LAB_00282e86;
      }
      if (bVar1 < 0x54) {
        if (bVar1 != 0x46) {
LAB_00282e80:
          iVar3 = 6;
          goto LAB_00282e86;
        }
      }
      else if (bVar1 != 0x66) {
        if (bVar1 == 0x73) goto LAB_00282e84;
        goto LAB_00282e80;
      }
      iVar3 = 0;
LAB_00282e86:
      if ((iVar3 != 0) && (in_stack_00000020 != (byte *)0x0)) {
        iVar11 = FUN_00266dd0(unaff_r5,3,DAT_00282fb4 + 0x282edf);
        FUN_0025c394(unaff_r5,iVar11,piStack0000001c);
        uVar7 = FUN_0025b90e(in_stack_00000020);
        FUN_0025c394(unaff_r5,iVar11 + 1,uVar7);
        FUN_0025c394(unaff_r5,iVar11 + 2,piStack0000001c);
        FUN_0025c3a6(unaff_r5,iVar11 + 2,iVar3);
        FUN_002830ca();
        return;
      }
      iVar11 = FUN_00266dd0(unaff_r5,3,DAT_00282fb8 + 0x282f2d);
      uVar10 = iVar11 + 1;
      FUN_0025c394(unaff_r5,iVar11,piStack0000001c);
      FUN_0025c394(unaff_r5,uVar10,piStack0000001c);
      if (uVar10 < *(uint *)(unaff_r5 + 0x1c)) {
        *(int *)(*(int *)(unaff_r5 + 4) + uVar10 * 0x14 + 0xc) = iVar3;
      }
      FUN_00263b94(unaff_r5,1);
      FUN_00265916(unaff_r5,0,0,in_stack_00000024);
      FUN_002830ca();
      return;
    }
    iVar3 = sqlite3_stricmp(in_stack_00000024,DAT_00282fbc + 0x282f2c);
    if (iVar3 == 0) {
      FUN_00263b94(unaff_r5,1);
      piVar5[0x13] = 1;
      FUN_00265916(unaff_r5,0,0,DAT_00282fc0 + 0x282f4c);
      iVar3 = 0;
      while( true ) {
        iVar11 = sqlite3_compileoption_get(iVar3);
        if (iVar11 == 0) break;
        FUN_002662da(unaff_r5,0x5e,0,1);
        FUN_0026641e(unaff_r5,0x10,1,1);
        iVar3 = iVar3 + 1;
      }
      FUN_002830ca();
      return;
    }
    iVar3 = sqlite3_stricmp(in_stack_00000024,DAT_00283170 + 0x282fcc);
    if (iVar3 == 0) {
      if (*piVar13 == 0) {
        piStack0000001c = (int *)0xa;
      }
      pbStack00000018 = in_stack_00000020;
      if (in_stack_00000020 != (byte *)0x0) {
        iVar3 = sqlite3_stricmp(in_stack_00000020,DAT_00283174 + 0x282fea);
        pbStack00000018 = (byte *)0x1;
        if (iVar3 != 0) {
          iVar3 = sqlite3_stricmp(in_stack_00000020,DAT_00283178 + 0x282ffc);
          pbStack00000018 = (byte *)((uint)(iVar3 == 0) * 2);
        }
      }
      iVar3 = FUN_00287abc(piVar5);
      if (iVar3 != 0) {
        FUN_00283142();
        return;
      }
      FUN_00263b94(unaff_r5,3);
      iVar3 = DAT_0028317c;
      piVar5[0x13] = 3;
      FUN_00265916(unaff_r5,0,0,iVar3 + 0x283028);
      FUN_00265916(unaff_r5,1,0,DAT_00283180 + 0x283038);
      FUN_00265916(unaff_r5,2,0,DAT_00283184 + 0x283048);
      FUN_00266266(unaff_r5,0x7d,piStack0000001c,pbStack00000018);
      FUN_00281fba(unaff_r5,0x10,1,3);
    }
    iVar3 = sqlite3_stricmp(in_stack_00000024,DAT_00283188 + 0x283072);
    if (iVar3 == 0) {
      if (in_stack_00000020 != (byte *)0x0) {
        uVar7 = FUN_0025b90e(in_stack_00000020);
        sqlite3_wal_autocheckpoint(unaff_r7,uVar7);
      }
      iVar3 = 0;
      iVar11 = 0;
      if (unaff_r7[0x2f] == DAT_0028318c + 0x28309c) {
        iVar3 = unaff_r7[0x30];
        iVar11 = iVar3 >> 0x1f;
      }
      FUN_00281f08(piVar5,DAT_00283190 + 0x2830ae,iVar3,iVar11);
    }
    iVar3 = sqlite3_stricmp(in_stack_00000024,DAT_00283194 + 0x2830ba);
    if (iVar3 == 0) {
      sqlite3_db_release_memory(unaff_r7);
      FUN_002830ca();
      return;
    }
    if ((char)unaff_r7[0xd] == '\0') goto code_r0x00283142;
    iVar3 = unaff_r7[6];
    iVar17 = *(int *)(in_stack_00000030 + 4);
    cVar2 = *(char *)(in_stack_00000030 + 9);
    piVar13 = *(int **)(iVar17 + 4);
    FUN_00261f68(iVar17);
    iVar11 = *piVar13;
    cVar18 = cVar2;
    if (cVar2 != '\x01') {
      cVar18 = *(char *)(iVar11 + 0xc) != '\0';
    }
    *(char *)(iVar11 + 7) = cVar18;
    bVar19 = false;
    if (cVar2 == '\x03') {
      bVar19 = *(char *)(iVar11 + 0xc) == '\0';
    }
    *(bool *)(iVar11 + 8) = bVar19;
    if (cVar18 == '\0') {
      if (iVar3 << 10 < 0) {
        uVar15 = 3;
        goto LAB_0028311c;
      }
      uVar15 = 2;
      *(undefined1 *)(iVar11 + 0xb) = 2;
      if (iVar3 << 9 < 0) {
        uVar15 = 3;
      }
    }
    else {
      uVar15 = 0;
LAB_0028311c:
      *(undefined1 *)(iVar11 + 0xb) = uVar15;
    }
    *(undefined1 *)(iVar11 + 9) = uVar15;
    *(byte *)(iVar11 + 10) = *(byte *)(iVar11 + 0xb);
    if (bVar19 != false) {
      *(byte *)(iVar11 + 10) = *(byte *)(iVar11 + 0xb) | 0x20;
    }
    FUN_00262002(iVar17);
code_r0x00283142:
    FUN_0025fbda(unaff_r7,in_stack_00000024);
    FUN_0025fbda(unaff_r7,in_stack_00000020);
    FUN_0028316a();
    return;
  }
  if (in_stack_00000020 == (byte *)0x0) {
    iVar3 = FUN_00287abc(piVar5);
    if (iVar3 != 0) {
      FUN_00283142();
      return;
    }
    FUN_00263b94(unaff_r5,1);
    FUN_00265916(unaff_r5,0,0,iVar11);
    FUN_0026641e(unaff_r5,0x5e,0,1);
    FUN_00263832(unaff_r5,0xffffffff,
                 *(undefined4 *)
                  (DAT_00282f98 +
                   (uint)*(byte *)(*(int *)(*(int *)(*piVar5 + 0x10) + 0xc) + 0x4d) * 8 + 0x282e12),
                 0xfffffffe);
    FUN_00281fb2();
  }
  if ((*(ushort *)(*(int *)(unaff_r7[4] + 0xc) + 0x4e) & 5) == 1) {
    FUN_002830ca();
    return;
  }
  piVar13 = (int *)(DAT_00282fa0 + 0x282e74);
  do {
    if (*piVar13 == 0) {
LAB_00282e1a:
      if (*piVar13 == 0) {
        FUN_00268e48(piVar5,DAT_00282fa4 + 0x282e2c,in_stack_00000020);
        FUN_002830ca();
        return;
      }
      FUN_002830ca();
      return;
    }
    iVar3 = sqlite3_stricmp(in_stack_00000020);
    if (iVar3 == 0) {
      cVar2 = (char)piVar13[1];
      if (cVar2 == '\0') {
        cVar2 = '\x03' - ('\x01' - (*(char *)(DAT_00282f9c + 0x282e3a) == '\0'));
      }
      *(char *)(*(int *)(*(int *)(*piVar5 + 0x10) + 0xc) + 0x4d) = cVar2;
      goto LAB_00282e1a;
    }
    piVar13 = piVar13 + 2;
  } while( true );
code_r0x002820bc:
  iVar3 = *unaff_r6;
  unaff_r5 = (byte *)FUN_002662b8(unaff_r6);
  if (unaff_r5 == (byte *)0x0) {
    FUN_002830ca();
  }
  pbVar16 = *(byte **)((int)pbStack00000018 + 4);
  if (in_stack_00000020 != (byte *)0x0) goto LAB_002820e8;
  FUN_0026656e(unaff_r6,*(undefined4 *)pbStack00000018,
               ((uint)pbVar16 & *(uint *)(iVar3 + 0x18)) != 0,0);
  FUN_002830ca();
  uVar10 = bRam00000000 - 0x30;
  if (2 < (uVar10 & 0xff)) {
    uVar10 = 1;
    iVar3 = sqlite3_stricmp(0,DAT_002821f0 + 0x281f26);
    if (iVar3 != 0) {
      iVar3 = sqlite3_stricmp(0,DAT_002821f4 + 0x281f34);
      uVar10 = (uint)(iVar3 == 0) * 2;
    }
  }
  unaff_r5 = (byte *)(*unaff_r6 + 0x35);
  if (*unaff_r5 == uVar10) {
    FUN_002830ca();
  }
  iVar3 = FUN_0027c994(unaff_r6);
  if (iVar3 != 0) {
    FUN_002830ca();
  }
  *unaff_r5 = (byte)uVar10;
  FUN_002830ca();
  iVar11 = DAT_002821f8 + 0x281f66;
  iVar3 = sqlite3_stricmp(in_stack_00000024);
  if (iVar3 == 0) {
    if (**(int **)(DAT_002821fc + 0x281f7a) == 0) {
      FUN_002830ca();
    }
    FUN_00263b94(unaff_r5,1);
    FUN_00265916(unaff_r5,0,0,iVar11);
    FUN_002662da(unaff_r5,0x5e,0,1);
    goto code_r0x00281fb2;
  }
  goto LAB_00282026;
LAB_002820e8:
  if (*(char *)(iVar3 + 0x34) == '\0') {
    pbVar16 = (byte *)((uint)pbVar16 & DAT_0028221c);
  }
  iVar11 = FUN_00262a1c(in_stack_00000020,0);
  if (iVar11 == 0) {
    *(uint *)(iVar3 + 0x18) = *(uint *)(iVar3 + 0x18) & ~(uint)pbVar16;
  }
  else {
    pbVar16 = (byte *)((uint)pbVar16 | *(uint *)(iVar3 + 0x18));
    *(byte **)(iVar3 + 0x18) = pbVar16;
  }
  uVar7 = 0x81;
  uVar8 = 0;
  goto LAB_00281fb8;
}


