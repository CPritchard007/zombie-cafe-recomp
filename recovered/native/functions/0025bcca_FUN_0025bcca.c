/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0025bcca FUN_0025bcca */

void FUN_0025bcca(int param_1)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = *(int **)(param_1 + 0x1c);
  iVar1 = *piVar2;
  *(int *)(param_1 + 0x20) = iVar1;
  if (iVar1 != 0) {
    *(int *)(iVar1 + 0x24) = param_1;
  }
  *piVar2 = param_1;
  if (piVar2[1] == 0) {
    piVar2[1] = param_1;
  }
  if ((piVar2[2] == 0) && (-1 < (int)((uint)*(ushort *)(param_1 + 0x18) << 0x1d))) {
    piVar2[2] = param_1;
  }
  return;
}


