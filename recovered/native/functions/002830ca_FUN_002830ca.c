/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002830ca FUN_002830ca */

void FUN_002830ca(void)

{
  char cVar1;
  undefined1 uVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int unaff_r7;
  char cVar7;
  bool bVar8;
  undefined4 in_stack_00000020;
  undefined4 in_stack_00000024;
  int in_stack_00000030;
  
  if (*(char *)(unaff_r7 + 0x34) == '\0') goto FUN_00283142;
  iVar3 = *(int *)(unaff_r7 + 0x18);
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
    if (iVar3 << 10 < 0) {
      uVar2 = 3;
      goto LAB_0028311c;
    }
    uVar2 = 2;
    *(undefined1 *)(iVar4 + 0xb) = 2;
    if (iVar3 << 9 < 0) {
      uVar2 = 3;
    }
  }
  else {
    uVar2 = 0;
LAB_0028311c:
    *(undefined1 *)(iVar4 + 0xb) = uVar2;
  }
  *(undefined1 *)(iVar4 + 9) = uVar2;
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


