/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00242a36 FUN_00242a36 */

void FUN_00242a36(void)

{
  char cVar1;
  undefined4 uVar2;
  char *pcVar3;
  int iVar4;
  int iVar5;
  size_t sVar6;
  long lVar7;
  int iVar8;
  int iVar9;
  bool bVar10;
  int extraout_r1;
  char *pcVar11;
  uint uVar12;
  int iVar13;
  undefined1 *puVar14;
  undefined4 *puVar15;
  undefined4 uVar16;
  byte *pbVar17;
  char *pcVar18;
  int *piVar19;
  undefined1 *puVar20;
  int *piVar21;
  int *piVar22;
  int iVar23;
  int iVar24;
  undefined4 *puVar25;
  int iStack0000000c;
  char *in_stack_00000010;
  int in_stack_00000014;
  ZombieCafe *in_stack_00000018;
  ZombieCafe *pZStack0000001c;
  undefined1 *in_stack_0000002c;
  undefined1 *in_stack_00000034;
  undefined1 *in_stack_00000038;
  undefined1 *in_stack_0000003c;
  undefined1 *in_stack_00000040;
  int in_stack_00000050;
  int in_stack_00000074;
  undefined1 *in_stack_00000078;
  undefined1 *in_stack_0000007c;
  undefined1 *in_stack_0000008c;
  char *in_stack_00000094;
  char in_stack_00000098;
  
  iVar5 = DAT_00242d44;
  *in_stack_0000008c = 0;
  snprintf(&stack0x000001dc,0x14,(char *)(iVar5 + 0x242a44));
  pcVar3 = strstr(in_stack_00000010,&stack0x000001dc);
  if (pcVar3 != (char *)0x0) {
    snprintf(&stack0x000001dc,0x14,(char *)(DAT_00242d48 + 0x242a5e));
    pcVar3 = strstr(in_stack_00000010,&stack0x000001dc);
    if (pcVar3 == (char *)0x0) {
      *in_stack_00000034 = 0;
    }
    else {
      *in_stack_00000034 = 1;
    }
  }
  snprintf(&stack0x000001dc,0x14,(char *)(DAT_00242d4c + 0x242a82));
  pcVar3 = strstr(in_stack_00000010,&stack0x000001dc);
  pbVar17 = *(byte **)(in_stack_00000014 + DAT_00242d50);
  pcVar11 = (char *)(DAT_00242d54 + 0x242a9e);
  *pbVar17 = 1 - (pcVar3 == (char *)0x0);
  snprintf(&stack0x000001dc,0x14,pcVar11);
  pcVar3 = strstr(in_stack_00000010,&stack0x000001dc);
  if (pcVar3 != (char *)0x0) {
    iVar24 = 0;
    for (iVar5 = 0; pcVar3[iVar5 + 0xd] != ']'; iVar5 = iVar5 + (uint)(cVar1 == ',')) {
      iVar24 = iVar24 + 1;
      for (; (cVar1 = pcVar3[iVar5 + 0xd], cVar1 != ']' && (cVar1 != ',')); iVar5 = iVar5 + 1) {
      }
    }
    iVar5 = 0;
    for (iVar4 = 0; iVar4 < iVar24; iVar4 = iVar4 + 1) {
      iVar23 = atoi(pcVar3 + iVar5 + 0xd);
      *(int *)(*(int *)(in_stack_00000014 + DAT_00242d58) + iVar4 * 4) = iVar23;
      for (; (cVar1 = pcVar3[iVar5 + 0xd], cVar1 != ']' && (cVar1 != ',')); iVar5 = iVar5 + 1) {
      }
      iVar5 = iVar5 + (uint)(cVar1 == ',');
    }
    snprintf(&stack0x000001dc,0x14,(char *)(DAT_00242d5c + 0x242b24),0);
    pcVar3 = strstr(in_stack_00000010,&stack0x000001dc);
    if (pcVar3 != (char *)0x0) {
      iVar24 = 0;
      for (iVar5 = 0; (pcVar3 + 9)[iVar5] != ']'; iVar5 = iVar5 + (uint)(cVar1 == ',')) {
        iVar24 = iVar24 + 1;
        for (; (cVar1 = pcVar3[iVar5 + 9], cVar1 != ']' && (cVar1 != ',')); iVar5 = iVar5 + 1) {
        }
      }
      sVar6 = 0;
      for (iVar5 = 0; iVar5 < iVar24; iVar5 = iVar5 + 1) {
        for (; (cVar1 = pcVar3[sVar6 + 9], cVar1 != ']' && (cVar1 != ',')); sVar6 = sVar6 + 1) {
        }
        sVar6 = sVar6 + (cVar1 == ',');
        if (99 < (int)sVar6) break;
        pcVar11 = *(char **)(in_stack_00000014 + DAT_00242d60);
        strncpy(pcVar11,pcVar3 + 9,sVar6);
        **(undefined4 **)(in_stack_00000014 + DAT_00242d64) = pcVar11;
      }
      snprintf(&stack0x000001dc,0x14,(char *)(DAT_00242d68 + 0x242bb0),0);
      pcVar3 = strstr(in_stack_00000010,&stack0x000001dc);
      if (pcVar3 != (char *)0x0) {
        iVar24 = 0;
        for (iVar5 = 0; (pcVar3 + 9)[iVar5] != ']'; iVar5 = iVar5 + (uint)(cVar1 == ',')) {
          iVar24 = iVar24 + 1;
          for (; (cVar1 = pcVar3[iVar5 + 9], cVar1 != ']' && (cVar1 != ',')); iVar5 = iVar5 + 1) {
          }
        }
        iVar5 = 0;
        pcVar11 = *(char **)(in_stack_00000014 + DAT_00242d6c);
        do {
          pcVar18 = pcVar11 + iVar5;
          iVar5 = iVar5 + 1;
          *pcVar18 = '\0';
        } while (iVar5 != 0x400);
        sVar6 = 0;
        for (iVar5 = 0; iVar5 < iVar24; iVar5 = iVar5 + 1) {
          for (; (cVar1 = pcVar3[sVar6 + 9], cVar1 != ']' && (cVar1 != ',')); sVar6 = sVar6 + 1) {
          }
          sVar6 = sVar6 + (cVar1 == ',');
          if (DAT_00242d70 < (int)sVar6) break;
          strncpy(pcVar11,pcVar3 + 9,sVar6);
          **(undefined4 **)(in_stack_00000014 + DAT_00242d74) = pcVar11;
        }
      }
    }
  }
  iVar4 = CapcomApp::getInstance();
  iVar24 = DAT_00242d7c;
  iVar5 = DAT_00242d78;
  iVar4 = *(int *)(iVar4 + 4);
  *(undefined4 *)(iVar4 + DAT_00242d78) = 0x42;
  if (((**(byte **)(in_stack_00000014 + iVar24) < 0x43) && (*(int *)(iVar4 + 0x680) < 0x43)) &&
     (0x41 < **(int **)(in_stack_00000014 + DAT_00242d80))) {
    **(byte **)(in_stack_00000014 + iVar24) = 0x42;
  }
  else {
    *(undefined4 *)(iVar4 + iVar5) = 0xffffffff;
  }
  snprintf(&stack0x000001dc,0x20,(char *)(DAT_00242d84 + 0x242c86));
  pcVar3 = strstr(in_stack_00000010,&stack0x000001dc);
  if (pcVar3 != (char *)0x0) {
    snprintf(&stack0x000001dc,0x20,(char *)(DAT_00242d88 + 0x242ca0));
    pcVar3 = strstr(in_stack_00000010,&stack0x000001dc);
    if (pcVar3 != (char *)0x0) {
      pcVar3 = (char *)atoi(pcVar3 + 0xe);
    }
    snprintf(&stack0x000001dc,0x20,(char *)(DAT_00242d8c + 0x242cc0));
    pcVar11 = strstr(in_stack_00000010,&stack0x000001dc);
    if (pcVar11 == (char *)0x0) {
      **(undefined4 **)(in_stack_00000014 + DAT_00242d90) = 0;
      **(undefined4 **)(in_stack_00000014 + DAT_00242d94) = 0;
    }
    else {
      iStack0000000c = 0;
      for (iVar5 = 0; pcVar11[iVar5 + 0x15] != ']'; iVar5 = iVar5 + (uint)(cVar1 == ',')) {
        iStack0000000c = iStack0000000c + 1;
        for (; (cVar1 = pcVar11[iVar5 + 0x15], cVar1 != ']' && (cVar1 != ',')); iVar5 = iVar5 + 1) {
        }
      }
      iVar5 = 0;
      for (iVar24 = 0; iVar24 < iStack0000000c; iVar24 = iVar24 + 1) {
        if (iVar24 == 0) {
          iVar4 = atoi(pcVar11 + iVar5 + 0x15);
          piVar19 = *(int **)(in_stack_00000014 + DAT_00242d90);
LAB_00242d40:
          *piVar19 = iVar4;
        }
        else if (iVar24 == 1) {
          iVar4 = atoi(pcVar11 + iVar5 + 0x15);
          piVar19 = *(int **)(in_stack_00000014 + DAT_00242d94);
          goto LAB_00242d40;
        }
        for (; (cVar1 = pcVar11[iVar5 + 0x15], cVar1 != ']' && (cVar1 != ',')); iVar5 = iVar5 + 1) {
        }
        iVar5 = iVar5 + (uint)(cVar1 == ',');
      }
    }
    if (*(short *)(in_stack_00000018 + DAT_0024309c) == 0) {
      if (pcVar3 != (char *)0x0) {
        *(short *)(in_stack_00000018 + DAT_0024309c) = (short)pcVar3;
        *(undefined2 *)(in_stack_00000018 + DAT_002430a0) = 0;
      }
    }
    else if ((char *)(int)*(short *)(in_stack_00000018 + DAT_0024309c) != pcVar3) {
      *(short *)(in_stack_00000018 + DAT_0024309c) = (short)pcVar3;
      *(undefined2 *)(in_stack_00000018 + DAT_002430a0) = 0;
    }
  }
  iVar24 = DAT_002430ac;
  iVar5 = DAT_002430a8;
  iVar23 = 0;
  piVar19 = *(int **)(in_stack_00000014 + DAT_002430a4);
  *piVar19 = 0;
  iVar4 = DAT_002430b0;
  piVar21 = *(int **)(in_stack_00000014 + iVar24);
  *piVar21 = 0;
  piVar22 = *(int **)(in_stack_00000014 + iVar4);
  *piVar22 = -1;
  snprintf(&stack0x000001dc,0x20,(char *)(iVar5 + 0x242dfc));
  pcVar3 = strstr(in_stack_00000010,&stack0x000001dc);
  if (pcVar3 != (char *)0x0) {
    snprintf(&stack0x000001dc,0x20,(char *)(DAT_002430b4 + 0x242e20));
    pcVar3 = strstr(in_stack_00000010,&stack0x000001dc);
    if (pcVar3 == (char *)0x0) {
      *piVar19 = 0;
      *piVar21 = 0;
    }
    else {
      for (iVar5 = 0; pcVar3[iVar5 + 0x16] != ']'; iVar5 = iVar5 + (uint)(cVar1 == ',')) {
        iVar23 = iVar23 + 1;
        for (; (cVar1 = pcVar3[iVar5 + 0x16], cVar1 != ']' && (cVar1 != ',')); iVar5 = iVar5 + 1) {
        }
      }
      iVar5 = 0;
      for (iVar24 = 0; iVar24 < iVar23; iVar24 = iVar24 + 1) {
        if (iVar24 == 0) {
          iVar4 = atoi(pcVar3 + iVar5 + 0x16);
          *piVar19 = iVar4;
        }
        else if (iVar24 == 1) {
          iVar4 = atoi(pcVar3 + iVar5 + 0x16);
          *piVar21 = iVar4;
        }
        for (; (cVar1 = pcVar3[iVar5 + 0x16], cVar1 != ']' && (cVar1 != ',')); iVar5 = iVar5 + 1) {
        }
        iVar5 = iVar5 + (uint)(cVar1 == ',');
      }
    }
    snprintf(&stack0x000001dc,0x20,(char *)(DAT_002430b8 + 0x242eb4));
    pcVar3 = strstr(in_stack_00000010,&stack0x000001dc);
    if (pcVar3 != (char *)0x0) {
      iVar5 = atoi(pcVar3 + 0xe);
      *piVar22 = iVar5;
    }
  }
  snprintf(&stack0x000000a8,0x14,(char *)(DAT_002430bc + 0x242ed6));
  pcVar3 = strstr(in_stack_00000010,&stack0x000000a8);
  if (pcVar3 != (char *)0x0) {
    snprintf(&stack0x000000bc,0x14,(char *)(DAT_002430c0 + 0x242eee));
    pcVar3 = strstr(in_stack_00000010,&stack0x000000bc);
    if (pcVar3 != (char *)0x0) {
      sVar6 = strlen(&stack0x000000bc);
      pcVar3 = pcVar3 + sVar6;
      if (pcVar3 != (char *)0x0) {
        memset(&stack0x00000098,0,0x10);
        uVar12 = 0;
        bVar10 = false;
        do {
          cVar1 = *pcVar3;
          if (cVar1 == '\0') {
            FUN_00242f94();
            return;
          }
          if (bVar10) {
            if (0xf < uVar12) {
              memset(&stack0x00000098,0,0x10);
              FUN_00242f94();
              return;
            }
            if (cVar1 == ']') {
              (&stack0x00000098)[uVar12] = '\0';
              if (in_stack_00000098 != '\0') {
                in_stack_00000094 = (char *)0x0;
                lVar7 = strtol(&stack0x00000098,&stack0x00000094,10);
                snprintf(&stack0x000001dc,0x80,(char *)(DAT_002430c8 + 0x242f6a),lVar7);
                L_PrintLog((char *)(DAT_002430cc + 0x242f7e),&stack0x000001dc);
                if ((in_stack_00000094 != (char *)0x0) &&
                   (piVar19 = (int *)__errno(), *piVar19 != 0x22)) {
                  FUN_0024457c();
                }
              }
              break;
            }
            (&stack0x00000098)[uVar12] = cVar1;
            uVar12 = uVar12 + 1;
LAB_00242f46:
            bVar10 = true;
          }
          else if (cVar1 == '[') goto LAB_00242f46;
          pcVar3 = pcVar3 + 1;
        } while( true );
      }
    }
  }
  iVar5 = DAT_002430d0;
  *in_stack_00000078 = 0;
  snprintf(&stack0x000001dc,0x14,(char *)(iVar5 + 0x242fa2));
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
      iVar5 = atoi(pcVar3 + 0x10);
      *(int *)(in_stack_00000018 + 0x340) = iVar5;
    }
    snprintf(&stack0x000001dc,0x20,(char *)(DAT_002430e0 + 0x243018));
    pcVar3 = strstr(in_stack_00000010,&stack0x000001dc);
    if (pcVar3 != (char *)0x0) {
      iVar24 = 0;
      for (iVar5 = 0; pcVar3[iVar5 + 0x10] != ']'; iVar5 = iVar5 + (uint)(cVar1 == ',')) {
        iVar24 = iVar24 + 1;
        for (; (cVar1 = pcVar3[iVar5 + 0x10], cVar1 != ']' && (cVar1 != ',')); iVar5 = iVar5 + 1) {
        }
      }
      iVar23 = *(int *)(in_stack_00000018 + 0x348);
      iVar5 = *(int *)(in_stack_00000018 + 0x344);
      iVar4 = 0;
      for (iVar9 = 0; iVar9 < iVar24; iVar9 = iVar9 + 1) {
        if (iVar9 == 0) {
          iVar8 = atoi(pcVar3 + iVar4 + 0x10);
          iVar13 = 0xd1;
LAB_00243094:
          *(int *)(in_stack_00000018 + iVar13 * 4) = iVar8;
        }
        else if (iVar9 == 1) {
          iVar8 = atoi(pcVar3 + iVar4 + 0x10);
          iVar13 = 0xd2;
          goto LAB_00243094;
        }
        for (; (cVar1 = pcVar3[iVar4 + 0x10], cVar1 != ']' && (cVar1 != ',')); iVar4 = iVar4 + 1) {
        }
        iVar4 = iVar4 + (uint)(cVar1 == ',');
      }
      if ((iVar5 != *(int *)(in_stack_00000018 + 0x344)) ||
         (iVar23 != *(int *)(in_stack_00000018 + 0x348))) {
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
      iVar24 = 0;
      for (iVar5 = 0; pcVar3[iVar5 + 0xd] != ']'; iVar5 = iVar5 + (uint)(cVar1 == ',')) {
        iVar24 = iVar24 + 1;
        for (; (cVar1 = pcVar3[iVar5 + 0xd], cVar1 != ']' && (cVar1 != ',')); iVar5 = iVar5 + 1) {
        }
      }
      if (0x3c < iVar24) {
        iVar24 = 0x3c;
      }
      iVar4 = 0;
      for (iVar5 = 0; iVar5 < iVar24; iVar5 = iVar5 + 1) {
        if (iVar5 << 0x1f < 0) {
          iVar23 = atoi(pcVar3 + iVar4 + 0xd);
          *(int *)(in_stack_00000074 + (iVar5 >> 1) * 8 + 4) = iVar23;
        }
        else {
          iVar23 = atoi(pcVar3 + iVar4 + 0xd);
          *(int *)(in_stack_00000074 + (iVar5 >> 1) * 8) = iVar23;
        }
        for (; (cVar1 = pcVar3[iVar4 + 0xd], cVar1 != ']' && (cVar1 != ',')); iVar4 = iVar4 + 1) {
        }
        iVar4 = iVar4 + (uint)(cVar1 == ',');
      }
    }
  }
  iVar5 = DAT_00243430;
  *in_stack_0000007c = 0;
  snprintf(&stack0x000000bc,0x20,(char *)(iVar5 + 0x24320a));
  pcVar3 = strstr(in_stack_00000010,&stack0x000000bc);
  if (pcVar3 != (char *)0x0) {
    snprintf(&stack0x000000bc,0x20,(char *)(DAT_00243434 + 0x243226));
    pcVar3 = strstr(in_stack_00000010,&stack0x000000bc);
    if (pcVar3 != (char *)0x0) {
      *in_stack_0000007c = 1;
    }
    snprintf(&stack0x000000bc,0x20,(char *)(DAT_00243438 + 0x243242));
    pcVar3 = strstr(in_stack_00000010,&stack0x000000bc);
    if ((pcVar3 != (char *)0x0) && (iVar5 = atoi(pcVar3 + 0x10), iVar5 != 0)) {
      if (*(int *)(in_stack_00000018 + 0xe0) != iVar5) {
        *(undefined2 *)(in_stack_00000018 + 0xf0) = 0;
        *(undefined2 *)(in_stack_00000018 + 0xf4) = 0;
        *(undefined4 *)(in_stack_00000018 + 0xe8) = 0;
        *(undefined4 *)(in_stack_00000018 + 0xec) = 0;
        uVar16 = DAT_0024341c;
        *(undefined4 *)(in_stack_00000018 + 0x138) = DAT_00243418;
        *(undefined4 *)(in_stack_00000018 + 0x13c) = uVar16;
        ZombieCafe::initEventRaid_attackPoint(in_stack_00000018);
      }
      *(int *)(in_stack_00000018 + 0xe0) = iVar5;
    }
    snprintf(&stack0x000000bc,0x20,(char *)(DAT_0024343c + 0x2432a0));
    pcVar3 = strstr(in_stack_00000010,&stack0x000000bc);
    if (pcVar3 != (char *)0x0) {
      iVar24 = 0;
      for (iVar5 = 0; pcVar3[iVar5 + 0x10] != ']'; iVar5 = iVar5 + (uint)(cVar1 == ',')) {
        iVar24 = iVar24 + 1;
        for (; (cVar1 = pcVar3[iVar5 + 0x10], cVar1 != ']' && (cVar1 != ',')); iVar5 = iVar5 + 1) {
        }
      }
      iVar5 = 0;
      for (iVar4 = 0; iVar4 < iVar24; iVar4 = iVar4 + 1) {
        if (iVar4 == 0) {
          iVar23 = atoi(pcVar3 + iVar5 + 0x10);
          *(int *)(in_stack_00000018 + 0xe4) = iVar23;
        }
        else if (iVar4 == 1) {
          iVar23 = atoi(pcVar3 + iVar5 + 0x10);
          *(short *)(in_stack_00000018 + 0xf2) = (short)iVar23;
        }
        for (; (cVar1 = pcVar3[iVar5 + 0x10], cVar1 != ']' && (cVar1 != ',')); iVar5 = iVar5 + 1) {
        }
        iVar5 = iVar5 + (uint)(cVar1 == ',');
      }
    }
    snprintf(&stack0x000000bc,0x20,(char *)(DAT_00243440 + 0x243332));
    pcVar3 = strstr(in_stack_00000010,&stack0x000000bc);
    uVar16 = DAT_00243448;
    if (pcVar3 != (char *)0x0) {
      pZStack0000001c = (ZombieCafe *)0x0;
      for (iVar5 = 0; pcVar3[iVar5 + 0xd] != ']'; iVar5 = iVar5 + (uint)(cVar1 == ',')) {
        pZStack0000001c = (ZombieCafe *)((int)pZStack0000001c + 1);
        for (; (cVar1 = pcVar3[iVar5 + 0xd], cVar1 != ']' && (cVar1 != ',')); iVar5 = iVar5 + 1) {
        }
      }
      iVar24 = 0;
      iVar5 = *(int *)(in_stack_00000014 + DAT_00243444);
      do {
        iVar4 = iVar24 + iVar5;
        iVar24 = iVar24 + 4;
        *(undefined4 *)(iVar4 + 8) = 0xffffffff;
        *(undefined4 *)(iVar4 + 0x38) = 0;
        *(undefined4 *)(iVar4 + 0x50) = 0;
        *(undefined4 *)(iVar4 + 0x20) = uVar16;
      } while (iVar24 != 0x18);
      iVar24 = 0;
      for (iVar4 = 0; iVar4 < (int)pZStack0000001c; iVar4 = iVar4 + 1) {
        iVar23 = __divsi3(iVar4,6);
        __aeabi_idivmod(iVar4,6);
        if (iVar23 == 0) {
          iVar8 = atoi(pcVar3 + iVar24 + 0xd);
          iVar23 = (extraout_r1 + 2) * 4;
          iVar9 = iVar5;
LAB_00243410:
          *(int *)(iVar23 + iVar9) = iVar8;
        }
        else if (iVar23 == 1) {
          atoi(pcVar3 + iVar24 + 0xd);
          uVar16 = __floatsisf();
          *(undefined4 *)(iVar5 + (extraout_r1 + 0xe) * 4) = uVar16;
        }
        else if (iVar23 == 2) {
          FUN_00238ef8(pcVar3 + iVar24 + 0xd);
          uVar16 = __truncdfsf2();
          *(undefined4 *)(iVar5 + (extraout_r1 + 0x14) * 4) = uVar16;
        }
        else if (iVar23 == 3) {
          FUN_00238ef8(pcVar3 + iVar24 + 0xd);
          iVar9 = (extraout_r1 + 8) * 4;
          iVar8 = __fixdfsi();
          iVar23 = iVar5;
          goto LAB_00243410;
        }
        for (; (cVar1 = pcVar3[iVar24 + 0xd], cVar1 != ']' && (cVar1 != ',')); iVar24 = iVar24 + 1)
        {
        }
        iVar24 = iVar24 + (uint)(cVar1 == ',');
      }
    }
    snprintf(&stack0x000000bc,0x20,(char *)(DAT_00243788 + 0x243476));
    pcVar3 = strstr(in_stack_00000010,&stack0x000000bc);
    if (pcVar3 != (char *)0x0) {
      iVar24 = 0;
      for (iVar5 = 0; pcVar3[iVar5 + 0xd] != ']'; iVar5 = iVar5 + (uint)(cVar1 == ',')) {
        iVar24 = iVar24 + 1;
        for (; (cVar1 = pcVar3[iVar5 + 0xd], cVar1 != ']' && (cVar1 != ',')); iVar5 = iVar5 + 1) {
        }
      }
      iVar5 = 0;
      for (iVar4 = 0; iVar4 < iVar24; iVar4 = iVar4 + 1) {
        if (iVar4 == 1) {
          iVar23 = atoi(pcVar3 + iVar5 + 0xd);
          *(int *)(*(int *)(in_stack_00000014 + DAT_0024378c) + 4) = iVar23;
          snprintf(&stack0x000001dc,0x100,(char *)(DAT_00243798 + 0x243504),iVar23);
          pcVar11 = (char *)(DAT_0024379c + 0x24350c);
LAB_0024352e:
          L_PrintLog(pcVar11,&stack0x000001dc);
        }
        else {
          if (iVar4 == 2) {
            iVar23 = atoi(pcVar3 + iVar5 + 0xd);
            *(int *)(*(int *)(in_stack_00000014 + DAT_0024378c) + 0x68) = iVar23;
            snprintf(&stack0x000001dc,0x100,(char *)(DAT_002437a0 + 0x243528));
            pcVar11 = (char *)(DAT_002437a4 + 0x243530);
            goto LAB_0024352e;
          }
          if (iVar4 == 0) {
            iVar23 = atoi(pcVar3 + iVar5 + 0xd);
            **(int **)(in_stack_00000014 + DAT_0024378c) = iVar23;
            snprintf(&stack0x000001dc,0x100,(char *)(DAT_00243790 + 0x2434e0));
            pcVar11 = (char *)(DAT_00243794 + 0x2434e8);
            goto LAB_0024352e;
          }
        }
        for (; (cVar1 = pcVar3[iVar5 + 0xd], cVar1 != ']' && (cVar1 != ',')); iVar5 = iVar5 + 1) {
        }
        iVar5 = iVar5 + (uint)(cVar1 == ',');
      }
    }
    snprintf(&stack0x000000bc,0x20,(char *)(DAT_002437a8 + 0x24355e));
    pcVar3 = strstr(in_stack_00000010,&stack0x000000bc);
    puVar20 = (undefined1 *)(*(int *)(in_stack_00000014 + DAT_0024378c) + 0x6c);
    if (pcVar3 == (char *)0x0) {
      *puVar20 = 0;
    }
    else {
      *puVar20 = 1;
    }
  }
  iVar5 = DAT_002437ac;
  *in_stack_0000002c = 0;
  snprintf(&stack0x000001dc,0x20,(char *)(iVar5 + 0x24358a));
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
      iVar5 = atoi(pcVar3 + 0x11);
      if (*(int *)(in_stack_00000018 + 0x1c0) != iVar5) {
        iVar24 = 0;
        *(undefined4 *)(in_stack_00000018 + 0x1d4) = 0;
        *(undefined4 *)(in_stack_00000018 + 0x1d8) = 0;
        *(undefined4 *)(in_stack_00000018 + 0x1d0) = 0;
        *(undefined4 *)(in_stack_00000018 + 0x1c4) = 0;
        uVar16 = DAT_00243784;
        *(undefined4 *)(in_stack_00000018 + 0x1e0) = DAT_00243780;
        *(undefined4 *)(in_stack_00000018 + 0x1e4) = uVar16;
        *(undefined2 *)(in_stack_00000018 + 0x1ce) = 0;
        ZombieCafe::initEventRaid2_attackPoint(in_stack_00000018);
        do {
          iVar4 = iVar24 + 0x1e8;
          iVar24 = iVar24 + 2;
          *(undefined2 *)(in_stack_00000018 + iVar4) = 0;
        } while (iVar24 != 0x3e);
      }
      *(int *)(in_stack_00000018 + 0x1c0) = iVar5;
    }
    snprintf(&stack0x000001dc,0x20,(char *)(DAT_002437b8 + 0x243638));
    pcVar3 = strstr(in_stack_00000010,&stack0x000001dc);
    if (pcVar3 != (char *)0x0) {
      iVar5 = atoi(pcVar3 + 0xf);
      **(int **)(in_stack_00000014 + DAT_002437bc) = iVar5;
    }
    snprintf(&stack0x000001dc,0x20,(char *)(DAT_002437c0 + 0x24365e));
    pcVar3 = strstr(in_stack_00000010,&stack0x000001dc);
    if (pcVar3 != (char *)0x0) {
      iVar24 = 0;
      for (iVar5 = 0; pcVar3[iVar5 + 0xe] != ']'; iVar5 = iVar5 + (uint)(cVar1 == ',')) {
        iVar24 = iVar24 + 1;
        for (; (cVar1 = pcVar3[iVar5 + 0xe], cVar1 != ']' && (cVar1 != ',')); iVar5 = iVar5 + 1) {
        }
      }
      iVar5 = 0;
      for (iVar4 = 0; iVar4 < iVar24; iVar4 = iVar4 + 1) {
        if (iVar4 == 0) {
          iVar23 = atoi(pcVar3 + iVar5 + 0xe);
          *(int *)(*(int *)(in_stack_00000014 + DAT_002437bc) + 4) = iVar23;
        }
        else if (iVar4 == 1) {
          iVar23 = atoi(pcVar3 + iVar5 + 0xe);
          *(int *)(*(int *)(in_stack_00000014 + DAT_002437bc) + 8) = iVar23;
        }
        for (; (cVar1 = pcVar3[iVar5 + 0xe], cVar1 != ']' && (cVar1 != ',')); iVar5 = iVar5 + 1) {
        }
        iVar5 = iVar5 + (uint)(cVar1 == ',');
      }
    }
    snprintf(&stack0x000001dc,0x20,(char *)(DAT_002437c4 + 0x2436f4));
    pcVar3 = strstr(in_stack_00000010,&stack0x000001dc);
    iVar5 = *(int *)(in_stack_00000014 + DAT_002437bc);
    if (pcVar3 == (char *)0x0) {
      *(undefined4 *)(iVar5 + 0xc) = 0x3f800000;
    }
    else {
      FUN_00238ef8(pcVar3 + 0xf);
      uVar16 = __truncdfsf2();
      iVar24 = __aeabi_fcmpgt(uVar16,DAT_002437c8);
      if (iVar24 != 0) {
        uVar16 = 0x3f800000;
      }
      *(undefined4 *)(iVar5 + 0xc) = uVar16;
    }
    snprintf(&stack0x000001dc,0x20,(char *)(DAT_002437cc + 0x243736));
    pcVar3 = strstr(in_stack_00000010,&stack0x000001dc);
    if (pcVar3 != (char *)0x0) {
      iVar4 = 0;
      for (iVar24 = 0; pcVar3[iVar24 + 0x10] != ']'; iVar24 = iVar24 + (uint)(cVar1 == ',')) {
        iVar4 = iVar4 + 1;
        for (; (cVar1 = pcVar3[iVar24 + 0x10], cVar1 != ']' && (cVar1 != ',')); iVar24 = iVar24 + 1)
        {
        }
      }
      iVar24 = 0;
      for (iVar23 = 0; iVar23 < iVar4; iVar23 = iVar23 + 1) {
        if (iVar23 == 0) {
          iVar9 = atoi(pcVar3 + iVar24 + 0x10);
          *(int *)(iVar5 + 0x10) = iVar9;
        }
        else if (iVar23 == 1) {
          iVar9 = atoi(pcVar3 + iVar24 + 0x10);
          *(int *)(iVar5 + 0x14) = iVar9;
        }
        for (; (cVar1 = pcVar3[iVar24 + 0x10], cVar1 != ']' && (cVar1 != ',')); iVar24 = iVar24 + 1)
        {
        }
        iVar24 = iVar24 + (uint)(cVar1 == ',');
      }
    }
    iVar24 = DAT_00243b28;
    *(undefined1 *)(iVar5 + 0x18) = 0;
    snprintf(&stack0x000001dc,0x20,(char *)(iVar24 + 0x24381c));
    pcVar3 = strstr(in_stack_00000010,&stack0x000001dc);
    if ((pcVar3 != (char *)0x0) && (iVar24 = atoi(pcVar3 + 0xe), iVar24 == 0)) {
      *(undefined1 *)(iVar5 + 0x18) = 1;
    }
  }
  puVar20 = *(undefined1 **)(in_stack_00000014 + DAT_00243b2c);
  pcVar3 = (char *)(DAT_00243b30 + 0x24384a);
  *puVar20 = 0;
  snprintf(&stack0x000001dc,0x20,pcVar3);
  pcVar3 = strstr(in_stack_00000010,&stack0x000001dc);
  if (pcVar3 != (char *)0x0) {
    snprintf(&stack0x000001dc,0x20,(char *)(DAT_00243b34 + 0x243866));
    pcVar3 = strstr(in_stack_00000010,&stack0x000001dc);
    if (pcVar3 != (char *)0x0) {
      *puVar20 = 1;
    }
  }
  iVar5 = DAT_00243b3c;
  puVar20 = *(undefined1 **)(in_stack_00000014 + DAT_00243b38);
  *puVar20 = 0;
  iVar24 = DAT_00243b40;
  piVar19 = *(int **)(in_stack_00000014 + iVar5);
  *piVar19 = 0;
  snprintf(&stack0x000001dc,0x20,(char *)(iVar24 + 0x243892));
  pcVar3 = strstr(in_stack_00000010,&stack0x000001dc);
  if (pcVar3 != (char *)0x0) {
    snprintf(&stack0x000001dc,0x20,(char *)(DAT_00243b44 + 0x2438aa));
    pcVar3 = strstr(in_stack_00000010,&stack0x000001dc);
    if (pcVar3 != (char *)0x0) {
      iVar5 = atoi(pcVar3 + 0xf);
      *piVar19 = iVar5;
      *puVar20 = 1;
    }
    snprintf(&stack0x000001dc,0x20,(char *)(DAT_00243b48 + 0x2438ce));
    pcVar3 = strstr(in_stack_00000010,&stack0x000001dc);
    if (pcVar3 == (char *)0x0) {
      **(undefined4 **)(in_stack_00000014 + DAT_00243b4c) = 0;
      **(undefined4 **)(in_stack_00000014 + DAT_00243b50) = 0;
    }
    else {
      iVar24 = 0;
      for (iVar5 = 0; pcVar3[iVar5 + 0x13] != ']'; iVar5 = iVar5 + (uint)(cVar1 == ',')) {
        iVar24 = iVar24 + 1;
        for (; (cVar1 = pcVar3[iVar5 + 0x13], cVar1 != ']' && (cVar1 != ',')); iVar5 = iVar5 + 1) {
        }
      }
      iVar5 = 0;
      for (iVar4 = 0; iVar4 < iVar24; iVar4 = iVar4 + 1) {
        if (iVar4 == 0) {
          iVar23 = atoi(pcVar3 + iVar5 + 0x13);
          piVar19 = *(int **)(in_stack_00000014 + DAT_00243b4c);
LAB_00243948:
          *piVar19 = iVar23;
        }
        else if (iVar4 == 1) {
          iVar23 = atoi(pcVar3 + iVar5 + 0x13);
          piVar19 = *(int **)(in_stack_00000014 + DAT_00243b50);
          goto LAB_00243948;
        }
        for (; (cVar1 = pcVar3[iVar5 + 0x13], cVar1 != ']' && (cVar1 != ',')); iVar5 = iVar5 + 1) {
        }
        iVar5 = iVar5 + (uint)(cVar1 == ',');
      }
    }
  }
  puVar20 = *(undefined1 **)(in_stack_00000014 + DAT_00243b54);
  pcVar3 = (char *)(DAT_00243b58 + 0x243978);
  *puVar20 = 0;
  snprintf(&stack0x000001dc,0x14,pcVar3);
  pcVar3 = strstr(in_stack_00000010,&stack0x000001dc);
  if (pcVar3 != (char *)0x0) {
    snprintf(&stack0x000001dc,0x14,(char *)(DAT_00243b5c + 0x243994));
    pcVar3 = strstr(in_stack_00000010,&stack0x000001dc);
    if (pcVar3 != (char *)0x0) {
      *puVar20 = 1;
    }
  }
  iVar5 = DAT_00243b64;
  puVar20 = *(undefined1 **)(in_stack_00000014 + DAT_00243b60);
  *puVar20 = 0;
  puVar14 = *(undefined1 **)(in_stack_00000014 + DAT_00243b68);
  *puVar14 = 0;
  iVar24 = DAT_00243b70;
  piVar19 = *(int **)(in_stack_00000014 + DAT_00243b6c);
  *piVar19 = 0;
  iVar4 = DAT_00243b74;
  piVar21 = *(int **)(in_stack_00000014 + iVar24);
  *piVar21 = 0;
  iVar24 = DAT_00243b78;
  puVar25 = *(undefined4 **)(in_stack_00000014 + iVar4);
  *puVar25 = 0;
  puVar15 = *(undefined4 **)(in_stack_00000014 + iVar24);
  *puVar15 = 0;
  snprintf(&stack0x000001dc,0x40,(char *)(iVar5 + 0x2439be));
  pcVar3 = strstr(in_stack_00000010,&stack0x000001dc);
  if (pcVar3 != (char *)0x0) {
    snprintf(&stack0x000001dc,0x40,(char *)(DAT_00243b7c + 0x243a08));
    pcVar3 = strstr(in_stack_00000010,&stack0x000001dc);
    iVar24 = DAT_00243ec0;
    iVar5 = DAT_00243b80;
    if (pcVar3 == (char *)0x0) {
      *puVar20 = 0;
      *puVar14 = 0;
      snprintf(&stack0x000001dc,0x40,(char *)(iVar24 + 0x243c90));
      pcVar3 = strstr(in_stack_00000010,&stack0x000001dc);
      if (pcVar3 != (char *)0x0) {
        iVar24 = 0;
        for (iVar5 = 0; pcVar3[iVar5 + 0x14] != ']'; iVar5 = iVar5 + (uint)(cVar1 == ',')) {
          iVar24 = iVar24 + 1;
          for (; (cVar1 = pcVar3[iVar5 + 0x14], cVar1 != ']' && (cVar1 != ',')); iVar5 = iVar5 + 1)
          {
          }
        }
        iVar5 = 0;
        for (iVar4 = 0; iVar4 < iVar24; iVar4 = iVar4 + 1) {
          if (iVar4 == 0) {
            iVar23 = atoi(pcVar3 + iVar5 + 0x14);
            *piVar19 = iVar23;
          }
          else if (iVar4 == 1) {
            iVar23 = atoi(pcVar3 + iVar5 + 0x14);
            *piVar21 = iVar23;
          }
          for (; (cVar1 = pcVar3[iVar5 + 0x14], cVar1 != ']' && (cVar1 != ',')); iVar5 = iVar5 + 1)
          {
          }
          iVar5 = iVar5 + (uint)(cVar1 == ',');
        }
      }
    }
    else {
      *puVar20 = 1;
      snprintf(&stack0x000001dc,0x40,(char *)(iVar5 + 0x243a26));
      pcVar3 = strstr(in_stack_00000010,&stack0x000001dc);
      if (pcVar3 != (char *)0x0) {
        iVar5 = atoi(pcVar3 + 0x12);
        pcVar3 = (char *)0x0;
        if (iVar5 != *(short *)(in_stack_00000018 + 0x358)) {
          *(short *)(in_stack_00000018 + DAT_00243b84) = *(short *)(in_stack_00000018 + 0x358);
          *(short *)(in_stack_00000018 + 0x358) = (short)iVar5;
          *(undefined2 *)(in_stack_00000018 + 0x35c) = 0;
          *(undefined2 *)(in_stack_00000018 + DAT_00243b88) = 0;
          *(undefined2 *)(in_stack_00000018 + 0x360) = 0;
          *(undefined2 *)(in_stack_00000018 + DAT_00243b8c) = 0;
          *(undefined4 *)(in_stack_00000018 + 0x368) = 0;
          in_stack_00000018[1000] = (ZombieCafe)0x1;
          uVar2 = DAT_00243b24;
          uVar16 = DAT_00243b20;
          *(undefined4 *)(in_stack_00000018 + 0x370) = DAT_00243b20;
          *(undefined4 *)(in_stack_00000018 + 0x374) = uVar2;
          *(undefined4 *)(in_stack_00000018 + 0x378) = uVar16;
          *(undefined4 *)(in_stack_00000018 + 0x37c) = uVar2;
          ZombieCafe::makeZombieFlowerPlantLottery(in_stack_00000018);
          pcVar3 = (char *)0x1;
        }
      }
      iVar5 = DAT_00243b90;
      *puVar14 = 0;
      *puVar15 = 0;
      *puVar25 = 0;
      snprintf(&stack0x000001dc,0x40,(char *)(iVar5 + 0x243ab0));
      pcVar11 = strstr(in_stack_00000010,&stack0x000001dc);
      if ((pcVar11 != (char *)0x0) && (pcVar3 != (char *)0x0)) {
        *(undefined4 *)(in_stack_00000018 + 0x380) = 0;
      }
      snprintf(&stack0x000001dc,0x40,(char *)(DAT_00243b94 + 0x243ad6));
      pcVar3 = strstr(in_stack_00000010,&stack0x000001dc);
      if (pcVar3 != (char *)0x0) {
        iVar24 = 0;
        for (iVar5 = 0; pcVar3[iVar5 + 0x17] != ']'; iVar5 = iVar5 + (uint)(cVar1 == ',')) {
          iVar24 = iVar24 + 1;
          for (; (cVar1 = pcVar3[iVar5 + 0x17], cVar1 != ']' && (cVar1 != ',')); iVar5 = iVar5 + 1)
          {
          }
        }
        pZStack0000001c = in_stack_00000018;
        iVar5 = 0;
        for (iVar4 = 0; iVar4 < iVar24; iVar4 = iVar4 + 1) {
          if (iVar4 < 0x11) {
            FUN_00238ef8(pcVar3 + iVar5 + 0x17);
            iStack0000000c = __truncdfsf2();
            iVar23 = __aeabi_fcmpeq(iStack0000000c,DAT_00243eb8);
            if (iVar23 != 0) {
              iStack0000000c = 0;
            }
            *(int *)(pZStack0000001c + 0x3a4) = iStack0000000c;
          }
          for (; (cVar1 = pcVar3[iVar5 + 0x17], cVar1 != ']' && (cVar1 != ',')); iVar5 = iVar5 + 1)
          {
          }
          iVar5 = iVar5 + (uint)(cVar1 == ',');
          pZStack0000001c = pZStack0000001c + 4;
        }
      }
      snprintf(&stack0x000001dc,0x40,(char *)(DAT_00243ebc + 0x243bf2));
      pcVar3 = strstr(in_stack_00000010,&stack0x000001dc);
      if (pcVar3 == (char *)0x0) {
        *piVar19 = 0;
        *piVar21 = 0;
      }
      else {
        iVar24 = 0;
        for (iVar5 = 0; pcVar3[iVar5 + 0x14] != ']'; iVar5 = iVar5 + (uint)(cVar1 == ',')) {
          iVar24 = iVar24 + 1;
          for (; (cVar1 = pcVar3[iVar5 + 0x14], cVar1 != ']' && (cVar1 != ',')); iVar5 = iVar5 + 1)
          {
          }
        }
        iVar5 = 0;
        for (iVar4 = 0; iVar4 < iVar24; iVar4 = iVar4 + 1) {
          if (iVar4 == 0) {
            iVar23 = atoi(pcVar3 + iVar5 + 0x14);
            *piVar19 = iVar23;
          }
          else if (iVar4 == 1) {
            iVar23 = atoi(pcVar3 + iVar5 + 0x14);
            *piVar21 = iVar23;
          }
          for (; (cVar1 = pcVar3[iVar5 + 0x14], cVar1 != ']' && (cVar1 != ',')); iVar5 = iVar5 + 1)
          {
          }
          iVar5 = iVar5 + (uint)(cVar1 == ',');
        }
      }
    }
  }
  iVar24 = DAT_00243ec8;
  iVar5 = DAT_00243ec4;
  in_stack_00000018[DAT_00243ec4] = (ZombieCafe)0x0;
  snprintf(&stack0x000001dc,0x40,(char *)(iVar24 + 0x243d28));
  pcVar3 = strstr(in_stack_00000010,&stack0x000001dc);
  if (pcVar3 != (char *)0x0) {
    snprintf(&stack0x000001dc,0x40,(char *)(DAT_00243ecc + 0x243d42));
    pcVar3 = strstr(in_stack_00000010,&stack0x000001dc);
    iVar24 = DAT_00243ed0;
    if (pcVar3 != (char *)0x0) {
      in_stack_00000018[iVar5] = (ZombieCafe)0x1;
      snprintf(&stack0x000001dc,0x40,(char *)(iVar24 + 0x243d5c));
      pcVar3 = strstr(in_stack_00000010,&stack0x000001dc);
      if (pcVar3 != (char *)0x0) {
        iVar5 = atoi(pcVar3 + 0xd);
        *(int *)(in_stack_00000018 + DAT_00243ed4) = iVar5;
      }
    }
  }
  puVar20 = *(undefined1 **)(in_stack_00000014 + DAT_00243ed8);
  pcVar3 = (char *)(DAT_00243edc + 0x243d86);
  *puVar20 = 0;
  snprintf(&stack0x000001dc,0x20,pcVar3);
  pcVar3 = strstr(in_stack_00000010,&stack0x000001dc);
  if (pcVar3 != (char *)0x0) {
    snprintf(&stack0x000001dc,0x20,(char *)(DAT_00243ee0 + 0x243da2));
    pcVar3 = strstr(in_stack_00000010,&stack0x000001dc);
    if (pcVar3 != (char *)0x0) {
      *puVar20 = 1;
    }
  }
  puVar20 = *(undefined1 **)(in_stack_00000014 + DAT_00243ee4);
  pcVar3 = (char *)(DAT_00243ee8 + 0x243dc4);
  *puVar20 = 0;
  snprintf(&stack0x000001dc,0x20,pcVar3);
  pcVar3 = strstr(in_stack_00000010,&stack0x000001dc);
  if (pcVar3 != (char *)0x0) {
    snprintf(&stack0x000001dc,0x20,(char *)(DAT_00243eec + 0x243de0));
    pcVar3 = strstr(in_stack_00000010,&stack0x000001dc);
    if (pcVar3 != (char *)0x0) {
      *puVar20 = 1;
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
      iVar5 = atoi(pcVar3 + 0x18);
      if (*(int *)(in_stack_00000018 + 0x2c8) != iVar5) {
        *(undefined2 *)(in_stack_00000018 + 0x2d8) = 0;
        *(undefined2 *)(in_stack_00000018 + 0x2dc) = 0;
        *(undefined4 *)(in_stack_00000018 + 0x2d0) = 0;
        *(undefined4 *)(in_stack_00000018 + 0x2d4) = 0;
        uVar16 = DAT_00243eb4;
        *(undefined4 *)(in_stack_00000018 + 0x318) = DAT_00243eb0;
        *(undefined4 *)(in_stack_00000018 + 0x31c) = uVar16;
      }
      *(int *)(in_stack_00000018 + 0x2c8) = iVar5;
    }
    snprintf(&stack0x000001dc,0x40,(char *)(DAT_00243f00 + 0x243e98));
    pcVar3 = strstr(in_stack_00000010,&stack0x000001dc);
    if (pcVar3 == (char *)0x0) {
      *(undefined4 *)(in_stack_00000018 + 0x2cc) = 0;
    }
    else {
      iVar5 = atoi(pcVar3 + 0x16);
      *(int *)(in_stack_00000018 + 0x2cc) = iVar5;
    }
    snprintf(&stack0x000001dc,0x40,(char *)(DAT_00244210 + 0x243f18));
    pcVar3 = strstr(in_stack_00000010,&stack0x000001dc);
    if (pcVar3 != (char *)0x0) {
      iVar24 = 0;
      for (iVar5 = 0; pcVar3[iVar5 + 0x15] != ']'; iVar5 = iVar5 + (uint)(cVar1 == ',')) {
        iVar24 = iVar24 + 1;
        for (; (cVar1 = pcVar3[iVar5 + 0x15], cVar1 != ']' && (cVar1 != ',')); iVar5 = iVar5 + 1) {
        }
      }
      iVar5 = 0;
      for (iVar4 = 0; iVar4 < iVar24; iVar4 = iVar4 + 1) {
        if (iVar4 == 1) {
          iVar23 = atoi(pcVar3 + iVar5 + 0x15);
          *(int *)(*(int *)(in_stack_00000014 + DAT_00244214) + 4) = iVar23;
        }
        else if (iVar4 == 2) {
          iVar23 = atoi(pcVar3 + iVar5 + 0x15);
          *(int *)(*(int *)(in_stack_00000014 + DAT_00244214) + 8) = iVar23;
        }
        else if (iVar4 == 0) {
          iVar23 = atoi(pcVar3 + iVar5 + 0x15);
          **(int **)(in_stack_00000014 + DAT_00244214) = iVar23;
        }
        for (; (cVar1 = pcVar3[iVar5 + 0x15], cVar1 != ']' && (cVar1 != ',')); iVar5 = iVar5 + 1) {
        }
        iVar5 = iVar5 + (uint)(cVar1 == ',');
      }
    }
  }
  iVar5 = DAT_00244218;
  *in_stack_0000003c = 0;
  *in_stack_00000040 = 0;
  snprintf(&stack0x000001dc,0x20,(char *)(iVar5 + 0x243fc6));
  pcVar3 = strstr(in_stack_00000010,&stack0x000001dc);
  if (pcVar3 != (char *)0x0) {
    snprintf(&stack0x000001dc,0x20,(char *)(DAT_0024421c + 0x243fe0));
    pcVar3 = strstr(in_stack_00000010,&stack0x000001dc);
    iVar5 = DAT_00244220;
    if (pcVar3 != (char *)0x0) {
      *in_stack_0000003c = 1;
      snprintf(&stack0x000001dc,0x20,(char *)(iVar5 + 0x243ffc));
      pcVar3 = strstr(in_stack_00000010,&stack0x000001dc);
      if (pcVar3 != (char *)0x0) {
        *in_stack_00000040 = 1;
      }
    }
  }
  puVar20 = *(undefined1 **)(in_stack_00000014 + DAT_00244224);
  pcVar3 = (char *)(DAT_00244228 + 0x24401e);
  *puVar20 = 0;
  snprintf(&stack0x000001dc,0x20,pcVar3);
  pcVar3 = strstr(in_stack_00000010,&stack0x000001dc);
  if (pcVar3 != (char *)0x0) {
    snprintf(&stack0x000001dc,0x20,(char *)(DAT_0024422c + 0x24403a));
    pcVar3 = strstr(in_stack_00000010,&stack0x000001dc);
    if (pcVar3 != (char *)0x0) {
      *puVar20 = 1;
    }
  }
  snprintf(&stack0x000001dc,0x20,(char *)(DAT_00244230 + 0x244056));
  pcVar3 = strstr(in_stack_00000010,&stack0x000001dc);
  if (pcVar3 != (char *)0x0) {
    snprintf(&stack0x000001dc,0x20,(char *)(DAT_00244234 + 0x24406e));
    pcVar3 = strstr(in_stack_00000010,&stack0x000001dc);
    piVar19 = *(int **)(in_stack_00000014 + DAT_00244238);
    if (pcVar3 != (char *)0x0) {
      iVar5 = atoi(pcVar3 + 0xc);
      *piVar19 = iVar5;
    }
    snprintf(&stack0x000001dc,0x20,(char *)(DAT_0024423c + 0x244094));
    pcVar3 = strstr(in_stack_00000010,&stack0x000001dc);
    if (pcVar3 != (char *)0x0) {
      iVar5 = atoi(pcVar3 + 0xc);
      piVar19[1] = iVar5;
    }
    snprintf(&stack0x000001dc,0x20,(char *)(DAT_00244240 + 0x2440b4));
    pcVar3 = strstr(in_stack_00000010,&stack0x000001dc);
    if (pcVar3 != (char *)0x0) {
      iVar5 = atoi(pcVar3 + 0xc);
      piVar19[2] = iVar5;
    }
    snprintf(&stack0x000001dc,0x20,(char *)(DAT_00244244 + 0x2440d4));
    pcVar3 = strstr(in_stack_00000010,&stack0x000001dc);
    if (pcVar3 == (char *)0x0) {
      *(undefined1 *)((int)piVar19 + 0xd) = 0;
    }
    else {
      *(undefined1 *)((int)piVar19 + 0xd) = 1;
    }
  }
  snprintf(&stack0x000001dc,0x20,(char *)(DAT_00244248 + 0x2440f4));
  pcVar3 = strstr(in_stack_00000010,&stack0x000001dc);
  if (pcVar3 != (char *)0x0) {
    snprintf(&stack0x000001dc,0x20,(char *)(DAT_0024424c + 0x24410e));
    pcVar3 = strstr(in_stack_00000010,&stack0x000001dc);
    pcVar11 = (char *)(DAT_00244254 + 0x24412a);
    **(char **)(in_stack_00000014 + DAT_00244250) = '\x01' - (pcVar3 == (char *)0x0);
    snprintf(&stack0x000001dc,0x20,pcVar11);
    pcVar3 = strstr(in_stack_00000010,&stack0x000001dc);
    if (pcVar3 != (char *)0x0) {
      iVar5 = atoi(pcVar3 + 0x16);
      **(int **)(in_stack_00000014 + DAT_00244258) = iVar5;
      **(int **)(in_stack_00000014 + DAT_0024425c) = iVar5;
      **(int **)(in_stack_00000014 + DAT_00244260) = iVar5;
    }
    snprintf(&stack0x000001dc,0x20,(char *)(DAT_00244264 + 0x24415e));
    pcVar3 = strstr(in_stack_00000010,&stack0x000001dc);
    if (pcVar3 != (char *)0x0) {
      sVar6 = 0;
      do {
        if (pcVar3[sVar6 + 0x12] == ']') break;
        sVar6 = sVar6 + 1;
      } while (sVar6 != 0x1f);
      pcVar11 = *(char **)(in_stack_00000014 + DAT_00244268);
      memset(pcVar11,0,0x20);
      strncpy(pcVar11,pcVar3 + 0x12,sVar6);
      pcVar11[0x1f] = '\0';
    }
    snprintf(&stack0x000001dc,0x20,(char *)(DAT_0024426c + 0x2441aa));
    pcVar3 = strstr(in_stack_00000010,&stack0x000001dc);
    if (pcVar3 != (char *)0x0) {
      for (sVar6 = 0; pcVar3[sVar6 + 0x12] != ']'; sVar6 = sVar6 + 1) {
      }
      if (0x1e < (int)sVar6) {
        sVar6 = 0x1f;
      }
      pcVar11 = *(char **)(in_stack_00000014 + DAT_00244270);
      memset(pcVar11,0,0x20);
      strncpy(pcVar11,pcVar3 + 0x12,sVar6);
      pcVar11[0x1f] = '\0';
    }
    snprintf(&stack0x000001dc,0x20,(char *)(DAT_00244274 + 0x2441f8));
    pcVar3 = strstr(in_stack_00000010,&stack0x000001dc);
    if (pcVar3 != (char *)0x0) {
      for (sVar6 = 0; pcVar3[sVar6 + 0x13] != ']'; sVar6 = sVar6 + 1) {
      }
      if (0x1e < (int)sVar6) {
        sVar6 = 0x1f;
      }
      pcVar11 = *(char **)(in_stack_00000014 + DAT_002445a4);
      memset(pcVar11,0,0x20);
      strncpy(pcVar11,pcVar3 + 0x13,sVar6);
      pcVar11[0x1f] = '\0';
    }
    snprintf(&stack0x000001dc,0x20,(char *)(DAT_002445a8 + 0x2442b0));
    pcVar3 = strstr(in_stack_00000010,&stack0x000001dc);
    if (pcVar3 != (char *)0x0) {
      for (sVar6 = 0; pcVar3[sVar6 + 0xd] != ']'; sVar6 = sVar6 + 1) {
      }
      if (0x1e < (int)sVar6) {
        sVar6 = 0x1f;
      }
      pcVar11 = *(char **)(in_stack_00000014 + DAT_002445ac);
      memset(pcVar11,0,0x20);
      strncpy(pcVar11,pcVar3 + 0xd,sVar6);
      pcVar11[0x1f] = '\0';
    }
    snprintf(&stack0x000001dc,0x20,(char *)(DAT_002445b0 + 0x2442fe));
    pcVar3 = strstr(in_stack_00000010,&stack0x000001dc);
    if (pcVar3 != (char *)0x0) {
      for (sVar6 = 0; pcVar3[sVar6 + 0xf] != ']'; sVar6 = sVar6 + 1) {
      }
      if (0x1e < (int)sVar6) {
        sVar6 = 0x1f;
      }
      pcVar11 = *(char **)(in_stack_00000014 + DAT_002445b4);
      memset(pcVar11,0,0x20);
      strncpy(pcVar11,pcVar3 + 0xf,sVar6);
      pcVar11[0x1f] = '\0';
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
    pcVar11 = *(char **)(in_stack_00000014 + DAT_002445cc);
    pcVar3 = (char *)(DAT_002445d0 + 0x244390);
    *pcVar11 = '\0';
    snprintf(&stack0x000001dc,0x20,pcVar3);
    pcVar3 = strstr(in_stack_00000010,&stack0x000001dc);
    iVar5 = DAT_002445d4;
    *pcVar11 = '\x01' - (pcVar3 == (char *)0x0);
    snprintf(&stack0x000001dc,0x20,(char *)(iVar5 + 0x2443ae));
    pcVar3 = strstr(in_stack_00000010,&stack0x000001dc);
    if ((pcVar3 != (char *)0x0) &&
       (uVar12 = atoi(pcVar3 + 0x13), *(uint *)(in_stack_00000018 + DAT_002445d8) < uVar12)) {
      *(uint *)(in_stack_00000018 + DAT_002445d8) = uVar12;
      in_stack_00000018[DAT_002445dc] = (ZombieCafe)0x0;
    }
    snprintf(&stack0x000001dc,0x20,(char *)(DAT_002445e0 + 0x2443de));
    pcVar3 = strstr(in_stack_00000010,&stack0x000001dc);
    pcVar11 = (char *)(DAT_002445e8 + 0x2443fa);
    **(char **)(in_stack_00000014 + DAT_002445e4) = '\x01' - (pcVar3 == (char *)0x0);
    snprintf(&stack0x000001dc,0x20,pcVar11);
    pcVar3 = strstr(in_stack_00000010,&stack0x000001dc);
    pcVar11 = (char *)(DAT_002445f0 + 0x244418);
    **(char **)(in_stack_00000014 + DAT_002445ec) = '\x01' - (pcVar3 == (char *)0x0);
    snprintf(&stack0x000001dc,0x20,pcVar11);
    pcVar3 = strstr(in_stack_00000010,&stack0x000001dc);
    if (pcVar3 != (char *)0x0) {
      for (sVar6 = 0; pcVar3[sVar6 + 0x13] != ']'; sVar6 = sVar6 + 1) {
      }
      if (0x1e < (int)sVar6) {
        sVar6 = 0x1f;
      }
      pcVar11 = *(char **)(in_stack_00000014 + DAT_002445f4);
      memset(pcVar11,0,0x20);
      strncpy(pcVar11,pcVar3 + 0x13,sVar6);
      pcVar11[0x1f] = '\0';
    }
  }
  iVar5 = DAT_00244600;
  L_PrintLog((char *)(DAT_002445f8 + 0x24446a),(char *)(DAT_002445fc + 0x24446c));
  iVar24 = 0;
  do {
    pcVar3 = (char *)(DAT_00244604 + 0x244480);
    snprintf(&stack0x000000dc,0x100,(char *)(iVar5 + 0x244476),iVar24);
    L_PrintLog(pcVar3,&stack0x000000dc);
    snprintf(&stack0x000000dc,0x100,(char *)(DAT_0024460c + 0x24449c),
             (uint)*(byte *)(*(int *)(in_stack_00000014 + DAT_00244608) + iVar24));
    L_PrintLog(pcVar3,&stack0x000000dc);
    iVar4 = 0;
    do {
      if (*(int *)(in_stack_00000050 + iVar4) != 0) {
        snprintf(&stack0x000000dc,0x100,(char *)(DAT_00244610 + 0x2444c4));
        L_PrintLog((char *)(DAT_00244614 + 0x2444d6),&stack0x000000dc);
      }
      iVar4 = iVar4 + 4;
    } while (iVar4 != 0x2a8);
    iVar24 = iVar24 + 1;
    in_stack_00000050 = in_stack_00000050 + 0x2a8;
  } while (iVar24 != 0x12);
  pcVar3 = (char *)(DAT_0024461c + 0x2444fc);
  snprintf(&stack0x000000dc,0x100,(char *)(DAT_00244618 + 0x2444f8),(uint)*pbVar17);
  L_PrintLog(pcVar3,&stack0x000000dc);
  snprintf(&stack0x000000dc,0x100,(char *)(DAT_00244624 + 0x244516),
           **(undefined4 **)(in_stack_00000014 + DAT_00244620));
  L_PrintLog(pcVar3,&stack0x000000dc);
  snprintf(&stack0x000000dc,0x100,(char *)(DAT_0024462c + 0x244532),
           **(undefined4 **)(in_stack_00000014 + DAT_00244628));
  L_PrintLog(pcVar3,&stack0x000000dc);
  puVar15 = *(undefined4 **)(in_stack_00000014 + DAT_00244630);
  puVar25 = puVar15 + 10;
  pcVar3 = (char *)(DAT_00244634 + 0x244550);
  do {
    uVar16 = *puVar15;
    puVar15 = puVar15 + 1;
    snprintf(&stack0x000000dc,0x100,pcVar3,uVar16);
    L_PrintLog((char *)(DAT_00244638 + 0x244564),&stack0x000000dc);
  } while (puVar15 != puVar25);
  **(undefined1 **)(in_stack_00000014 + DAT_0024463c) = 1;
  **(undefined1 **)(in_stack_00000014 + DAT_00244640) = 1;
  FUN_0024458c();
  return;
}


