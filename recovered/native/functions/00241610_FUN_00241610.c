/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00241610 FUN_00241610 */

/* WARNING: Function: __gnu_thumb1_case_uhi replaced with injection: switch16_uhi_r0 */
/* WARNING: Function: __gnu_thumb1_case_uqi replaced with injection: switch8_r0 */
/* WARNING (jumptable): Removing unreachable block (ram,0x00241f8e) */
/* WARNING (jumptable): Removing unreachable block (ram,0x002423c4) */
/* WARNING (jumptable): Removing unreachable block (ram,0x002427ca) */
/* WARNING (jumptable): Removing unreachable block (ram,0x00241d8a) */
/* WARNING: Removing unreachable block (ram,0x00241f8e) */
/* WARNING: Removing unreachable block (ram,0x002423c4) */
/* WARNING: Removing unreachable block (ram,0x002427ca) */
/* WARNING: Removing unreachable block (ram,0x00241d8a) */

void FUN_00241610(undefined4 param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  long lVar5;
  int *piVar6;
  bool bVar7;
  char *pcVar8;
  undefined4 extraout_r1;
  int iVar9;
  undefined1 *puVar10;
  undefined4 *puVar11;
  undefined1 *puVar12;
  char *pcVar13;
  int iVar14;
  undefined1 *puVar15;
  size_t sVar16;
  uint uVar17;
  undefined4 *puVar18;
  ZombieCafe *pZVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  undefined1 *puVar23;
  undefined4 *puVar24;
  int iVar25;
  undefined4 uVar26;
  int iVar27;
  undefined1 *puVar28;
  undefined4 *puVar29;
  undefined4 *puVar30;
  undefined4 uStack_4;
  undefined4 *puVar31;
  
  iVar25 = DAT_00241910;
  puVar30 = (undefined4 *)(&stack0xffffffec + DAT_00241910);
  puVar31 = (undefined4 *)(&stack0xffffffec + DAT_00241910);
  *(undefined4 *)((int)&uStack_4 + DAT_00241910) = param_1;
  *(int *)(&stack0x00000000 + DAT_00241910) = DAT_00241918 + 0x241620;
  puVar11 = *(undefined4 **)(DAT_00241918 + 0x241620 + DAT_00241914);
  *(undefined4 *)(&stack0x000002c8 + DAT_00241910) = *puVar11;
  iVar3 = CapcomApp::getInstance();
  *(undefined4 *)(&stack0x00000004 + iVar25) = *(undefined4 *)(iVar3 + 4);
  *(undefined4 **)(&stack0x0000006c + iVar25) = puVar11;
  iVar9 = 0;
  *(undefined4 *)(&stack0xfffffff8 + iVar25) =
       *(undefined4 *)(*(int *)(&stack0x00000000 + iVar25) + DAT_0024191c);
  iVar3 = 0;
  iVar14 = 0;
  *(undefined4 *)(&stack0x00000008 + iVar25) =
       *(undefined4 *)(*(int *)(&stack0x00000000 + iVar25) + DAT_00241920);
  do {
    uVar26 = DAT_00241924;
    iVar20 = *(int *)(&stack0x00000000 + iVar25);
    *(undefined1 *)(iVar14 + *(int *)(&stack0xfffffff8 + iVar25)) = 0;
    *(undefined4 *)(*(int *)(&stack0x00000008 + iVar25) + iVar3) = uVar26;
    *(undefined4 *)(&stack0x00000070 + iVar25) = *(undefined4 *)(iVar20 + DAT_00241928);
    *(undefined1 *)(*(int *)(&stack0x00000070 + iVar25) + iVar14) = 1;
    uVar26 = *(undefined4 *)(&stack0xfffffff8 + iVar25);
    iVar21 = *(int *)(iVar20 + DAT_0024192c);
    *(undefined4 *)(iVar3 + iVar21) = 0;
    *(undefined4 *)(iVar3 + *(int *)(iVar20 + DAT_00241930)) = 0;
    *(undefined4 *)(iVar3 + *(int *)(iVar20 + DAT_00241934)) = 0;
    *(undefined4 *)(iVar3 + *(int *)(iVar20 + DAT_00241938)) = 0;
    *(undefined4 *)(*(int *)(iVar20 + DAT_0024193c) + iVar3) = 1000;
    *(int *)(&stack0x0000005c + iVar25) = iVar21;
    *(undefined4 *)(&stack0x00000010 + iVar25) = 0;
    *(undefined4 *)(&stack0x0000004c + iVar25) = uVar26;
    iVar27 = *(int *)(*(int *)(&stack0x00000000 + iVar25) + DAT_00241940);
    iVar22 = *(int *)(*(int *)(&stack0x00000000 + iVar25) + DAT_00241948);
    iVar21 = *(int *)(*(int *)(&stack0x00000000 + iVar25) + DAT_00241944);
    iVar20 = 0;
    *(int *)(&stack0x0000000c + iVar25) = iVar21;
    do {
      *(undefined4 *)(iVar9 + iVar27 + iVar20) = 0;
      *(undefined4 *)(iVar9 + iVar22 + iVar20) = 0;
      *(undefined4 *)(iVar9 + iVar21 + iVar20) = 0;
      iVar20 = iVar20 + 4;
      *(int *)(&stack0x0000003c + iVar25) = iVar27;
      *(int *)(&stack0x00000044 + iVar25) = iVar22;
      *(int *)(&stack0x00000014 + iVar25) = iVar21;
    } while (iVar20 != 0x2a8);
    iVar14 = iVar14 + 1;
    iVar3 = iVar3 + 4;
    iVar9 = iVar9 + 0x2a8;
  } while (iVar14 != 0x12);
  iVar9 = 0;
  iVar3 = *(int *)(*(int *)(&stack0x00000000 + iVar25) + DAT_0024194c);
  do {
    puVar11 = (undefined4 *)(iVar9 + iVar3);
    iVar9 = iVar9 + 8;
    *puVar11 = 0;
    puVar11[1] = 0;
    iVar14 = DAT_00241958;
    *(int *)(&stack0x00000060 + iVar25) = iVar3;
  } while (iVar9 != 0xf0);
  iVar20 = *(int *)(&stack0x00000000 + iVar25);
  puVar12 = *(undefined1 **)(iVar20 + DAT_00241950);
  pcVar8 = (char *)(DAT_00241954 + 0x241702);
  *puVar12 = 0;
  iVar3 = DAT_0024195c;
  puVar15 = *(undefined1 **)(iVar20 + iVar14);
  *puVar15 = 0;
  iVar9 = DAT_00241960;
  puVar28 = *(undefined1 **)(iVar20 + iVar3);
  *puVar28 = 0;
  iVar3 = DAT_00241964;
  puVar23 = *(undefined1 **)(iVar20 + iVar9);
  *puVar23 = 0;
  puVar10 = *(undefined1 **)(iVar20 + iVar3);
  *puVar10 = 0;
  *(undefined1 **)(&stack0x00000018 + iVar25) = puVar10;
  puVar10 = *(undefined1 **)(iVar20 + DAT_00241968);
  *puVar10 = 0;
  *(undefined1 **)(&stack0x00000020 + iVar25) = puVar10;
  puVar10 = *(undefined1 **)(iVar20 + DAT_0024196c);
  *puVar10 = 0;
  *(undefined1 **)(&stack0x00000024 + iVar25) = puVar10;
  puVar10 = *(undefined1 **)(iVar20 + DAT_00241970);
  *puVar10 = 0;
  *(undefined1 **)(&stack0x00000028 + iVar25) = puVar10;
  puVar10 = *(undefined1 **)(iVar20 + DAT_00241974);
  *puVar10 = 0;
  *(undefined1 **)(&stack0x0000002c + iVar25) = puVar10;
  puVar10 = *(undefined1 **)(iVar20 + DAT_00241978);
  pcVar4 = *(char **)((int)&uStack_4 + iVar25);
  *(undefined1 **)(&stack0xfffffff8 + iVar25) = puVar10;
  *puVar10 = 0;
  iVar3 = strncmp(pcVar4,pcVar8,10);
  *(undefined1 **)(&stack0x00000074 + iVar25) = puVar12;
  *(undefined1 **)(&stack0x00000078 + iVar25) = puVar15;
  *(undefined1 **)(&stack0x00000064 + iVar25) = puVar28;
  *(undefined1 **)(&stack0x00000068 + iVar25) = puVar23;
  if (iVar3 != 0) {
    iVar3 = FUN_0024458c();
  }
  *(undefined4 *)(&stack0x00000040 + iVar25) = *(undefined4 *)(&stack0x00000044 + iVar25);
  *(undefined4 *)(&stack0x00000048 + iVar25) = *(undefined4 *)(&stack0x0000003c + iVar25);
  *(int *)(&stack0x00000050 + iVar25) = DAT_0024197c + 0x241768;
  *(int *)(&stack0x00000054 + iVar25) = DAT_00241980 + 0x24176c;
  iVar9 = iVar3;
  do {
    snprintf(&stack0x000001c8 + iVar25,0x14,*(char **)(&stack0x00000050 + iVar25),iVar3);
    pcVar4 = strstr(*(char **)((int)&uStack_4 + iVar25),&stack0x000001c8 + iVar25);
    pcVar8 = *(char **)(&stack0x00000054 + iVar25);
    *(char *)(*(int *)(&stack0x0000004c + iVar25) + iVar3) = '\x01' - (pcVar4 == (char *)0x0);
    snprintf(&stack0x000001c8 + iVar25,0x14,pcVar8,iVar3);
    pcVar4 = strstr(*(char **)((int)&uStack_4 + iVar25),&stack0x000001c8 + iVar25);
    iVar14 = DAT_00241984;
    *(char *)(*(int *)(&stack0x00000070 + iVar25) + iVar3) = '\x01' - (pcVar4 == (char *)0x0);
    snprintf(&stack0x000001c8 + iVar25,0x14,(char *)(iVar14 + 0x2417b2),iVar3);
    pcVar4 = strstr(*(char **)((int)&uStack_4 + iVar25),&stack0x000001c8 + iVar25);
    if (pcVar4 == (char *)0x0) break;
    pcVar8 = pcVar4 + 9;
    if (9 < iVar3) {
      pcVar8 = pcVar4 + 10;
    }
    for (iVar14 = 0; pcVar8[iVar14] != ']'; iVar14 = iVar14 + (uint)(cVar1 == ',')) {
      for (; (cVar1 = pcVar8[iVar14], cVar1 != ']' && (cVar1 != ',')); iVar14 = iVar14 + 1) {
      }
    }
    snprintf(&stack0x000001c8 + iVar25,0x14,(char *)(DAT_00241988 + 0x2417f8),iVar3);
    pcVar4 = strstr(*(char **)((int)&uStack_4 + iVar25),&stack0x000001c8 + iVar25);
    if (pcVar4 == (char *)0x0) break;
    *(char **)(&stack0x0000001c + iVar25) = pcVar4 + 9;
    if (9 < iVar3) {
      *(char **)(&stack0x0000001c + iVar25) = pcVar4 + 10;
    }
    for (iVar14 = 0; *(char *)(*(int *)(&stack0x0000001c + iVar25) + iVar14) != ']';
        iVar14 = iVar14 + (uint)(cVar1 == ',')) {
      for (; (cVar1 = *(char *)(*(int *)(&stack0x0000001c + iVar25) + iVar14), cVar1 != ']' &&
             (cVar1 != ',')); iVar14 = iVar14 + 1) {
      }
    }
    snprintf(&stack0x000001c8 + iVar25,0x14,(char *)(DAT_0024198c + 0x241844),iVar3);
    pcVar4 = strstr(*(char **)((int)&uStack_4 + iVar25),&stack0x000001c8 + iVar25);
    if (pcVar4 == (char *)0x0) break;
    pcVar13 = pcVar4 + 0xc;
    if (0xc < iVar3) {
      pcVar13 = pcVar4 + 0xd;
    }
    for (iVar14 = 0; pcVar13[iVar14] != ']'; iVar14 = iVar14 + (uint)(cVar1 == ',')) {
      for (; (cVar1 = pcVar13[iVar14], cVar1 != ']' && (cVar1 != ',')); iVar14 = iVar14 + 1) {
      }
    }
    snprintf(&stack0x000001c8 + iVar25,0x14,(char *)(DAT_00241990 + 0x241888),iVar3);
    pcVar4 = strstr(*(char **)((int)&uStack_4 + iVar25),&stack0x000001c8 + iVar25);
    if (pcVar4 == (char *)0x0) break;
    *(char **)(&stack0x00000008 + iVar25) = pcVar4 + 7;
    if (9 < iVar3) {
      *(char **)(&stack0x00000008 + iVar25) = pcVar4 + 8;
    }
    *(undefined4 *)(&stack0x00000030 + iVar25) = 0;
    for (iVar14 = 0; *(char *)(*(int *)(&stack0x00000008 + iVar25) + iVar14) != ']';
        iVar14 = iVar14 + (uint)(cVar1 == ',')) {
      *(int *)(&stack0x00000030 + iVar25) = *(int *)(&stack0x00000030 + iVar25) + 1;
      for (; (cVar1 = *(char *)(*(int *)(&stack0x00000008 + iVar25) + iVar14), cVar1 != ']' &&
             (cVar1 != ',')); iVar14 = iVar14 + 1) {
      }
    }
    snprintf(&stack0x000001c8 + iVar25,0x14,(char *)(DAT_00241994 + 0x2418de),iVar3);
    pcVar4 = strstr(*(char **)((int)&uStack_4 + iVar25),&stack0x000001c8 + iVar25);
    if (pcVar4 == (char *)0x0) {
      pcVar4 = (char *)FUN_0024458c();
    }
    *(char **)(&stack0x0000000c + iVar25) = pcVar4 + 8;
    if (9 < iVar3) {
      *(char **)(&stack0x0000000c + iVar25) = pcVar4 + 9;
    }
    *(undefined4 *)(&stack0x00000034 + iVar25) = 0;
    for (iVar14 = 0; *(char *)(*(int *)(&stack0x0000000c + iVar25) + iVar14) != ']';
        iVar14 = iVar14 + (uint)(cVar1 == ',')) {
      *(int *)(&stack0x00000034 + iVar25) = *(int *)(&stack0x00000034 + iVar25) + 1;
      for (; (cVar1 = *(char *)(*(int *)(&stack0x0000000c + iVar25) + iVar14), cVar1 != ']' &&
             (cVar1 != ',')); iVar14 = iVar14 + 1) {
      }
    }
    snprintf(&stack0x000001c8 + iVar25,0x14,(char *)(DAT_00241c54 + 0x2419c0),iVar3);
    pcVar4 = strstr(*(char **)((int)&uStack_4 + iVar25),&stack0x000001c8 + iVar25);
    if (pcVar4 == (char *)0x0) {
      pcVar4 = (char *)FUN_0024458c();
    }
    *(char **)(&stack0x00000010 + iVar25) = pcVar4 + 8;
    if (9 < iVar3) {
      *(char **)(&stack0x00000010 + iVar25) = pcVar4 + 9;
    }
    *(undefined4 *)(&stack0x00000038 + iVar25) = 0;
    for (iVar14 = 0; *(char *)(*(int *)(&stack0x00000010 + iVar25) + iVar14) != ']';
        iVar14 = iVar14 + (uint)(cVar1 == ',')) {
      *(int *)(&stack0x00000038 + iVar25) = *(int *)(&stack0x00000038 + iVar25) + 1;
      for (; (cVar1 = *(char *)(*(int *)(&stack0x00000010 + iVar25) + iVar14), cVar1 != ']' &&
             (cVar1 != ',')); iVar14 = iVar14 + 1) {
      }
    }
    iVar14 = atoi(pcVar8);
    iVar20 = *(int *)(*(int *)(&stack0x00000000 + iVar25) + DAT_00241c58);
    *(int *)(iVar20 + iVar9) = iVar14;
    *(int *)(&stack0x00000058 + iVar25) = iVar20;
    for (iVar14 = 0; (cVar1 = pcVar8[iVar14], cVar1 != ']' && (cVar1 != ',')); iVar14 = iVar14 + 1)
    {
    }
    iVar14 = atoi(pcVar8 + iVar14 + (uint)(cVar1 == ','));
    iVar20 = *(int *)(&stack0x00000058 + iVar25);
    piVar6 = (int *)(iVar9 + *(int *)(*(int *)(&stack0x00000000 + iVar25) + DAT_00241c5c));
    *piVar6 = iVar14;
    printf((char *)(DAT_00241c60 + 0x241a52),*(undefined4 *)(iVar20 + iVar9));
    printf((char *)(DAT_00241c64 + 0x241a5c),*piVar6);
    iVar14 = atoi(*(char **)(&stack0x0000001c + iVar25));
    iVar20 = *(int *)(&stack0x00000000 + iVar25);
    *(int *)(*(int *)(iVar20 + DAT_00241c68) + iVar9) = iVar14;
    printf((char *)(DAT_00241c6c + 0x241a74),iVar14);
    iVar14 = atoi(pcVar13);
    iVar20 = *(int *)(iVar20 + DAT_00241c70);
    *(int *)(iVar20 + iVar9) = iVar14;
    *(int *)(&stack0x0000001c + iVar25) = iVar20;
    for (iVar14 = 0; (cVar1 = pcVar13[iVar14], cVar1 != ']' && (cVar1 != ',')); iVar14 = iVar14 + 1)
    {
    }
    iVar14 = iVar14 + (uint)(cVar1 == ',');
    iVar20 = atoi(pcVar13 + iVar14);
    iVar21 = *(int *)(*(int *)(&stack0x00000000 + iVar25) + DAT_00241c74);
    *(int *)(iVar21 + iVar9) = iVar20;
    *(int *)(&stack0x00000058 + iVar25) = iVar21;
    for (; (cVar1 = pcVar13[iVar14], cVar1 != ']' && (cVar1 != ',')); iVar14 = iVar14 + 1) {
    }
    iVar14 = atoi(pcVar13 + iVar14 + (uint)(cVar1 == ','));
    iVar20 = *(int *)(&stack0x00000058 + iVar25);
    uVar26 = *(undefined4 *)(*(int *)(&stack0x0000001c + iVar25) + iVar9);
    *(int *)(*(int *)(*(int *)(&stack0x00000000 + iVar25) + DAT_00241c78) + iVar9) = iVar14;
    printf((char *)(DAT_00241c7c + 0x241ae2),uVar26,*(undefined4 *)(iVar20 + iVar9),iVar14);
    iVar14 = 0;
    for (iVar20 = 0; iVar20 < *(int *)(&stack0x00000030 + iVar25); iVar20 = iVar20 + 1) {
      iVar21 = atoi((char *)(*(int *)(&stack0x00000008 + iVar25) + iVar14));
      *(int *)(*(int *)(&stack0x00000048 + iVar25) + iVar20 * 4) = iVar21;
      for (; (cVar1 = *(char *)(*(int *)(&stack0x00000008 + iVar25) + iVar14), cVar1 != ']' &&
             (cVar1 != ',')); iVar14 = iVar14 + 1) {
      }
      iVar14 = iVar14 + (uint)(cVar1 == ',');
    }
    iVar14 = 0;
    for (iVar20 = 0; iVar20 < *(int *)(&stack0x00000034 + iVar25); iVar20 = iVar20 + 1) {
      iVar21 = atoi((char *)(*(int *)(&stack0x0000000c + iVar25) + iVar14));
      *(int *)(*(int *)(&stack0x00000040 + iVar25) + iVar20 * 4) = iVar21;
      for (; (cVar1 = *(char *)(*(int *)(&stack0x0000000c + iVar25) + iVar14), cVar1 != ']' &&
             (cVar1 != ',')); iVar14 = iVar14 + 1) {
      }
      iVar14 = iVar14 + (uint)(cVar1 == ',');
    }
    iVar14 = 0;
    for (iVar20 = 0; iVar20 < *(int *)(&stack0x00000038 + iVar25); iVar20 = iVar20 + 1) {
      iVar21 = atoi((char *)(*(int *)(&stack0x00000010 + iVar25) + iVar14));
      *(int *)(*(int *)(&stack0x00000014 + iVar25) + iVar20 * 4) = iVar21;
      for (; (cVar1 = *(char *)(*(int *)(&stack0x00000010 + iVar25) + iVar14), cVar1 != ']' &&
             (cVar1 != ',')); iVar14 = iVar14 + 1) {
      }
      iVar14 = iVar14 + (uint)(cVar1 == ',');
    }
    *(int *)(&stack0x00000014 + iVar25) = *(int *)(&stack0x00000014 + iVar25) + 0x2a8;
    iVar3 = iVar3 + 1;
    iVar9 = iVar9 + 4;
    *(int *)(&stack0x00000040 + iVar25) = *(int *)(&stack0x00000040 + iVar25) + 0x2a8;
    *(int *)(&stack0x00000048 + iVar25) = *(int *)(&stack0x00000048 + iVar25) + 0x2a8;
  } while (iVar3 != 0x12);
  snprintf(&stack0x000001c8 + iVar25,0x14,(char *)(DAT_00241c80 + 0x241ba8));
  pcVar4 = strstr(*(char **)((int)&uStack_4 + iVar25),&stack0x000001c8 + iVar25);
  if (pcVar4 != (char *)0x0) {
    snprintf(&stack0x000001c8 + iVar25,0x14,(char *)(DAT_00241c84 + 0x241bc0));
    pcVar4 = strstr(*(char **)((int)&uStack_4 + iVar25),&stack0x000001c8 + iVar25);
    iVar3 = DAT_00241c88;
    *(char *)(*(int *)(&stack0x0000004c + iVar25) + 0x10) = '\x01' - (pcVar4 == (char *)0x0);
    snprintf(&stack0x000001c8 + iVar25,0x14,(char *)(iVar3 + 0x241bd8));
    pcVar4 = strstr(*(char **)((int)&uStack_4 + iVar25),&stack0x000001c8 + iVar25);
    if (pcVar4 != (char *)0x0) {
      for (; *pcVar4 != ']'; pcVar4 = pcVar4 + 1) {
        if (*pcVar4 == '[') {
          iVar3 = atoi(pcVar4 + 1);
          *(int *)(*(int *)(&stack0x0000005c + iVar25) + 0x40) = iVar3;
        }
      }
    }
  }
  snprintf(&stack0x000001c8 + iVar25,0x14,(char *)(DAT_00241c8c + 0x241c0e));
  pcVar4 = strstr(*(char **)((int)&uStack_4 + iVar25),&stack0x000001c8 + iVar25);
  if (pcVar4 != (char *)0x0) {
    snprintf(&stack0x000001c8 + iVar25,0x14,(char *)(DAT_00241c90 + 0x241c26));
    pcVar4 = strstr(*(char **)((int)&uStack_4 + iVar25),&stack0x000001c8 + iVar25);
    iVar3 = DAT_00241c94;
    *(char *)(*(int *)(&stack0x0000004c + iVar25) + 0x11) = '\x01' - (pcVar4 == (char *)0x0);
    snprintf(&stack0x000001c8 + iVar25,0x14,(char *)(iVar3 + 0x241c3e));
    pcVar4 = strstr(*(char **)((int)&uStack_4 + iVar25),&stack0x000001c8 + iVar25);
    if (pcVar4 != (char *)0x0) {
      for (; *pcVar4 != ']'; pcVar4 = pcVar4 + 1) {
        if (*pcVar4 == '[') {
          iVar3 = atoi(pcVar4 + 1);
          *(int *)(*(int *)(&stack0x0000005c + iVar25) + 0x44) = iVar3;
        }
      }
    }
  }
  snprintf(&stack0x000001c8 + iVar25,0x14,(char *)(DAT_00241fb4 + 0x241cb8));
  pcVar4 = strstr(*(char **)((int)&uStack_4 + iVar25),&stack0x000001c8 + iVar25);
  if (pcVar4 != (char *)0x0) {
    puVar11 = *(undefined4 **)(*(int *)(&stack0x00000000 + iVar25) + DAT_00241fb8);
    pcVar4 = (char *)(DAT_00241fbc + 0x241cd6);
    *puVar11 = 0;
    snprintf(&stack0x000001c8 + iVar25,0x14,pcVar4);
    pcVar4 = strstr(*(char **)((int)&uStack_4 + iVar25),&stack0x000001c8 + iVar25);
    iVar3 = DAT_00241fc0;
    **(char **)(&stack0x00000074 + iVar25) = '\x01' - (pcVar4 == (char *)0x0);
    snprintf(&stack0x000001c8 + iVar25,0x14,(char *)(iVar3 + 0x241cf4));
    pcVar4 = strstr(*(char **)((int)&uStack_4 + iVar25),&stack0x000001c8 + iVar25);
    *(undefined4 **)(&stack0x0000001c + iVar25) = puVar11;
    if (pcVar4 == (char *)0x0) {
      pcVar4 = (char *)FUN_0024458c();
    }
    iVar3 = atoi(pcVar4 + 0x10);
    iVar9 = *(int *)(&stack0x00000004 + iVar25);
    if (*(int *)(iVar9 + 0x44) != iVar3) {
      *(undefined1 *)(iVar9 + 0x48) = 0;
      *(undefined1 *)(iVar9 + 0x49) = 0;
    }
    iVar9 = DAT_00241fc4;
    *(int *)(*(int *)(&stack0x00000004 + iVar25) + 0x44) = iVar3;
    snprintf(&stack0x000001c8 + iVar25,0x14,(char *)(iVar9 + 0x241d2e));
    pcVar4 = strstr(*(char **)((int)&uStack_4 + iVar25),&stack0x000001c8 + iVar25);
    *(char **)(&stack0x0000000c + iVar25) = pcVar4;
    if (pcVar4 == (char *)0x0) {
      pcVar4 = (char *)FUN_0024458c();
    }
    *(char **)(&stack0x00000014 + iVar25) = pcVar4 + 0x10;
    *(undefined4 *)(&stack0x00000010 + iVar25) = 0;
    for (iVar3 = 0; *(char *)(*(int *)(&stack0x00000014 + iVar25) + iVar3) != ']';
        iVar3 = iVar3 + (uint)(cVar1 == ',')) {
      *(int *)(&stack0x00000010 + iVar25) = *(int *)(&stack0x00000010 + iVar25) + 1;
      for (; (cVar1 = *(char *)(*(int *)(&stack0x0000000c + iVar25) + iVar3 + 0x10), cVar1 != ']' &&
             (cVar1 != ',')); iVar3 = iVar3 + 1) {
      }
    }
    *(undefined4 *)(&stack0x00000008 + iVar25) = 0;
    for (uVar17 = 0; (int)uVar17 < *(int *)(&stack0x00000010 + iVar25); uVar17 = uVar17 + 1) {
      if (8 < uVar17) goto LAB_00241e32;
      pcVar4 = (char *)(*(int *)(&stack0x00000014 + iVar25) + *(int *)(&stack0x00000008 + iVar25));
      switch(uVar17) {
      case 0:
        piVar6 = *(int **)(*(int *)(&stack0x00000000 + iVar25) + DAT_00241fc8);
        iVar9 = *piVar6;
        iVar3 = atoi(pcVar4);
        if (iVar9 != iVar3) {
          iVar3 = *(int *)(&stack0x00000000 + iVar25);
          **(undefined4 **)(iVar3 + DAT_00241fcc) = 0;
          **(undefined1 **)(iVar3 + DAT_00241fd0) = 0;
        }
        iVar3 = atoi(pcVar4);
        *piVar6 = iVar3;
        goto LAB_00241e32;
      case 1:
        iVar3 = atoi(pcVar4);
        piVar6 = *(int **)(*(int *)(&stack0x00000000 + iVar25) + DAT_00241fd4);
        goto LAB_00241dde;
      case 2:
        iVar3 = atoi(pcVar4);
        piVar6 = *(int **)(*(int *)(&stack0x00000000 + iVar25) + DAT_00241fd8);
LAB_00241dde:
        *piVar6 = iVar3;
        goto LAB_00241e32;
      case 3:
        FUN_00238ef8(pcVar4);
        iVar3 = DAT_00241fdc;
        break;
      case 4:
        FUN_00238ef8(pcVar4);
        iVar3 = DAT_00241fe0;
        goto LAB_00241e20;
      case 5:
        FUN_00238ef8(pcVar4);
        iVar3 = DAT_00241fe4;
        break;
      case 6:
        FUN_00238ef8(pcVar4);
        iVar3 = DAT_00241fe8;
        goto LAB_00241e20;
      case 7:
        FUN_00238ef8(pcVar4);
        iVar3 = DAT_00241fec;
        break;
      case 8:
        FUN_00238ef8(pcVar4);
        iVar3 = DAT_00241ff0;
LAB_00241e20:
        puVar11 = *(undefined4 **)(*(int *)(&stack0x00000000 + iVar25) + iVar3);
        goto LAB_00241e24;
      }
      puVar11 = *(undefined4 **)(*(int *)(&stack0x00000000 + iVar25) + iVar3);
LAB_00241e24:
      uVar26 = __truncdfsf2();
      *puVar11 = uVar26;
LAB_00241e32:
      while ((cVar1 = *(char *)(*(int *)(&stack0x0000000c + iVar25) +
                                *(int *)(&stack0x00000008 + iVar25) + 0x10), cVar1 != ']' &&
             (cVar1 != ','))) {
        *(int *)(&stack0x00000008 + iVar25) = *(int *)(&stack0x00000008 + iVar25) + 1;
      }
      *(uint *)(&stack0x00000008 + iVar25) =
           *(int *)(&stack0x00000008 + iVar25) + (uint)(cVar1 == ',');
    }
    snprintf(&stack0x000001c8 + iVar25,0x14,(char *)(DAT_00241ff4 + 0x241e60));
    pcVar4 = strstr(*(char **)((int)&uStack_4 + iVar25),&stack0x000001c8 + iVar25);
    if (pcVar4 == (char *)0x0) {
      pcVar4 = (char *)FUN_0024458c();
    }
    iVar3 = atoi(pcVar4 + 0xd);
    pcVar4 = (char *)(DAT_00241ffc + 0x241e86);
    **(int **)(*(int *)(&stack0x00000000 + iVar25) + DAT_00241ff8) = iVar3;
    snprintf(&stack0x000001c8 + iVar25,0x14,pcVar4);
    pcVar4 = strstr(*(char **)((int)&uStack_4 + iVar25),&stack0x000001c8 + iVar25);
    if (pcVar4 == (char *)0x0) {
      FUN_0024458c();
    }
    iVar9 = 0;
    *(char **)(&stack0x00000008 + iVar25) = pcVar4 + 0xf;
    for (iVar3 = 0; *(char *)(*(int *)(&stack0x00000008 + iVar25) + iVar3) != ']';
        iVar3 = iVar3 + (uint)(cVar1 == ',')) {
      iVar9 = iVar9 + 1;
      for (; (cVar1 = pcVar4[iVar3 + 0xf], cVar1 != ']' && (cVar1 != ',')); iVar3 = iVar3 + 1) {
      }
    }
    iVar3 = 0;
    for (iVar14 = 0; iVar14 < iVar9; iVar14 = iVar14 + 1) {
      iVar20 = atoi((char *)(*(int *)(&stack0x00000008 + iVar25) + iVar3));
      *(int *)(*(int *)(*(int *)(&stack0x00000000 + iVar25) + DAT_00242000) + iVar14 * 4) = iVar20;
      for (; (cVar1 = pcVar4[iVar3 + 0xf], cVar1 != ']' && (cVar1 != ',')); iVar3 = iVar3 + 1) {
      }
      iVar3 = iVar3 + (uint)(cVar1 == ',');
    }
    snprintf(&stack0x000001c8 + iVar25,0x14,(char *)(DAT_00242004 + 0x241f0a));
    pcVar4 = strstr(*(char **)((int)&uStack_4 + iVar25),&stack0x000001c8 + iVar25);
    *(char **)(&stack0x00000008 + iVar25) = pcVar4;
    if (pcVar4 == (char *)0x0) {
      pcVar4 = (char *)FUN_0024458c();
    }
    *(char **)(&stack0x00000014 + iVar25) = pcVar4 + 0xd;
    *(undefined4 *)(&stack0x0000000c + iVar25) = 0;
    for (iVar3 = 0; *(char *)(*(int *)(&stack0x00000014 + iVar25) + iVar3) != ']';
        iVar3 = iVar3 + (uint)(cVar1 == ',')) {
      *(int *)(&stack0x0000000c + iVar25) = *(int *)(&stack0x0000000c + iVar25) + 1;
      for (; (cVar1 = *(char *)(*(int *)(&stack0x00000008 + iVar25) + iVar3 + 0xd), cVar1 != ']' &&
             (cVar1 != ',')); iVar3 = iVar3 + 1) {
      }
    }
    iVar9 = 0;
    piVar6 = *(int **)(*(int *)(&stack0x00000000 + iVar25) + DAT_00242008);
    iVar3 = *(int *)(*(int *)(&stack0x00000000 + iVar25) + DAT_0024200c);
    do {
      iVar14 = DAT_00242010;
      iVar20 = *(int *)(&stack0x00000000 + iVar25);
      *(undefined4 *)((int)piVar6 + iVar9) = 0xffffffff;
      *(undefined4 *)(iVar3 + iVar9) = 0;
      puVar11 = *(undefined4 **)(iVar20 + iVar14);
      *(int *)(&stack0x00000010 + iVar25) = iVar3;
      *(undefined4 *)((int)puVar11 + iVar9) = 0;
      iVar9 = iVar9 + 4;
    } while (iVar9 != 0x10);
    iVar3 = 0;
    for (uVar17 = 0; (int)uVar17 < *(int *)(&stack0x0000000c + iVar25); uVar17 = uVar17 + 1) {
      if (uVar17 < 0xc) {
        pcVar4 = (char *)(*(int *)(&stack0x00000014 + iVar25) + iVar3);
        switch(uVar17) {
        case 0:
          iVar9 = atoi(pcVar4);
          *piVar6 = iVar9;
          break;
        case 1:
          iVar9 = atoi(pcVar4);
          piVar6[1] = iVar9;
          break;
        case 2:
          iVar9 = atoi(pcVar4);
          piVar6[2] = iVar9;
          break;
        case 3:
          iVar9 = atoi(pcVar4);
          piVar6[3] = iVar9;
          break;
        case 4:
          atoi(pcVar4);
          uVar26 = __floatsisf();
          **(undefined4 **)(&stack0x00000010 + iVar25) = uVar26;
          break;
        case 5:
          atoi(pcVar4);
          uVar26 = __floatsisf();
          *(undefined4 *)(*(int *)(&stack0x00000010 + iVar25) + 4) = uVar26;
          break;
        case 6:
          atoi(pcVar4);
          uVar26 = __floatsisf();
          *(undefined4 *)(*(int *)(&stack0x00000010 + iVar25) + 8) = uVar26;
          break;
        case 7:
          atoi(pcVar4);
          uVar26 = __floatsisf();
          *(undefined4 *)(*(int *)(&stack0x00000010 + iVar25) + 0xc) = uVar26;
          break;
        case 8:
          FUN_00238ef8(pcVar4);
          uVar26 = __truncdfsf2();
          *puVar11 = uVar26;
          break;
        case 9:
          FUN_00238ef8(pcVar4);
          uVar26 = __truncdfsf2();
          puVar11[1] = uVar26;
          break;
        case 10:
          FUN_00238ef8(pcVar4);
          uVar26 = __truncdfsf2();
          puVar11[2] = uVar26;
          break;
        case 0xb:
          FUN_00238ef8(pcVar4);
          uVar26 = __truncdfsf2();
          puVar11[3] = uVar26;
        }
      }
      for (; (cVar1 = *(char *)(*(int *)(&stack0x00000008 + iVar25) + iVar3 + 0xd), cVar1 != ']' &&
             (cVar1 != ',')); iVar3 = iVar3 + 1) {
      }
      iVar3 = iVar3 + (uint)(cVar1 == ',');
    }
    snprintf(&stack0x000001c8 + iVar25,0x14,(char *)(DAT_00242388 + 0x2420cc));
    pcVar4 = strstr(*(char **)((int)&uStack_4 + iVar25),&stack0x000001c8 + iVar25);
    if (pcVar4 == (char *)0x0) {
      FUN_0024458c();
    }
    iVar9 = 0;
    *(char **)(&stack0x00000008 + iVar25) = pcVar4 + 0xd;
    for (iVar3 = 0; *(char *)(*(int *)(&stack0x00000008 + iVar25) + iVar3) != ']';
        iVar3 = iVar3 + (uint)(cVar1 == ',')) {
      iVar9 = iVar9 + 1;
      for (; (cVar1 = pcVar4[iVar3 + 0xd], cVar1 != ']' && (cVar1 != ',')); iVar3 = iVar3 + 1) {
      }
    }
    iVar3 = 0;
    for (iVar14 = 0; iVar14 < iVar9; iVar14 = iVar14 + 1) {
      if (iVar14 == 0) {
        iVar20 = atoi((char *)(*(int *)(&stack0x00000008 + iVar25) + iVar3));
        piVar6 = *(int **)(*(int *)(&stack0x00000000 + iVar25) + DAT_0024238c);
LAB_0024213a:
        *piVar6 = iVar20;
      }
      else if (iVar14 == 1) {
        iVar20 = atoi((char *)(*(int *)(&stack0x00000008 + iVar25) + iVar3));
        piVar6 = *(int **)(*(int *)(&stack0x00000000 + iVar25) + DAT_00242390);
        goto LAB_0024213a;
      }
      for (; (cVar1 = pcVar4[iVar3 + 0xd], cVar1 != ']' && (cVar1 != ',')); iVar3 = iVar3 + 1) {
      }
      iVar3 = iVar3 + (uint)(cVar1 == ',');
    }
    snprintf(&stack0x000001c8 + iVar25,0x14,(char *)(DAT_00242394 + 0x242164));
    pcVar4 = strstr(*(char **)((int)&uStack_4 + iVar25),&stack0x000001c8 + iVar25);
    if (pcVar4 != (char *)0x0) {
      iVar3 = atoi(pcVar4 + 0xd);
      **(int **)(&stack0x0000001c + iVar25) = iVar3;
    }
  }
  snprintf(&stack0x000001c8 + iVar25,0x20,(char *)(DAT_00242398 + 0x242186));
  pcVar4 = strstr(*(char **)((int)&uStack_4 + iVar25),&stack0x000001c8 + iVar25);
  if (pcVar4 == (char *)0x0) {
    FUN_00242a36();
  }
  puVar10 = *(undefined1 **)(&stack0xfffffff8 + iVar25);
  *(undefined4 *)(puVar10 + 0xdc) = 0;
  iVar3 = DAT_0024239c;
  *puVar10 = 0;
  snprintf(&stack0x000001c8 + iVar25,0x20,(char *)(iVar3 + 0x2421ae));
  pcVar4 = strstr(*(char **)((int)&uStack_4 + iVar25),&stack0x000001c8 + iVar25);
  if (pcVar4 != (char *)0x0) {
    *puVar10 = 1;
  }
  snprintf(&stack0x000001c8 + iVar25,0x20,(char *)(DAT_002423a0 + 0x2421ca));
  pcVar4 = strstr(*(char **)((int)&uStack_4 + iVar25),&stack0x000001c8 + iVar25);
  if (pcVar4 != (char *)0x0) {
    iVar3 = atoi(pcVar4 + 0x10);
    if (*(int *)(*(ZombieCafe **)(&stack0x00000004 + iVar25) + 800) != iVar3) {
      ZombieCafe::initWeekRaid_attackPoint(*(ZombieCafe **)(&stack0x00000004 + iVar25));
      ZombieCafe::initWeekRaid_openNum(*(ZombieCafe **)(&stack0x00000004 + iVar25));
      ZombieCafe::initWeekRaid_toxinflag(*(ZombieCafe **)(&stack0x00000004 + iVar25));
    }
    *(int *)(*(int *)(&stack0x00000004 + iVar25) + 800) = iVar3;
  }
  snprintf(&stack0x000001c8 + iVar25,0x20,(char *)(DAT_002423a4 + 0x24220c));
  pcVar4 = strstr(*(char **)((int)&uStack_4 + iVar25),&stack0x000001c8 + iVar25);
  if (pcVar4 != (char *)0x0) {
    iVar3 = atoi(pcVar4 + 0x10);
    *(int *)(*(int *)(&stack0x00000004 + iVar25) + 0x324) = iVar3;
  }
  snprintf(&stack0x000001c8 + iVar25,0x20,(char *)(DAT_002423a8 + 0x242232));
  pcVar4 = strstr(*(char **)((int)&uStack_4 + iVar25),&stack0x000001c8 + iVar25);
  if (pcVar4 != (char *)0x0) {
    for (sVar16 = 0; pcVar4[sVar16 + 0x11] != ']'; sVar16 = sVar16 + 1) {
    }
    if (0x1e < (int)sVar16) {
      sVar16 = 0x1f;
    }
    iVar3 = *(int *)(&stack0xfffffff8 + iVar25);
    memset((char *)(iVar3 + 0xbc),0,0x20);
    strncpy((char *)(iVar3 + 0xbc),pcVar4 + 0x11,sVar16);
    *(undefined1 *)(*(int *)(&stack0xfffffff8 + iVar25) + 0xdb) = 0;
  }
  snprintf(&stack0x000001c8 + iVar25,0x20,(char *)(DAT_002423ac + 0x242282));
  pcVar4 = strstr(*(char **)((int)&uStack_4 + iVar25),&stack0x000001c8 + iVar25);
  if (pcVar4 != (char *)0x0) {
    iVar3 = atoi(pcVar4 + 0x11);
    *(int *)(*(int *)(&stack0xfffffff8 + iVar25) + 0xc) = iVar3;
  }
  snprintf(&stack0x000001c8 + iVar25,0x20,(char *)(DAT_002423b0 + 0x2422a4));
  pcVar4 = strstr(*(char **)((int)&uStack_4 + iVar25),&stack0x000001c8 + iVar25);
  if (pcVar4 != (char *)0x0) {
    *(char **)(&stack0x00000008 + iVar25) = pcVar4 + 0x13;
    iVar9 = 0;
    for (iVar3 = 0; *(char *)(*(int *)(&stack0x00000008 + iVar25) + iVar3) != ']';
        iVar3 = iVar3 + (uint)(cVar1 == ',')) {
      iVar9 = iVar9 + 1;
      for (; (cVar1 = pcVar4[iVar3 + 0x13], cVar1 != ']' && (cVar1 != ',')); iVar3 = iVar3 + 1) {
      }
    }
    if (2 < iVar9) {
      iVar9 = 2;
    }
    iVar3 = 0;
    for (iVar14 = 0; iVar14 < iVar9; iVar14 = iVar14 + 1) {
      iVar20 = atoi((char *)(*(int *)(&stack0x00000008 + iVar25) + iVar3));
      *(int *)(*(int *)(&stack0xfffffff8 + iVar25) + iVar14 * 4 + 0x10) = iVar20;
      for (; (cVar1 = pcVar4[iVar3 + 0x13], cVar1 != ']' && (cVar1 != ',')); iVar3 = iVar3 + 1) {
      }
      iVar3 = iVar3 + (uint)(cVar1 == ',');
    }
  }
  snprintf(&stack0x000001c8 + iVar25,0x20,(char *)(DAT_002423b4 + 0x242324));
  pcVar4 = strstr(*(char **)((int)&uStack_4 + iVar25),&stack0x000001c8 + iVar25);
  *(char **)(&stack0x00000008 + iVar25) = pcVar4;
  if (pcVar4 != (char *)0x0) {
    iVar9 = 0;
    *(char **)(&stack0x0000000c + iVar25) = pcVar4 + 0x11;
    for (iVar3 = 0; *(char *)(*(int *)(&stack0x0000000c + iVar25) + iVar3) != ']';
        iVar3 = iVar3 + (uint)(cVar1 == ',')) {
      iVar9 = iVar9 + 1;
      for (; (cVar1 = *(char *)(*(int *)(&stack0x00000008 + iVar25) + iVar3 + 0x11), cVar1 != ']' &&
             (cVar1 != ',')); iVar3 = iVar3 + 1) {
      }
    }
    iVar3 = 0;
    do {
      iVar14 = *(int *)(&stack0xfffffff8 + iVar25) + iVar3;
      *(undefined4 *)(iVar14 + 0x18) = 0xffffffff;
      *(undefined4 *)(iVar14 + 0x38) = 0;
      *(undefined4 *)(iVar14 + 0x58) = 0;
      *(undefined4 *)(iVar14 + 0x78) = 0;
      iVar3 = iVar3 + 4;
      *(undefined4 *)(iVar14 + 0x98) = 0;
    } while (iVar3 != 0x20);
    iVar3 = 0;
    for (uVar17 = 0; (int)uVar17 < iVar9; uVar17 = uVar17 + 1) {
      if (0x27 < uVar17) goto LAB_0024264c;
      pcVar4 = (char *)(*(int *)(&stack0x0000000c + iVar25) + iVar3);
      switch(uVar17) {
      case 0:
        iVar14 = atoi(pcVar4);
        *(int *)(*(int *)(&stack0xfffffff8 + iVar25) + 0x18) = iVar14;
        break;
      case 1:
        iVar14 = atoi(pcVar4);
        *(int *)(*(int *)(&stack0xfffffff8 + iVar25) + 0x1c) = iVar14;
        break;
      case 2:
        iVar14 = atoi(pcVar4);
        *(int *)(*(int *)(&stack0xfffffff8 + iVar25) + 0x20) = iVar14;
        break;
      case 3:
        iVar14 = atoi(pcVar4);
        *(int *)(*(int *)(&stack0xfffffff8 + iVar25) + 0x24) = iVar14;
        break;
      case 4:
        iVar14 = atoi(pcVar4);
        *(int *)(*(int *)(&stack0xfffffff8 + iVar25) + 0x28) = iVar14;
        break;
      case 5:
        iVar14 = atoi(pcVar4);
        *(int *)(*(int *)(&stack0xfffffff8 + iVar25) + 0x2c) = iVar14;
        break;
      case 6:
        iVar14 = atoi(pcVar4);
        *(int *)(*(int *)(&stack0xfffffff8 + iVar25) + 0x30) = iVar14;
        break;
      case 7:
        iVar14 = atoi(pcVar4);
        *(int *)(*(int *)(&stack0xfffffff8 + iVar25) + 0x34) = iVar14;
        break;
      case 8:
        FUN_00238ef8(pcVar4);
        uVar26 = __truncdfsf2();
        *(undefined4 *)(*(int *)(&stack0xfffffff8 + iVar25) + 0x38) = uVar26;
        break;
      case 9:
        FUN_00238ef8(pcVar4);
        uVar26 = __truncdfsf2();
        *(undefined4 *)(*(int *)(&stack0xfffffff8 + iVar25) + 0x3c) = uVar26;
        break;
      case 10:
        FUN_00238ef8(pcVar4);
        uVar26 = __truncdfsf2();
        *(undefined4 *)(*(int *)(&stack0xfffffff8 + iVar25) + 0x40) = uVar26;
        break;
      case 0xb:
        FUN_00238ef8(pcVar4);
        uVar26 = __truncdfsf2();
        *(undefined4 *)(*(int *)(&stack0xfffffff8 + iVar25) + 0x44) = uVar26;
        break;
      case 0xc:
        FUN_00238ef8(pcVar4);
        uVar26 = __truncdfsf2();
        *(undefined4 *)(*(int *)(&stack0xfffffff8 + iVar25) + 0x48) = uVar26;
        break;
      case 0xd:
        FUN_00238ef8(pcVar4);
        uVar26 = __truncdfsf2();
        *(undefined4 *)(*(int *)(&stack0xfffffff8 + iVar25) + 0x4c) = uVar26;
        break;
      case 0xe:
        FUN_00238ef8(pcVar4);
        uVar26 = __truncdfsf2();
        *(undefined4 *)(*(int *)(&stack0xfffffff8 + iVar25) + 0x50) = uVar26;
        break;
      case 0xf:
        FUN_00238ef8(pcVar4);
        uVar26 = __truncdfsf2();
        *(undefined4 *)(*(int *)(&stack0xfffffff8 + iVar25) + 0x54) = uVar26;
        break;
      case 0x10:
        FUN_00238ef8(pcVar4);
        uVar26 = __truncdfsf2();
        *(undefined4 *)(*(int *)(&stack0xfffffff8 + iVar25) + 0x58) = uVar26;
        break;
      case 0x11:
        FUN_00238ef8(pcVar4);
        uVar26 = __truncdfsf2();
        *(undefined4 *)(*(int *)(&stack0xfffffff8 + iVar25) + 0x5c) = uVar26;
        break;
      case 0x12:
        FUN_00238ef8(pcVar4);
        uVar26 = __truncdfsf2();
        *(undefined4 *)(*(int *)(&stack0xfffffff8 + iVar25) + 0x60) = uVar26;
        break;
      case 0x13:
        FUN_00238ef8(pcVar4);
        uVar26 = __truncdfsf2();
        *(undefined4 *)(*(int *)(&stack0xfffffff8 + iVar25) + 100) = uVar26;
        break;
      case 0x14:
        FUN_00238ef8(pcVar4);
        uVar26 = __truncdfsf2();
        *(undefined4 *)(*(int *)(&stack0xfffffff8 + iVar25) + 0x68) = uVar26;
        break;
      case 0x15:
        FUN_00238ef8(pcVar4);
        uVar26 = __truncdfsf2();
        *(undefined4 *)(*(int *)(&stack0xfffffff8 + iVar25) + 0x6c) = uVar26;
        break;
      case 0x16:
        FUN_00238ef8(pcVar4);
        uVar26 = __truncdfsf2();
        *(undefined4 *)(*(int *)(&stack0xfffffff8 + iVar25) + 0x70) = uVar26;
        break;
      case 0x17:
        FUN_00238ef8(pcVar4);
        uVar26 = __truncdfsf2();
        *(undefined4 *)(*(int *)(&stack0xfffffff8 + iVar25) + 0x74) = uVar26;
        break;
      case 0x18:
        FUN_00238ef8(pcVar4);
        uVar26 = __truncdfsf2();
        *(undefined4 *)(*(int *)(&stack0xfffffff8 + iVar25) + 0x78) = uVar26;
        break;
      case 0x19:
        FUN_00238ef8(pcVar4);
        uVar26 = __truncdfsf2();
        iVar14 = *(int *)(&stack0xfffffff8 + iVar25);
        goto LAB_002425b0;
      case 0x1a:
        FUN_00238ef8(pcVar4);
        iVar14 = *(int *)(&stack0xfffffff8 + iVar25) + 4;
        goto LAB_002425ac;
      case 0x1b:
        FUN_00238ef8(pcVar4);
        iVar14 = *(int *)(&stack0xfffffff8 + iVar25) + 8;
LAB_002425ac:
        uVar26 = __truncdfsf2();
LAB_002425b0:
        *(undefined4 *)(iVar14 + 0x7c) = uVar26;
        break;
      case 0x1c:
        FUN_00238ef8(pcVar4);
        puVar11 = (undefined4 *)(*(int *)(&stack0xfffffff8 + iVar25) + 0x88);
        goto LAB_00242642;
      case 0x1d:
        FUN_00238ef8(pcVar4);
        puVar11 = (undefined4 *)(*(int *)(&stack0xfffffff8 + iVar25) + 0x8c);
        goto LAB_00242642;
      case 0x1e:
        FUN_00238ef8(pcVar4);
        puVar11 = (undefined4 *)(*(int *)(&stack0xfffffff8 + iVar25) + 0x90);
        goto LAB_00242642;
      case 0x1f:
        FUN_00238ef8(pcVar4);
        puVar11 = (undefined4 *)(*(int *)(&stack0xfffffff8 + iVar25) + 0x94);
        goto LAB_00242642;
      case 0x20:
        FUN_00238ef8(pcVar4);
        puVar11 = (undefined4 *)(*(int *)(&stack0xfffffff8 + iVar25) + 0x98);
        goto LAB_00242642;
      case 0x21:
        FUN_00238ef8(pcVar4);
        puVar11 = (undefined4 *)(*(int *)(&stack0xfffffff8 + iVar25) + 0x9c);
        goto LAB_00242642;
      case 0x22:
        FUN_00238ef8(pcVar4);
        puVar11 = (undefined4 *)(*(int *)(&stack0xfffffff8 + iVar25) + 0xa0);
        goto LAB_00242642;
      case 0x23:
        FUN_00238ef8(pcVar4);
        puVar11 = (undefined4 *)(*(int *)(&stack0xfffffff8 + iVar25) + 0xa4);
        goto LAB_00242642;
      case 0x24:
        FUN_00238ef8(pcVar4);
        puVar11 = (undefined4 *)(*(int *)(&stack0xfffffff8 + iVar25) + 0xa8);
        goto LAB_00242642;
      case 0x25:
        FUN_00238ef8(pcVar4);
        puVar11 = (undefined4 *)(*(int *)(&stack0xfffffff8 + iVar25) + 0xac);
        goto LAB_00242642;
      case 0x26:
        FUN_00238ef8(pcVar4);
        puVar11 = (undefined4 *)(*(int *)(&stack0xfffffff8 + iVar25) + 0xb0);
        goto LAB_00242642;
      case 0x27:
        FUN_00238ef8(pcVar4);
        puVar11 = (undefined4 *)(*(int *)(&stack0xfffffff8 + iVar25) + 0xb4);
LAB_00242642:
        uVar26 = __truncdfsf2();
        *puVar11 = uVar26;
      }
LAB_0024264c:
      for (; (cVar1 = *(char *)(*(int *)(&stack0x00000008 + iVar25) + iVar3 + 0x11), cVar1 != ']' &&
             (cVar1 != ',')); iVar3 = iVar3 + 1) {
      }
      iVar3 = iVar3 + (uint)(cVar1 == ',');
    }
  }
  snprintf(&stack0x000001c8 + iVar25,0x20,(char *)(DAT_00242984 + 0x242674));
  pcVar4 = strstr(*(char **)((int)&uStack_4 + iVar25),&stack0x000001c8 + iVar25);
  if (pcVar4 != (char *)0x0) {
    iVar9 = 0;
    *(char **)(&stack0x00000008 + iVar25) = pcVar4 + 0x11;
    for (iVar3 = 0; *(char *)(*(int *)(&stack0x00000008 + iVar25) + iVar3) != ']';
        iVar3 = iVar3 + (uint)(cVar1 == ',')) {
      iVar9 = iVar9 + 1;
      for (; (cVar1 = pcVar4[iVar3 + 0x11], cVar1 != ']' && (cVar1 != ',')); iVar3 = iVar3 + 1) {
      }
    }
    iVar3 = 0;
    for (iVar14 = 0; iVar14 < iVar9; iVar14 = iVar14 + 1) {
      if (iVar14 == 0) {
        iVar20 = atoi((char *)(*(int *)(&stack0x00000008 + iVar25) + iVar3));
        *(int *)(*(int *)(&stack0xfffffff8 + iVar25) + 4) = iVar20;
      }
      else if (iVar14 == 1) {
        iVar20 = atoi((char *)(*(int *)(&stack0x00000008 + iVar25) + iVar3));
        *(int *)(*(int *)(&stack0xfffffff8 + iVar25) + 8) = iVar20;
      }
      for (; (cVar1 = pcVar4[iVar3 + 0x11], cVar1 != ']' && (cVar1 != ',')); iVar3 = iVar3 + 1) {
      }
      iVar3 = iVar3 + (uint)(cVar1 == ',');
    }
  }
  snprintf(&stack0x000001c8 + iVar25,0x20,(char *)(DAT_00242988 + 0x242702));
  pcVar4 = strstr(*(char **)((int)&uStack_4 + iVar25),&stack0x000001c8 + iVar25);
  if (pcVar4 != (char *)0x0) {
    iVar3 = atoi(pcVar4 + 0x13);
    **(int **)(*(int *)(&stack0x00000000 + iVar25) + DAT_0024298c) = iVar3;
  }
  snprintf(&stack0x000001c8 + iVar25,0x20,(char *)(DAT_00242990 + 0x242728));
  pcVar4 = strstr(*(char **)((int)&uStack_4 + iVar25),&stack0x000001c8 + iVar25);
  if (pcVar4 != (char *)0x0) {
    iVar3 = atoi(pcVar4 + 0x10);
    *(int *)(*(int *)(&stack0xfffffff8 + iVar25) + 0xdc) = iVar3;
  }
  snprintf(&stack0x000001c8 + iVar25,0x20,(char *)(DAT_00242994 + 0x24274c));
  pcVar4 = strstr(*(char **)((int)&uStack_4 + iVar25),&stack0x000001c8 + iVar25);
  *(char **)(&stack0x00000008 + iVar25) = pcVar4;
  if (pcVar4 == (char *)0x0) {
    FUN_00242a36();
    return;
  }
  iVar9 = 0;
  *(char **)(&stack0x0000000c + iVar25) = pcVar4 + 0x11;
  for (iVar3 = 0; *(char *)(*(int *)(&stack0x0000000c + iVar25) + iVar3) != ']';
      iVar3 = iVar3 + (uint)(cVar1 == ',')) {
    iVar9 = iVar9 + 1;
    for (; (cVar1 = *(char *)(*(int *)(&stack0x00000008 + iVar25) + iVar3 + 0x11), cVar1 != ']' &&
           (cVar1 != ',')); iVar3 = iVar3 + 1) {
    }
  }
  iVar3 = 0;
  do {
    iVar14 = *(int *)(&stack0xfffffff8 + iVar25) + iVar3;
    *(undefined4 *)(iVar14 + 0xe0) = 0xffffffff;
    *(undefined4 *)(iVar14 + 0x120) = 0;
    iVar3 = iVar3 + 4;
    *(undefined4 *)(iVar14 + 0x100) = 0xffffffff;
    *(undefined4 *)(iVar14 + 0x140) = 0;
  } while (iVar3 != 0x20);
  iVar3 = 0;
  for (uVar17 = 0; iVar14 = DAT_00242d44, (int)uVar17 < iVar9; uVar17 = uVar17 + 1) {
    if (0x1f < uVar17) goto LAB_00242a18;
    pcVar4 = (char *)(*(int *)(&stack0x0000000c + iVar25) + iVar3);
    switch(uVar17) {
    case 0:
      iVar14 = atoi(pcVar4);
      piVar6 = (int *)(*(int *)(&stack0xfffffff8 + iVar25) + 0xe0);
      goto LAB_00242824;
    case 1:
      iVar14 = atoi(pcVar4);
      piVar6 = (int *)(*(int *)(&stack0xfffffff8 + iVar25) + 0xe4);
      goto LAB_00242824;
    case 2:
      iVar14 = atoi(pcVar4);
      piVar6 = (int *)(*(int *)(&stack0xfffffff8 + iVar25) + 0xe8);
      goto LAB_00242824;
    case 3:
      iVar14 = atoi(pcVar4);
      piVar6 = (int *)(*(int *)(&stack0xfffffff8 + iVar25) + 0xec);
      goto LAB_00242824;
    case 4:
      iVar14 = atoi(pcVar4);
      piVar6 = (int *)(*(int *)(&stack0xfffffff8 + iVar25) + 0xf0);
      goto LAB_00242824;
    case 5:
      iVar14 = atoi(pcVar4);
      piVar6 = (int *)(*(int *)(&stack0xfffffff8 + iVar25) + 0xf4);
      goto LAB_00242824;
    case 6:
      iVar14 = atoi(pcVar4);
      piVar6 = (int *)(*(int *)(&stack0xfffffff8 + iVar25) + 0xf8);
      goto LAB_00242824;
    case 7:
      iVar14 = atoi(pcVar4);
      piVar6 = (int *)(*(int *)(&stack0xfffffff8 + iVar25) + 0xfc);
LAB_00242824:
      *piVar6 = iVar14;
      break;
    case 8:
      FUN_00238ef8(pcVar4);
      uVar26 = __truncdfsf2();
      *(undefined4 *)(*(int *)(&stack0xfffffff8 + iVar25) + 0x120) = uVar26;
      break;
    case 9:
      FUN_00238ef8(pcVar4);
      uVar26 = __truncdfsf2();
      *(undefined4 *)(*(int *)(&stack0xfffffff8 + iVar25) + 0x124) = uVar26;
      break;
    case 10:
      FUN_00238ef8(pcVar4);
      uVar26 = __truncdfsf2();
      *(undefined4 *)(*(int *)(&stack0xfffffff8 + iVar25) + 0x128) = uVar26;
      break;
    case 0xb:
      FUN_00238ef8(pcVar4);
      uVar26 = __truncdfsf2();
      *(undefined4 *)(*(int *)(&stack0xfffffff8 + iVar25) + 300) = uVar26;
      break;
    case 0xc:
      FUN_00238ef8(pcVar4);
      uVar26 = __truncdfsf2();
      *(undefined4 *)(*(int *)(&stack0xfffffff8 + iVar25) + 0x130) = uVar26;
      break;
    case 0xd:
      FUN_00238ef8(pcVar4);
      uVar26 = __truncdfsf2();
      *(undefined4 *)(*(int *)(&stack0xfffffff8 + iVar25) + 0x134) = uVar26;
      break;
    case 0xe:
      FUN_00238ef8(pcVar4);
      uVar26 = __truncdfsf2();
      *(undefined4 *)(*(int *)(&stack0xfffffff8 + iVar25) + 0x138) = uVar26;
      break;
    case 0xf:
      FUN_00238ef8(pcVar4);
      uVar26 = __truncdfsf2();
      *(undefined4 *)(*(int *)(&stack0xfffffff8 + iVar25) + 0x13c) = uVar26;
      break;
    case 0x10:
      iVar14 = atoi(pcVar4);
      *(int *)(*(int *)(&stack0xfffffff8 + iVar25) + 0x100) = iVar14;
      break;
    case 0x11:
      iVar14 = atoi(pcVar4);
      *(int *)(*(int *)(&stack0xfffffff8 + iVar25) + 0x104) = iVar14;
      break;
    case 0x12:
      iVar14 = atoi(pcVar4);
      *(int *)(*(int *)(&stack0xfffffff8 + iVar25) + 0x108) = iVar14;
      break;
    case 0x13:
      iVar14 = atoi(pcVar4);
      *(int *)(*(int *)(&stack0xfffffff8 + iVar25) + 0x10c) = iVar14;
      break;
    case 0x14:
      iVar14 = atoi(pcVar4);
      *(int *)(*(int *)(&stack0xfffffff8 + iVar25) + 0x110) = iVar14;
      break;
    case 0x15:
      iVar14 = atoi(pcVar4);
      *(int *)(*(int *)(&stack0xfffffff8 + iVar25) + 0x114) = iVar14;
      break;
    case 0x16:
      iVar14 = atoi(pcVar4);
      *(int *)(*(int *)(&stack0xfffffff8 + iVar25) + 0x118) = iVar14;
      break;
    case 0x17:
      iVar14 = atoi(pcVar4);
      *(int *)(*(int *)(&stack0xfffffff8 + iVar25) + 0x11c) = iVar14;
      break;
    case 0x18:
      FUN_00238ef8(pcVar4);
      uVar26 = __truncdfsf2();
      *(undefined4 *)(*(int *)(&stack0xfffffff8 + iVar25) + 0x140) = uVar26;
      break;
    case 0x19:
      FUN_00238ef8(pcVar4);
      uVar26 = __truncdfsf2();
      *(undefined4 *)(*(int *)(&stack0xfffffff8 + iVar25) + 0x144) = uVar26;
      break;
    case 0x1a:
      FUN_00238ef8(pcVar4);
      uVar26 = __truncdfsf2();
      *(undefined4 *)(*(int *)(&stack0xfffffff8 + iVar25) + 0x148) = uVar26;
      break;
    case 0x1b:
      FUN_00238ef8(pcVar4);
      uVar26 = __truncdfsf2();
      *(undefined4 *)(*(int *)(&stack0xfffffff8 + iVar25) + 0x14c) = uVar26;
      break;
    case 0x1c:
      FUN_00238ef8(pcVar4);
      uVar26 = __truncdfsf2();
      *(undefined4 *)(*(int *)(&stack0xfffffff8 + iVar25) + 0x150) = uVar26;
      break;
    case 0x1d:
      FUN_00238ef8(pcVar4);
      uVar26 = __truncdfsf2();
      *(undefined4 *)(*(int *)(&stack0xfffffff8 + iVar25) + 0x154) = uVar26;
      break;
    case 0x1e:
      FUN_00238ef8(pcVar4);
      uVar26 = __truncdfsf2();
      *(undefined4 *)(*(int *)(&stack0xfffffff8 + iVar25) + 0x158) = uVar26;
      break;
    case 0x1f:
      FUN_00238ef8(pcVar4);
      uVar26 = __truncdfsf2();
      *(undefined4 *)(*(int *)(&stack0xfffffff8 + iVar25) + 0x15c) = uVar26;
    }
LAB_00242a18:
    for (; (cVar1 = *(char *)(*(int *)(&stack0x00000008 + iVar25) + iVar3 + 0x11), cVar1 != ']' &&
           (cVar1 != ',')); iVar3 = iVar3 + 1) {
    }
    iVar3 = iVar3 + (uint)(cVar1 == ',');
  }
  **(undefined1 **)(&stack0x00000078 + iVar25) = 0;
  snprintf(&stack0x000001c8 + iVar25,0x14,(char *)(iVar14 + 0x242a44));
  pcVar4 = strstr(*(char **)((int)&uStack_4 + iVar25),&stack0x000001c8 + iVar25);
  if (pcVar4 != (char *)0x0) {
    snprintf(&stack0x000001c8 + iVar25,0x14,(char *)(DAT_00242d48 + 0x242a5e));
    pcVar4 = strstr(*(char **)((int)&uStack_4 + iVar25),&stack0x000001c8 + iVar25);
    if (pcVar4 == (char *)0x0) {
      **(undefined1 **)(&stack0x00000020 + iVar25) = 0;
    }
    else {
      **(undefined1 **)(&stack0x00000020 + iVar25) = 1;
    }
  }
  snprintf(&stack0x000001c8 + iVar25,0x14,(char *)(DAT_00242d4c + 0x242a82));
  pcVar4 = strstr(*(char **)((int)&uStack_4 + iVar25),&stack0x000001c8 + iVar25);
  pcVar13 = *(char **)(*(int *)(&stack0x00000000 + iVar25) + DAT_00242d50);
  pcVar8 = (char *)(DAT_00242d54 + 0x242a9e);
  *pcVar13 = '\x01' - (pcVar4 == (char *)0x0);
  snprintf(&stack0x000001c8 + iVar25,0x14,pcVar8);
  pcVar4 = strstr(*(char **)((int)&uStack_4 + iVar25),&stack0x000001c8 + iVar25);
  *(char **)(&stack0x00000020 + iVar25) = pcVar13;
  if (pcVar4 != (char *)0x0) {
    *(char **)(&stack0xfffffff8 + iVar25) = pcVar4 + 0xd;
    iVar9 = 0;
    for (iVar3 = 0; *(char *)(*(int *)(&stack0xfffffff8 + iVar25) + iVar3) != ']';
        iVar3 = iVar3 + (uint)(cVar1 == ',')) {
      iVar9 = iVar9 + 1;
      for (; (cVar1 = pcVar4[iVar3 + 0xd], cVar1 != ']' && (cVar1 != ',')); iVar3 = iVar3 + 1) {
      }
    }
    iVar3 = 0;
    for (iVar14 = 0; iVar14 < iVar9; iVar14 = iVar14 + 1) {
      iVar20 = atoi((char *)(*(int *)(&stack0xfffffff8 + iVar25) + iVar3));
      *(int *)(*(int *)(*(int *)(&stack0x00000000 + iVar25) + DAT_00242d58) + iVar14 * 4) = iVar20;
      for (; (cVar1 = pcVar4[iVar3 + 0xd], cVar1 != ']' && (cVar1 != ',')); iVar3 = iVar3 + 1) {
      }
      iVar3 = iVar3 + (uint)(cVar1 == ',');
    }
    snprintf(&stack0x000001c8 + iVar25,0x14,(char *)(DAT_00242d5c + 0x242b24),0);
    pcVar4 = strstr(*(char **)((int)&uStack_4 + iVar25),&stack0x000001c8 + iVar25);
    if (pcVar4 != (char *)0x0) {
      iVar9 = 0;
      *(char **)(&stack0xfffffff8 + iVar25) = pcVar4 + 9;
      for (iVar3 = 0; *(char *)(*(int *)(&stack0xfffffff8 + iVar25) + iVar3) != ']';
          iVar3 = iVar3 + (uint)(cVar1 == ',')) {
        iVar9 = iVar9 + 1;
        for (; (cVar1 = pcVar4[iVar3 + 9], cVar1 != ']' && (cVar1 != ',')); iVar3 = iVar3 + 1) {
        }
      }
      sVar16 = 0;
      for (iVar3 = 0; iVar3 < iVar9; iVar3 = iVar3 + 1) {
        for (; (cVar1 = pcVar4[sVar16 + 9], cVar1 != ']' && (cVar1 != ',')); sVar16 = sVar16 + 1) {
        }
        sVar16 = sVar16 + (cVar1 == ',');
        if (99 < (int)sVar16) break;
        pcVar8 = *(char **)(*(int *)(&stack0x00000000 + iVar25) + DAT_00242d60);
        *(char **)(&stack0x00000008 + iVar25) = pcVar8;
        strncpy(pcVar8,*(char **)(&stack0xfffffff8 + iVar25),sVar16);
        **(undefined4 **)(*(int *)(&stack0x00000000 + iVar25) + DAT_00242d64) =
             *(undefined4 *)(&stack0x00000008 + iVar25);
      }
      snprintf(&stack0x000001c8 + iVar25,0x14,(char *)(DAT_00242d68 + 0x242bb0),0);
      pcVar4 = strstr(*(char **)((int)&uStack_4 + iVar25),&stack0x000001c8 + iVar25);
      if (pcVar4 != (char *)0x0) {
        iVar9 = 0;
        *(char **)(&stack0xfffffff8 + iVar25) = pcVar4 + 9;
        for (iVar3 = 0; *(char *)(*(int *)(&stack0xfffffff8 + iVar25) + iVar3) != ']';
            iVar3 = iVar3 + (uint)(cVar1 == ',')) {
          iVar9 = iVar9 + 1;
          for (; (cVar1 = pcVar4[iVar3 + 9], cVar1 != ']' && (cVar1 != ',')); iVar3 = iVar3 + 1) {
          }
        }
        iVar14 = 0;
        iVar3 = *(int *)(*(int *)(&stack0x00000000 + iVar25) + DAT_00242d6c);
        do {
          puVar10 = (undefined1 *)(iVar14 + iVar3);
          iVar14 = iVar14 + 1;
          *puVar10 = 0;
          *(int *)(&stack0x00000008 + iVar25) = iVar3;
        } while (iVar14 != 0x400);
        sVar16 = 0;
        for (iVar3 = 0; iVar3 < iVar9; iVar3 = iVar3 + 1) {
          for (; (cVar1 = pcVar4[sVar16 + 9], cVar1 != ']' && (cVar1 != ',')); sVar16 = sVar16 + 1)
          {
          }
          sVar16 = sVar16 + (cVar1 == ',');
          if (DAT_00242d70 < (int)sVar16) break;
          strncpy(*(char **)(&stack0x00000008 + iVar25),*(char **)(&stack0xfffffff8 + iVar25),sVar16
                 );
          **(undefined4 **)(*(int *)(&stack0x00000000 + iVar25) + DAT_00242d74) =
               *(undefined4 *)(&stack0x00000008 + iVar25);
        }
      }
    }
  }
  iVar14 = CapcomApp::getInstance();
  iVar9 = DAT_00242d7c;
  iVar3 = DAT_00242d78;
  iVar14 = *(int *)(iVar14 + 4);
  iVar20 = *(int *)(&stack0x00000000 + iVar25);
  *(undefined4 *)(iVar14 + DAT_00242d78) = 0x42;
  if (((**(byte **)(iVar20 + iVar9) < 0x43) && (*(int *)(iVar14 + 0x680) < 0x43)) &&
     (0x41 < **(int **)(*(int *)(&stack0x00000000 + iVar25) + DAT_00242d80))) {
    **(byte **)(iVar20 + iVar9) = 0x42;
  }
  else {
    *(undefined4 *)(iVar14 + iVar3) = 0xffffffff;
  }
  snprintf(&stack0x000001c8 + iVar25,0x20,(char *)(DAT_00242d84 + 0x242c86));
  pcVar4 = strstr(*(char **)((int)&uStack_4 + iVar25),&stack0x000001c8 + iVar25);
  if (pcVar4 != (char *)0x0) {
    snprintf(&stack0x000001c8 + iVar25,0x20,(char *)(DAT_00242d88 + 0x242ca0));
    pcVar4 = strstr(*(char **)((int)&uStack_4 + iVar25),&stack0x000001c8 + iVar25);
    if (pcVar4 != (char *)0x0) {
      pcVar4 = (char *)atoi(pcVar4 + 0xe);
    }
    snprintf(&stack0x000001c8 + iVar25,0x20,(char *)(DAT_00242d8c + 0x242cc0));
    pcVar8 = strstr(*(char **)((int)&uStack_4 + iVar25),&stack0x000001c8 + iVar25);
    if (pcVar8 == (char *)0x0) {
      iVar3 = *(int *)(&stack0x00000000 + iVar25);
      **(undefined4 **)(iVar3 + DAT_00242d90) = 0;
      **(undefined4 **)(iVar3 + DAT_00242d94) = 0;
    }
    else {
      *(char **)(&stack0x00000008 + iVar25) = pcVar8 + 0x15;
      *(undefined4 *)(&stack0xfffffff8 + iVar25) = 0;
      for (iVar3 = 0; *(char *)(*(int *)(&stack0x00000008 + iVar25) + iVar3) != ']';
          iVar3 = iVar3 + (uint)(cVar1 == ',')) {
        *(int *)(&stack0xfffffff8 + iVar25) = *(int *)(&stack0xfffffff8 + iVar25) + 1;
        for (; (cVar1 = pcVar8[iVar3 + 0x15], cVar1 != ']' && (cVar1 != ',')); iVar3 = iVar3 + 1) {
        }
      }
      iVar3 = 0;
      for (iVar9 = 0; iVar9 < *(int *)(&stack0xfffffff8 + iVar25); iVar9 = iVar9 + 1) {
        if (iVar9 == 0) {
          iVar14 = atoi((char *)(*(int *)(&stack0x00000008 + iVar25) + iVar3));
          piVar6 = *(int **)(*(int *)(&stack0x00000000 + iVar25) + DAT_00242d90);
LAB_00242d40:
          *piVar6 = iVar14;
        }
        else if (iVar9 == 1) {
          iVar14 = atoi((char *)(*(int *)(&stack0x00000008 + iVar25) + iVar3));
          piVar6 = *(int **)(*(int *)(&stack0x00000000 + iVar25) + DAT_00242d94);
          goto LAB_00242d40;
        }
        for (; (cVar1 = pcVar8[iVar3 + 0x15], cVar1 != ']' && (cVar1 != ',')); iVar3 = iVar3 + 1) {
        }
        iVar3 = iVar3 + (uint)(cVar1 == ',');
      }
    }
    iVar3 = *(int *)(&stack0x00000004 + iVar25);
    if (*(short *)(iVar3 + DAT_0024309c) == 0) {
      if (pcVar4 != (char *)0x0) {
        *(short *)(iVar3 + DAT_0024309c) = (short)pcVar4;
        *(undefined2 *)(iVar3 + DAT_002430a0) = 0;
      }
    }
    else if ((char *)(int)*(short *)(iVar3 + DAT_0024309c) != pcVar4) {
      iVar3 = *(int *)(&stack0x00000004 + iVar25);
      *(short *)(iVar3 + DAT_0024309c) = (short)pcVar4;
      *(undefined2 *)(iVar3 + DAT_002430a0) = 0;
    }
  }
  iVar9 = DAT_002430ac;
  iVar3 = DAT_002430a8;
  iVar20 = *(int *)(&stack0x00000000 + iVar25);
  iVar21 = 0;
  puVar11 = *(undefined4 **)(iVar20 + DAT_002430a4);
  *puVar11 = 0;
  iVar14 = DAT_002430b0;
  puVar18 = *(undefined4 **)(iVar20 + iVar9);
  *puVar18 = 0;
  puVar24 = *(undefined4 **)(iVar20 + iVar14);
  *puVar24 = 0xffffffff;
  snprintf(&stack0x000001c8 + iVar25,0x20,(char *)(iVar3 + 0x242dfc));
  pcVar4 = strstr(*(char **)((int)&uStack_4 + iVar25),&stack0x000001c8 + iVar25);
  *(undefined4 **)(&stack0x00000008 + iVar25) = puVar11;
  *(undefined4 **)(&stack0x0000000c + iVar25) = puVar18;
  *(undefined4 **)(&stack0x00000010 + iVar25) = puVar24;
  if (pcVar4 != (char *)0x0) {
    snprintf(&stack0x000001c8 + iVar25,0x20,(char *)(DAT_002430b4 + 0x242e20));
    pcVar4 = strstr(*(char **)((int)&uStack_4 + iVar25),&stack0x000001c8 + iVar25);
    if (pcVar4 == (char *)0x0) {
      *puVar11 = 0;
      *puVar18 = 0;
    }
    else {
      *(char **)(&stack0xfffffff8 + iVar25) = pcVar4 + 0x16;
      for (iVar3 = 0; *(char *)(*(int *)(&stack0xfffffff8 + iVar25) + iVar3) != ']';
          iVar3 = iVar3 + (uint)(cVar1 == ',')) {
        iVar21 = iVar21 + 1;
        for (; (cVar1 = pcVar4[iVar3 + 0x16], cVar1 != ']' && (cVar1 != ',')); iVar3 = iVar3 + 1) {
        }
      }
      iVar3 = 0;
      for (iVar9 = 0; iVar9 < iVar21; iVar9 = iVar9 + 1) {
        if (iVar9 == 0) {
          iVar14 = atoi((char *)(*(int *)(&stack0xfffffff8 + iVar25) + iVar3));
          **(int **)(&stack0x00000008 + iVar25) = iVar14;
        }
        else if (iVar9 == 1) {
          iVar14 = atoi((char *)(*(int *)(&stack0xfffffff8 + iVar25) + iVar3));
          **(int **)(&stack0x0000000c + iVar25) = iVar14;
        }
        for (; (cVar1 = pcVar4[iVar3 + 0x16], cVar1 != ']' && (cVar1 != ',')); iVar3 = iVar3 + 1) {
        }
        iVar3 = iVar3 + (uint)(cVar1 == ',');
      }
    }
    snprintf(&stack0x000001c8 + iVar25,0x20,(char *)(DAT_002430b8 + 0x242eb4));
    pcVar4 = strstr(*(char **)((int)&uStack_4 + iVar25),&stack0x000001c8 + iVar25);
    if (pcVar4 != (char *)0x0) {
      iVar3 = atoi(pcVar4 + 0xe);
      **(int **)(&stack0x00000010 + iVar25) = iVar3;
    }
  }
  snprintf(&stack0x00000094 + iVar25,0x14,(char *)(DAT_002430bc + 0x242ed6));
  pcVar4 = strstr(*(char **)((int)&uStack_4 + iVar25),&stack0x00000094 + iVar25);
  if (pcVar4 != (char *)0x0) {
    snprintf(&stack0x000000a8 + iVar25,0x14,(char *)(DAT_002430c0 + 0x242eee));
    pcVar4 = strstr(*(char **)((int)&uStack_4 + iVar25),&stack0x000000a8 + iVar25);
    if (pcVar4 != (char *)0x0) {
      sVar16 = strlen(&stack0x000000a8 + iVar25);
      pcVar4 = pcVar4 + sVar16;
      if (pcVar4 != (char *)0x0) {
        memset(&stack0x00000084 + iVar25,0,0x10);
        uVar17 = 0;
        bVar7 = false;
        do {
          cVar1 = *pcVar4;
          if (cVar1 == '\0') {
            FUN_00242f94();
            return;
          }
          if (bVar7) {
            pcVar8 = &stack0x00000084 + iVar25;
            if (0xf < uVar17) {
              memset(pcVar8,0,0x10);
              FUN_00242f94();
              return;
            }
            if (cVar1 == ']') {
              pcVar8[uVar17] = '\0';
              if (*pcVar8 != '\0') {
                *(undefined4 *)(&stack0x00000080 + iVar25) = 0;
                lVar5 = strtol(pcVar8,(char **)(&stack0x00000080 + iVar25),10);
                *puVar30 = **(undefined4 **)(*(int *)(&stack0x00000000 + iVar25) + DAT_002430c4);
                snprintf(&stack0x000001c8 + iVar25,0x80,(char *)(DAT_002430c8 + 0x242f6a),lVar5);
                L_PrintLog((char *)(DAT_002430cc + 0x242f7e),&stack0x000001c8 + iVar25);
                if ((*(int *)(&stack0x00000080 + iVar25) != 0) &&
                   (piVar6 = (int *)__errno(), *piVar6 != 0x22)) {
                  FUN_0024457c();
                }
              }
              break;
            }
            pcVar8[uVar17] = cVar1;
            uVar17 = uVar17 + 1;
LAB_00242f46:
            bVar7 = true;
          }
          else if (cVar1 == '[') goto LAB_00242f46;
          pcVar4 = pcVar4 + 1;
        } while( true );
      }
    }
  }
  iVar3 = DAT_002430d0;
  puVar10 = *(undefined1 **)(&stack0x00000064 + iVar25);
  *puVar10 = 0;
  snprintf(&stack0x000001c8 + iVar25,0x14,(char *)(iVar3 + 0x242fa2));
  pcVar4 = strstr(*(char **)((int)&uStack_4 + iVar25),&stack0x000001c8 + iVar25);
  if (pcVar4 != (char *)0x0) {
    snprintf(&stack0x000001c8 + iVar25,0x14,(char *)(DAT_002430d4 + 0x242fbc));
    pcVar4 = strstr(*(char **)((int)&uStack_4 + iVar25),&stack0x000001c8 + iVar25);
    if (pcVar4 != (char *)0x0) {
      *puVar10 = 1;
    }
  }
  snprintf(&stack0x000001c8 + iVar25,0x20,(char *)(DAT_002430d8 + 0x242fd8));
  pcVar4 = strstr(*(char **)((int)&uStack_4 + iVar25),&stack0x000001c8 + iVar25);
  if (pcVar4 != (char *)0x0) {
    snprintf(&stack0x000001c8 + iVar25,0x20,(char *)(DAT_002430dc + 0x242ff2));
    pcVar4 = strstr(*(char **)((int)&uStack_4 + iVar25),&stack0x000001c8 + iVar25);
    if (pcVar4 != (char *)0x0) {
      iVar3 = atoi(pcVar4 + 0x10);
      *(int *)(*(int *)(&stack0x00000004 + iVar25) + 0x340) = iVar3;
    }
    snprintf(&stack0x000001c8 + iVar25,0x20,(char *)(DAT_002430e0 + 0x243018));
    pcVar4 = strstr(*(char **)((int)&uStack_4 + iVar25),&stack0x000001c8 + iVar25);
    if (pcVar4 != (char *)0x0) {
      iVar9 = 0;
      *(char **)(&stack0xfffffff8 + iVar25) = pcVar4 + 0x10;
      for (iVar3 = 0; *(char *)(*(int *)(&stack0xfffffff8 + iVar25) + iVar3) != ']';
          iVar3 = iVar3 + (uint)(cVar1 == ',')) {
        iVar9 = iVar9 + 1;
        for (; (cVar1 = pcVar4[iVar3 + 0x10], cVar1 != ']' && (cVar1 != ',')); iVar3 = iVar3 + 1) {
        }
      }
      uVar26 = *(undefined4 *)(*(int *)(&stack0x00000004 + iVar25) + 0x344);
      *(undefined4 *)(&stack0x0000000c + iVar25) =
           *(undefined4 *)(*(int *)(&stack0x00000004 + iVar25) + 0x348);
      *(undefined4 *)(&stack0x00000008 + iVar25) = uVar26;
      iVar3 = 0;
      for (iVar14 = 0; iVar14 < iVar9; iVar14 = iVar14 + 1) {
        if (iVar14 == 0) {
          iVar20 = atoi((char *)(*(int *)(&stack0xfffffff8 + iVar25) + iVar3));
          iVar21 = *(int *)(&stack0x00000004 + iVar25);
          iVar22 = 0xd1;
LAB_00243094:
          *(int *)(iVar21 + iVar22 * 4) = iVar20;
        }
        else if (iVar14 == 1) {
          iVar20 = atoi((char *)(*(int *)(&stack0xfffffff8 + iVar25) + iVar3));
          iVar21 = *(int *)(&stack0x00000004 + iVar25);
          iVar22 = 0xd2;
          goto LAB_00243094;
        }
        for (; (cVar1 = pcVar4[iVar3 + 0x10], cVar1 != ']' && (cVar1 != ',')); iVar3 = iVar3 + 1) {
        }
        iVar3 = iVar3 + (uint)(cVar1 == ',');
      }
      if ((*(int *)(&stack0x00000008 + iVar25) !=
           *(int *)(*(int *)(&stack0x00000004 + iVar25) + 0x344)) ||
         (*(int *)(&stack0x0000000c + iVar25) !=
          *(int *)(*(int *)(&stack0x00000004 + iVar25) + 0x348))) {
        iVar3 = *(int *)(&stack0x00000004 + iVar25);
        *(undefined4 *)(iVar3 + 0x34c) = 0;
        *(undefined4 *)(iVar3 + 0x350) = 0;
      }
    }
    snprintf(&stack0x000001c8 + iVar25,0x20,(char *)(DAT_00243420 + 0x243134));
    pcVar4 = strstr(*(char **)((int)&uStack_4 + iVar25),&stack0x000001c8 + iVar25);
    if (pcVar4 == (char *)0x0) {
      *(undefined1 *)(*(int *)(*(int *)(&stack0x00000000 + iVar25) + DAT_00243424) + 0xe) = 0;
    }
    else {
      *(undefined1 *)(*(int *)(*(int *)(&stack0x00000000 + iVar25) + DAT_00243424) + 0xe) = 1;
    }
  }
  snprintf(&stack0x000001c8 + iVar25,0x20,(char *)(DAT_00243428 + 0x24315a));
  pcVar4 = strstr(*(char **)((int)&uStack_4 + iVar25),&stack0x000001c8 + iVar25);
  if (pcVar4 != (char *)0x0) {
    snprintf(&stack0x000001c8 + iVar25,0x20,(char *)(DAT_0024342c + 0x243172));
    pcVar4 = strstr(*(char **)((int)&uStack_4 + iVar25),&stack0x000001c8 + iVar25);
    if (pcVar4 != (char *)0x0) {
      *(char **)(&stack0xfffffff8 + iVar25) = pcVar4 + 0xd;
      iVar9 = 0;
      for (iVar3 = 0; *(char *)(*(int *)(&stack0xfffffff8 + iVar25) + iVar3) != ']';
          iVar3 = iVar3 + (uint)(cVar1 == ',')) {
        iVar9 = iVar9 + 1;
        for (; (cVar1 = pcVar4[iVar3 + 0xd], cVar1 != ']' && (cVar1 != ',')); iVar3 = iVar3 + 1) {
        }
      }
      if (0x3c < iVar9) {
        iVar9 = 0x3c;
      }
      iVar14 = 0;
      for (iVar3 = 0; iVar3 < iVar9; iVar3 = iVar3 + 1) {
        if (iVar3 << 0x1f < 0) {
          iVar20 = atoi((char *)(*(int *)(&stack0xfffffff8 + iVar25) + iVar14));
          *(int *)(*(int *)(&stack0x00000060 + iVar25) + (iVar3 >> 1) * 8 + 4) = iVar20;
        }
        else {
          iVar20 = atoi((char *)(*(int *)(&stack0xfffffff8 + iVar25) + iVar14));
          *(int *)(*(int *)(&stack0x00000060 + iVar25) + (iVar3 >> 1) * 8) = iVar20;
        }
        for (; (cVar1 = pcVar4[iVar14 + 0xd], cVar1 != ']' && (cVar1 != ',')); iVar14 = iVar14 + 1)
        {
        }
        iVar14 = iVar14 + (uint)(cVar1 == ',');
      }
    }
  }
  iVar3 = DAT_00243430;
  puVar10 = *(undefined1 **)(&stack0x00000068 + iVar25);
  *puVar10 = 0;
  snprintf(&stack0x000000a8 + iVar25,0x20,(char *)(iVar3 + 0x24320a));
  pcVar4 = strstr(*(char **)((int)&uStack_4 + iVar25),&stack0x000000a8 + iVar25);
  if (pcVar4 != (char *)0x0) {
    snprintf(&stack0x000000a8 + iVar25,0x20,(char *)(DAT_00243434 + 0x243226));
    pcVar4 = strstr(*(char **)((int)&uStack_4 + iVar25),&stack0x000000a8 + iVar25);
    if (pcVar4 != (char *)0x0) {
      *puVar10 = 1;
    }
    snprintf(&stack0x000000a8 + iVar25,0x20,(char *)(DAT_00243438 + 0x243242));
    pcVar4 = strstr(*(char **)((int)&uStack_4 + iVar25),&stack0x000000a8 + iVar25);
    if ((pcVar4 != (char *)0x0) && (iVar3 = atoi(pcVar4 + 0x10), iVar3 != 0)) {
      if (*(int *)(*(int *)(&stack0x00000004 + iVar25) + 0xe0) != iVar3) {
        iVar9 = *(int *)(&stack0x00000004 + iVar25);
        *(undefined2 *)(*(int *)(&stack0x00000004 + iVar25) + 0xf0) = 0;
        pZVar19 = *(ZombieCafe **)(&stack0x00000004 + iVar25);
        *(undefined2 *)(*(int *)(&stack0x00000004 + iVar25) + 0xf4) = 0;
        *(undefined4 *)(*(int *)(&stack0x00000004 + iVar25) + 0xe8) = 0;
        *(undefined4 *)(*(int *)(&stack0x00000004 + iVar25) + 0xec) = 0;
        uVar26 = DAT_0024341c;
        *(undefined4 *)(iVar9 + 0x138) = DAT_00243418;
        *(undefined4 *)(iVar9 + 0x13c) = uVar26;
        ZombieCafe::initEventRaid_attackPoint(pZVar19);
      }
      *(int *)(*(int *)(&stack0x00000004 + iVar25) + 0xe0) = iVar3;
    }
    snprintf(&stack0x000000a8 + iVar25,0x20,(char *)(DAT_0024343c + 0x2432a0));
    pcVar4 = strstr(*(char **)((int)&uStack_4 + iVar25),&stack0x000000a8 + iVar25);
    if (pcVar4 != (char *)0x0) {
      iVar9 = 0;
      *(char **)(&stack0xfffffff8 + iVar25) = pcVar4 + 0x10;
      for (iVar3 = 0; *(char *)(*(int *)(&stack0xfffffff8 + iVar25) + iVar3) != ']';
          iVar3 = iVar3 + (uint)(cVar1 == ',')) {
        iVar9 = iVar9 + 1;
        for (; (cVar1 = pcVar4[iVar3 + 0x10], cVar1 != ']' && (cVar1 != ',')); iVar3 = iVar3 + 1) {
        }
      }
      iVar3 = 0;
      for (iVar14 = 0; iVar14 < iVar9; iVar14 = iVar14 + 1) {
        if (iVar14 == 0) {
          iVar20 = atoi((char *)(*(int *)(&stack0xfffffff8 + iVar25) + iVar3));
          *(int *)(*(int *)(&stack0x00000004 + iVar25) + 0xe4) = iVar20;
        }
        else if (iVar14 == 1) {
          iVar20 = atoi((char *)(*(int *)(&stack0xfffffff8 + iVar25) + iVar3));
          *(short *)(*(int *)(&stack0x00000004 + iVar25) + 0xf2) = (short)iVar20;
        }
        for (; (cVar1 = pcVar4[iVar3 + 0x10], cVar1 != ']' && (cVar1 != ',')); iVar3 = iVar3 + 1) {
        }
        iVar3 = iVar3 + (uint)(cVar1 == ',');
      }
    }
    snprintf(&stack0x000000a8 + iVar25,0x20,(char *)(DAT_00243440 + 0x243332));
    pcVar4 = strstr(*(char **)((int)&uStack_4 + iVar25),&stack0x000000a8 + iVar25);
    uVar26 = DAT_00243448;
    *(char **)(&stack0xfffffff8 + iVar25) = pcVar4;
    if (pcVar4 != (char *)0x0) {
      *(undefined4 *)(&stack0x00000008 + iVar25) = 0;
      for (iVar3 = 0; pcVar4[iVar3 + 0xd] != ']'; iVar3 = iVar3 + (uint)(cVar1 == ',')) {
        *(int *)(&stack0x00000008 + iVar25) = *(int *)(&stack0x00000008 + iVar25) + 1;
        for (; (cVar1 = *(char *)(*(int *)(&stack0xfffffff8 + iVar25) + iVar3 + 0xd), cVar1 != ']'
               && (cVar1 != ',')); iVar3 = iVar3 + 1) {
        }
      }
      iVar9 = 0;
      iVar3 = *(int *)(*(int *)(&stack0x00000000 + iVar25) + DAT_00243444);
      do {
        iVar14 = iVar9 + iVar3;
        iVar9 = iVar9 + 4;
        *(undefined4 *)(iVar14 + 8) = 0xffffffff;
        *(undefined4 *)(iVar14 + 0x38) = 0;
        *(undefined4 *)(iVar14 + 0x50) = 0;
        *(undefined4 *)(iVar14 + 0x20) = uVar26;
        *(int *)(&stack0x00000010 + iVar25) = iVar3;
      } while (iVar9 != 0x18);
      iVar3 = 0;
      for (iVar9 = 0; iVar9 < *(int *)(&stack0x00000008 + iVar25); iVar9 = iVar9 + 1) {
        iVar14 = __divsi3(iVar9,6);
        __aeabi_idivmod(iVar9,6);
        *(undefined4 *)(&stack0x0000000c + iVar25) = extraout_r1;
        if (iVar14 == 0) {
          iVar14 = atoi(pcVar4 + iVar3 + 0xd);
          iVar21 = *(int *)(&stack0x00000010 + iVar25);
          iVar20 = (*(int *)(&stack0x0000000c + iVar25) + 2) * 4;
LAB_00243410:
          *(int *)(iVar20 + iVar21) = iVar14;
        }
        else if (iVar14 == 1) {
          atoi(pcVar4 + iVar3 + 0xd);
          iVar14 = *(int *)(&stack0x0000000c + iVar25);
          uVar26 = __floatsisf();
          *(undefined4 *)(*(int *)(&stack0x00000010 + iVar25) + (iVar14 + 0xe) * 4) = uVar26;
        }
        else if (iVar14 == 2) {
          FUN_00238ef8(pcVar4 + iVar3 + 0xd);
          iVar14 = *(int *)(&stack0x0000000c + iVar25);
          uVar26 = __truncdfsf2();
          *(undefined4 *)(*(int *)(&stack0x00000010 + iVar25) + (iVar14 + 0x14) * 4) = uVar26;
        }
        else if (iVar14 == 3) {
          FUN_00238ef8(pcVar4 + iVar3 + 0xd);
          iVar21 = (*(int *)(&stack0x0000000c + iVar25) + 8) * 4;
          iVar14 = __fixdfsi();
          iVar20 = *(int *)(&stack0x00000010 + iVar25);
          goto LAB_00243410;
        }
        for (; (cVar1 = *(char *)(*(int *)(&stack0xfffffff8 + iVar25) + iVar3 + 0xd), cVar1 != ']'
               && (cVar1 != ',')); iVar3 = iVar3 + 1) {
        }
        iVar3 = iVar3 + (uint)(cVar1 == ',');
      }
    }
    snprintf(&stack0x000000a8 + iVar25,0x20,(char *)(DAT_00243788 + 0x243476));
    pcVar4 = strstr(*(char **)((int)&uStack_4 + iVar25),&stack0x000000a8 + iVar25);
    *(char **)(&stack0xfffffff8 + iVar25) = pcVar4;
    if (pcVar4 != (char *)0x0) {
      iVar9 = 0;
      for (iVar3 = 0; pcVar4[iVar3 + 0xd] != ']'; iVar3 = iVar3 + (uint)(cVar1 == ',')) {
        iVar9 = iVar9 + 1;
        for (; (cVar1 = *(char *)(*(int *)(&stack0xfffffff8 + iVar25) + iVar3 + 0xd), cVar1 != ']'
               && (cVar1 != ',')); iVar3 = iVar3 + 1) {
        }
      }
      iVar3 = 0;
      for (iVar14 = 0; iVar14 < iVar9; iVar14 = iVar14 + 1) {
        if (iVar14 == 1) {
          iVar20 = atoi(pcVar4 + iVar3 + 0xd);
          *(int *)(*(int *)(*(int *)(&stack0x00000000 + iVar25) + DAT_0024378c) + 4) = iVar20;
          snprintf(&stack0x000001c8 + iVar25,0x100,(char *)(DAT_00243798 + 0x243504),iVar20);
          pcVar8 = (char *)(DAT_0024379c + 0x24350c);
LAB_0024352e:
          L_PrintLog(pcVar8,&stack0x000001c8 + iVar25);
        }
        else {
          if (iVar14 == 2) {
            iVar20 = atoi(pcVar4 + iVar3 + 0xd);
            *(int *)(*(int *)(*(int *)(&stack0x00000000 + iVar25) + DAT_0024378c) + 0x68) = iVar20;
            snprintf(&stack0x000001c8 + iVar25,0x100,(char *)(DAT_002437a0 + 0x243528));
            pcVar8 = (char *)(DAT_002437a4 + 0x243530);
            goto LAB_0024352e;
          }
          if (iVar14 == 0) {
            iVar20 = atoi(pcVar4 + iVar3 + 0xd);
            **(int **)(*(int *)(&stack0x00000000 + iVar25) + DAT_0024378c) = iVar20;
            snprintf(&stack0x000001c8 + iVar25,0x100,(char *)(DAT_00243790 + 0x2434e0));
            pcVar8 = (char *)(DAT_00243794 + 0x2434e8);
            goto LAB_0024352e;
          }
        }
        for (; (cVar1 = *(char *)(*(int *)(&stack0xfffffff8 + iVar25) + iVar3 + 0xd), cVar1 != ']'
               && (cVar1 != ',')); iVar3 = iVar3 + 1) {
        }
        iVar3 = iVar3 + (uint)(cVar1 == ',');
      }
    }
    snprintf(&stack0x000000a8 + iVar25,0x20,(char *)(DAT_002437a8 + 0x24355e));
    pcVar4 = strstr(*(char **)((int)&uStack_4 + iVar25),&stack0x000000a8 + iVar25);
    puVar10 = (undefined1 *)(*(int *)(*(int *)(&stack0x00000000 + iVar25) + DAT_0024378c) + 0x6c);
    if (pcVar4 == (char *)0x0) {
      *puVar10 = 0;
    }
    else {
      *puVar10 = 1;
    }
  }
  iVar3 = DAT_002437ac;
  puVar10 = *(undefined1 **)(&stack0x00000018 + iVar25);
  *puVar10 = 0;
  snprintf(&stack0x000001c8 + iVar25,0x20,(char *)(iVar3 + 0x24358a));
  pcVar4 = strstr(*(char **)((int)&uStack_4 + iVar25),&stack0x000001c8 + iVar25);
  if (pcVar4 != (char *)0x0) {
    snprintf(&stack0x000001c8 + iVar25,0x20,(char *)(DAT_002437b0 + 0x2435a6));
    pcVar4 = strstr(*(char **)((int)&uStack_4 + iVar25),&stack0x000001c8 + iVar25);
    if (pcVar4 != (char *)0x0) {
      *puVar10 = 1;
    }
    snprintf(&stack0x000001c8 + iVar25,0x20,(char *)(DAT_002437b4 + 0x2435c2));
    pcVar4 = strstr(*(char **)((int)&uStack_4 + iVar25),&stack0x000001c8 + iVar25);
    if (pcVar4 != (char *)0x0) {
      iVar3 = atoi(pcVar4 + 0x11);
      pZVar19 = *(ZombieCafe **)(&stack0x00000004 + iVar25);
      if (*(int *)(pZVar19 + 0x1c0) != iVar3) {
        iVar9 = 0;
        *(undefined4 *)(pZVar19 + 0x1d4) = 0;
        *(undefined4 *)(pZVar19 + 0x1d8) = 0;
        *(undefined4 *)(pZVar19 + 0x1d0) = 0;
        *(undefined4 *)(pZVar19 + 0x1c4) = 0;
        uVar26 = DAT_00243784;
        *(undefined4 *)(pZVar19 + 0x1e0) = DAT_00243780;
        *(undefined4 *)(pZVar19 + 0x1e4) = uVar26;
        *(undefined2 *)(pZVar19 + 0x1ce) = 0;
        ZombieCafe::initEventRaid2_attackPoint(pZVar19);
        do {
          iVar14 = *(int *)(&stack0x00000004 + iVar25) + iVar9;
          iVar9 = iVar9 + 2;
          *(undefined2 *)(iVar14 + 0x1e8) = 0;
        } while (iVar9 != 0x3e);
      }
      *(int *)(*(int *)(&stack0x00000004 + iVar25) + 0x1c0) = iVar3;
    }
    snprintf(&stack0x000001c8 + iVar25,0x20,(char *)(DAT_002437b8 + 0x243638));
    pcVar4 = strstr(*(char **)((int)&uStack_4 + iVar25),&stack0x000001c8 + iVar25);
    if (pcVar4 != (char *)0x0) {
      iVar3 = atoi(pcVar4 + 0xf);
      **(int **)(*(int *)(&stack0x00000000 + iVar25) + DAT_002437bc) = iVar3;
    }
    snprintf(&stack0x000001c8 + iVar25,0x20,(char *)(DAT_002437c0 + 0x24365e));
    pcVar4 = strstr(*(char **)((int)&uStack_4 + iVar25),&stack0x000001c8 + iVar25);
    if (pcVar4 != (char *)0x0) {
      *(char **)(&stack0xfffffff8 + iVar25) = pcVar4 + 0xe;
      iVar9 = 0;
      for (iVar3 = 0; *(char *)(*(int *)(&stack0xfffffff8 + iVar25) + iVar3) != ']';
          iVar3 = iVar3 + (uint)(cVar1 == ',')) {
        iVar9 = iVar9 + 1;
        for (; (cVar1 = pcVar4[iVar3 + 0xe], cVar1 != ']' && (cVar1 != ',')); iVar3 = iVar3 + 1) {
        }
      }
      iVar3 = 0;
      for (iVar14 = 0; iVar14 < iVar9; iVar14 = iVar14 + 1) {
        if (iVar14 == 0) {
          iVar20 = atoi((char *)(*(int *)(&stack0xfffffff8 + iVar25) + iVar3));
          *(int *)(*(int *)(*(int *)(&stack0x00000000 + iVar25) + DAT_002437bc) + 4) = iVar20;
        }
        else if (iVar14 == 1) {
          iVar20 = atoi((char *)(*(int *)(&stack0xfffffff8 + iVar25) + iVar3));
          *(int *)(*(int *)(*(int *)(&stack0x00000000 + iVar25) + DAT_002437bc) + 8) = iVar20;
        }
        for (; (cVar1 = pcVar4[iVar3 + 0xe], cVar1 != ']' && (cVar1 != ',')); iVar3 = iVar3 + 1) {
        }
        iVar3 = iVar3 + (uint)(cVar1 == ',');
      }
    }
    snprintf(&stack0x000001c8 + iVar25,0x20,(char *)(DAT_002437c4 + 0x2436f4));
    pcVar4 = strstr(*(char **)((int)&uStack_4 + iVar25),&stack0x000001c8 + iVar25);
    iVar3 = *(int *)(*(int *)(&stack0x00000000 + iVar25) + DAT_002437bc);
    if (pcVar4 == (char *)0x0) {
      *(undefined4 *)(iVar3 + 0xc) = 0x3f800000;
    }
    else {
      FUN_00238ef8(pcVar4 + 0xf);
      uVar26 = __truncdfsf2();
      iVar9 = __aeabi_fcmpgt(uVar26,DAT_002437c8);
      if (iVar9 != 0) {
        uVar26 = 0x3f800000;
      }
      *(undefined4 *)(iVar3 + 0xc) = uVar26;
    }
    snprintf(&stack0x000001c8 + iVar25,0x20,(char *)(DAT_002437cc + 0x243736));
    pcVar4 = strstr(*(char **)((int)&uStack_4 + iVar25),&stack0x000001c8 + iVar25);
    *(char **)(&stack0xfffffff8 + iVar25) = pcVar4;
    if (pcVar4 != (char *)0x0) {
      iVar14 = 0;
      *(char **)(&stack0x00000008 + iVar25) = pcVar4 + 0x10;
      for (iVar9 = 0; *(char *)(*(int *)(&stack0x00000008 + iVar25) + iVar9) != ']';
          iVar9 = iVar9 + (uint)(cVar1 == ',')) {
        iVar14 = iVar14 + 1;
        for (; (cVar1 = *(char *)(*(int *)(&stack0xfffffff8 + iVar25) + iVar9 + 0x10), cVar1 != ']'
               && (cVar1 != ',')); iVar9 = iVar9 + 1) {
        }
      }
      iVar9 = 0;
      for (iVar20 = 0; iVar20 < iVar14; iVar20 = iVar20 + 1) {
        if (iVar20 == 0) {
          iVar21 = atoi((char *)(*(int *)(&stack0x00000008 + iVar25) + iVar9));
          *(int *)(iVar3 + 0x10) = iVar21;
        }
        else if (iVar20 == 1) {
          iVar21 = atoi((char *)(*(int *)(&stack0x00000008 + iVar25) + iVar9));
          *(int *)(iVar3 + 0x14) = iVar21;
        }
        for (; (cVar1 = *(char *)(*(int *)(&stack0xfffffff8 + iVar25) + iVar9 + 0x10), cVar1 != ']'
               && (cVar1 != ',')); iVar9 = iVar9 + 1) {
        }
        iVar9 = iVar9 + (uint)(cVar1 == ',');
      }
    }
    iVar9 = DAT_00243b28;
    *(undefined1 *)(iVar3 + 0x18) = 0;
    snprintf(&stack0x000001c8 + iVar25,0x20,(char *)(iVar9 + 0x24381c));
    pcVar4 = strstr(*(char **)((int)&uStack_4 + iVar25),&stack0x000001c8 + iVar25);
    if ((pcVar4 != (char *)0x0) && (iVar9 = atoi(pcVar4 + 0xe), iVar9 == 0)) {
      *(undefined1 *)(iVar3 + 0x18) = 1;
    }
  }
  puVar10 = *(undefined1 **)(*(int *)(&stack0x00000000 + iVar25) + DAT_00243b2c);
  pcVar4 = (char *)(DAT_00243b30 + 0x24384a);
  *puVar10 = 0;
  snprintf(&stack0x000001c8 + iVar25,0x20,pcVar4);
  pcVar4 = strstr(*(char **)((int)&uStack_4 + iVar25),&stack0x000001c8 + iVar25);
  if (pcVar4 != (char *)0x0) {
    snprintf(&stack0x000001c8 + iVar25,0x20,(char *)(DAT_00243b34 + 0x243866));
    pcVar4 = strstr(*(char **)((int)&uStack_4 + iVar25),&stack0x000001c8 + iVar25);
    if (pcVar4 != (char *)0x0) {
      *puVar10 = 1;
    }
  }
  iVar3 = DAT_00243b3c;
  iVar14 = *(int *)(&stack0x00000000 + iVar25);
  puVar10 = *(undefined1 **)(iVar14 + DAT_00243b38);
  *puVar10 = 0;
  iVar9 = DAT_00243b40;
  piVar6 = *(int **)(iVar14 + iVar3);
  *piVar6 = 0;
  snprintf(&stack0x000001c8 + iVar25,0x20,(char *)(iVar9 + 0x243892));
  pcVar4 = strstr(*(char **)((int)&uStack_4 + iVar25),&stack0x000001c8 + iVar25);
  if (pcVar4 != (char *)0x0) {
    snprintf(&stack0x000001c8 + iVar25,0x20,(char *)(DAT_00243b44 + 0x2438aa));
    pcVar4 = strstr(*(char **)((int)&uStack_4 + iVar25),&stack0x000001c8 + iVar25);
    if (pcVar4 != (char *)0x0) {
      iVar3 = atoi(pcVar4 + 0xf);
      *piVar6 = iVar3;
      *puVar10 = 1;
    }
    snprintf(&stack0x000001c8 + iVar25,0x20,(char *)(DAT_00243b48 + 0x2438ce));
    pcVar4 = strstr(*(char **)((int)&uStack_4 + iVar25),&stack0x000001c8 + iVar25);
    if (pcVar4 == (char *)0x0) {
      iVar3 = *(int *)(&stack0x00000000 + iVar25);
      **(undefined4 **)(iVar3 + DAT_00243b4c) = 0;
      **(undefined4 **)(iVar3 + DAT_00243b50) = 0;
    }
    else {
      iVar9 = 0;
      *(char **)(&stack0xfffffff8 + iVar25) = pcVar4 + 0x13;
      for (iVar3 = 0; *(char *)(*(int *)(&stack0xfffffff8 + iVar25) + iVar3) != ']';
          iVar3 = iVar3 + (uint)(cVar1 == ',')) {
        iVar9 = iVar9 + 1;
        for (; (cVar1 = pcVar4[iVar3 + 0x13], cVar1 != ']' && (cVar1 != ',')); iVar3 = iVar3 + 1) {
        }
      }
      iVar3 = 0;
      for (iVar14 = 0; iVar14 < iVar9; iVar14 = iVar14 + 1) {
        if (iVar14 == 0) {
          iVar20 = atoi((char *)(*(int *)(&stack0xfffffff8 + iVar25) + iVar3));
          piVar6 = *(int **)(*(int *)(&stack0x00000000 + iVar25) + DAT_00243b4c);
LAB_00243948:
          *piVar6 = iVar20;
        }
        else if (iVar14 == 1) {
          iVar20 = atoi((char *)(*(int *)(&stack0xfffffff8 + iVar25) + iVar3));
          piVar6 = *(int **)(*(int *)(&stack0x00000000 + iVar25) + DAT_00243b50);
          goto LAB_00243948;
        }
        for (; (cVar1 = pcVar4[iVar3 + 0x13], cVar1 != ']' && (cVar1 != ',')); iVar3 = iVar3 + 1) {
        }
        iVar3 = iVar3 + (uint)(cVar1 == ',');
      }
    }
  }
  puVar10 = *(undefined1 **)(*(int *)(&stack0x00000000 + iVar25) + DAT_00243b54);
  pcVar4 = (char *)(DAT_00243b58 + 0x243978);
  *puVar10 = 0;
  snprintf(&stack0x000001c8 + iVar25,0x14,pcVar4);
  pcVar4 = strstr(*(char **)((int)&uStack_4 + iVar25),&stack0x000001c8 + iVar25);
  if (pcVar4 != (char *)0x0) {
    snprintf(&stack0x000001c8 + iVar25,0x14,(char *)(DAT_00243b5c + 0x243994));
    pcVar4 = strstr(*(char **)((int)&uStack_4 + iVar25),&stack0x000001c8 + iVar25);
    if (pcVar4 != (char *)0x0) {
      *puVar10 = 1;
    }
  }
  iVar3 = DAT_00243b64;
  iVar20 = *(int *)(&stack0x00000000 + iVar25);
  puVar10 = *(undefined1 **)(iVar20 + DAT_00243b60);
  *puVar10 = 0;
  *(undefined1 **)(&stack0xfffffff8 + iVar25) = puVar10;
  puVar10 = *(undefined1 **)(iVar20 + DAT_00243b68);
  *puVar10 = 0;
  iVar9 = DAT_00243b70;
  *(undefined1 **)(&stack0x00000008 + iVar25) = puVar10;
  puVar18 = *(undefined4 **)(iVar20 + DAT_00243b6c);
  *puVar18 = 0;
  iVar14 = DAT_00243b74;
  puVar24 = *(undefined4 **)(iVar20 + iVar9);
  *puVar24 = 0;
  iVar9 = DAT_00243b78;
  puVar29 = *(undefined4 **)(iVar20 + iVar14);
  *puVar29 = 0;
  puVar11 = *(undefined4 **)(iVar20 + iVar9);
  *puVar11 = 0;
  *(undefined4 **)(&stack0x00000018 + iVar25) = puVar11;
  snprintf(&stack0x000001c8 + iVar25,0x40,(char *)(iVar3 + 0x2439be));
  pcVar4 = strstr(*(char **)((int)&uStack_4 + iVar25),&stack0x000001c8 + iVar25);
  *(undefined4 **)(&stack0x0000001c + iVar25) = puVar29;
  *(undefined4 **)(&stack0x0000000c + iVar25) = puVar18;
  *(undefined4 *)(&stack0x00000014 + iVar25) = *(undefined4 *)(&stack0x00000008 + iVar25);
  *(undefined4 **)(&stack0x00000010 + iVar25) = puVar24;
  puVar11 = *(undefined4 **)(&stack0x00000018 + iVar25);
  if (pcVar4 != (char *)0x0) {
    snprintf(&stack0x000001c8 + iVar25,0x40,(char *)(DAT_00243b7c + 0x243a08));
    pcVar4 = strstr(*(char **)((int)&uStack_4 + iVar25),&stack0x000001c8 + iVar25);
    iVar9 = DAT_00243ec0;
    iVar3 = DAT_00243b80;
    if (pcVar4 == (char *)0x0) {
      puVar10 = *(undefined1 **)(&stack0x00000008 + iVar25);
      **(undefined1 **)(&stack0xfffffff8 + iVar25) = 0;
      *puVar10 = 0;
      snprintf(&stack0x000001c8 + iVar25,0x40,(char *)(iVar9 + 0x243c90));
      pcVar4 = strstr(*(char **)((int)&uStack_4 + iVar25),&stack0x000001c8 + iVar25);
      if (pcVar4 != (char *)0x0) {
        *(char **)(&stack0xfffffff8 + iVar25) = pcVar4 + 0x14;
        iVar9 = 0;
        for (iVar3 = 0; *(char *)(*(int *)(&stack0xfffffff8 + iVar25) + iVar3) != ']';
            iVar3 = iVar3 + (uint)(cVar1 == ',')) {
          iVar9 = iVar9 + 1;
          for (; (cVar1 = pcVar4[iVar3 + 0x14], cVar1 != ']' && (cVar1 != ',')); iVar3 = iVar3 + 1)
          {
          }
        }
        iVar3 = 0;
        for (iVar14 = 0; iVar14 < iVar9; iVar14 = iVar14 + 1) {
          if (iVar14 == 0) {
            iVar20 = atoi((char *)(*(int *)(&stack0xfffffff8 + iVar25) + iVar3));
            **(int **)(&stack0x0000000c + iVar25) = iVar20;
          }
          else if (iVar14 == 1) {
            iVar20 = atoi((char *)(*(int *)(&stack0xfffffff8 + iVar25) + iVar3));
            **(int **)(&stack0x00000010 + iVar25) = iVar20;
          }
          for (; (cVar1 = pcVar4[iVar3 + 0x14], cVar1 != ']' && (cVar1 != ',')); iVar3 = iVar3 + 1)
          {
          }
          iVar3 = iVar3 + (uint)(cVar1 == ',');
        }
      }
    }
    else {
      **(undefined1 **)(&stack0xfffffff8 + iVar25) = 1;
      snprintf(&stack0x000001c8 + iVar25,0x40,(char *)(iVar3 + 0x243a26));
      pcVar4 = strstr(*(char **)((int)&uStack_4 + iVar25),&stack0x000001c8 + iVar25);
      if (pcVar4 != (char *)0x0) {
        iVar3 = atoi(pcVar4 + 0x12);
        pcVar4 = (char *)0x0;
        if (iVar3 != *(short *)(*(int *)(&stack0x00000004 + iVar25) + 0x358)) {
          pZVar19 = *(ZombieCafe **)(&stack0x00000004 + iVar25);
          *(short *)(pZVar19 + DAT_00243b84) =
               *(short *)(*(int *)(&stack0x00000004 + iVar25) + 0x358);
          *(short *)(pZVar19 + 0x358) = (short)iVar3;
          *(undefined2 *)(pZVar19 + 0x35c) = 0;
          *(undefined2 *)(pZVar19 + DAT_00243b88) = 0;
          *(undefined2 *)(pZVar19 + 0x360) = 0;
          *(undefined2 *)(pZVar19 + DAT_00243b8c) = 0;
          *(undefined4 *)(pZVar19 + 0x368) = 0;
          pZVar19[1000] = (ZombieCafe)0x1;
          uVar2 = DAT_00243b24;
          uVar26 = DAT_00243b20;
          *(undefined4 *)(pZVar19 + 0x370) = DAT_00243b20;
          *(undefined4 *)(pZVar19 + 0x374) = uVar2;
          *(undefined4 *)(pZVar19 + 0x378) = uVar26;
          *(undefined4 *)(pZVar19 + 0x37c) = uVar2;
          ZombieCafe::makeZombieFlowerPlantLottery(pZVar19);
          pcVar4 = (char *)0x1;
        }
      }
      iVar3 = DAT_00243b90;
      **(undefined1 **)(&stack0x00000014 + iVar25) = 0;
      puVar18 = *(undefined4 **)(&stack0x0000001c + iVar25);
      *puVar11 = 0;
      *puVar18 = 0;
      snprintf(&stack0x000001c8 + iVar25,0x40,(char *)(iVar3 + 0x243ab0));
      pcVar8 = strstr(*(char **)((int)&uStack_4 + iVar25),&stack0x000001c8 + iVar25);
      if ((pcVar8 != (char *)0x0) && (pcVar4 != (char *)0x0)) {
        *(undefined4 *)(*(int *)(&stack0x00000004 + iVar25) + 0x380) = 0;
      }
      snprintf(&stack0x000001c8 + iVar25,0x40,(char *)(DAT_00243b94 + 0x243ad6));
      pcVar4 = strstr(*(char **)((int)&uStack_4 + iVar25),&stack0x000001c8 + iVar25);
      if (pcVar4 != (char *)0x0) {
        iVar9 = 0;
        *(char **)(&stack0x00000018 + iVar25) = pcVar4 + 0x17;
        for (iVar3 = 0; *(char *)(*(int *)(&stack0x00000018 + iVar25) + iVar3) != ']';
            iVar3 = iVar3 + (uint)(cVar1 == ',')) {
          iVar9 = iVar9 + 1;
          for (; (cVar1 = pcVar4[iVar3 + 0x17], cVar1 != ']' && (cVar1 != ',')); iVar3 = iVar3 + 1)
          {
          }
        }
        *(undefined4 *)(&stack0x00000008 + iVar25) = *(undefined4 *)(&stack0x00000004 + iVar25);
        iVar3 = 0;
        for (iVar14 = 0; iVar14 < iVar9; iVar14 = iVar14 + 1) {
          if (iVar14 < 0x11) {
            FUN_00238ef8(*(int *)(&stack0x00000018 + iVar25) + iVar3);
            uVar26 = __truncdfsf2();
            *(undefined4 *)(&stack0xfffffff8 + iVar25) = uVar26;
            iVar20 = __aeabi_fcmpeq(uVar26,DAT_00243eb8);
            if (iVar20 != 0) {
              *(undefined4 *)(&stack0xfffffff8 + iVar25) = 0;
            }
            *(undefined4 *)(*(int *)(&stack0x00000008 + iVar25) + 0x3a4) =
                 *(undefined4 *)(&stack0xfffffff8 + iVar25);
          }
          for (; (cVar1 = pcVar4[iVar3 + 0x17], cVar1 != ']' && (cVar1 != ',')); iVar3 = iVar3 + 1)
          {
          }
          iVar3 = iVar3 + (uint)(cVar1 == ',');
          *(int *)(&stack0x00000008 + iVar25) = *(int *)(&stack0x00000008 + iVar25) + 4;
        }
      }
      snprintf(&stack0x000001c8 + iVar25,0x40,(char *)(DAT_00243ebc + 0x243bf2));
      pcVar4 = strstr(*(char **)((int)&uStack_4 + iVar25),&stack0x000001c8 + iVar25);
      if (pcVar4 == (char *)0x0) {
        puVar11 = *(undefined4 **)(&stack0x00000010 + iVar25);
        **(undefined4 **)(&stack0x0000000c + iVar25) = 0;
        *puVar11 = 0;
      }
      else {
        *(char **)(&stack0xfffffff8 + iVar25) = pcVar4 + 0x14;
        iVar9 = 0;
        for (iVar3 = 0; *(char *)(*(int *)(&stack0xfffffff8 + iVar25) + iVar3) != ']';
            iVar3 = iVar3 + (uint)(cVar1 == ',')) {
          iVar9 = iVar9 + 1;
          for (; (cVar1 = pcVar4[iVar3 + 0x14], cVar1 != ']' && (cVar1 != ',')); iVar3 = iVar3 + 1)
          {
          }
        }
        iVar3 = 0;
        for (iVar14 = 0; iVar14 < iVar9; iVar14 = iVar14 + 1) {
          if (iVar14 == 0) {
            iVar20 = atoi((char *)(*(int *)(&stack0xfffffff8 + iVar25) + iVar3));
            **(int **)(&stack0x0000000c + iVar25) = iVar20;
          }
          else if (iVar14 == 1) {
            iVar20 = atoi((char *)(*(int *)(&stack0xfffffff8 + iVar25) + iVar3));
            **(int **)(&stack0x00000010 + iVar25) = iVar20;
          }
          for (; (cVar1 = pcVar4[iVar3 + 0x14], cVar1 != ']' && (cVar1 != ',')); iVar3 = iVar3 + 1)
          {
          }
          iVar3 = iVar3 + (uint)(cVar1 == ',');
        }
      }
    }
  }
  iVar9 = DAT_00243ec8;
  iVar3 = DAT_00243ec4;
  iVar14 = *(int *)(&stack0x00000004 + iVar25);
  *(undefined1 *)(iVar14 + DAT_00243ec4) = 0;
  snprintf(&stack0x000001c8 + iVar25,0x40,(char *)(iVar9 + 0x243d28));
  pcVar4 = strstr(*(char **)((int)&uStack_4 + iVar25),&stack0x000001c8 + iVar25);
  if (pcVar4 != (char *)0x0) {
    snprintf(&stack0x000001c8 + iVar25,0x40,(char *)(DAT_00243ecc + 0x243d42));
    pcVar4 = strstr(*(char **)((int)&uStack_4 + iVar25),&stack0x000001c8 + iVar25);
    iVar9 = DAT_00243ed0;
    if (pcVar4 != (char *)0x0) {
      *(undefined1 *)(iVar14 + iVar3) = 1;
      snprintf(&stack0x000001c8 + iVar25,0x40,(char *)(iVar9 + 0x243d5c));
      pcVar4 = strstr(*(char **)((int)&uStack_4 + iVar25),&stack0x000001c8 + iVar25);
      if (pcVar4 != (char *)0x0) {
        iVar3 = atoi(pcVar4 + 0xd);
        *(int *)(iVar14 + DAT_00243ed4) = iVar3;
      }
    }
  }
  puVar10 = *(undefined1 **)(*(int *)(&stack0x00000000 + iVar25) + DAT_00243ed8);
  pcVar4 = (char *)(DAT_00243edc + 0x243d86);
  *puVar10 = 0;
  snprintf(&stack0x000001c8 + iVar25,0x20,pcVar4);
  pcVar4 = strstr(*(char **)((int)&uStack_4 + iVar25),&stack0x000001c8 + iVar25);
  if (pcVar4 != (char *)0x0) {
    snprintf(&stack0x000001c8 + iVar25,0x20,(char *)(DAT_00243ee0 + 0x243da2));
    pcVar4 = strstr(*(char **)((int)&uStack_4 + iVar25),&stack0x000001c8 + iVar25);
    if (pcVar4 != (char *)0x0) {
      *puVar10 = 1;
    }
  }
  puVar10 = *(undefined1 **)(*(int *)(&stack0x00000000 + iVar25) + DAT_00243ee4);
  pcVar4 = (char *)(DAT_00243ee8 + 0x243dc4);
  *puVar10 = 0;
  snprintf(&stack0x000001c8 + iVar25,0x20,pcVar4);
  pcVar4 = strstr(*(char **)((int)&uStack_4 + iVar25),&stack0x000001c8 + iVar25);
  if (pcVar4 != (char *)0x0) {
    snprintf(&stack0x000001c8 + iVar25,0x20,(char *)(DAT_00243eec + 0x243de0));
    pcVar4 = strstr(*(char **)((int)&uStack_4 + iVar25),&stack0x000001c8 + iVar25);
    if (pcVar4 != (char *)0x0) {
      *puVar10 = 1;
    }
  }
  puVar10 = *(undefined1 **)(&stack0x00000024 + iVar25);
  iVar3 = *(int *)(&stack0x00000004 + iVar25);
  *puVar10 = 0;
  *(undefined2 *)(iVar3 + DAT_00243ef0) = 5;
  snprintf(&stack0x000001c8 + iVar25,0x40,(char *)(DAT_00243ef4 + 0x243e0a));
  pcVar4 = strstr(*(char **)((int)&uStack_4 + iVar25),&stack0x000001c8 + iVar25);
  if (pcVar4 != (char *)0x0) {
    snprintf(&stack0x000001c8 + iVar25,0x40,(char *)(DAT_00243ef8 + 0x243e24));
    pcVar4 = strstr(*(char **)((int)&uStack_4 + iVar25),&stack0x000001c8 + iVar25);
    if (pcVar4 != (char *)0x0) {
      *puVar10 = 1;
    }
    snprintf(&stack0x000001c8 + iVar25,0x40,(char *)(DAT_00243efc + 0x243e40));
    pcVar4 = strstr(*(char **)((int)&uStack_4 + iVar25),&stack0x000001c8 + iVar25);
    if (pcVar4 != (char *)0x0) {
      iVar3 = atoi(pcVar4 + 0x18);
      iVar9 = *(int *)(&stack0x00000004 + iVar25);
      if (*(int *)(iVar9 + 0x2c8) != iVar3) {
        *(undefined2 *)(iVar9 + 0x2d8) = 0;
        *(undefined2 *)(iVar9 + 0x2dc) = 0;
        *(undefined4 *)(iVar9 + 0x2d0) = 0;
        *(undefined4 *)(iVar9 + 0x2d4) = 0;
        uVar26 = DAT_00243eb4;
        *(undefined4 *)(iVar9 + 0x318) = DAT_00243eb0;
        *(undefined4 *)(iVar9 + 0x31c) = uVar26;
      }
      *(int *)(*(int *)(&stack0x00000004 + iVar25) + 0x2c8) = iVar3;
    }
    snprintf(&stack0x000001c8 + iVar25,0x40,(char *)(DAT_00243f00 + 0x243e98));
    pcVar4 = strstr(*(char **)((int)&uStack_4 + iVar25),&stack0x000001c8 + iVar25);
    if (pcVar4 == (char *)0x0) {
      *(undefined4 *)(*(int *)(&stack0x00000004 + iVar25) + 0x2cc) = 0;
    }
    else {
      iVar3 = atoi(pcVar4 + 0x16);
      *(int *)(*(int *)(&stack0x00000004 + iVar25) + 0x2cc) = iVar3;
    }
    snprintf(&stack0x000001c8 + iVar25,0x40,(char *)(DAT_00244210 + 0x243f18));
    pcVar4 = strstr(*(char **)((int)&uStack_4 + iVar25),&stack0x000001c8 + iVar25);
    *(char **)(&stack0xfffffff8 + iVar25) = pcVar4;
    if (pcVar4 != (char *)0x0) {
      iVar9 = 0;
      for (iVar3 = 0; pcVar4[iVar3 + 0x15] != ']'; iVar3 = iVar3 + (uint)(cVar1 == ',')) {
        iVar9 = iVar9 + 1;
        for (; (cVar1 = *(char *)(*(int *)(&stack0xfffffff8 + iVar25) + iVar3 + 0x15), cVar1 != ']'
               && (cVar1 != ',')); iVar3 = iVar3 + 1) {
        }
      }
      iVar3 = 0;
      for (iVar14 = 0; iVar14 < iVar9; iVar14 = iVar14 + 1) {
        if (iVar14 == 1) {
          iVar20 = atoi(pcVar4 + iVar3 + 0x15);
          *(int *)(*(int *)(*(int *)(&stack0x00000000 + iVar25) + DAT_00244214) + 4) = iVar20;
        }
        else if (iVar14 == 2) {
          iVar20 = atoi(pcVar4 + iVar3 + 0x15);
          *(int *)(*(int *)(*(int *)(&stack0x00000000 + iVar25) + DAT_00244214) + 8) = iVar20;
        }
        else if (iVar14 == 0) {
          iVar20 = atoi(pcVar4 + iVar3 + 0x15);
          **(int **)(*(int *)(&stack0x00000000 + iVar25) + DAT_00244214) = iVar20;
        }
        for (; (cVar1 = *(char *)(*(int *)(&stack0xfffffff8 + iVar25) + iVar3 + 0x15), cVar1 != ']'
               && (cVar1 != ',')); iVar3 = iVar3 + 1) {
        }
        iVar3 = iVar3 + (uint)(cVar1 == ',');
      }
    }
  }
  iVar3 = DAT_00244218;
  puVar10 = *(undefined1 **)(&stack0x0000002c + iVar25);
  **(undefined1 **)(&stack0x00000028 + iVar25) = 0;
  *puVar10 = 0;
  snprintf(&stack0x000001c8 + iVar25,0x20,(char *)(iVar3 + 0x243fc6));
  pcVar4 = strstr(*(char **)((int)&uStack_4 + iVar25),&stack0x000001c8 + iVar25);
  if (pcVar4 != (char *)0x0) {
    snprintf(&stack0x000001c8 + iVar25,0x20,(char *)(DAT_0024421c + 0x243fe0));
    pcVar4 = strstr(*(char **)((int)&uStack_4 + iVar25),&stack0x000001c8 + iVar25);
    iVar3 = DAT_00244220;
    if (pcVar4 != (char *)0x0) {
      **(undefined1 **)(&stack0x00000028 + iVar25) = 1;
      snprintf(&stack0x000001c8 + iVar25,0x20,(char *)(iVar3 + 0x243ffc));
      pcVar4 = strstr(*(char **)((int)&uStack_4 + iVar25),&stack0x000001c8 + iVar25);
      if (pcVar4 != (char *)0x0) {
        *puVar10 = 1;
      }
    }
  }
  puVar10 = *(undefined1 **)(*(int *)(&stack0x00000000 + iVar25) + DAT_00244224);
  pcVar4 = (char *)(DAT_00244228 + 0x24401e);
  *puVar10 = 0;
  snprintf(&stack0x000001c8 + iVar25,0x20,pcVar4);
  pcVar4 = strstr(*(char **)((int)&uStack_4 + iVar25),&stack0x000001c8 + iVar25);
  if (pcVar4 != (char *)0x0) {
    snprintf(&stack0x000001c8 + iVar25,0x20,(char *)(DAT_0024422c + 0x24403a));
    pcVar4 = strstr(*(char **)((int)&uStack_4 + iVar25),&stack0x000001c8 + iVar25);
    if (pcVar4 != (char *)0x0) {
      *puVar10 = 1;
    }
  }
  snprintf(&stack0x000001c8 + iVar25,0x20,(char *)(DAT_00244230 + 0x244056));
  pcVar4 = strstr(*(char **)((int)&uStack_4 + iVar25),&stack0x000001c8 + iVar25);
  if (pcVar4 != (char *)0x0) {
    snprintf(&stack0x000001c8 + iVar25,0x20,(char *)(DAT_00244234 + 0x24406e));
    pcVar4 = strstr(*(char **)((int)&uStack_4 + iVar25),&stack0x000001c8 + iVar25);
    piVar6 = *(int **)(*(int *)(&stack0x00000000 + iVar25) + DAT_00244238);
    if (pcVar4 != (char *)0x0) {
      iVar3 = atoi(pcVar4 + 0xc);
      *piVar6 = iVar3;
    }
    snprintf(&stack0x000001c8 + iVar25,0x20,(char *)(DAT_0024423c + 0x244094));
    pcVar4 = strstr(*(char **)((int)&uStack_4 + iVar25),&stack0x000001c8 + iVar25);
    if (pcVar4 != (char *)0x0) {
      iVar3 = atoi(pcVar4 + 0xc);
      piVar6[1] = iVar3;
    }
    snprintf(&stack0x000001c8 + iVar25,0x20,(char *)(DAT_00244240 + 0x2440b4));
    pcVar4 = strstr(*(char **)((int)&uStack_4 + iVar25),&stack0x000001c8 + iVar25);
    if (pcVar4 != (char *)0x0) {
      iVar3 = atoi(pcVar4 + 0xc);
      piVar6[2] = iVar3;
    }
    snprintf(&stack0x000001c8 + iVar25,0x20,(char *)(DAT_00244244 + 0x2440d4));
    pcVar4 = strstr(*(char **)((int)&uStack_4 + iVar25),&stack0x000001c8 + iVar25);
    if (pcVar4 == (char *)0x0) {
      *(undefined1 *)((int)piVar6 + 0xd) = 0;
    }
    else {
      *(undefined1 *)((int)piVar6 + 0xd) = 1;
    }
  }
  snprintf(&stack0x000001c8 + iVar25,0x20,(char *)(DAT_00244248 + 0x2440f4));
  pcVar4 = strstr(*(char **)((int)&uStack_4 + iVar25),&stack0x000001c8 + iVar25);
  if (pcVar4 != (char *)0x0) {
    snprintf(&stack0x000001c8 + iVar25,0x20,(char *)(DAT_0024424c + 0x24410e));
    pcVar4 = strstr(*(char **)((int)&uStack_4 + iVar25),&stack0x000001c8 + iVar25);
    iVar3 = *(int *)(&stack0x00000000 + iVar25);
    pcVar8 = (char *)(DAT_00244254 + 0x24412a);
    **(char **)(iVar3 + DAT_00244250) = '\x01' - (pcVar4 == (char *)0x0);
    snprintf(&stack0x000001c8 + iVar25,0x20,pcVar8);
    pcVar4 = strstr(*(char **)((int)&uStack_4 + iVar25),&stack0x000001c8 + iVar25);
    if (pcVar4 != (char *)0x0) {
      iVar9 = atoi(pcVar4 + 0x16);
      **(int **)(iVar3 + DAT_00244258) = iVar9;
      **(int **)(iVar3 + DAT_0024425c) = iVar9;
      **(int **)(iVar3 + DAT_00244260) = iVar9;
    }
    snprintf(&stack0x000001c8 + iVar25,0x20,(char *)(DAT_00244264 + 0x24415e));
    pcVar4 = strstr(*(char **)((int)&uStack_4 + iVar25),&stack0x000001c8 + iVar25);
    if (pcVar4 != (char *)0x0) {
      sVar16 = 0;
      do {
        if (pcVar4[sVar16 + 0x12] == ']') break;
        sVar16 = sVar16 + 1;
      } while (sVar16 != 0x1f);
      pcVar8 = *(char **)(*(int *)(&stack0x00000000 + iVar25) + DAT_00244268);
      memset(pcVar8,0,0x20);
      strncpy(pcVar8,pcVar4 + 0x12,sVar16);
      pcVar8[0x1f] = '\0';
    }
    snprintf(&stack0x000001c8 + iVar25,0x20,(char *)(DAT_0024426c + 0x2441aa));
    pcVar4 = strstr(*(char **)((int)&uStack_4 + iVar25),&stack0x000001c8 + iVar25);
    if (pcVar4 != (char *)0x0) {
      for (sVar16 = 0; pcVar4[sVar16 + 0x12] != ']'; sVar16 = sVar16 + 1) {
      }
      if (0x1e < (int)sVar16) {
        sVar16 = 0x1f;
      }
      pcVar8 = *(char **)(*(int *)(&stack0x00000000 + iVar25) + DAT_00244270);
      memset(pcVar8,0,0x20);
      strncpy(pcVar8,pcVar4 + 0x12,sVar16);
      pcVar8[0x1f] = '\0';
    }
    snprintf(&stack0x000001c8 + iVar25,0x20,(char *)(DAT_00244274 + 0x2441f8));
    pcVar4 = strstr(*(char **)((int)&uStack_4 + iVar25),&stack0x000001c8 + iVar25);
    if (pcVar4 != (char *)0x0) {
      for (sVar16 = 0; pcVar4[sVar16 + 0x13] != ']'; sVar16 = sVar16 + 1) {
      }
      if (0x1e < (int)sVar16) {
        sVar16 = 0x1f;
      }
      pcVar8 = *(char **)(*(int *)(&stack0x00000000 + iVar25) + DAT_002445a4);
      memset(pcVar8,0,0x20);
      strncpy(pcVar8,pcVar4 + 0x13,sVar16);
      pcVar8[0x1f] = '\0';
    }
    snprintf(&stack0x000001c8 + iVar25,0x20,(char *)(DAT_002445a8 + 0x2442b0));
    pcVar4 = strstr(*(char **)((int)&uStack_4 + iVar25),&stack0x000001c8 + iVar25);
    if (pcVar4 != (char *)0x0) {
      for (sVar16 = 0; pcVar4[sVar16 + 0xd] != ']'; sVar16 = sVar16 + 1) {
      }
      if (0x1e < (int)sVar16) {
        sVar16 = 0x1f;
      }
      pcVar8 = *(char **)(*(int *)(&stack0x00000000 + iVar25) + DAT_002445ac);
      memset(pcVar8,0,0x20);
      strncpy(pcVar8,pcVar4 + 0xd,sVar16);
      pcVar8[0x1f] = '\0';
    }
    snprintf(&stack0x000001c8 + iVar25,0x20,(char *)(DAT_002445b0 + 0x2442fe));
    pcVar4 = strstr(*(char **)((int)&uStack_4 + iVar25),&stack0x000001c8 + iVar25);
    if (pcVar4 != (char *)0x0) {
      for (sVar16 = 0; pcVar4[sVar16 + 0xf] != ']'; sVar16 = sVar16 + 1) {
      }
      if (0x1e < (int)sVar16) {
        sVar16 = 0x1f;
      }
      pcVar8 = *(char **)(*(int *)(&stack0x00000000 + iVar25) + DAT_002445b4);
      memset(pcVar8,0,0x20);
      strncpy(pcVar8,pcVar4 + 0xf,sVar16);
      pcVar8[0x1f] = '\0';
    }
    snprintf(&stack0x000001c8 + iVar25,0x20,(char *)(DAT_002445b8 + 0x24434c));
    pcVar4 = strstr(*(char **)((int)&uStack_4 + iVar25),&stack0x000001c8 + iVar25);
    if (pcVar4 == (char *)0x0) {
      **(undefined1 **)(*(int *)(&stack0x00000000 + iVar25) + DAT_002445bc) = 0;
    }
    else {
      **(undefined1 **)(*(int *)(&stack0x00000000 + iVar25) + DAT_002445bc) = 1;
      iVar3 = *(int *)(&stack0x00000004 + iVar25);
      if (**(int **)(*(int *)(&stack0x00000000 + iVar25) + DAT_002445c0) !=
          *(int *)(iVar3 + DAT_002445c4)) {
        *(int *)(iVar3 + DAT_002445c4) =
             **(int **)(*(int *)(&stack0x00000000 + iVar25) + DAT_002445c0);
        *(undefined1 *)(iVar3 + DAT_002445c8) = 0;
      }
    }
    pcVar8 = *(char **)(*(int *)(&stack0x00000000 + iVar25) + DAT_002445cc);
    pcVar4 = (char *)(DAT_002445d0 + 0x244390);
    *pcVar8 = '\0';
    snprintf(&stack0x000001c8 + iVar25,0x20,pcVar4);
    pcVar4 = strstr(*(char **)((int)&uStack_4 + iVar25),&stack0x000001c8 + iVar25);
    iVar3 = DAT_002445d4;
    *pcVar8 = '\x01' - (pcVar4 == (char *)0x0);
    snprintf(&stack0x000001c8 + iVar25,0x20,(char *)(iVar3 + 0x2443ae));
    pcVar4 = strstr(*(char **)((int)&uStack_4 + iVar25),&stack0x000001c8 + iVar25);
    if (pcVar4 != (char *)0x0) {
      uVar17 = atoi(pcVar4 + 0x13);
      iVar3 = *(int *)(&stack0x00000004 + iVar25);
      if (*(uint *)(iVar3 + DAT_002445d8) < uVar17) {
        *(uint *)(iVar3 + DAT_002445d8) = uVar17;
        *(undefined1 *)(iVar3 + DAT_002445dc) = 0;
      }
    }
    snprintf(&stack0x000001c8 + iVar25,0x20,(char *)(DAT_002445e0 + 0x2443de));
    pcVar4 = strstr(*(char **)((int)&uStack_4 + iVar25),&stack0x000001c8 + iVar25);
    iVar3 = *(int *)(&stack0x00000000 + iVar25);
    pcVar8 = (char *)(DAT_002445e8 + 0x2443fa);
    **(char **)(iVar3 + DAT_002445e4) = '\x01' - (pcVar4 == (char *)0x0);
    snprintf(&stack0x000001c8 + iVar25,0x20,pcVar8);
    pcVar4 = strstr(*(char **)((int)&uStack_4 + iVar25),&stack0x000001c8 + iVar25);
    pcVar8 = (char *)(DAT_002445f0 + 0x244418);
    **(char **)(iVar3 + DAT_002445ec) = '\x01' - (pcVar4 == (char *)0x0);
    snprintf(&stack0x000001c8 + iVar25,0x20,pcVar8);
    pcVar4 = strstr(*(char **)((int)&uStack_4 + iVar25),&stack0x000001c8 + iVar25);
    if (pcVar4 != (char *)0x0) {
      for (sVar16 = 0; pcVar4[sVar16 + 0x13] != ']'; sVar16 = sVar16 + 1) {
      }
      if (0x1e < (int)sVar16) {
        sVar16 = 0x1f;
      }
      pcVar8 = *(char **)(*(int *)(&stack0x00000000 + iVar25) + DAT_002445f4);
      memset(pcVar8,0,0x20);
      strncpy(pcVar8,pcVar4 + 0x13,sVar16);
      pcVar8[0x1f] = '\0';
    }
  }
  iVar3 = DAT_00244600;
  L_PrintLog((char *)(DAT_002445f8 + 0x24446a),(char *)(DAT_002445fc + 0x24446c));
  iVar14 = *(int *)(&stack0x0000003c + iVar25);
  iVar9 = 0;
  do {
    pcVar4 = (char *)(DAT_00244604 + 0x244480);
    snprintf(&stack0x000000c8 + iVar25,0x100,(char *)(iVar3 + 0x244476),iVar9);
    L_PrintLog(pcVar4,&stack0x000000c8 + iVar25);
    snprintf(&stack0x000000c8 + iVar25,0x100,(char *)(DAT_0024460c + 0x24449c),
             (uint)*(byte *)(*(int *)(*(int *)(&stack0x00000000 + iVar25) + DAT_00244608) + iVar9));
    L_PrintLog(pcVar4,&stack0x000000c8 + iVar25);
    iVar20 = 0;
    do {
      if (*(int *)(iVar14 + iVar20) != 0) {
        *puVar31 = *(undefined4 *)
                    ((*(int *)(&stack0x00000044 + iVar25) - *(int *)(&stack0x0000003c + iVar25)) +
                     iVar14 + iVar20);
        snprintf(&stack0x000000c8 + iVar25,0x100,(char *)(DAT_00244610 + 0x2444c4));
        L_PrintLog((char *)(DAT_00244614 + 0x2444d6),&stack0x000000c8 + iVar25);
      }
      iVar20 = iVar20 + 4;
    } while (iVar20 != 0x2a8);
    iVar9 = iVar9 + 1;
    iVar14 = iVar14 + 0x2a8;
  } while (iVar9 != 0x12);
  pcVar4 = (char *)(DAT_0024461c + 0x2444fc);
  snprintf(&stack0x000000c8 + iVar25,0x100,(char *)(DAT_00244618 + 0x2444f8),
           (uint)**(byte **)(&stack0x00000020 + iVar25));
  L_PrintLog(pcVar4,&stack0x000000c8 + iVar25);
  iVar3 = *(int *)(&stack0x00000000 + iVar25);
  snprintf(&stack0x000000c8 + iVar25,0x100,(char *)(DAT_00244624 + 0x244516),
           **(undefined4 **)(iVar3 + DAT_00244620));
  L_PrintLog(pcVar4,&stack0x000000c8 + iVar25);
  snprintf(&stack0x000000c8 + iVar25,0x100,(char *)(DAT_0024462c + 0x244532),
           **(undefined4 **)(iVar3 + DAT_00244628));
  L_PrintLog(pcVar4,&stack0x000000c8 + iVar25);
  puVar11 = *(undefined4 **)(iVar3 + DAT_00244630);
  puVar18 = puVar11 + 10;
  pcVar4 = (char *)(DAT_00244634 + 0x244550);
  do {
    uVar26 = *puVar11;
    puVar11 = puVar11 + 1;
    snprintf(&stack0x000000c8 + iVar25,0x100,pcVar4,uVar26);
    L_PrintLog((char *)(DAT_00244638 + 0x244564),&stack0x000000c8 + iVar25);
  } while (puVar11 != puVar18);
  iVar25 = *(int *)(&stack0x00000000 + iVar25);
  **(undefined1 **)(iVar25 + DAT_0024463c) = 1;
  **(undefined1 **)(iVar25 + DAT_00244640) = 1;
  FUN_0024458c();
  return;
}


