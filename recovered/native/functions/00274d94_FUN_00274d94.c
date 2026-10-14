/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00274d94 FUN_00274d94 */

int FUN_00274d94(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  byte bVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  short *psVar5;
  
  uVar3 = *(undefined4 *)(*param_1 + 4);
  bVar1 = *(byte *)((int)param_1 + 0x5b);
  if (1 < bVar1) {
    if (bVar1 == 3) {
      return param_1[0x15];
    }
    sqlite3_free(param_1[0x14]);
    param_1[0x14] = 0;
    *(byte *)((int)param_1 + 0x5b) = 0;
  }
  psVar5 = (short *)((int)param_1 + 0x5e);
  if (*psVar5 < 0) {
    if (param_1[6] == 0) {
      *(undefined1 *)((int)param_1 + 0x5b) = 0;
      return 0;
    }
    iVar4 = FUN_00274c54(uVar3,param_1[6],param_1 + 0x22,(int)*psVar5,param_4);
    if (iVar4 != 0) {
      *(undefined1 *)((int)param_1 + 0x5b) = 0;
      return iVar4;
    }
    *psVar5 = 0;
    uVar3 = DAT_00274e80;
    if ((param_1[4] == 0) != (bool)*(char *)(param_1[0x22] + 2)) goto LAB_00274e52;
  }
  else {
    piVar2 = param_1;
    for (iVar4 = 1; iVar4 <= *psVar5; iVar4 = iVar4 + 1) {
      FUN_00274a30(piVar2[0x23]);
      piVar2 = piVar2 + 1;
    }
    *psVar5 = 0;
  }
  iVar4 = param_1[0x22];
  *(undefined2 *)(param_1 + 0x18) = 0;
  *(undefined2 *)((int)param_1 + 0x42) = 0;
  *(undefined1 *)((int)param_1 + 0x59) = 0;
  *(undefined1 *)((int)param_1 + 0x5a) = 0;
  if ((*(short *)(iVar4 + 0x10) != 0) || (*(char *)(iVar4 + 3) != '\0')) {
    *(char *)((int)param_1 + 0x5b) = '\x01' - (*(short *)(iVar4 + 0x10) == 0);
    return 0;
  }
  uVar3 = DAT_00274e84;
  if (*(int *)(iVar4 + 0x48) == 1) {
    uVar3 = FUN_0025ba30(*(int *)(iVar4 + 0x38) + *(byte *)(iVar4 + 5) + 8);
    *(undefined1 *)((int)param_1 + 0x5b) = 1;
    iVar4 = FUN_00274c90(param_1,uVar3);
    return iVar4;
  }
LAB_00274e52:
  iVar4 = FUN_0026b4e4(uVar3);
  return iVar4;
}


