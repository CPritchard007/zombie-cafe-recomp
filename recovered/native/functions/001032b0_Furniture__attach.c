/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001032b0 Furniture::attach */

/* Furniture::attach(Furniture*) */

bool Furniture::attach(Furniture *param_1)

{
  int *in_r1;
  int iVar1;
  bool bVar2;
  
  iVar1 = *(int *)(param_1 + 0x38) + ((byte)param_1[0x34] + 4) * 4;
  bVar2 = *(int *)(iVar1 + 4) != **(int **)(DAT_001032e4 + 0x1032ca);
  if (bVar2) {
    *(int **)(param_1 + 0x3c) = in_r1;
    (**(code **)(*in_r1 + 0xc))(in_r1,*(undefined4 *)(iVar1 + 4));
  }
  return bVar2;
}


