/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002675c6 FUN_002675c6 */

/* WARNING: Function: __gnu_thumb1_case_uqi replaced with injection: switch8_r0 */
/* WARNING: Function: __gnu_thumb1_case_uhi replaced with injection: switch16_uhi_r0 */
/* WARNING (jumptable): Removing unreachable block (ram,0x00267626) */
/* WARNING (jumptable): Removing unreachable block (ram,0x0026775e) */
/* WARNING: Removing unreachable block (ram,0x00267626) */
/* WARNING: Removing unreachable block (ram,0x0026775e) */
/* WARNING: Removing unreachable block (ram,0x00267838) */
/* WARNING: Removing unreachable block (ram,0x002677a0) */
/* WARNING: Removing unreachable block (ram,0x0026780e) */

void FUN_002675c6(void)

{
  byte *pbVar1;
  char cVar2;
  byte bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  int iVar7;
  undefined1 *puVar8;
  int iVar9;
  uint uVar10;
  char *pcVar11;
  int in_r3;
  uint uVar12;
  int iVar13;
  undefined1 *puVar14;
  char cVar15;
  int *unaff_r5;
  int *piVar16;
  char *pcVar17;
  char *unaff_r7;
  byte *pbVar18;
  undefined1 *puVar19;
  bool bVar20;
  longlong lVar21;
  uint uStack0000000c;
  int iStack00000014;
  int iStack00000018;
  int iStack0000001c;
  int in_stack_00000028;
  byte *pbStack0000002c;
  int in_stack_00000030;
  int in_stack_00000054;
  int in_stack_00000068;
  
  if (in_r3 != 0x25) {
    iVar7 = 1;
    pcVar17 = unaff_r7;
    while( true ) {
      pcVar17 = pcVar17 + 1;
      cVar2 = *pcVar17;
      if ((cVar2 == '%') || (cVar2 == '\0')) break;
      iVar7 = iVar7 + 1;
    }
    FUN_002674ce(in_stack_00000028,unaff_r7,iVar7);
    unaff_r7 = pcVar17;
    if (cVar2 == '\0') {
      FUN_00268160();
    }
  }
  uVar12 = (uint)(byte)unaff_r7[1];
  if (uVar12 == 0) {
    FUN_002674ce(in_stack_00000028,DAT_00267880 + 0x267608,1);
    FUN_00268160();
  }
  pbVar18 = (byte *)(unaff_r7 + 1);
  bVar4 = false;
  bVar6 = false;
  cVar2 = '\0';
  bVar20 = false;
  bVar5 = false;
  do {
    switch(uVar12) {
    case 0x20:
      cVar2 = '\x01';
      break;
    case 0x21:
      break;
    default:
      if (uVar12 == 0x2a) {
        piVar16 = unaff_r5 + 1;
        iStack00000014 = *unaff_r5;
        if (iStack00000014 < 0) {
          iStack00000014 = -iStack00000014;
          bVar5 = true;
        }
        pbStack0000002c = pbVar18 + 1;
        uVar12 = (uint)pbVar18[1];
        goto LAB_002676aa;
      }
      goto LAB_0026766c;
    case 0x23:
      bVar6 = true;
      break;
    case 0x2b:
      bVar20 = true;
      break;
    case 0x2d:
      bVar5 = true;
      break;
    case 0x30:
      bVar4 = true;
    }
    pbVar18 = pbVar18 + 1;
    uVar12 = (uint)*pbVar18;
  } while (uVar12 != 0);
LAB_0026766c:
  iStack00000014 = 0;
  while (piVar16 = unaff_r5, pbStack0000002c = pbVar18, uVar12 - 0x30 < 10) {
    iStack00000014 = iStack00000014 * 10 + uVar12 + -0x30;
    pbVar1 = pbVar18 + 1;
    pbVar18 = pbVar18 + 1;
    uVar12 = (uint)*pbVar1;
  }
LAB_002676aa:
  if (uVar12 == 0x2e) {
    uVar12 = (uint)pbStack0000002c[1];
    if (uVar12 == 0x2a) {
      iVar7 = *piVar16;
      piVar16 = piVar16 + 1;
      uStack0000000c = iVar7 >> 0x1f;
      uStack0000000c = iVar7 + uStack0000000c ^ uStack0000000c;
      uVar12 = (uint)pbStack0000002c[2];
      pbStack0000002c = pbStack0000002c + 2;
    }
    else {
      uStack0000000c = 0;
      pbVar18 = pbStack0000002c;
      while (pbStack0000002c = pbVar18 + 1, uVar12 - 0x30 < 10) {
        uStack0000000c = (uStack0000000c * 10 + uVar12) - 0x30;
        uVar12 = (uint)pbVar18[2];
        pbVar18 = pbStack0000002c;
      }
    }
  }
  else {
    uStack0000000c = 0xffffffff;
  }
  if (uVar12 == 0x6c) {
    uVar12 = (uint)pbStack0000002c[1];
    if (uVar12 == 0x6c) {
      uVar12 = (uint)pbStack0000002c[2];
      pbStack0000002c = pbStack0000002c + 2;
    }
    else {
      pbStack0000002c = pbStack0000002c + 1;
    }
  }
  iVar7 = 0;
  pbVar18 = (byte *)(DAT_00267884 + 0x26775a);
  do {
    if (uVar12 == *pbVar18) {
      iVar7 = iVar7 * 6 + DAT_00267888;
      if ((in_stack_00000068 == 0) && ((int)((uint)(byte)(&UNK_00267766)[iVar7 + 2] << 0x1e) < 0)) {
        FUN_00268160();
      }
      uVar12 = (byte)(&UNK_00267766)[iVar7 + 3] - 1;
      if (0xf < uVar12) {
        uVar12 = FUN_00268160();
      }
                    /* WARNING: Could not recover jumptable at 0x0026775e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)((int)&DAT_00267762 + (uint)(ushort)(&DAT_00267762)[uVar12] * 2 + 1))();
      return;
    }
    iVar7 = iVar7 + 1;
    pbVar18 = pbVar18 + 6;
  } while (iVar7 != 0x17);
  FUN_00268160();
  if ((*(byte *)(in_stack_00000054 + 2) & 1) == 0) {
    iStack00000018 = *piVar16;
    iStack0000001c = 0;
    cVar15 = '\0';
  }
  else {
    iStack00000018 = *piVar16;
    iStack0000001c = iStack00000018 >> 0x1f;
    if (iStack0000001c < 0) {
      if ((iStack00000018 == 0) && (iStack0000001c == -0x80000000)) {
        FUN_00268152();
      }
      bVar20 = iStack00000018 != 0;
      iStack00000018 = -iStack00000018;
      iStack0000001c = -(uint)bVar20 - iStack0000001c;
      FUN_0026815a();
    }
    else {
      cVar15 = '+';
      if (bVar20) goto LAB_0026783c;
    }
    cVar15 = cVar2;
    if (cVar2 != '\0') {
      cVar15 = ' ';
    }
  }
LAB_0026783c:
  lVar21 = CONCAT44(iStack0000001c,iStack00000018);
  if (iStack00000018 == 0 && iStack0000001c == 0) {
    bVar6 = false;
  }
  if ((bVar4) &&
     (uVar12 = iStack00000014 + ((cVar15 == '\0') - 1), (int)uStack0000000c < (int)uVar12)) {
    uStack0000000c = uVar12;
  }
  if ((int)uStack0000000c < 0x3c) {
    iVar7 = 0x46;
    puVar8 = &stack0x00000074;
    puVar19 = (undefined1 *)0x0;
  }
  else {
    iVar7 = uStack0000000c + 10;
    puVar8 = (undefined1 *)FUN_0025edc8(iVar7);
    puVar19 = puVar8;
    if (puVar8 == (undefined1 *)0x0) {
      *(undefined1 *)(in_stack_00000028 + 0x18) = 1;
      FUN_00268160();
      return;
    }
  }
  puVar8 = puVar8 + iVar7 + -1;
  puVar14 = puVar8;
  if (in_stack_00000030 == 0x10) {
    iVar7 = 10;
    __aeabi_uldivmod(iStack00000018,iStack0000001c,10,0);
    if (iVar7 < 4) {
      __aeabi_uldivmod(iStack00000018,iStack0000001c,10,0);
      iVar9 = 10;
      iVar13 = 0;
      __aeabi_uldivmod();
      if ((iVar9 == 1) && (iVar13 == 0)) {
        iVar7 = 0;
      }
    }
    else {
      iVar7 = 0;
    }
    puVar8[-1] = *(undefined1 *)(DAT_00267be0 + iVar7 * 2 + 0x267919);
    puVar14 = puVar8 + -2;
    *puVar14 = *(undefined1 *)(DAT_00267be4 + 0x2678ec + iVar7 * 2);
  }
  bVar3 = *(byte *)(in_stack_00000054 + 4);
  iVar7 = DAT_00267be8 + 0x26793f;
  uVar12 = (uint)*(byte *)(in_stack_00000054 + 1);
  do {
    iStack0000001c = (int)((ulonglong)lVar21 >> 0x20);
    iStack00000018 = (int)lVar21;
    uVar10 = uVar12;
    __aeabi_uldivmod(iStack00000018,iStack0000001c,uVar12,0);
    puVar14 = puVar14 + -1;
    *puVar14 = *(undefined1 *)(iVar7 + (uint)bVar3 + uVar10);
    lVar21 = __aeabi_uldivmod(iStack00000018,iStack0000001c,uVar12,0);
    iVar9 = DAT_00268194;
  } while (lVar21 != 0);
  uStack0000000c = uStack0000000c - ((int)puVar8 - (int)puVar14);
  for (uVar12 = uStack0000000c; 0 < (int)uVar12; uVar12 = uVar12 - 1) {
    puVar14[(uVar12 - uStack0000000c) + -1] = 0x30;
  }
  pcVar17 = puVar14 + -((int)~uStack0000000c >> 0x1f & uStack0000000c);
  if (cVar15 != '\0') {
    pcVar17 = pcVar17 + -1;
    *pcVar17 = cVar15;
  }
  if ((bVar6) && (*(byte *)(in_stack_00000054 + 5) != 0)) {
    for (pcVar11 = &UNK_002679d4 + (uint)*(byte *)(in_stack_00000054 + 5) + DAT_00267bec;
        *pcVar11 != '\0'; pcVar11 = pcVar11 + 1) {
      pcVar17 = pcVar17 + -1;
      *pcVar17 = *pcVar11;
    }
  }
  iVar7 = (int)puVar8 - (int)pcVar17;
  if ((!bVar5) && (iVar13 = iStack00000014 - iVar7, 0 < iVar13)) {
    for (; 0x1c < iVar13; iVar13 = iVar13 + -0x1d) {
      FUN_002674ce(in_stack_00000028,iVar9 + 0x26814b,0x1d);
    }
    if (iVar13 != 0) {
      FUN_002674ce(in_stack_00000028,DAT_00268198 + 0x26815d,iVar13);
    }
  }
  if (0 < iVar7) {
    FUN_002674ce(in_stack_00000028,pcVar17,iVar7);
  }
  iVar9 = DAT_0026819c;
  if ((bVar5) && (iStack00000014 = iStack00000014 - iVar7, 0 < iStack00000014)) {
    for (; 0x1c < iStack00000014; iStack00000014 = iStack00000014 + -0x1d) {
      FUN_002674ce(in_stack_00000028,iVar9 + 0x268195,0x1d);
    }
    if (iStack00000014 != 0) {
      FUN_002674ce(in_stack_00000028,&UNK_002681a5 + DAT_002681a0,iStack00000014);
    }
  }
  sqlite3_free(puVar19);
  if (pbStack0000002c[1] != 0) {
    FUN_002675c6();
  }
  FUN_00268160();
  return;
}


