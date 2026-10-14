/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00267846 FUN_00267846 */

void FUN_00267846(void)

{
  byte bVar1;
  undefined1 *puVar2;
  uint uVar3;
  int iVar4;
  char *pcVar5;
  int iVar6;
  int iVar7;
  undefined1 *puVar8;
  int unaff_r5;
  uint uVar9;
  char *pcVar10;
  undefined1 *puVar11;
  longlong lVar12;
  int iStack00000004;
  int in_stack_0000000c;
  int in_stack_00000014;
  undefined4 in_stack_00000018;
  undefined4 in_stack_0000001c;
  int in_stack_00000028;
  int in_stack_0000002c;
  int in_stack_00000030;
  int in_stack_00000038;
  int in_stack_00000050;
  int in_stack_00000054;
  int in_stack_0000005c;
  
  lVar12 = CONCAT44(in_stack_0000001c,in_stack_00000018);
  if ((in_stack_00000050 != 0) &&
     (iVar6 = in_stack_00000014 + ((unaff_r5 == 0) - 1), in_stack_0000000c < iVar6)) {
    in_stack_0000000c = iVar6;
  }
  if (in_stack_0000000c < 0x3c) {
    iVar6 = 0x46;
    puVar2 = &stack0x00000074;
    puVar11 = (undefined1 *)0x0;
  }
  else {
    iVar6 = in_stack_0000000c + 10;
    puVar2 = (undefined1 *)FUN_0025edc8(iVar6);
    puVar11 = puVar2;
    if (puVar2 == (undefined1 *)0x0) {
      *(undefined1 *)(in_stack_00000028 + 0x18) = 1;
      FUN_00268160();
      return;
    }
  }
  puVar2 = puVar2 + iVar6 + -1;
  puVar8 = puVar2;
  if (in_stack_00000030 == 0x10) {
    iVar6 = 10;
    __aeabi_uldivmod(in_stack_00000018,in_stack_0000001c,10,0);
    if (iVar6 < 4) {
      __aeabi_uldivmod(in_stack_00000018,in_stack_0000001c,10,0);
      iVar4 = 10;
      iVar7 = 0;
      __aeabi_uldivmod();
      if ((iVar4 == 1) && (iVar7 == 0)) {
        iVar6 = 0;
      }
    }
    else {
      iVar6 = 0;
    }
    puVar2[-1] = *(undefined1 *)(DAT_00267be0 + iVar6 * 2 + 0x267919);
    puVar8 = puVar2 + -2;
    *puVar8 = *(undefined1 *)(DAT_00267be4 + 0x2678ec + iVar6 * 2);
  }
  bVar1 = *(byte *)(in_stack_00000054 + 4);
  iVar6 = DAT_00267be8 + 0x26793f;
  uVar9 = (uint)*(byte *)(in_stack_00000054 + 1);
  do {
    in_stack_0000001c = (undefined4)((ulonglong)lVar12 >> 0x20);
    in_stack_00000018 = (undefined4)lVar12;
    uVar3 = uVar9;
    __aeabi_uldivmod(in_stack_00000018,in_stack_0000001c,uVar9,0);
    puVar8 = puVar8 + -1;
    *puVar8 = *(undefined1 *)(iVar6 + (uint)bVar1 + uVar3);
    lVar12 = __aeabi_uldivmod(in_stack_00000018,in_stack_0000001c,uVar9,0);
    iVar4 = DAT_00268194;
  } while (lVar12 != 0);
  uVar3 = in_stack_0000000c - ((int)puVar2 - (int)puVar8);
  for (uVar9 = uVar3; 0 < (int)uVar9; uVar9 = uVar9 - 1) {
    puVar8[(uVar9 - uVar3) + -1] = 0x30;
  }
  pcVar10 = puVar8 + -((int)~uVar3 >> 0x1f & uVar3);
  if (unaff_r5 != 0) {
    pcVar10 = pcVar10 + -1;
    *pcVar10 = (char)unaff_r5;
  }
  if ((in_stack_00000038 != 0) && (*(byte *)(in_stack_00000054 + 5) != 0)) {
    for (pcVar5 = &UNK_002679d4 + (uint)*(byte *)(in_stack_00000054 + 5) + DAT_00267bec;
        *pcVar5 != '\0'; pcVar5 = pcVar5 + 1) {
      pcVar10 = pcVar10 + -1;
      *pcVar10 = *pcVar5;
    }
  }
  iVar6 = (int)puVar2 - (int)pcVar10;
  if ((in_stack_0000005c == 0) && (iStack00000004 = in_stack_00000014 - iVar6, 0 < iStack00000004))
  {
    for (; 0x1c < iStack00000004; iStack00000004 = iStack00000004 + -0x1d) {
      FUN_002674ce(in_stack_00000028,iVar4 + 0x26814b,0x1d);
    }
    if (iStack00000004 != 0) {
      FUN_002674ce(in_stack_00000028,DAT_00268198 + 0x26815d,iStack00000004);
    }
  }
  if (0 < iVar6) {
    FUN_002674ce(in_stack_00000028,pcVar10,iVar6);
  }
  iVar4 = DAT_0026819c;
  if ((in_stack_0000005c != 0) &&
     (in_stack_00000014 = in_stack_00000014 - iVar6, 0 < in_stack_00000014)) {
    for (; 0x1c < in_stack_00000014; in_stack_00000014 = in_stack_00000014 + -0x1d) {
      FUN_002674ce(in_stack_00000028,iVar4 + 0x268195,0x1d);
    }
    if (in_stack_00000014 != 0) {
      FUN_002674ce(in_stack_00000028,&UNK_002681a5 + DAT_002681a0,in_stack_00000014);
    }
  }
  sqlite3_free(puVar11);
  if (*(char *)(in_stack_0000002c + 1) != '\0') {
    FUN_002675c6();
  }
  FUN_00268160();
  return;
}


