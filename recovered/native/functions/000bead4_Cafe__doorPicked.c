/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000bead4 Cafe::doorPicked */

/* Cafe::doorPicked(long) const */

void Cafe::doorPicked(long param_1)

{
  long lVar1;
  int iVar2;
  int *piVar3;
  undefined4 in_r1;
  
  lVar1 = diamondToStaggeredCoords
                    (*(short *)(param_1 + 0x9c) + -1,
                     *(short *)(param_1 + 0x9e) + 1 + **(int **)(DAT_000beb20 + 0xbeaf0));
  iVar2 = staggeredCoordsToIndex(lVar1);
  iVar2 = *(int *)(iVar2 * 4 + *(int *)param_1);
  if (((iVar2 != 0) && (piVar3 = *(int **)(iVar2 + 0x10), piVar3 != (int *)0x0)) &&
     (*(char *)((int)piVar3 + 0x3b) != '\0')) {
    (**(code **)(*piVar3 + 0x10))(piVar3,in_r1);
  }
  return;
}


