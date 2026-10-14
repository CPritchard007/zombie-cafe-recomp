/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0027d142 FUN_0027d142 */

int FUN_0027d142(int param_1,undefined4 *param_2)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  ushort uVar4;
  short sVar5;
  int iVar6;
  short *psVar7;
  
  while( true ) {
    bVar1 = *(byte *)(param_1 + 0x5b);
    if (1 < bVar1) {
      if (bVar1 == 3) {
        if (*(int *)(param_1 + 0x54) != 0) {
          return *(int *)(param_1 + 0x54);
        }
      }
      else {
        *(byte *)(param_1 + 0x5b) = 0;
        iVar3 = FUN_0027cf9c(param_1,*(undefined4 *)(param_1 + 0x50),*(undefined4 *)(param_1 + 0x48)
                             ,*(undefined4 *)(param_1 + 0x4c),0,param_1 + 0x54);
        if (iVar3 != 0) {
          return iVar3;
        }
        sqlite3_free(*(undefined4 *)(param_1 + 0x50));
        *(undefined4 *)(param_1 + 0x50) = 0;
      }
    }
    if (*(char *)(param_1 + 0x5b) == '\0') {
      *param_2 = 1;
      return 0;
    }
    if (0 < *(int *)(param_1 + 0x54)) {
      *(undefined4 *)(param_1 + 0x54) = 0;
      *param_2 = 0;
      return 0;
    }
    *(undefined4 *)(param_1 + 0x54) = 0;
    iVar3 = (*(short *)(param_1 + 0x5e) + 0x30) * 2;
    uVar4 = *(short *)(iVar3 + param_1) + 1;
    iVar6 = *(int *)((*(short *)(param_1 + 0x5e) + 0x22) * 4 + param_1);
    *(ushort *)(iVar3 + param_1) = uVar4;
    *(undefined2 *)(param_1 + 0x42) = 0;
    *(undefined1 *)(param_1 + 0x5a) = 0;
    if (uVar4 < *(ushort *)(iVar6 + 0x10)) break;
    if (*(char *)(iVar6 + 3) == '\0') {
      uVar2 = FUN_0025ba30(*(int *)(iVar6 + 0x38) + *(byte *)(iVar6 + 5) + 8);
      iVar3 = FUN_00274c90(param_1,uVar2);
      if (iVar3 != 0) {
        return iVar3;
      }
      iVar3 = FUN_00274d48(param_1);
      *param_2 = 0;
      return iVar3;
    }
    do {
      psVar7 = (short *)(param_1 + 0x5e);
      if (*psVar7 == 0) {
        *param_2 = 1;
        *(undefined1 *)(param_1 + 0x5b) = 0;
        return 0;
      }
      FUN_00274a30(*(undefined4 *)((*psVar7 + 0x22) * 4 + param_1));
      sVar5 = *psVar7 + -1;
      *psVar7 = sVar5;
      *(undefined2 *)(param_1 + 0x42) = 0;
      *(undefined1 *)(param_1 + 0x5a) = 0;
      iVar3 = *(int *)((sVar5 + 0x22) * 4 + param_1);
    } while (*(ushort *)(iVar3 + 0x10) <= *(ushort *)((sVar5 + 0x30) * 2 + param_1));
    *param_2 = 0;
    if (*(char *)(iVar3 + 2) == '\0') {
      return 0;
    }
  }
  *param_2 = 0;
  if (*(char *)(iVar6 + 3) != '\0') {
    return 0;
  }
  iVar3 = FUN_00274d48(param_1);
  return iVar3;
}


