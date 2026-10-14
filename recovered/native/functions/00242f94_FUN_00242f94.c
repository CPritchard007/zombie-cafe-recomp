/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00242f94 FUN_00242f94 */

void FUN_00242f94(void)

{
  char cVar1;
  undefined4 uVar2;
  char *pcVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int extraout_r1;
  char *pcVar8;
  int iVar9;
  int iVar10;
  undefined1 *puVar11;
  undefined4 *puVar12;
  undefined4 uVar13;
  undefined1 *puVar14;
  int *piVar15;
  size_t sVar16;
  int iVar17;
  int *piVar18;
  int iVar19;
  undefined4 *puVar20;
  undefined4 uStack0000000c;
  char *in_stack_00000010;
  int in_stack_00000014;
  ZombieCafe *in_stack_00000018;
  ZombieCafe *pZStack0000001c;
  undefined1 *in_stack_0000002c;
  byte *in_stack_00000034;
  undefined1 *in_stack_00000038;
  undefined1 *in_stack_0000003c;
  undefined1 *in_stack_00000040;
  int in_stack_00000050;
  int in_stack_00000074;
  undefined1 *in_stack_00000078;
  undefined1 *in_stack_0000007c;
  
  iVar10 = DAT_002430d0;
  *in_stack_00000078 = 0;
  snprintf(&stack0x000001dc,0x14,(char *)(iVar10 + 0x242fa2));
  pcVar3 = strstr(in_stack_00000010,&stack0x000001dc);
  if (pcVar3 != (char *)0x0) {
    snprintf(&stack0x000001dc,0x14,(char *)(DAT_002430d4 + 0x242fbc));
    pcVar3 = strstr(in_stack_00000010,&stack0x000001dc);
    if (pcVar3 != (char *)0x0) {
      *in_stack_00000078 = 1;
    }
  }
  snprintf(&stack0x000001dc,0x20,(char *)(DAT_002430d8 + 0x242fd8));
  pcVar3 = strstr(in_stack_00000010,&stack0x000001dc);
  if (pcVar3 != (char *)0x0) {
    snprintf(&stack0x000001dc,0x20,(char *)(DAT_002430dc + 0x242ff2));
    pcVar3 = strstr(in_stack_00000010,&stack0x000001dc);
    if (pcVar3 != (char *)0x0) {
      iVar10 = atoi(pcVar3 + 0x10);
      *(int *)(in_stack_00000018 + 0x340) = iVar10;
    }
    snprintf(&stack0x000001dc,0x20,(char *)(DAT_002430e0 + 0x243018));
    pcVar3 = strstr(in_stack_00000010,&stack0x000001dc);
    if (pcVar3 != (char *)0x0) {
      iVar19 = 0;
      for (iVar10 = 0; pcVar3[iVar10 + 0x10] != ']'; iVar10 = iVar10 + (uint)(cVar1 == ',')) {
        iVar19 = iVar19 + 1;
        for (; (cVar1 = pcVar3[iVar10 + 0x10], cVar1 != ']' && (cVar1 != ',')); iVar10 = iVar10 + 1)
        {
        }
      }
      iVar6 = *(int *)(in_stack_00000018 + 0x348);
      iVar10 = *(int *)(in_stack_00000018 + 0x344);
      iVar17 = 0;
      for (iVar5 = 0; iVar5 < iVar19; iVar5 = iVar5 + 1) {
        if (iVar5 == 0) {
          iVar4 = atoi(pcVar3 + iVar17 + 0x10);
          iVar9 = 0xd1;
LAB_00243094:
          *(int *)(in_stack_00000018 + iVar9 * 4) = iVar4;
        }
        else if (iVar5 == 1) {
          iVar4 = atoi(pcVar3 + iVar17 + 0x10);
          iVar9 = 0xd2;
          goto LAB_00243094;
        }
        for (; (cVar1 = pcVar3[iVar17 + 0x10], cVar1 != ']' && (cVar1 != ',')); iVar17 = iVar17 + 1)
        {
        }
        iVar17 = iVar17 + (uint)(cVar1 == ',');
      }
      if ((iVar10 != *(int *)(in_stack_00000018 + 0x344)) ||
         (iVar6 != *(int *)(in_stack_00000018 + 0x348))) {
        *(undefined4 *)(in_stack_00000018 + 0x34c) = 0;
        *(undefined4 *)(in_stack_00000018 + 0x350) = 0;
      }
    }
    snprintf(&stack0x000001dc,0x20,(char *)(DAT_00243420 + 0x243134));
    pcVar3 = strstr(in_stack_00000010,&stack0x000001dc);
    if (pcVar3 == (char *)0x0) {
      *(undefined1 *)(*(int *)(in_stack_00000014 + DAT_00243424) + 0xe) = 0;
    }
    else {
      *(undefined1 *)(*(int *)(in_stack_00000014 + DAT_00243424) + 0xe) = 1;
    }
  }
  snprintf(&stack0x000001dc,0x20,(char *)(DAT_00243428 + 0x24315a));
  pcVar3 = strstr(in_stack_00000010,&stack0x000001dc);
  if (pcVar3 != (char *)0x0) {
    snprintf(&stack0x000001dc,0x20,(char *)(DAT_0024342c + 0x243172));
    pcVar3 = strstr(in_stack_00000010,&stack0x000001dc);
    if (pcVar3 != (char *)0x0) {
      iVar19 = 0;
      for (iVar10 = 0; pcVar3[iVar10 + 0xd] != ']'; iVar10 = iVar10 + (uint)(cVar1 == ',')) {
        iVar19 = iVar19 + 1;
        for (; (cVar1 = pcVar3[iVar10 + 0xd], cVar1 != ']' && (cVar1 != ',')); iVar10 = iVar10 + 1)
        {
        }
      }
      if (0x3c < iVar19) {
        iVar19 = 0x3c;
      }
      iVar17 = 0;
      for (iVar10 = 0; iVar10 < iVar19; iVar10 = iVar10 + 1) {
        if (iVar10 << 0x1f < 0) {
          iVar6 = atoi(pcVar3 + iVar17 + 0xd);
          *(int *)(in_stack_00000074 + (iVar10 >> 1) * 8 + 4) = iVar6;
        }
        else {
          iVar6 = atoi(pcVar3 + iVar17 + 0xd);
          *(int *)(in_stack_00000074 + (iVar10 >> 1) * 8) = iVar6;
        }
        for (; (cVar1 = pcVar3[iVar17 + 0xd], cVar1 != ']' && (cVar1 != ',')); iVar17 = iVar17 + 1)
        {
        }
        iVar17 = iVar17 + (uint)(cVar1 == ',');
      }
    }
  }
  iVar10 = DAT_00243430;
  *in_stack_0000007c = 0;
  snprintf(&stack0x000000bc,0x20,(char *)(iVar10 + 0x24320a));
  pcVar3 = strstr(in_stack_00000010,&stack0x000000bc);
  if (pcVar3 != (char *)0x0) {
    snprintf(&stack0x000000bc,0x20,(char *)(DAT_00243434 + 0x243226));
    pcVar3 = strstr(in_stack_00000010,&stack0x000000bc);
    if (pcVar3 != (char *)0x0) {
      *in_stack_0000007c = 1;
    }
    snprintf(&stack0x000000bc,0x20,(char *)(DAT_00243438 + 0x243242));
    pcVar3 = strstr(in_stack_00000010,&stack0x000000bc);
    if ((pcVar3 != (char *)0x0) && (iVar10 = atoi(pcVar3 + 0x10), iVar10 != 0)) {
      if (*(int *)(in_stack_00000018 + 0xe0) != iVar10) {
        *(undefined2 *)(in_stack_00000018 + 0xf0) = 0;
        *(undefined2 *)(in_stack_00000018 + 0xf4) = 0;
        *(undefined4 *)(in_stack_00000018 + 0xe8) = 0;
        *(undefined4 *)(in_stack_00000018 + 0xec) = 0;
        uVar13 = DAT_0024341c;
        *(undefined4 *)(in_stack_00000018 + 0x138) = DAT_00243418;
        *(undefined4 *)(in_stack_00000018 + 0x13c) = uVar13;
        ZombieCafe::initEventRaid_attackPoint(in_stack_00000018);
      }
      *(int *)(in_stack_00000018 + 0xe0) = iVar10;
    }
    snprintf(&stack0x000000bc,0x20,(char *)(DAT_0024343c + 0x2432a0));
    pcVar3 = strstr(in_stack_00000010,&stack0x000000bc);
    if (pcVar3 != (char *)0x0) {
      iVar19 = 0;
      for (iVar10 = 0; pcVar3[iVar10 + 0x10] != ']'; iVar10 = iVar10 + (uint)(cVar1 == ',')) {
        iVar19 = iVar19 + 1;
        for (; (cVar1 = pcVar3[iVar10 + 0x10], cVar1 != ']' && (cVar1 != ',')); iVar10 = iVar10 + 1)
        {
        }
      }
      iVar10 = 0;
      for (iVar17 = 0; iVar17 < iVar19; iVar17 = iVar17 + 1) {
        if (iVar17 == 0) {
          iVar6 = atoi(pcVar3 + iVar10 + 0x10);
          *(int *)(in_stack_00000018 + 0xe4) = iVar6;
        }
        else if (iVar17 == 1) {
          iVar6 = atoi(pcVar3 + iVar10 + 0x10);
          *(short *)(in_stack_00000018 + 0xf2) = (short)iVar6;
        }
        for (; (cVar1 = pcVar3[iVar10 + 0x10], cVar1 != ']' && (cVar1 != ',')); iVar10 = iVar10 + 1)
        {
        }
        iVar10 = iVar10 + (uint)(cVar1 == ',');
      }
    }
    snprintf(&stack0x000000bc,0x20,(char *)(DAT_00243440 + 0x243332));
    pcVar3 = strstr(in_stack_00000010,&stack0x000000bc);
    uVar13 = DAT_00243448;
    if (pcVar3 != (char *)0x0) {
      pZStack0000001c = (ZombieCafe *)0x0;
      for (iVar10 = 0; pcVar3[iVar10 + 0xd] != ']'; iVar10 = iVar10 + (uint)(cVar1 == ',')) {
        pZStack0000001c = (ZombieCafe *)((int)pZStack0000001c + 1);
        for (; (cVar1 = pcVar3[iVar10 + 0xd], cVar1 != ']' && (cVar1 != ',')); iVar10 = iVar10 + 1)
        {
        }
      }
      iVar19 = 0;
      iVar10 = *(int *)(in_stack_00000014 + DAT_00243444);
      do {
        iVar17 = iVar19 + iVar10;
        iVar19 = iVar19 + 4;
        *(undefined4 *)(iVar17 + 8) = 0xffffffff;
        *(undefined4 *)(iVar17 + 0x38) = 0;
        *(undefined4 *)(iVar17 + 0x50) = 0;
        *(undefined4 *)(iVar17 + 0x20) = uVar13;
      } while (iVar19 != 0x18);
      iVar19 = 0;
      for (iVar17 = 0; iVar17 < (int)pZStack0000001c; iVar17 = iVar17 + 1) {
        iVar6 = __divsi3(iVar17,6);
        __aeabi_idivmod(iVar17,6);
        if (iVar6 == 0) {
          iVar4 = atoi(pcVar3 + iVar19 + 0xd);
          iVar6 = (extraout_r1 + 2) * 4;
          iVar5 = iVar10;
LAB_00243410:
          *(int *)(iVar6 + iVar5) = iVar4;
        }
        else if (iVar6 == 1) {
          atoi(pcVar3 + iVar19 + 0xd);
          uVar13 = __floatsisf();
          *(undefined4 *)(iVar10 + (extraout_r1 + 0xe) * 4) = uVar13;
        }
        else if (iVar6 == 2) {
          FUN_00238ef8(pcVar3 + iVar19 + 0xd);
          uVar13 = __truncdfsf2();
          *(undefined4 *)(iVar10 + (extraout_r1 + 0x14) * 4) = uVar13;
        }
        else if (iVar6 == 3) {
          FUN_00238ef8(pcVar3 + iVar19 + 0xd);
          iVar5 = (extraout_r1 + 8) * 4;
          iVar4 = __fixdfsi();
          iVar6 = iVar10;
          goto LAB_00243410;
        }
        for (; (cVar1 = pcVar3[iVar19 + 0xd], cVar1 != ']' && (cVar1 != ',')); iVar19 = iVar19 + 1)
        {
        }
        iVar19 = iVar19 + (uint)(cVar1 == ',');
      }
    }
    snprintf(&stack0x000000bc,0x20,(char *)(DAT_00243788 + 0x243476));
    pcVar3 = strstr(in_stack_00000010,&stack0x000000bc);
    if (pcVar3 != (char *)0x0) {
      iVar19 = 0;
      for (iVar10 = 0; pcVar3[iVar10 + 0xd] != ']'; iVar10 = iVar10 + (uint)(cVar1 == ',')) {
        iVar19 = iVar19 + 1;
        for (; (cVar1 = pcVar3[iVar10 + 0xd], cVar1 != ']' && (cVar1 != ',')); iVar10 = iVar10 + 1)
        {
        }
      }
      iVar10 = 0;
      for (iVar17 = 0; iVar17 < iVar19; iVar17 = iVar17 + 1) {
        if (iVar17 == 1) {
          iVar6 = atoi(pcVar3 + iVar10 + 0xd);
          *(int *)(*(int *)(in_stack_00000014 + DAT_0024378c) + 4) = iVar6;
          snprintf(&stack0x000001dc,0x100,(char *)(DAT_00243798 + 0x243504),iVar6);
          pcVar8 = (char *)(DAT_0024379c + 0x24350c);
LAB_0024352e:
          L_PrintLog(pcVar8,&stack0x000001dc);
        }
        else {
          if (iVar17 == 2) {
            iVar6 = atoi(pcVar3 + iVar10 + 0xd);
            *(int *)(*(int *)(in_stack_00000014 + DAT_0024378c) + 0x68) = iVar6;
            snprintf(&stack0x000001dc,0x100,(char *)(DAT_002437a0 + 0x243528));
            pcVar8 = (char *)(DAT_002437a4 + 0x243530);
            goto LAB_0024352e;
          }
          if (iVar17 == 0) {
            iVar6 = atoi(pcVar3 + iVar10 + 0xd);
            **(int **)(in_stack_00000014 + DAT_0024378c) = iVar6;
            snprintf(&stack0x000001dc,0x100,(char *)(DAT_00243790 + 0x2434e0));
            pcVar8 = (char *)(DAT_00243794 + 0x2434e8);
            goto LAB_0024352e;
          }
        }
        for (; (cVar1 = pcVar3[iVar10 + 0xd], cVar1 != ']' && (cVar1 != ',')); iVar10 = iVar10 + 1)
        {
        }
        iVar10 = iVar10 + (uint)(cVar1 == ',');
      }
    }
    snprintf(&stack0x000000bc,0x20,(char *)(DAT_002437a8 + 0x24355e));
    pcVar3 = strstr(in_stack_00000010,&stack0x000000bc);
    puVar14 = (undefined1 *)(*(int *)(in_stack_00000014 + DAT_0024378c) + 0x6c);
    if (pcVar3 == (char *)0x0) {
      *puVar14 = 0;
    }
    else {
      *puVar14 = 1;
    }
  }
  iVar10 = DAT_002437ac;
  *in_stack_0000002c = 0;
  snprintf(&stack0x000001dc,0x20,(char *)(iVar10 + 0x24358a));
  pcVar3 = strstr(in_stack_00000010,&stack0x000001dc);
  if (pcVar3 != (char *)0x0) {
    snprintf(&stack0x000001dc,0x20,(char *)(DAT_002437b0 + 0x2435a6));
    pcVar3 = strstr(in_stack_00000010,&stack0x000001dc);
    if (pcVar3 != (char *)0x0) {
      *in_stack_0000002c = 1;
    }
    snprintf(&stack0x000001dc,0x20,(char *)(DAT_002437b4 + 0x2435c2));
    pcVar3 = strstr(in_stack_00000010,&stack0x000001dc);
    if (pcVar3 != (char *)0x0) {
      iVar10 = atoi(pcVar3 + 0x11);
      if (*(int *)(in_stack_00000018 + 0x1c0) != iVar10) {
        iVar19 = 0;
        *(undefined4 *)(in_stack_00000018 + 0x1d4) = 0;
        *(undefined4 *)(in_stack_00000018 + 0x1d8) = 0;
        *(undefined4 *)(in_stack_00000018 + 0x1d0) = 0;
        *(undefined4 *)(in_stack_00000018 + 0x1c4) = 0;
        uVar13 = DAT_00243784;
        *(undefined4 *)(in_stack_00000018 + 0x1e0) = DAT_00243780;
        *(undefined4 *)(in_stack_00000018 + 0x1e4) = uVar13;
        *(undefined2 *)(in_stack_00000018 + 0x1ce) = 0;
        ZombieCafe::initEventRaid2_attackPoint(in_stack_00000018);
        do {
          iVar17 = iVar19 + 0x1e8;
          iVar19 = iVar19 + 2;
          *(undefined2 *)(in_stack_00000018 + iVar17) = 0;
        } while (iVar19 != 0x3e);
      }
      *(int *)(in_stack_00000018 + 0x1c0) = iVar10;
    }
    snprintf(&stack0x000001dc,0x20,(char *)(DAT_002437b8 + 0x243638));
    pcVar3 = strstr(in_stack_00000010,&stack0x000001dc);
    if (pcVar3 != (char *)0x0) {
      iVar10 = atoi(pcVar3 + 0xf);
      **(int **)(in_stack_00000014 + DAT_002437bc) = iVar10;
    }
    snprintf(&stack0x000001dc,0x20,(char *)(DAT_002437c0 + 0x24365e));
    pcVar3 = strstr(in_stack_00000010,&stack0x000001dc);
    if (pcVar3 != (char *)0x0) {
      iVar19 = 0;
      for (iVar10 = 0; pcVar3[iVar10 + 0xe] != ']'; iVar10 = iVar10 + (uint)(cVar1 == ',')) {
        iVar19 = iVar19 + 1;
        for (; (cVar1 = pcVar3[iVar10 + 0xe], cVar1 != ']' && (cVar1 != ',')); iVar10 = iVar10 + 1)
        {
        }
      }
      iVar10 = 0;
      for (iVar17 = 0; iVar17 < iVar19; iVar17 = iVar17 + 1) {
        if (iVar17 == 0) {
          iVar6 = atoi(pcVar3 + iVar10 + 0xe);
          *(int *)(*(int *)(in_stack_00000014 + DAT_002437bc) + 4) = iVar6;
        }
        else if (iVar17 == 1) {
          iVar6 = atoi(pcVar3 + iVar10 + 0xe);
          *(int *)(*(int *)(in_stack_00000014 + DAT_002437bc) + 8) = iVar6;
        }
        for (; (cVar1 = pcVar3[iVar10 + 0xe], cVar1 != ']' && (cVar1 != ',')); iVar10 = iVar10 + 1)
        {
        }
        iVar10 = iVar10 + (uint)(cVar1 == ',');
      }
    }
    snprintf(&stack0x000001dc,0x20,(char *)(DAT_002437c4 + 0x2436f4));
    pcVar3 = strstr(in_stack_00000010,&stack0x000001dc);
    iVar10 = *(int *)(in_stack_00000014 + DAT_002437bc);
    if (pcVar3 == (char *)0x0) {
      *(undefined4 *)(iVar10 + 0xc) = 0x3f800000;
    }
    else {
      FUN_00238ef8(pcVar3 + 0xf);
      uVar13 = __truncdfsf2();
      iVar19 = __aeabi_fcmpgt(uVar13,DAT_002437c8);
      if (iVar19 != 0) {
        uVar13 = 0x3f800000;
      }
      *(undefined4 *)(iVar10 + 0xc) = uVar13;
    }
    snprintf(&stack0x000001dc,0x20,(char *)(DAT_002437cc + 0x243736));
    pcVar3 = strstr(in_stack_00000010,&stack0x000001dc);
    if (pcVar3 != (char *)0x0) {
      iVar17 = 0;
      for (iVar19 = 0; pcVar3[iVar19 + 0x10] != ']'; iVar19 = iVar19 + (uint)(cVar1 == ',')) {
        iVar17 = iVar17 + 1;
        for (; (cVar1 = pcVar3[iVar19 + 0x10], cVar1 != ']' && (cVar1 != ',')); iVar19 = iVar19 + 1)
        {
        }
      }
      iVar19 = 0;
      for (iVar6 = 0; iVar6 < iVar17; iVar6 = iVar6 + 1) {
        if (iVar6 == 0) {
          iVar5 = atoi(pcVar3 + iVar19 + 0x10);
          *(int *)(iVar10 + 0x10) = iVar5;
        }
        else if (iVar6 == 1) {
          iVar5 = atoi(pcVar3 + iVar19 + 0x10);
          *(int *)(iVar10 + 0x14) = iVar5;
        }
        for (; (cVar1 = pcVar3[iVar19 + 0x10], cVar1 != ']' && (cVar1 != ',')); iVar19 = iVar19 + 1)
        {
        }
        iVar19 = iVar19 + (uint)(cVar1 == ',');
      }
    }
    iVar19 = DAT_00243b28;
    *(undefined1 *)(iVar10 + 0x18) = 0;
    snprintf(&stack0x000001dc,0x20,(char *)(iVar19 + 0x24381c));
    pcVar3 = strstr(in_stack_00000010,&stack0x000001dc);
    if ((pcVar3 != (char *)0x0) && (iVar19 = atoi(pcVar3 + 0xe), iVar19 == 0)) {
      *(undefined1 *)(iVar10 + 0x18) = 1;
    }
  }
  puVar14 = *(undefined1 **)(in_stack_00000014 + DAT_00243b2c);
  pcVar3 = (char *)(DAT_00243b30 + 0x24384a);
  *puVar14 = 0;
  snprintf(&stack0x000001dc,0x20,pcVar3);
  pcVar3 = strstr(in_stack_00000010,&stack0x000001dc);
  if (pcVar3 != (char *)0x0) {
    snprintf(&stack0x000001dc,0x20,(char *)(DAT_00243b34 + 0x243866));
    pcVar3 = strstr(in_stack_00000010,&stack0x000001dc);
    if (pcVar3 != (char *)0x0) {
      *puVar14 = 1;
    }
  }
  iVar10 = DAT_00243b3c;
  puVar14 = *(undefined1 **)(in_stack_00000014 + DAT_00243b38);
  *puVar14 = 0;
  iVar19 = DAT_00243b40;
  piVar15 = *(int **)(in_stack_00000014 + iVar10);
  *piVar15 = 0;
  snprintf(&stack0x000001dc,0x20,(char *)(iVar19 + 0x243892));
  pcVar3 = strstr(in_stack_00000010,&stack0x000001dc);
  if (pcVar3 != (char *)0x0) {
    snprintf(&stack0x000001dc,0x20,(char *)(DAT_00243b44 + 0x2438aa));
    pcVar3 = strstr(in_stack_00000010,&stack0x000001dc);
    if (pcVar3 != (char *)0x0) {
      iVar10 = atoi(pcVar3 + 0xf);
      *piVar15 = iVar10;
      *puVar14 = 1;
    }
    snprintf(&stack0x000001dc,0x20,(char *)(DAT_00243b48 + 0x2438ce));
    pcVar3 = strstr(in_stack_00000010,&stack0x000001dc);
    if (pcVar3 == (char *)0x0) {
      **(undefined4 **)(in_stack_00000014 + DAT_00243b4c) = 0;
      **(undefined4 **)(in_stack_00000014 + DAT_00243b50) = 0;
    }
    else {
      iVar19 = 0;
      for (iVar10 = 0; pcVar3[iVar10 + 0x13] != ']'; iVar10 = iVar10 + (uint)(cVar1 == ',')) {
        iVar19 = iVar19 + 1;
        for (; (cVar1 = pcVar3[iVar10 + 0x13], cVar1 != ']' && (cVar1 != ',')); iVar10 = iVar10 + 1)
        {
        }
      }
      iVar10 = 0;
      for (iVar17 = 0; iVar17 < iVar19; iVar17 = iVar17 + 1) {
        if (iVar17 == 0) {
          iVar6 = atoi(pcVar3 + iVar10 + 0x13);
          piVar15 = *(int **)(in_stack_00000014 + DAT_00243b4c);
LAB_00243948:
          *piVar15 = iVar6;
        }
        else if (iVar17 == 1) {
          iVar6 = atoi(pcVar3 + iVar10 + 0x13);
          piVar15 = *(int **)(in_stack_00000014 + DAT_00243b50);
          goto LAB_00243948;
        }
        for (; (cVar1 = pcVar3[iVar10 + 0x13], cVar1 != ']' && (cVar1 != ',')); iVar10 = iVar10 + 1)
        {
        }
        iVar10 = iVar10 + (uint)(cVar1 == ',');
      }
    }
  }
  puVar14 = *(undefined1 **)(in_stack_00000014 + DAT_00243b54);
  pcVar3 = (char *)(DAT_00243b58 + 0x243978);
  *puVar14 = 0;
  snprintf(&stack0x000001dc,0x14,pcVar3);
  pcVar3 = strstr(in_stack_00000010,&stack0x000001dc);
  if (pcVar3 != (char *)0x0) {
    snprintf(&stack0x000001dc,0x14,(char *)(DAT_00243b5c + 0x243994));
    pcVar3 = strstr(in_stack_00000010,&stack0x000001dc);
    if (pcVar3 != (char *)0x0) {
      *puVar14 = 1;
    }
  }
  iVar10 = DAT_00243b64;
  puVar14 = *(undefined1 **)(in_stack_00000014 + DAT_00243b60);
  *puVar14 = 0;
  puVar11 = *(undefined1 **)(in_stack_00000014 + DAT_00243b68);
  *puVar11 = 0;
  iVar19 = DAT_00243b70;
  piVar15 = *(int **)(in_stack_00000014 + DAT_00243b6c);
  *piVar15 = 0;
  iVar17 = DAT_00243b74;
  piVar18 = *(int **)(in_stack_00000014 + iVar19);
  *piVar18 = 0;
  iVar19 = DAT_00243b78;
  puVar20 = *(undefined4 **)(in_stack_00000014 + iVar17);
  *puVar20 = 0;
  puVar12 = *(undefined4 **)(in_stack_00000014 + iVar19);
  *puVar12 = 0;
  snprintf(&stack0x000001dc,0x40,(char *)(iVar10 + 0x2439be));
  pcVar3 = strstr(in_stack_00000010,&stack0x000001dc);
  if (pcVar3 != (char *)0x0) {
    snprintf(&stack0x000001dc,0x40,(char *)(DAT_00243b7c + 0x243a08));
    pcVar3 = strstr(in_stack_00000010,&stack0x000001dc);
    iVar19 = DAT_00243ec0;
    iVar10 = DAT_00243b80;
    if (pcVar3 == (char *)0x0) {
      *puVar14 = 0;
      *puVar11 = 0;
      snprintf(&stack0x000001dc,0x40,(char *)(iVar19 + 0x243c90));
      pcVar3 = strstr(in_stack_00000010,&stack0x000001dc);
      if (pcVar3 != (char *)0x0) {
        iVar19 = 0;
        for (iVar10 = 0; pcVar3[iVar10 + 0x14] != ']'; iVar10 = iVar10 + (uint)(cVar1 == ',')) {
          iVar19 = iVar19 + 1;
          for (; (cVar1 = pcVar3[iVar10 + 0x14], cVar1 != ']' && (cVar1 != ','));
              iVar10 = iVar10 + 1) {
          }
        }
        iVar10 = 0;
        for (iVar17 = 0; iVar17 < iVar19; iVar17 = iVar17 + 1) {
          if (iVar17 == 0) {
            iVar6 = atoi(pcVar3 + iVar10 + 0x14);
            *piVar15 = iVar6;
          }
          else if (iVar17 == 1) {
            iVar6 = atoi(pcVar3 + iVar10 + 0x14);
            *piVar18 = iVar6;
          }
          for (; (cVar1 = pcVar3[iVar10 + 0x14], cVar1 != ']' && (cVar1 != ','));
              iVar10 = iVar10 + 1) {
          }
          iVar10 = iVar10 + (uint)(cVar1 == ',');
        }
      }
    }
    else {
      *puVar14 = 1;
      snprintf(&stack0x000001dc,0x40,(char *)(iVar10 + 0x243a26));
      pcVar3 = strstr(in_stack_00000010,&stack0x000001dc);
      if (pcVar3 != (char *)0x0) {
        iVar10 = atoi(pcVar3 + 0x12);
        pcVar3 = (char *)0x0;
        if (iVar10 != *(short *)(in_stack_00000018 + 0x358)) {
          *(short *)(in_stack_00000018 + DAT_00243b84) = *(short *)(in_stack_00000018 + 0x358);
          *(short *)(in_stack_00000018 + 0x358) = (short)iVar10;
          *(undefined2 *)(in_stack_00000018 + 0x35c) = 0;
          *(undefined2 *)(in_stack_00000018 + DAT_00243b88) = 0;
          *(undefined2 *)(in_stack_00000018 + 0x360) = 0;
          *(undefined2 *)(in_stack_00000018 + DAT_00243b8c) = 0;
          *(undefined4 *)(in_stack_00000018 + 0x368) = 0;
          in_stack_00000018[1000] = (ZombieCafe)0x1;
          uVar2 = DAT_00243b24;
          uVar13 = DAT_00243b20;
          *(undefined4 *)(in_stack_00000018 + 0x370) = DAT_00243b20;
          *(undefined4 *)(in_stack_00000018 + 0x374) = uVar2;
          *(undefined4 *)(in_stack_00000018 + 0x378) = uVar13;
          *(undefined4 *)(in_stack_00000018 + 0x37c) = uVar2;
          ZombieCafe::makeZombieFlowerPlantLottery(in_stack_00000018);
          pcVar3 = (char *)0x1;
        }
      }
      iVar10 = DAT_00243b90;
      *puVar11 = 0;
      *puVar12 = 0;
      *puVar20 = 0;
      snprintf(&stack0x000001dc,0x40,(char *)(iVar10 + 0x243ab0));
      pcVar8 = strstr(in_stack_00000010,&stack0x000001dc);
      if ((pcVar8 != (char *)0x0) && (pcVar3 != (char *)0x0)) {
        *(undefined4 *)(in_stack_00000018 + 0x380) = 0;
      }
      snprintf(&stack0x000001dc,0x40,(char *)(DAT_00243b94 + 0x243ad6));
      pcVar3 = strstr(in_stack_00000010,&stack0x000001dc);
      if (pcVar3 != (char *)0x0) {
        iVar19 = 0;
        for (iVar10 = 0; pcVar3[iVar10 + 0x17] != ']'; iVar10 = iVar10 + (uint)(cVar1 == ',')) {
          iVar19 = iVar19 + 1;
          for (; (cVar1 = pcVar3[iVar10 + 0x17], cVar1 != ']' && (cVar1 != ','));
              iVar10 = iVar10 + 1) {
          }
        }
        pZStack0000001c = in_stack_00000018;
        iVar10 = 0;
        for (iVar17 = 0; iVar17 < iVar19; iVar17 = iVar17 + 1) {
          if (iVar17 < 0x11) {
            FUN_00238ef8(pcVar3 + iVar10 + 0x17);
            uStack0000000c = __truncdfsf2();
            iVar6 = __aeabi_fcmpeq(uStack0000000c,DAT_00243eb8);
            if (iVar6 != 0) {
              uStack0000000c = 0;
            }
            *(undefined4 *)(pZStack0000001c + 0x3a4) = uStack0000000c;
          }
          for (; (cVar1 = pcVar3[iVar10 + 0x17], cVar1 != ']' && (cVar1 != ','));
              iVar10 = iVar10 + 1) {
          }
          iVar10 = iVar10 + (uint)(cVar1 == ',');
          pZStack0000001c = pZStack0000001c + 4;
        }
      }
      snprintf(&stack0x000001dc,0x40,(char *)(DAT_00243ebc + 0x243bf2));
      pcVar3 = strstr(in_stack_00000010,&stack0x000001dc);
      if (pcVar3 == (char *)0x0) {
        *piVar15 = 0;
        *piVar18 = 0;
      }
      else {
        iVar19 = 0;
        for (iVar10 = 0; pcVar3[iVar10 + 0x14] != ']'; iVar10 = iVar10 + (uint)(cVar1 == ',')) {
          iVar19 = iVar19 + 1;
          for (; (cVar1 = pcVar3[iVar10 + 0x14], cVar1 != ']' && (cVar1 != ','));
              iVar10 = iVar10 + 1) {
          }
        }
        iVar10 = 0;
        for (iVar17 = 0; iVar17 < iVar19; iVar17 = iVar17 + 1) {
          if (iVar17 == 0) {
            iVar6 = atoi(pcVar3 + iVar10 + 0x14);
            *piVar15 = iVar6;
          }
          else if (iVar17 == 1) {
            iVar6 = atoi(pcVar3 + iVar10 + 0x14);
            *piVar18 = iVar6;
          }
          for (; (cVar1 = pcVar3[iVar10 + 0x14], cVar1 != ']' && (cVar1 != ','));
              iVar10 = iVar10 + 1) {
          }
          iVar10 = iVar10 + (uint)(cVar1 == ',');
        }
      }
    }
  }
  iVar19 = DAT_00243ec8;
  iVar10 = DAT_00243ec4;
  in_stack_00000018[DAT_00243ec4] = (ZombieCafe)0x0;
  snprintf(&stack0x000001dc,0x40,(char *)(iVar19 + 0x243d28));
  pcVar3 = strstr(in_stack_00000010,&stack0x000001dc);
  if (pcVar3 != (char *)0x0) {
    snprintf(&stack0x000001dc,0x40,(char *)(DAT_00243ecc + 0x243d42));
    pcVar3 = strstr(in_stack_00000010,&stack0x000001dc);
    iVar19 = DAT_00243ed0;
    if (pcVar3 != (char *)0x0) {
      in_stack_00000018[iVar10] = (ZombieCafe)0x1;
      snprintf(&stack0x000001dc,0x40,(char *)(iVar19 + 0x243d5c));
      pcVar3 = strstr(in_stack_00000010,&stack0x000001dc);
      if (pcVar3 != (char *)0x0) {
        iVar10 = atoi(pcVar3 + 0xd);
        *(int *)(in_stack_00000018 + DAT_00243ed4) = iVar10;
      }
    }
  }
  puVar14 = *(undefined1 **)(in_stack_00000014 + DAT_00243ed8);
  pcVar3 = (char *)(DAT_00243edc + 0x243d86);
  *puVar14 = 0;
  snprintf(&stack0x000001dc,0x20,pcVar3);
  pcVar3 = strstr(in_stack_00000010,&stack0x000001dc);
  if (pcVar3 != (char *)0x0) {
    snprintf(&stack0x000001dc,0x20,(char *)(DAT_00243ee0 + 0x243da2));
    pcVar3 = strstr(in_stack_00000010,&stack0x000001dc);
    if (pcVar3 != (char *)0x0) {
      *puVar14 = 1;
    }
  }
  puVar14 = *(undefined1 **)(in_stack_00000014 + DAT_00243ee4);
  pcVar3 = (char *)(DAT_00243ee8 + 0x243dc4);
  *puVar14 = 0;
  snprintf(&stack0x000001dc,0x20,pcVar3);
  pcVar3 = strstr(in_stack_00000010,&stack0x000001dc);
  if (pcVar3 != (char *)0x0) {
    snprintf(&stack0x000001dc,0x20,(char *)(DAT_00243eec + 0x243de0));
    pcVar3 = strstr(in_stack_00000010,&stack0x000001dc);
    if (pcVar3 != (char *)0x0) {
      *puVar14 = 1;
    }
  }
  *in_stack_00000038 = 0;
  *(undefined2 *)(in_stack_00000018 + DAT_00243ef0) = 5;
  snprintf(&stack0x000001dc,0x40,(char *)(DAT_00243ef4 + 0x243e0a));
  pcVar3 = strstr(in_stack_00000010,&stack0x000001dc);
  if (pcVar3 != (char *)0x0) {
    snprintf(&stack0x000001dc,0x40,(char *)(DAT_00243ef8 + 0x243e24));
    pcVar3 = strstr(in_stack_00000010,&stack0x000001dc);
    if (pcVar3 != (char *)0x0) {
      *in_stack_00000038 = 1;
    }
    snprintf(&stack0x000001dc,0x40,(char *)(DAT_00243efc + 0x243e40));
    pcVar3 = strstr(in_stack_00000010,&stack0x000001dc);
    if (pcVar3 != (char *)0x0) {
      iVar10 = atoi(pcVar3 + 0x18);
      if (*(int *)(in_stack_00000018 + 0x2c8) != iVar10) {
        *(undefined2 *)(in_stack_00000018 + 0x2d8) = 0;
        *(undefined2 *)(in_stack_00000018 + 0x2dc) = 0;
        *(undefined4 *)(in_stack_00000018 + 0x2d0) = 0;
        *(undefined4 *)(in_stack_00000018 + 0x2d4) = 0;
        uVar13 = DAT_00243eb4;
        *(undefined4 *)(in_stack_00000018 + 0x318) = DAT_00243eb0;
        *(undefined4 *)(in_stack_00000018 + 0x31c) = uVar13;
      }
      *(int *)(in_stack_00000018 + 0x2c8) = iVar10;
    }
    snprintf(&stack0x000001dc,0x40,(char *)(DAT_00243f00 + 0x243e98));
    pcVar3 = strstr(in_stack_00000010,&stack0x000001dc);
    if (pcVar3 == (char *)0x0) {
      *(undefined4 *)(in_stack_00000018 + 0x2cc) = 0;
    }
    else {
      iVar10 = atoi(pcVar3 + 0x16);
      *(int *)(in_stack_00000018 + 0x2cc) = iVar10;
    }
    snprintf(&stack0x000001dc,0x40,(char *)(DAT_00244210 + 0x243f18));
    pcVar3 = strstr(in_stack_00000010,&stack0x000001dc);
    if (pcVar3 != (char *)0x0) {
      iVar19 = 0;
      for (iVar10 = 0; pcVar3[iVar10 + 0x15] != ']'; iVar10 = iVar10 + (uint)(cVar1 == ',')) {
        iVar19 = iVar19 + 1;
        for (; (cVar1 = pcVar3[iVar10 + 0x15], cVar1 != ']' && (cVar1 != ',')); iVar10 = iVar10 + 1)
        {
        }
      }
      iVar10 = 0;
      for (iVar17 = 0; iVar17 < iVar19; iVar17 = iVar17 + 1) {
        if (iVar17 == 1) {
          iVar6 = atoi(pcVar3 + iVar10 + 0x15);
          *(int *)(*(int *)(in_stack_00000014 + DAT_00244214) + 4) = iVar6;
        }
        else if (iVar17 == 2) {
          iVar6 = atoi(pcVar3 + iVar10 + 0x15);
          *(int *)(*(int *)(in_stack_00000014 + DAT_00244214) + 8) = iVar6;
        }
        else if (iVar17 == 0) {
          iVar6 = atoi(pcVar3 + iVar10 + 0x15);
          **(int **)(in_stack_00000014 + DAT_00244214) = iVar6;
        }
        for (; (cVar1 = pcVar3[iVar10 + 0x15], cVar1 != ']' && (cVar1 != ',')); iVar10 = iVar10 + 1)
        {
        }
        iVar10 = iVar10 + (uint)(cVar1 == ',');
      }
    }
  }
  iVar10 = DAT_00244218;
  *in_stack_0000003c = 0;
  *in_stack_00000040 = 0;
  snprintf(&stack0x000001dc,0x20,(char *)(iVar10 + 0x243fc6));
  pcVar3 = strstr(in_stack_00000010,&stack0x000001dc);
  if (pcVar3 != (char *)0x0) {
    snprintf(&stack0x000001dc,0x20,(char *)(DAT_0024421c + 0x243fe0));
    pcVar3 = strstr(in_stack_00000010,&stack0x000001dc);
    iVar10 = DAT_00244220;
    if (pcVar3 != (char *)0x0) {
      *in_stack_0000003c = 1;
      snprintf(&stack0x000001dc,0x20,(char *)(iVar10 + 0x243ffc));
      pcVar3 = strstr(in_stack_00000010,&stack0x000001dc);
      if (pcVar3 != (char *)0x0) {
        *in_stack_00000040 = 1;
      }
    }
  }
  puVar14 = *(undefined1 **)(in_stack_00000014 + DAT_00244224);
  pcVar3 = (char *)(DAT_00244228 + 0x24401e);
  *puVar14 = 0;
  snprintf(&stack0x000001dc,0x20,pcVar3);
  pcVar3 = strstr(in_stack_00000010,&stack0x000001dc);
  if (pcVar3 != (char *)0x0) {
    snprintf(&stack0x000001dc,0x20,(char *)(DAT_0024422c + 0x24403a));
    pcVar3 = strstr(in_stack_00000010,&stack0x000001dc);
    if (pcVar3 != (char *)0x0) {
      *puVar14 = 1;
    }
  }
  snprintf(&stack0x000001dc,0x20,(char *)(DAT_00244230 + 0x244056));
  pcVar3 = strstr(in_stack_00000010,&stack0x000001dc);
  if (pcVar3 != (char *)0x0) {
    snprintf(&stack0x000001dc,0x20,(char *)(DAT_00244234 + 0x24406e));
    pcVar3 = strstr(in_stack_00000010,&stack0x000001dc);
    piVar15 = *(int **)(in_stack_00000014 + DAT_00244238);
    if (pcVar3 != (char *)0x0) {
      iVar10 = atoi(pcVar3 + 0xc);
      *piVar15 = iVar10;
    }
    snprintf(&stack0x000001dc,0x20,(char *)(DAT_0024423c + 0x244094));
    pcVar3 = strstr(in_stack_00000010,&stack0x000001dc);
    if (pcVar3 != (char *)0x0) {
      iVar10 = atoi(pcVar3 + 0xc);
      piVar15[1] = iVar10;
    }
    snprintf(&stack0x000001dc,0x20,(char *)(DAT_00244240 + 0x2440b4));
    pcVar3 = strstr(in_stack_00000010,&stack0x000001dc);
    if (pcVar3 != (char *)0x0) {
      iVar10 = atoi(pcVar3 + 0xc);
      piVar15[2] = iVar10;
    }
    snprintf(&stack0x000001dc,0x20,(char *)(DAT_00244244 + 0x2440d4));
    pcVar3 = strstr(in_stack_00000010,&stack0x000001dc);
    if (pcVar3 == (char *)0x0) {
      *(undefined1 *)((int)piVar15 + 0xd) = 0;
    }
    else {
      *(undefined1 *)((int)piVar15 + 0xd) = 1;
    }
  }
  snprintf(&stack0x000001dc,0x20,(char *)(DAT_00244248 + 0x2440f4));
  pcVar3 = strstr(in_stack_00000010,&stack0x000001dc);
  if (pcVar3 != (char *)0x0) {
    snprintf(&stack0x000001dc,0x20,(char *)(DAT_0024424c + 0x24410e));
    pcVar3 = strstr(in_stack_00000010,&stack0x000001dc);
    pcVar8 = (char *)(DAT_00244254 + 0x24412a);
    **(char **)(in_stack_00000014 + DAT_00244250) = '\x01' - (pcVar3 == (char *)0x0);
    snprintf(&stack0x000001dc,0x20,pcVar8);
    pcVar3 = strstr(in_stack_00000010,&stack0x000001dc);
    if (pcVar3 != (char *)0x0) {
      iVar10 = atoi(pcVar3 + 0x16);
      **(int **)(in_stack_00000014 + DAT_00244258) = iVar10;
      **(int **)(in_stack_00000014 + DAT_0024425c) = iVar10;
      **(int **)(in_stack_00000014 + DAT_00244260) = iVar10;
    }
    snprintf(&stack0x000001dc,0x20,(char *)(DAT_00244264 + 0x24415e));
    pcVar3 = strstr(in_stack_00000010,&stack0x000001dc);
    if (pcVar3 != (char *)0x0) {
      sVar16 = 0;
      do {
        if (pcVar3[sVar16 + 0x12] == ']') break;
        sVar16 = sVar16 + 1;
      } while (sVar16 != 0x1f);
      pcVar8 = *(char **)(in_stack_00000014 + DAT_00244268);
      memset(pcVar8,0,0x20);
      strncpy(pcVar8,pcVar3 + 0x12,sVar16);
      pcVar8[0x1f] = '\0';
    }
    snprintf(&stack0x000001dc,0x20,(char *)(DAT_0024426c + 0x2441aa));
    pcVar3 = strstr(in_stack_00000010,&stack0x000001dc);
    if (pcVar3 != (char *)0x0) {
      for (sVar16 = 0; pcVar3[sVar16 + 0x12] != ']'; sVar16 = sVar16 + 1) {
      }
      if (0x1e < (int)sVar16) {
        sVar16 = 0x1f;
      }
      pcVar8 = *(char **)(in_stack_00000014 + DAT_00244270);
      memset(pcVar8,0,0x20);
      strncpy(pcVar8,pcVar3 + 0x12,sVar16);
      pcVar8[0x1f] = '\0';
    }
    snprintf(&stack0x000001dc,0x20,(char *)(DAT_00244274 + 0x2441f8));
    pcVar3 = strstr(in_stack_00000010,&stack0x000001dc);
    if (pcVar3 != (char *)0x0) {
      for (sVar16 = 0; pcVar3[sVar16 + 0x13] != ']'; sVar16 = sVar16 + 1) {
      }
      if (0x1e < (int)sVar16) {
        sVar16 = 0x1f;
      }
      pcVar8 = *(char **)(in_stack_00000014 + DAT_002445a4);
      memset(pcVar8,0,0x20);
      strncpy(pcVar8,pcVar3 + 0x13,sVar16);
      pcVar8[0x1f] = '\0';
    }
    snprintf(&stack0x000001dc,0x20,(char *)(DAT_002445a8 + 0x2442b0));
    pcVar3 = strstr(in_stack_00000010,&stack0x000001dc);
    if (pcVar3 != (char *)0x0) {
      for (sVar16 = 0; pcVar3[sVar16 + 0xd] != ']'; sVar16 = sVar16 + 1) {
      }
      if (0x1e < (int)sVar16) {
        sVar16 = 0x1f;
      }
      pcVar8 = *(char **)(in_stack_00000014 + DAT_002445ac);
      memset(pcVar8,0,0x20);
      strncpy(pcVar8,pcVar3 + 0xd,sVar16);
      pcVar8[0x1f] = '\0';
    }
    snprintf(&stack0x000001dc,0x20,(char *)(DAT_002445b0 + 0x2442fe));
    pcVar3 = strstr(in_stack_00000010,&stack0x000001dc);
    if (pcVar3 != (char *)0x0) {
      for (sVar16 = 0; pcVar3[sVar16 + 0xf] != ']'; sVar16 = sVar16 + 1) {
      }
      if (0x1e < (int)sVar16) {
        sVar16 = 0x1f;
      }
      pcVar8 = *(char **)(in_stack_00000014 + DAT_002445b4);
      memset(pcVar8,0,0x20);
      strncpy(pcVar8,pcVar3 + 0xf,sVar16);
      pcVar8[0x1f] = '\0';
    }
    snprintf(&stack0x000001dc,0x20,(char *)(DAT_002445b8 + 0x24434c));
    pcVar3 = strstr(in_stack_00000010,&stack0x000001dc);
    if (pcVar3 == (char *)0x0) {
      **(undefined1 **)(in_stack_00000014 + DAT_002445bc) = 0;
    }
    else {
      **(undefined1 **)(in_stack_00000014 + DAT_002445bc) = 1;
      if (**(int **)(in_stack_00000014 + DAT_002445c0) != *(int *)(in_stack_00000018 + DAT_002445c4)
         ) {
        *(int *)(in_stack_00000018 + DAT_002445c4) = **(int **)(in_stack_00000014 + DAT_002445c0);
        in_stack_00000018[DAT_002445c8] = (ZombieCafe)0x0;
      }
    }
    pcVar8 = *(char **)(in_stack_00000014 + DAT_002445cc);
    pcVar3 = (char *)(DAT_002445d0 + 0x244390);
    *pcVar8 = '\0';
    snprintf(&stack0x000001dc,0x20,pcVar3);
    pcVar3 = strstr(in_stack_00000010,&stack0x000001dc);
    iVar10 = DAT_002445d4;
    *pcVar8 = '\x01' - (pcVar3 == (char *)0x0);
    snprintf(&stack0x000001dc,0x20,(char *)(iVar10 + 0x2443ae));
    pcVar3 = strstr(in_stack_00000010,&stack0x000001dc);
    if ((pcVar3 != (char *)0x0) &&
       (uVar7 = atoi(pcVar3 + 0x13), *(uint *)(in_stack_00000018 + DAT_002445d8) < uVar7)) {
      *(uint *)(in_stack_00000018 + DAT_002445d8) = uVar7;
      in_stack_00000018[DAT_002445dc] = (ZombieCafe)0x0;
    }
    snprintf(&stack0x000001dc,0x20,(char *)(DAT_002445e0 + 0x2443de));
    pcVar3 = strstr(in_stack_00000010,&stack0x000001dc);
    pcVar8 = (char *)(DAT_002445e8 + 0x2443fa);
    **(char **)(in_stack_00000014 + DAT_002445e4) = '\x01' - (pcVar3 == (char *)0x0);
    snprintf(&stack0x000001dc,0x20,pcVar8);
    pcVar3 = strstr(in_stack_00000010,&stack0x000001dc);
    pcVar8 = (char *)(DAT_002445f0 + 0x244418);
    **(char **)(in_stack_00000014 + DAT_002445ec) = '\x01' - (pcVar3 == (char *)0x0);
    snprintf(&stack0x000001dc,0x20,pcVar8);
    pcVar3 = strstr(in_stack_00000010,&stack0x000001dc);
    if (pcVar3 != (char *)0x0) {
      for (sVar16 = 0; pcVar3[sVar16 + 0x13] != ']'; sVar16 = sVar16 + 1) {
      }
      if (0x1e < (int)sVar16) {
        sVar16 = 0x1f;
      }
      pcVar8 = *(char **)(in_stack_00000014 + DAT_002445f4);
      memset(pcVar8,0,0x20);
      strncpy(pcVar8,pcVar3 + 0x13,sVar16);
      pcVar8[0x1f] = '\0';
    }
  }
  iVar10 = DAT_00244600;
  L_PrintLog((char *)(DAT_002445f8 + 0x24446a),(char *)(DAT_002445fc + 0x24446c));
  iVar19 = 0;
  do {
    pcVar3 = (char *)(DAT_00244604 + 0x244480);
    snprintf(&stack0x000000dc,0x100,(char *)(iVar10 + 0x244476),iVar19);
    L_PrintLog(pcVar3,&stack0x000000dc);
    snprintf(&stack0x000000dc,0x100,(char *)(DAT_0024460c + 0x24449c),
             (uint)*(byte *)(*(int *)(in_stack_00000014 + DAT_00244608) + iVar19));
    L_PrintLog(pcVar3,&stack0x000000dc);
    iVar17 = 0;
    do {
      if (*(int *)(in_stack_00000050 + iVar17) != 0) {
        snprintf(&stack0x000000dc,0x100,(char *)(DAT_00244610 + 0x2444c4));
        L_PrintLog((char *)(DAT_00244614 + 0x2444d6),&stack0x000000dc);
      }
      iVar17 = iVar17 + 4;
    } while (iVar17 != 0x2a8);
    iVar19 = iVar19 + 1;
    in_stack_00000050 = in_stack_00000050 + 0x2a8;
  } while (iVar19 != 0x12);
  pcVar3 = (char *)(DAT_0024461c + 0x2444fc);
  snprintf(&stack0x000000dc,0x100,(char *)(DAT_00244618 + 0x2444f8),(uint)*in_stack_00000034);
  L_PrintLog(pcVar3,&stack0x000000dc);
  snprintf(&stack0x000000dc,0x100,(char *)(DAT_00244624 + 0x244516),
           **(undefined4 **)(in_stack_00000014 + DAT_00244620));
  L_PrintLog(pcVar3,&stack0x000000dc);
  snprintf(&stack0x000000dc,0x100,(char *)(DAT_0024462c + 0x244532),
           **(undefined4 **)(in_stack_00000014 + DAT_00244628));
  L_PrintLog(pcVar3,&stack0x000000dc);
  puVar12 = *(undefined4 **)(in_stack_00000014 + DAT_00244630);
  puVar20 = puVar12 + 10;
  pcVar3 = (char *)(DAT_00244634 + 0x244550);
  do {
    uVar13 = *puVar12;
    puVar12 = puVar12 + 1;
    snprintf(&stack0x000000dc,0x100,pcVar3,uVar13);
    L_PrintLog((char *)(DAT_00244638 + 0x244564),&stack0x000000dc);
  } while (puVar12 != puVar20);
  **(undefined1 **)(in_stack_00000014 + DAT_0024463c) = 1;
  **(undefined1 **)(in_stack_00000014 + DAT_00244640) = 1;
  FUN_0024458c();
  return;
}


