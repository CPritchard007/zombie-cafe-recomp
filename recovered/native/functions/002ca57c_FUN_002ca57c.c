/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002ca57c FUN_002ca57c */

void FUN_002ca57c(int param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  
  iVar6 = *(int *)(param_1 + 0x1e4);
  iVar1 = (*(code *)**(undefined4 **)(param_1 + 4))(param_1,1,DAT_002ca5f0);
  piVar2 = (int *)(iVar1 + 0x3fc);
  *(int **)(iVar6 + 0x28) = piVar2;
  iVar6 = 0;
  piVar3 = piVar2;
  do {
    *piVar2 = iVar6;
    piVar2 = piVar2 + 1;
    iVar5 = -iVar6;
    iVar6 = iVar6 + 1;
    *piVar3 = iVar5;
    piVar3 = piVar3 + -1;
  } while (iVar6 != 0x10);
  piVar3 = (int *)(iVar1 + 0x3bc);
  piVar2 = (int *)(iVar1 + DAT_002ca5f4);
  iVar6 = 0x10;
  uVar4 = 0x10;
  do {
    *piVar2 = iVar6;
    piVar2 = piVar2 + 1;
    uVar4 = uVar4 + 1;
    *piVar3 = -iVar6;
    iVar6 = iVar6 + (~uVar4 & 1);
    piVar3 = piVar3 + -1;
  } while (uVar4 != 0x30);
  iVar5 = 0;
  while (iVar5 = iVar5 + 4, iVar5 != 0x344) {
    *(int *)(iVar1 + iVar5 + 0x4b8) = iVar6;
    *(int *)((iVar1 - iVar5) + 0x340) = -iVar6;
  }
  return;
}


