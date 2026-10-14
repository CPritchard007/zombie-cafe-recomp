/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00281f08 FUN_00281f08 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Function: __gnu_thumb1_case_uqi replaced with injection: switch8_r0 */
/* WARNING (jumptable): Removing unreachable block (ram,0x0028270e) */
/* WARNING (jumptable): Removing unreachable block (ram,0x00282736) */
/* WARNING: Removing unreachable block (ram,0x0028270e) */
/* WARNING: Removing unreachable block (ram,0x00282736) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00281f08(int *param_1,undefined4 param_2,uint param_3,undefined4 param_4)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  int *extraout_r1;
  undefined4 uVar9;
  undefined4 *puVar10;
  uint uVar11;
  uint *puVar12;
  int *piVar13;
  int iVar14;
  undefined1 uVar15;
  byte *pbVar16;
  byte *pbVar17;
  int iVar18;
  int *unaff_r6;
  int *unaff_r7;
  char cVar19;
  bool bVar20;
  byte *pbStack00000018;
  int *piStack0000001c;
  byte *in_stack_00000020;
  byte *in_stack_00000024;
  int in_stack_00000028;
  undefined4 *puStack0000002c;
  int in_stack_00000030;
  int iStack00000034;
  int in_stack_00000058;
  
code_r0x00281f08:
  FUN_0026656e(param_1,param_2,param_3,param_4);
  FUN_002830ca();
  uVar11 = *in_stack_00000020 - 0x30;
  if (2 < (uVar11 & 0xff)) {
    uVar11 = 1;
    iVar3 = sqlite3_stricmp(in_stack_00000020,DAT_002821f0 + 0x281f26);
    if (iVar3 != 0) {
      iVar3 = sqlite3_stricmp(in_stack_00000020,DAT_002821f4 + 0x281f34);
      uVar11 = (uint)(iVar3 == 0) * 2;
    }
  }
  pbVar16 = (byte *)(*unaff_r6 + 0x35);
  if (*pbVar16 == uVar11) {
    FUN_002830ca();
  }
  iVar3 = FUN_0027c994(unaff_r6);
  if (iVar3 != 0) {
    FUN_002830ca();
  }
  *pbVar16 = (byte)uVar11;
  FUN_002830ca();
  iVar7 = DAT_002821f8 + 0x281f66;
  iVar3 = sqlite3_stricmp(in_stack_00000024);
  pbVar17 = pbVar16;
  if (iVar3 != 0) goto LAB_00282026;
  if (in_stack_00000020 != (byte *)0x0) goto LAB_00281fc2;
  if (**(int **)(DAT_002821fc + 0x281f7a) == 0) {
    FUN_002830ca();
  }
  FUN_00263b94(pbVar16,1);
  FUN_00265916(pbVar16,0,0,iVar7);
  FUN_002662da(pbVar16,0x5e,0,1);
  uVar8 = 0x10;
  uVar9 = 1;
LAB_00281fb8:
  FUN_0026641e(pbVar16,uVar8,uVar9,uVar9);
  FUN_002830ca();
LAB_00281fc2:
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
  uVar11 = (uint)*in_stack_00000020;
  if (uVar11 != 0) {
    uVar4 = sqlite3_mprintf(DAT_00282208 + 0x282018,in_stack_00000020);
    *puVar12 = uVar4;
    FUN_002830ca();
  }
  *puVar12 = uVar11;
  FUN_002830ca();
LAB_00282026:
  iVar7 = DAT_0028220c + 0x28202e;
  iVar3 = sqlite3_stricmp(in_stack_00000024,iVar7);
  if (iVar3 == 0) {
    iVar3 = FUN_00287abc(unaff_r6);
    if (iVar3 != 0) {
      FUN_00283142();
    }
    if (in_stack_00000020 == (byte *)0x0) {
      iVar3 = *(byte *)(in_stack_00000030 + 9) - 1;
      FUN_00281f08(unaff_r6,iVar7,iVar3,iVar3 >> 0x1f);
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
  puVar10 = (undefined4 *)(DAT_00282218 + 0x282186);
  pbStack00000018 = (byte *)(DAT_00282218 + 0x282116);
  do {
    iVar3 = sqlite3_stricmp(in_stack_00000024,*(undefined4 *)pbStack00000018);
    if (iVar3 == 0) goto code_r0x002820bc;
    pbStack00000018 = (byte *)((int)pbStack00000018 + 8);
  } while (pbStack00000018 != (byte *)puVar10);
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
  FUN_00263b94(pbVar17,6);
  unaff_r6[0x13] = 6;
  FUN_00265916(pbVar17,pbStack00000018,pbStack00000018,DAT_00282220 + 0x28216a);
  FUN_00265916(pbVar17,1,pbStack00000018,DAT_00282224 + 0x282178);
  FUN_00265916(pbVar17,2,pbStack00000018,DAT_00282228 + 0x28218a);
  FUN_00265916(pbVar17,3,pbStack00000018,DAT_0028222c + 0x28219c);
  FUN_00265916(pbVar17,4,pbStack00000018,DAT_00282230 + 0x2821ac);
  FUN_00265916(pbVar17,5,pbStack00000018,DAT_00282234 + 0x2821be);
  FUN_0026d134(unaff_r6,iVar3);
  piVar13 = *(int **)(iVar3 + 0xc);
  piStack0000001c = (int *)pbStack00000018;
  for (; (int)pbStack00000018 < *(int *)(iVar3 + 8);
      pbStack00000018 = (byte *)((int)pbStack00000018 + 1)) {
    unaff_r6 = (int *)(uint)*(byte *)((int)piVar13 + 0x17);
    if (unaff_r6 == (int *)0x0) {
      FUN_0026641e(pbVar17,7,(int)pbStack00000018 - (int)piStack0000001c,1);
      FUN_002662da(pbVar17,0x5e,0,2);
      unaff_r6 = (int *)0x0;
      FUN_002662da(pbVar17,0x5e,0,3);
      FUN_0026641e(pbVar17,7,(char)piVar13[5] != '\0',4);
      if (piVar13[2] == 0) {
        FUN_0026641e(pbVar17,10,0,5);
      }
      else {
        FUN_002662da(pbVar17,0x5e,0,5);
      }
      FUN_0026641e(pbVar17,7,*(undefined1 *)((int)piVar13 + 0x15),6);
      FUN_0026641e(pbVar17,0x10,1,6);
    }
    else {
      piStack0000001c = (int *)((int)piStack0000001c + 1);
    }
    piVar13 = piVar13 + 6;
  }
  FUN_002830ca();
  iVar7 = sqlite3_stricmp(in_stack_00000024,iRam002825d8 + 0x2822e8);
  if ((iVar7 == 0) && (in_stack_00000020 != (byte *)0x0)) {
    piVar13 = (int *)FUN_00287abc(unaff_r6);
    if (piVar13 != (int *)0x0) {
      FUN_00283142();
    }
    piStack0000001c = (int *)FUN_00264662(unaff_r7,in_stack_00000020,iVar3);
    if (piStack0000001c == (int *)0x0) {
      FUN_002830ca();
    }
    FUN_00263b94(pbVar17,3);
    unaff_r6[0x13] = 3;
    FUN_00265916(pbVar17,piVar13,piVar13,iRam002825dc + 0x282330);
    FUN_00265916(pbVar17,1,piVar13,iRam002825e0 + 0x282340);
    FUN_00265916(pbVar17,2,piVar13,iRam002825e4 + 0x282350);
    for (unaff_r6 = piVar13; (int)unaff_r6 < piStack0000001c[9];
        unaff_r6 = (int *)((int)unaff_r6 + 1)) {
      iVar7 = *(int *)((int)unaff_r6 * 4 + piStack0000001c[1]);
      FUN_0026641e(pbVar17,7,unaff_r6,1);
      FUN_0026641e(pbVar17,7,iVar7,2);
      piVar13 = (int *)(iVar7 * 0x18);
      FUN_002662da(pbVar17,0x5e,0,3);
      FUN_0026641e(pbVar17,0x10,1,3);
    }
    FUN_002830ca();
  }
  iVar7 = sqlite3_stricmp(in_stack_00000024,iRam002825e8 + 0x2823b8);
  piVar5 = unaff_r6;
  if ((iVar7 == 0) && (in_stack_00000020 != (byte *)0x0)) {
    pbVar17 = (byte *)FUN_00287abc(unaff_r6);
    if (pbVar17 != (byte *)0x0) {
      FUN_00283142();
    }
    iVar7 = FUN_0026460e(unaff_r7,in_stack_00000020,iVar3);
    if (iVar7 == 0) {
      FUN_002830ca();
    }
    piVar5 = (int *)FUN_002662b8(unaff_r6);
    iVar7 = *(int *)(iVar7 + 0x10);
    piVar13 = piVar5;
    if (iVar7 == 0) {
      piVar13 = (int *)FUN_002830ca();
    }
    FUN_00263b94(piVar13,3);
    unaff_r6[0x13] = 3;
    FUN_00265916(piVar5,pbVar17,pbVar17,iRam002825ec + 0x28240a);
    FUN_00265916(piVar5,1,pbVar17,iRam002825f0 + 0x28241a);
    FUN_00265916(piVar5,2,pbVar17,iRam002825f4 + 0x28242a);
    do {
      FUN_0026641e(piVar5,7,pbVar17,1);
      FUN_002662da(piVar5,0x5e,0,2);
      FUN_0026641e(piVar5,7,*(char *)(iVar7 + 0x2c) != '\0',3);
      FUN_0026641e(piVar5,0x10,1,3);
      iVar7 = *(int *)(iVar7 + 0x14);
      pbVar17 = pbVar17 + 1;
    } while (iVar7 != 0);
    FUN_002830ca();
    piVar13 = (int *)0x0;
    piStack0000001c = piVar5;
  }
  iVar7 = sqlite3_stricmp(in_stack_00000024,iRam002825f8 + 0x282486);
  if (iVar7 == 0) {
    piVar13 = (int *)FUN_00287abc(piVar5);
    if (piVar13 != (int *)0x0) {
      FUN_00283142();
    }
    FUN_00263b94(pbVar17,3);
    piVar5[0x13] = 3;
    FUN_00265916(pbVar17,piVar13,piVar13,iRam002825fc + 0x2824b0);
    FUN_00265916(pbVar17,1,piVar13,iRam00282600 + 0x2824c0);
    piVar5 = (int *)(iRam00282608 + 0x2824d8);
    FUN_00265916(pbVar17,2,piVar13,iRam00282604 + 0x2824d0);
    for (; (int)piVar13 < unaff_r7[5]; piVar13 = (int *)((int)piVar13 + 1)) {
      piStack0000001c = (int *)((int)piVar13 * 0x10);
      if (*(int *)((int)piStack0000001c + unaff_r7[4] + 4) != 0) {
        FUN_0026641e(pbVar17,7,piVar13,1);
        FUN_002662da(pbVar17,0x5e,0,2);
        FUN_002662da(pbVar17,0x5e,0,3);
        FUN_0026641e(pbVar17,0x10,1,3);
      }
    }
    FUN_002830ca();
  }
  iVar7 = sqlite3_stricmp(in_stack_00000024,iRam0028260c + 0x28255e);
  if (iVar7 == 0) {
    FUN_00263b94(pbVar17,2);
    piVar5[0x13] = 2;
    FUN_00265916(pbVar17,0,0,iRam00282610 + 0x28257e);
    FUN_00265916(pbVar17,1,0,iRam00282614 + 0x28258c);
    piVar13 = (int *)0x0;
    for (puVar10 = (undefined4 *)unaff_r7[0x69]; puVar10 != (undefined4 *)0x0;
        puVar10 = (undefined4 *)*puVar10) {
      piStack0000001c = (int *)((int)piVar13 + 1);
      FUN_0026641e(pbVar17,7,piVar13,1);
      FUN_002662da(pbVar17,0x5e,0,2);
      FUN_0026641e(pbVar17,0x10,1,2);
      piVar13 = piStack0000001c;
    }
    FUN_002830ca();
    unaff_r7 = (int *)&DAT_0000002a;
    piVar5 = (int *)&DAT_00000045;
    _DAT_00000074 = 0x74;
    _DAT_00000078 = 0x45;
    _DAT_0000007c = 0x2a;
    pbVar17 = (byte *)0x26;
    piVar13 = extraout_r1;
  }
  iVar7 = sqlite3_stricmp(in_stack_00000024,iRam00282920 + 0x282620);
  if ((iVar7 == 0) && (in_stack_00000020 != (byte *)0x0)) {
    iStack00000034 = FUN_00287abc(piVar5);
    if (iStack00000034 != 0) {
      FUN_00283142();
    }
    iVar3 = FUN_0026460e(unaff_r7,in_stack_00000020,iVar3);
    if (iVar3 == 0) {
      FUN_002830ca();
    }
    uVar9 = FUN_002662b8(piVar5);
    pbStack00000018 = *(byte **)(iVar3 + 0x24);
    uVar8 = uVar9;
    if (pbStack00000018 == (byte *)0x0) {
      uVar8 = FUN_002830ca();
    }
    FUN_00263b94(uVar8,8);
    piVar5[0x13] = 8;
    FUN_00265916(uVar9,iStack00000034,iStack00000034,iRam00282924 + 0x28267c);
    FUN_00265916(uVar9,1,iStack00000034,iRam00282928 + 0x28268c);
    FUN_00265916(uVar9,2,iStack00000034,iRam0028292c + 0x28269c);
    FUN_00265916(uVar9,3,iStack00000034,iRam00282930 + 0x2826ac);
    FUN_00265916(uVar9,4,iStack00000034,iRam00282934 + 0x2826bc);
    FUN_00265916(uVar9,5,iStack00000034,iRam00282938 + 0x2826cc);
    FUN_00265916(uVar9,6,iStack00000034,iRam0028293c + 0x2826dc);
    FUN_00265916(uVar9,7,iStack00000034,iRam00282940 + 0x2826ec);
    do {
      iVar3 = (int)pbStack00000018;
      for (in_stack_00000028 = 0; in_stack_00000028 < *(int *)((int)pbStack00000018 + 0x14);
          in_stack_00000028 = in_stack_00000028 + 1) {
        iVar7 = *(int *)(iVar3 + 0x28);
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
        FUN_0026641e(uVar9,7,iStack00000034,1);
        FUN_0026641e(uVar9,7,in_stack_00000028,2);
        FUN_002662da(uVar9,0x5e,0,3);
        FUN_002662da(uVar9,0x5e,0,4);
        uVar8 = 10;
        if (iVar7 != 0) {
          uVar8 = 0x5e;
        }
        FUN_002662da(uVar9,uVar8,0,5);
        FUN_002662da(uVar9,0x5e,0,6);
        FUN_002662da(uVar9,0x5e,0,7);
        FUN_002662da(uVar9,0x5e,0,8);
        FUN_0026641e(uVar9,0x10,1,8);
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
    iVar7 = DAT_0028297c + 0x282876;
    FUN_0026affc(unaff_r7,iVar7,2,1);
    FUN_0026affc(unaff_r7,iVar7,3,1);
    iVar7 = DAT_00282988 + 0x2828b2;
    FUN_0026affc(unaff_r7,iVar7,2,1);
    uVar8 = FUN_0025b154(iVar7);
    iVar7 = FUN_00262898(unaff_r7,iVar7,uVar8,2);
    if (iVar7 != 0) {
      *(undefined1 *)(iVar7 + 3) = 3;
    }
    uVar15 = 1;
    if (iVar3 != 0) {
      uVar15 = 3;
    }
    iVar3 = DAT_0028298c + 0x2828f8;
    uVar8 = FUN_0025b154(iVar3);
    iVar3 = FUN_00262898(unaff_r7,iVar3,uVar8,2);
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
    if (iVar3 != 0) {
      FUN_00283142();
      return;
    }
    piVar5[0x13] = 6;
    FUN_00263b94(pbVar17,1);
    FUN_00265916(pbVar17,0,0,DAT_00282c60 + 0x2829ea);
    in_stack_00000058 = 100;
    if ((in_stack_00000020 != (byte *)0x0) &&
       (FUN_0025b880(in_stack_00000020,&stack0x00000058), in_stack_00000058 < 1)) {
      in_stack_00000058 = 100;
    }
    FUN_0026641e(pbVar17,7,in_stack_00000058,1);
    iVar3 = DAT_00282c64 + 0x282a20;
    for (pbStack00000018 = (byte *)0x0; (int)pbStack00000018 < unaff_r7[5];
        pbStack00000018 = (byte *)((int)pbStack00000018 + 1)) {
      if ((pbStack00000018 == (byte *)piStack0000001c) || ((int)piStack0000001c < 0)) {
        FUN_00275ec4(piVar5,pbStack00000018);
        uVar8 = FUN_002665da(pbVar17,0x78,1);
        FUN_0026641e(pbVar17,6,0,0);
        FUN_002624c2(pbVar17,uVar8);
        iVar18 = 0;
        iVar7 = *(int *)(unaff_r7[4] + (int)pbStack00000018 * 0x10 + 0xc);
        for (puStack0000002c = *(undefined4 **)(iVar7 + 0x10); puStack0000002c != (undefined4 *)0x0;
            puStack0000002c = (undefined4 *)*puStack0000002c) {
          iVar6 = puStack0000002c[2];
          FUN_0026641e(pbVar17,7,*(undefined4 *)(iVar6 + 0x14),iVar18 + 2);
          iVar14 = *(int *)(iVar6 + 0x10);
          iVar6 = iVar18;
          for (; iVar18 = iVar6 + 1, iVar14 != 0; iVar14 = *(int *)(iVar14 + 0x14)) {
            FUN_0026641e(pbVar17,7,*(undefined4 *)(iVar14 + 0x28),iVar6 + 3);
            iVar6 = iVar18;
          }
        }
        if (piVar5[0x13] <= iVar18 + 3) {
          piVar5[0x13] = iVar18 + 4;
        }
        FUN_00266266(pbVar17,0x6f,2,iVar18);
        FUN_0025c3b8(pbVar17,(uint)pbStack00000018 & 0xff);
        uVar8 = FUN_002665da(pbVar17,0x49,2);
        FUN_0026877c(unaff_r7,iVar3,*(undefined4 *)(unaff_r7[4] + (int)pbStack00000018 * 0x10));
        FUN_002662da(pbVar17,0x5e,0,3);
        FUN_00266266(pbVar17,0xd,2,4);
        FUN_00266266(pbVar17,0x5b,4,3);
        FUN_0026641e(pbVar17,0x10,2,1);
        FUN_002624c2(pbVar17,uVar8);
        puStack0000002c = *(undefined4 **)(iVar7 + 0x10);
        while ((puStack0000002c != (undefined4 *)0x0 && (cVar2 != 'q'))) {
          iVar7 = puStack0000002c[2];
          if (*(int *)(iVar7 + 0x10) != 0) {
            uVar8 = FUN_002665da(pbVar17,0x78,1);
            FUN_0026641e(pbVar17,6,0,0);
            FUN_002624c2(pbVar17,uVar8);
            if (-1 < (int)((uint)*(byte *)(iVar7 + 0x22) << 0x1b)) {
              FUN_0026e7ea(piVar5,iVar7,1,0x27);
            }
            FUN_0026641e(pbVar17,7,0,2);
            iVar18 = FUN_0026641e(pbVar17,0x48,1,0);
            FUN_0026641e(pbVar17,0x14,2,1);
            puVar10 = *(undefined4 **)(iVar7 + 0x10);
            iStack00000034 = 1;
            for (; iStack00000034 = iStack00000034 + 1, puVar10 != (undefined4 *)0x0;
                puVar10 = (undefined4 *)puVar10[5]) {
              FUN_002707d4(piVar5,puVar10,1,3);
              uVar8 = FUN_00266944(pbVar17,0x34,iStack00000034,0);
              iVar6 = FUN_00266dd0(pbVar17,0xb,DAT_00282c68 + 0x282c43);
              FUN_00263832(pbVar17,iVar6 + 1,DAT_00282c6c + 0x282bf4,0xfffffffe);
              FUN_00263832(pbVar17,iVar6 + 3,DAT_00282c70 + 0x282c04,0xfffffffe);
              FUN_00263832(pbVar17,iVar6 + 4,*puVar10,0);
              FUN_002624c2(pbVar17,iVar6 + 9);
              FUN_002624c2(pbVar17,uVar8);
            }
            FUN_0026641e(pbVar17,0x5f,1,iVar18 + 1);
            FUN_002624c2(pbVar17,iVar18);
            puVar10 = *(undefined4 **)(iVar7 + 0x10);
            iStack00000034 = 1;
            for (; iStack00000034 = iStack00000034 + 1, puVar10 != (undefined4 *)0x0;
                puVar10 = (undefined4 *)puVar10[5]) {
              uVar8 = FUN_002665da(pbVar17,0x78,1);
              FUN_0026641e(pbVar17,6,0,0);
              FUN_002624c2(pbVar17,uVar8);
              iVar7 = FUN_00266dd0(pbVar17,10,DAT_00282f84 + 0x282cab);
              FUN_0025c394(pbVar17,iVar7 + 1,iStack00000034);
              FUN_0025c3a6(pbVar17,iVar7 + 1,iVar7 + 4);
              FUN_0025c394(pbVar17,iVar7 + 3,iStack00000034);
              FUN_0025c3a6(pbVar17,iVar7 + 3,iVar7 + 2);
              FUN_002624c2(pbVar17,iVar7 + 4);
              FUN_00263832(pbVar17,iVar7 + 6,DAT_00282f88 + 0x282ce6,0xfffffffe);
              FUN_00263832(pbVar17,iVar7 + 7,*puVar10,0);
            }
          }
          puStack0000002c = (undefined4 *)*puStack0000002c;
        }
      }
    }
    iVar3 = FUN_00266dd0(pbVar17,4,DAT_00282f8c + 0x282d69);
    FUN_0025c3a6(pbVar17,iVar3,-in_stack_00000058);
    FUN_002624c2(pbVar17,iVar3 + 1);
    FUN_00263832(pbVar17,iVar3 + 2,DAT_00282f90 + 0x282d58,0xfffffffe);
    FUN_002830ca();
    return;
  }
  iVar7 = DAT_00282f94 + 0x282d68;
  iVar3 = sqlite3_stricmp(in_stack_00000024);
  if (iVar3 != 0) {
    iVar3 = sqlite3_stricmp(in_stack_00000024,DAT_00282fa8 + 0x282e38);
    if (((iVar3 == 0) ||
        (iVar3 = sqlite3_stricmp(in_stack_00000024,DAT_00282fac + 0x282e46), iVar3 == 0)) ||
       (iVar3 = sqlite3_stricmp(in_stack_00000024,DAT_00282fb0 + 0x282e54), iVar3 == 0)) {
      FUN_0025c3f4(pbVar17,piStack0000001c);
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
        iVar7 = FUN_00266dd0(pbVar17,3,DAT_00282fb4 + 0x282edf);
        FUN_0025c394(pbVar17,iVar7,piStack0000001c);
        uVar8 = FUN_0025b90e(in_stack_00000020);
        FUN_0025c394(pbVar17,iVar7 + 1,uVar8);
        FUN_0025c394(pbVar17,iVar7 + 2,piStack0000001c);
        FUN_0025c3a6(pbVar17,iVar7 + 2,iVar3);
        FUN_002830ca();
        return;
      }
      iVar7 = FUN_00266dd0(pbVar17,3,DAT_00282fb8 + 0x282f2d);
      uVar11 = iVar7 + 1;
      FUN_0025c394(pbVar17,iVar7,piStack0000001c);
      FUN_0025c394(pbVar17,uVar11,piStack0000001c);
      if (uVar11 < *(uint *)(pbVar17 + 0x1c)) {
        *(int *)(*(int *)(pbVar17 + 4) + uVar11 * 0x14 + 0xc) = iVar3;
      }
      FUN_00263b94(pbVar17,1);
      FUN_00265916(pbVar17,0,0,in_stack_00000024);
      FUN_002830ca();
      return;
    }
    iVar3 = sqlite3_stricmp(in_stack_00000024,DAT_00282fbc + 0x282f2c);
    if (iVar3 == 0) {
      FUN_00263b94(pbVar17,1);
      piVar5[0x13] = 1;
      FUN_00265916(pbVar17,0,0,DAT_00282fc0 + 0x282f4c);
      iVar3 = 0;
      while( true ) {
        iVar7 = sqlite3_compileoption_get(iVar3);
        if (iVar7 == 0) break;
        FUN_002662da(pbVar17,0x5e,0,1);
        FUN_0026641e(pbVar17,0x10,1,1);
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
      FUN_00263b94(pbVar17,3);
      iVar3 = DAT_0028317c;
      piVar5[0x13] = 3;
      FUN_00265916(pbVar17,0,0,iVar3 + 0x283028);
      FUN_00265916(pbVar17,1,0,DAT_00283180 + 0x283038);
      FUN_00265916(pbVar17,2,0,DAT_00283184 + 0x283048);
      FUN_00266266(pbVar17,0x7d,piStack0000001c,pbStack00000018);
      FUN_00281fba(pbVar17,0x10,1,3);
    }
    iVar3 = sqlite3_stricmp(in_stack_00000024,DAT_00283188 + 0x283072);
    if (iVar3 == 0) {
      if (in_stack_00000020 != (byte *)0x0) {
        uVar8 = FUN_0025b90e(in_stack_00000020);
        sqlite3_wal_autocheckpoint(unaff_r7,uVar8);
      }
      iVar3 = 0;
      iVar7 = 0;
      if (unaff_r7[0x2f] == DAT_0028318c + 0x28309c) {
        iVar3 = unaff_r7[0x30];
        iVar7 = iVar3 >> 0x1f;
      }
      FUN_00281f08(piVar5,DAT_00283190 + 0x2830ae,iVar3,iVar7);
    }
    iVar3 = sqlite3_stricmp(in_stack_00000024,DAT_00283194 + 0x2830ba);
    if (iVar3 == 0) {
      sqlite3_db_release_memory(unaff_r7);
      FUN_002830ca();
      return;
    }
    if ((char)unaff_r7[0xd] == '\0') goto code_r0x00283142;
    iVar3 = unaff_r7[6];
    iVar18 = *(int *)(in_stack_00000030 + 4);
    cVar2 = *(char *)(in_stack_00000030 + 9);
    piVar13 = *(int **)(iVar18 + 4);
    FUN_00261f68(iVar18);
    iVar7 = *piVar13;
    cVar19 = cVar2;
    if (cVar2 != '\x01') {
      cVar19 = *(char *)(iVar7 + 0xc) != '\0';
    }
    *(char *)(iVar7 + 7) = cVar19;
    bVar20 = false;
    if (cVar2 == '\x03') {
      bVar20 = *(char *)(iVar7 + 0xc) == '\0';
    }
    *(bool *)(iVar7 + 8) = bVar20;
    if (cVar19 == '\0') {
      if (iVar3 << 10 < 0) {
        uVar15 = 3;
        goto LAB_0028311c;
      }
      uVar15 = 2;
      *(undefined1 *)(iVar7 + 0xb) = 2;
      if (iVar3 << 9 < 0) {
        uVar15 = 3;
      }
    }
    else {
      uVar15 = 0;
LAB_0028311c:
      *(undefined1 *)(iVar7 + 0xb) = uVar15;
    }
    *(undefined1 *)(iVar7 + 9) = uVar15;
    *(byte *)(iVar7 + 10) = *(byte *)(iVar7 + 0xb);
    if (bVar20 != false) {
      *(byte *)(iVar7 + 10) = *(byte *)(iVar7 + 0xb) | 0x20;
    }
    FUN_00262002(iVar18);
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
    FUN_00263b94(pbVar17,1);
    FUN_00265916(pbVar17,0,0,iVar7);
    FUN_0026641e(pbVar17,0x5e,0,1);
    FUN_00263832(pbVar17,0xffffffff,
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
      if (*piVar13 != 0) {
        FUN_002830ca();
        return;
      }
      FUN_00268e48(piVar5,DAT_00282fa4 + 0x282e2c,in_stack_00000020);
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
  pbVar16 = (byte *)FUN_002662b8(unaff_r6);
  if (pbVar16 == (byte *)0x0) {
    FUN_002830ca();
  }
  pbVar17 = *(byte **)((int)pbStack00000018 + 4);
  if (in_stack_00000020 == (byte *)0x0) goto code_r0x002820d8;
  if (*(char *)(iVar3 + 0x34) == '\0') {
    pbVar17 = (byte *)((uint)pbVar17 & DAT_0028221c);
  }
  iVar7 = FUN_00262a1c(in_stack_00000020,0);
  if (iVar7 == 0) {
    *(uint *)(iVar3 + 0x18) = *(uint *)(iVar3 + 0x18) & ~(uint)pbVar17;
  }
  else {
    pbVar17 = (byte *)((uint)pbVar17 | *(uint *)(iVar3 + 0x18));
    *(byte **)(iVar3 + 0x18) = pbVar17;
  }
  uVar8 = 0x81;
  uVar9 = 0;
  goto LAB_00281fb8;
code_r0x002820d8:
  param_2 = *(undefined4 *)pbStack00000018;
  param_3 = (uint)(((uint)pbVar17 & *(uint *)(iVar3 + 0x18)) != 0);
  param_4 = 0;
  param_1 = unaff_r6;
  goto code_r0x00281f08;
}


