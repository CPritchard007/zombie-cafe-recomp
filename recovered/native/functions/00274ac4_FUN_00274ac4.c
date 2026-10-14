/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00274ac4 FUN_00274ac4 */

void FUN_00274ac4(int *param_1)

{
  undefined4 *puVar1;
  ushort uVar2;
  ushort uVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  
  iVar5 = param_1[1];
  FUN_0025f68e(*(undefined4 *)(iVar5 + 0x3c));
  *(undefined4 *)(iVar5 + 0x3c) = 0;
  if ((char)param_1[2] == '\0') goto LAB_00274b58;
  iVar4 = param_1[1];
  if (1 < *(int *)(*param_1 + 0x80)) {
    if (*(int **)(iVar4 + 0x4c) == param_1) {
      *(undefined4 *)(iVar4 + 0x4c) = 0;
      *(ushort *)(iVar4 + 0x16) = *(ushort *)(iVar4 + 0x16) & 0xff9f;
      for (iVar5 = *(int *)(iVar4 + 0x48); iVar5 != 0; iVar5 = *(int *)(iVar5 + 0xc)) {
        *(undefined1 *)(iVar5 + 8) = 1;
      }
    }
    *(undefined1 *)(param_1 + 2) = 1;
    return;
  }
  piVar6 = (int *)(iVar4 + 0x48);
  while (puVar1 = (undefined4 *)*piVar6, puVar1 != (undefined4 *)0x0) {
    if ((int *)*puVar1 == param_1) {
      *piVar6 = puVar1[3];
      if (puVar1[1] != 1) {
        sqlite3_free();
      }
    }
    else {
      piVar6 = puVar1 + 3;
    }
  }
  if (*(int **)(iVar4 + 0x4c) == param_1) {
    *(undefined4 *)(iVar4 + 0x4c) = 0;
    uVar3 = *(ushort *)(iVar4 + 0x16);
    uVar2 = 0x60;
LAB_00274b48:
    *(ushort *)(iVar4 + 0x16) = uVar3 & ~uVar2;
  }
  else if (*(int *)(iVar4 + 0x28) == 2) {
    uVar3 = *(ushort *)(iVar4 + 0x16);
    uVar2 = 0x40;
    goto LAB_00274b48;
  }
  iVar4 = *(int *)(iVar5 + 0x28) + -1;
  *(int *)(iVar5 + 0x28) = iVar4;
  if (iVar4 == 0) {
    *(undefined1 *)(iVar5 + 0x13) = 0;
  }
LAB_00274b58:
  *(undefined1 *)(param_1 + 2) = 0;
  if ((*(char *)(iVar5 + 0x13) == '\0') && (*(int *)(iVar5 + 0xc) != 0)) {
    FUN_00274a30();
    *(undefined4 *)(iVar5 + 0xc) = 0;
  }
  return;
}


