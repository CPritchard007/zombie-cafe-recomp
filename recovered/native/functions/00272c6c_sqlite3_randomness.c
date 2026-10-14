/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00272c6c sqlite3_randomness */

void sqlite3_randomness(int param_1,undefined1 *param_2)

{
  undefined1 uVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  undefined1 *puVar5;
  byte bVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  byte *pbVar10;
  int iVar11;
  int *piVar12;
  byte *pbVar13;
  char *pcVar14;
  int local_12c;
  byte local_11c [256];
  int local_1c;
  
  piVar12 = *(int **)(DAT_00272d64 + 0x272c78);
  local_1c = *piVar12;
  uVar3 = FUN_0025ad68(5);
  sqlite3_mutex_enter();
  for (local_12c = param_1; iVar11 = DAT_00272d68, local_12c != 0; local_12c = local_12c + -1) {
    pcVar14 = (char *)(DAT_00272d68 + 0x272cf6);
    if (*pcVar14 == '\0') {
      *(undefined1 *)(DAT_00272d68 + 0x272cf8) = 0;
      *(undefined1 *)(iVar11 + 0x272cf7) = 0;
      iVar4 = sqlite3_vfs_find(0);
      (**(code **)(iVar4 + 0x38))(iVar4,0x100,local_11c);
      iVar4 = 0;
      do {
        pcVar14[iVar4 + 3] = (char)iVar4;
        iVar4 = iVar4 + 1;
      } while (iVar4 != 0x100);
      uVar8 = (uint)*(byte *)(iVar11 + 0x272cf8);
      puVar5 = (undefined1 *)(iVar11 + 0x272cf6);
      iVar4 = 0;
      do {
        iVar7 = iVar4 + 1;
        uVar9 = uVar8 + (uint)(byte)puVar5[iVar4 + 3] + (uint)local_11c[iVar4];
        uVar8 = uVar9 & 0xff;
        uVar1 = *(undefined1 *)(iVar11 + 0x272cf9 + uVar8);
        *(undefined1 *)(iVar11 + 0x272cf9 + uVar8) = puVar5[iVar4 + 3];
        puVar5[iVar4 + 3] = uVar1;
        iVar4 = iVar7;
      } while (iVar7 != 0x100);
      *(char *)(iVar11 + 0x272cf8) = (char)uVar9;
      *puVar5 = 1;
    }
    iVar11 = DAT_00272d6c;
    pbVar10 = (byte *)((int)&DAT_00272d6c + DAT_00272d6c + 1);
    pbVar13 = (byte *)((int)&DAT_00272d6c + DAT_00272d6c + 2);
    bVar6 = *pbVar10 + 1;
    uVar8 = (uint)bVar6;
    *pbVar10 = bVar6;
    iVar11 = iVar11 + 0x272d6f;
    cVar2 = *(char *)(iVar11 + uVar8);
    bVar6 = cVar2 + *pbVar13;
    *pbVar13 = bVar6;
    *(undefined1 *)(iVar11 + uVar8) = *(undefined1 *)(iVar11 + (uint)bVar6);
    *(char *)(iVar11 + (uint)bVar6) = cVar2;
    *param_2 = *(undefined1 *)(iVar11 + (uint)(byte)(cVar2 + *(char *)(iVar11 + uVar8)));
    param_2 = param_2 + 1;
  }
  sqlite3_mutex_leave(uVar3);
  if (local_1c != *piVar12) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


