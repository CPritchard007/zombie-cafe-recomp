/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002830ac FUN_002830ac */

void FUN_002830ac(void)

{
  char cVar1;
  int iVar2;
  undefined1 uVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  undefined4 unaff_r6;
  int unaff_r7;
  char cVar7;
  bool bVar8;
  undefined4 in_stack_00000020;
  undefined4 in_stack_00000024;
  int in_stack_00000030;
  
  FUN_00281f08(unaff_r6);
  iVar2 = sqlite3_stricmp(in_stack_00000024,DAT_00283194 + 0x2830ba);
  if (iVar2 == 0) {
    sqlite3_db_release_memory(unaff_r7);
    FUN_002830ca();
    return;
  }
  if (*(char *)(unaff_r7 + 0x34) == '\0') goto FUN_00283142;
  iVar2 = *(int *)(unaff_r7 + 0x18);
  iVar6 = *(int *)(in_stack_00000030 + 4);
  cVar1 = *(char *)(in_stack_00000030 + 9);
  piVar5 = *(int **)(iVar6 + 4);
  FUN_00261f68(iVar6);
  iVar4 = *piVar5;
  cVar7 = cVar1;
  if (cVar1 != '\x01') {
    cVar7 = *(char *)(iVar4 + 0xc) != '\0';
  }
  *(char *)(iVar4 + 7) = cVar7;
  bVar8 = false;
  if (cVar1 == '\x03') {
    bVar8 = *(char *)(iVar4 + 0xc) == '\0';
  }
  *(bool *)(iVar4 + 8) = bVar8;
  if (cVar7 == '\0') {
    if (iVar2 << 10 < 0) {
      uVar3 = 3;
      goto LAB_0028311c;
    }
    uVar3 = 2;
    *(undefined1 *)(iVar4 + 0xb) = 2;
    if (iVar2 << 9 < 0) {
      uVar3 = 3;
    }
  }
  else {
    uVar3 = 0;
LAB_0028311c:
    *(undefined1 *)(iVar4 + 0xb) = uVar3;
  }
  *(undefined1 *)(iVar4 + 9) = uVar3;
  *(byte *)(iVar4 + 10) = *(byte *)(iVar4 + 0xb);
  if (bVar8 != false) {
    *(byte *)(iVar4 + 10) = *(byte *)(iVar4 + 0xb) | 0x20;
  }
  FUN_00262002(iVar6);
FUN_00283142:
  FUN_0025fbda(unaff_r7,in_stack_00000024);
  FUN_0025fbda(unaff_r7,in_stack_00000020);
  FUN_0028316a();
  return;
}


