/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00274cf4 FUN_00274cf4 */

void FUN_00274cf4(int param_1)

{
  short sVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  do {
    iVar4 = (int)*(short *)(param_1 + 0x5e);
    iVar3 = *(int *)((iVar4 + 0x22) * 4 + param_1);
    sVar1 = *(short *)(iVar3 + 0x10);
    if (*(char *)(iVar3 + 3) != '\0') {
      *(short *)((iVar4 + 0x30) * 2 + param_1) = sVar1 + -1;
      *(undefined2 *)(param_1 + 0x42) = 0;
      *(undefined1 *)(param_1 + 0x5a) = 0;
      return;
    }
    uVar2 = FUN_0025ba30(*(int *)(iVar3 + 0x38) + *(byte *)(iVar3 + 5) + 8);
    *(short *)((iVar4 + 0x30) * 2 + param_1) = sVar1;
    iVar3 = FUN_00274c90(param_1,uVar2);
  } while (iVar3 == 0);
  return;
}


