/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002675a8 FUN_002675a8 */

/* WARNING: Function: __gnu_thumb1_case_uqi replaced with injection: switch8_r0 */
/* WARNING: Function: __gnu_thumb1_case_uhi replaced with injection: switch16_uhi_r0 */
/* WARNING (jumptable): Removing unreachable block (ram,0x00267626) */
/* WARNING (jumptable): Removing unreachable block (ram,0x0026775e) */
/* WARNING: Removing unreachable block (ram,0x00267626) */
/* WARNING: Removing unreachable block (ram,0x0026775e) */
/* WARNING: Removing unreachable block (ram,0x00267838) */
/* WARNING: Removing unreachable block (ram,0x002677a0) */
/* WARNING: Removing unreachable block (ram,0x0026780e) */

void FUN_002675a8(int param_1,int param_2,char *param_3,int *param_4)

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
  int *piVar12;
  uint uVar13;
  int iVar14;
  undefined1 *puVar15;
  char cVar16;
  char *pcVar17;
  byte *pbVar18;
  undefined1 *puVar19;
  bool bVar20;
  longlong lVar21;
  char *pcStack_d4;
  uint uStack_cc;
  int iStack_c4;
  int iStack_c0;
  int iStack_bc;
  byte *pbStack_ac;
  int iStack_a8;
  int iStack_84;
  undefined1 auStack_64 [72];
  undefined4 local_1c;
  
  local_1c = **(undefined4 **)(DAT_0026787c + 0x2675b6);
  piVar12 = param_4;
  FUN_00268146();
  if (piVar12 != (int *)&DAT_00000025) {
    iVar7 = 1;
    pcStack_d4 = param_3;
    while( true ) {
      pcStack_d4 = pcStack_d4 + 1;
      cVar2 = *pcStack_d4;
      if ((cVar2 == '%') || (cVar2 == '\0')) break;
      iVar7 = iVar7 + 1;
    }
    FUN_002674ce(param_1,param_3,iVar7);
    param_3 = pcStack_d4;
    if (cVar2 == '\0') {
      FUN_00268160();
    }
  }
  uVar13 = (uint)(byte)param_3[1];
  if (uVar13 == 0) {
    FUN_002674ce(param_1,DAT_00267880 + 0x267608,1);
    FUN_00268160();
  }
  pbVar18 = (byte *)(param_3 + 1);
  bVar4 = false;
  bVar6 = false;
  cVar2 = '\0';
  bVar20 = false;
  bVar5 = false;
  do {
    switch(uVar13) {
    case 0x20:
      cVar2 = '\x01';
      break;
    case 0x21:
      break;
    default:
      if (uVar13 == 0x2a) {
        piVar12 = param_4 + 1;
        iStack_c4 = *param_4;
        if (iStack_c4 < 0) {
          iStack_c4 = -iStack_c4;
          bVar5 = true;
        }
        pbStack_ac = pbVar18 + 1;
        uVar13 = (uint)pbVar18[1];
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
    uVar13 = (uint)*pbVar18;
  } while (uVar13 != 0);
LAB_0026766c:
  iStack_c4 = 0;
  while (piVar12 = param_4, pbStack_ac = pbVar18, uVar13 - 0x30 < 10) {
    iStack_c4 = iStack_c4 * 10 + uVar13 + -0x30;
    pbVar1 = pbVar18 + 1;
    pbVar18 = pbVar18 + 1;
    uVar13 = (uint)*pbVar1;
  }
LAB_002676aa:
  if (uVar13 == 0x2e) {
    uVar13 = (uint)pbStack_ac[1];
    if (uVar13 == 0x2a) {
      iVar7 = *piVar12;
      piVar12 = piVar12 + 1;
      uStack_cc = iVar7 >> 0x1f;
      uStack_cc = iVar7 + uStack_cc ^ uStack_cc;
      uVar13 = (uint)pbStack_ac[2];
      pbStack_ac = pbStack_ac + 2;
    }
    else {
      uStack_cc = 0;
      pbVar18 = pbStack_ac;
      while (pbStack_ac = pbVar18 + 1, uVar13 - 0x30 < 10) {
        uStack_cc = (uStack_cc * 10 + uVar13) - 0x30;
        uVar13 = (uint)pbVar18[2];
        pbVar18 = pbStack_ac;
      }
    }
  }
  else {
    uStack_cc = 0xffffffff;
  }
  if (uVar13 == 0x6c) {
    uVar13 = (uint)pbStack_ac[1];
    if (uVar13 == 0x6c) {
      uVar13 = (uint)pbStack_ac[2];
      pbStack_ac = pbStack_ac + 2;
    }
    else {
      pbStack_ac = pbStack_ac + 1;
    }
  }
  iVar7 = 0;
  pbVar18 = (byte *)(DAT_00267884 + 0x26775a);
  do {
    if (uVar13 == *pbVar18) {
      iVar7 = iVar7 * 6 + DAT_00267888;
      if ((param_2 == 0) && ((int)((uint)(byte)(&UNK_00267766)[iVar7 + 2] << 0x1e) < 0)) {
        FUN_00268160();
      }
      uVar13 = (byte)(&UNK_00267766)[iVar7 + 3] - 1;
      if (0xf < uVar13) {
        uVar13 = FUN_00268160();
      }
                    /* WARNING: Could not recover jumptable at 0x0026775e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)((int)&DAT_00267762 + (uint)(ushort)(&DAT_00267762)[uVar13] * 2 + 1))();
      return;
    }
    iVar7 = iVar7 + 1;
    pbVar18 = pbVar18 + 6;
  } while (iVar7 != 0x17);
  FUN_00268160();
  if ((*(byte *)(iStack_84 + 2) & 1) == 0) {
    iStack_c0 = *piVar12;
    iStack_bc = 0;
    cVar16 = '\0';
  }
  else {
    iStack_c0 = *piVar12;
    iStack_bc = iStack_c0 >> 0x1f;
    if (iStack_bc < 0) {
      if ((iStack_c0 == 0) && (iStack_bc == -0x80000000)) {
        FUN_00268152();
      }
      bVar20 = iStack_c0 != 0;
      iStack_c0 = -iStack_c0;
      iStack_bc = -(uint)bVar20 - iStack_bc;
      FUN_0026815a();
    }
    else {
      cVar16 = '+';
      if (bVar20) goto LAB_0026783c;
    }
    cVar16 = cVar2;
    if (cVar2 != '\0') {
      cVar16 = ' ';
    }
  }
LAB_0026783c:
  lVar21 = CONCAT44(iStack_bc,iStack_c0);
  if (iStack_c0 == 0 && iStack_bc == 0) {
    bVar6 = false;
  }
  if ((bVar4) && (uVar13 = iStack_c4 + ((cVar16 == '\0') - 1), (int)uStack_cc < (int)uVar13)) {
    uStack_cc = uVar13;
  }
  if ((int)uStack_cc < 0x3c) {
    iVar7 = 0x46;
    puVar8 = auStack_64;
    puVar19 = (undefined1 *)0x0;
  }
  else {
    iVar7 = uStack_cc + 10;
    puVar8 = (undefined1 *)FUN_0025edc8(iVar7);
    puVar19 = puVar8;
    if (puVar8 == (undefined1 *)0x0) {
      *(undefined1 *)(param_1 + 0x18) = 1;
      FUN_00268160();
      return;
    }
  }
  puVar8 = puVar8 + iVar7 + -1;
  puVar15 = puVar8;
  if (iStack_a8 == 0x10) {
    iVar7 = 10;
    __aeabi_uldivmod(iStack_c0,iStack_bc,10,0);
    if (iVar7 < 4) {
      __aeabi_uldivmod(iStack_c0,iStack_bc,10,0);
      iVar9 = 10;
      iVar14 = 0;
      __aeabi_uldivmod();
      if ((iVar9 == 1) && (iVar14 == 0)) {
        iVar7 = 0;
      }
    }
    else {
      iVar7 = 0;
    }
    puVar8[-1] = *(undefined1 *)(DAT_00267be0 + iVar7 * 2 + 0x267919);
    puVar15 = puVar8 + -2;
    *puVar15 = *(undefined1 *)(DAT_00267be4 + 0x2678ec + iVar7 * 2);
  }
  bVar3 = *(byte *)(iStack_84 + 4);
  iVar7 = DAT_00267be8 + 0x26793f;
  uVar13 = (uint)*(byte *)(iStack_84 + 1);
  do {
    iStack_bc = (int)((ulonglong)lVar21 >> 0x20);
    iStack_c0 = (int)lVar21;
    uVar10 = uVar13;
    __aeabi_uldivmod(iStack_c0,iStack_bc,uVar13,0);
    puVar15 = puVar15 + -1;
    *puVar15 = *(undefined1 *)(iVar7 + (uint)bVar3 + uVar10);
    lVar21 = __aeabi_uldivmod(iStack_c0,iStack_bc,uVar13,0);
    iVar9 = DAT_00268194;
  } while (lVar21 != 0);
  uStack_cc = uStack_cc - ((int)puVar8 - (int)puVar15);
  for (uVar13 = uStack_cc; 0 < (int)uVar13; uVar13 = uVar13 - 1) {
    puVar15[(uVar13 - uStack_cc) + -1] = 0x30;
  }
  pcVar17 = puVar15 + -((int)~uStack_cc >> 0x1f & uStack_cc);
  if (cVar16 != '\0') {
    pcVar17 = pcVar17 + -1;
    *pcVar17 = cVar16;
  }
  if ((bVar6) && (*(byte *)(iStack_84 + 5) != 0)) {
    for (pcVar11 = &UNK_002679d4 + (uint)*(byte *)(iStack_84 + 5) + DAT_00267bec; *pcVar11 != '\0';
        pcVar11 = pcVar11 + 1) {
      pcVar17 = pcVar17 + -1;
      *pcVar17 = *pcVar11;
    }
  }
  iVar7 = (int)puVar8 - (int)pcVar17;
  if ((!bVar5) && (pcStack_d4 = (char *)(iStack_c4 - iVar7), 0 < (int)pcStack_d4)) {
    for (; 0x1c < (int)pcStack_d4; pcStack_d4 = (char *)((int)pcStack_d4 + -0x1d)) {
      FUN_002674ce(param_1,iVar9 + 0x26814b,0x1d);
    }
    if (pcStack_d4 != (char *)0x0) {
      FUN_002674ce(param_1,DAT_00268198 + 0x26815d,pcStack_d4);
    }
  }
  if (0 < iVar7) {
    FUN_002674ce(param_1,pcVar17,iVar7);
  }
  iVar9 = DAT_0026819c;
  if ((bVar5) && (iStack_c4 = iStack_c4 - iVar7, 0 < iStack_c4)) {
    for (; 0x1c < iStack_c4; iStack_c4 = iStack_c4 + -0x1d) {
      FUN_002674ce(param_1,iVar9 + 0x268195,0x1d);
    }
    if (iStack_c4 != 0) {
      FUN_002674ce(param_1,&UNK_002681a5 + DAT_002681a0,iStack_c4);
    }
  }
  sqlite3_free(puVar19);
  if (pbStack_ac[1] != 0) {
    FUN_002675c6();
  }
  FUN_00268160();
  return;
}


