/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000be9a4 Cafe::pickCafeObject */

/* Cafe::pickCafeObject(long) */

int * Cafe::pickCafeObject(long param_1)

{
  int iVar1;
  undefined4 in_r1;
  undefined4 *puVar2;
  int *piVar3;
  
  *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_1 + 0x2c);
  do {
    puVar2 = *(undefined4 **)(param_1 + 0x30);
    if (puVar2 == (undefined4 *)0x0) {
      return (int *)0x0;
    }
    if (puVar2 == (undefined4 *)(param_1 + 0x20)) {
      return (int *)0x0;
    }
    piVar3 = (int *)*puVar2;
    *(undefined4 *)(param_1 + 0x30) = puVar2[1];
    if (piVar3 == (int *)0x0) {
      return (int *)0x0;
    }
    iVar1 = (**(code **)(*piVar3 + 0x10))(piVar3,in_r1);
  } while (iVar1 == 0);
  return piVar3;
}


