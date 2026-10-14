/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000be9e2 Cafe::pickWall */

/* Cafe::pickWall(long) */

int * Cafe::pickWall(long param_1)

{
  int iVar1;
  undefined4 in_r1;
  int *piVar2;
  int iVar3;
  
  iVar3 = 0;
  while( true ) {
    if (*(int *)(param_1 + 0x4c) + 1 <= iVar3) {
      return (int *)0x0;
    }
    piVar2 = *(int **)(iVar3 * 4 + *(int *)(param_1 + 0x50));
    iVar1 = (**(code **)(*piVar2 + 0x10))(piVar2,in_r1);
    if (iVar1 != 0) break;
    iVar3 = iVar3 + 1;
  }
  return piVar2;
}


