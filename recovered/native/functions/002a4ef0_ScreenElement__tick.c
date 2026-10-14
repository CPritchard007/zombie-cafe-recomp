/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002a4ef0 ScreenElement::tick */

/* ScreenElement::tick(long) */

void ScreenElement::tick(long param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int in_r1;
  int *piVar4;
  int iVar5;
  
  iVar5 = *(int *)(param_1 + 0x58);
  if ((iVar5 != 0) || (*(int *)(param_1 + 0x50) != 0)) {
    iVar1 = __divsi3(in_r1 * *(int *)(param_1 + 0x50),1000);
    iVar2 = __divsi3(in_r1 * (iVar5 + iVar1 / 2),1000);
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + (iVar2 >> 0xc);
    *(int *)(param_1 + 0x58) = iVar5 + iVar1;
  }
  iVar5 = *(int *)(param_1 + 0x5c);
  if ((iVar5 != 0) || (*(int *)(param_1 + 0x54) != 0)) {
    iVar1 = __divsi3(in_r1 * *(int *)(param_1 + 0x54),1000);
    iVar2 = __divsi3(in_r1 * (iVar5 + iVar1 / 2),1000);
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + (iVar2 >> 0xc);
    *(int *)(param_1 + 0x5c) = iVar5 + iVar1;
  }
  *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(param_1 + 0x30);
  while ((piVar4 = *(int **)(param_1 + 0x34), piVar4 != (int *)0x0 &&
         (piVar4 != (int *)(param_1 + 0x24)))) {
    piVar3 = (int *)*piVar4;
    *(int *)(param_1 + 0x34) = piVar4[1];
    if (piVar3 == (int *)0x0) {
      return;
    }
    (**(code **)(*piVar3 + 8))(piVar3,in_r1);
  }
  return;
}


