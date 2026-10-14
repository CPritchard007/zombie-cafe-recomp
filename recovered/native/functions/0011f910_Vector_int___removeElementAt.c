/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0011f910 Vector<int>::removeElementAt */

/* Vector<int>::removeElementAt(int) */

undefined4 Vector<int>::removeElementAt(int param_1)

{
  int in_r1;
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  
  uVar3 = 0;
  if ((-1 < in_r1) && (in_r1 <= *(int *)(param_1 + 4))) {
    puVar2 = (undefined4 *)(*(int *)(param_1 + 8) + in_r1 * 4);
    uVar3 = *puVar2;
    *puVar2 = 0;
    iVar1 = in_r1 + 1;
    if ((-1 < iVar1) && (iVar1 <= *(int *)(param_1 + 4))) {
      FUN_001188c4(param_1,iVar1,0xffffffff);
    }
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + -1;
  }
  return uVar3;
}


