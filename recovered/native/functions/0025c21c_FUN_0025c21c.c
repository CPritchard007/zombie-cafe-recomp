/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0025c21c FUN_0025c21c */

uint FUN_0025c21c(int param_1,int param_2,uint param_3)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 4);
  uVar1 = (uint)*(byte *)(param_1 + 9);
  if (uVar1 != 0) {
    if ((*(int *)(iVar3 + 0x4c) == param_1) || (-1 < (int)((uint)*(ushort *)(iVar3 + 0x16) << 0x1a))
       ) {
      for (piVar2 = *(int **)(iVar3 + 0x48); piVar2 != (int *)0x0; piVar2 = (int *)piVar2[3]) {
        if (((*piVar2 != param_1) && (piVar2[1] == param_2)) && (*(byte *)(piVar2 + 2) != param_3))
        {
          if (param_3 == 2) {
            *(ushort *)(iVar3 + 0x16) = *(ushort *)(iVar3 + 0x16) | 0x40;
          }
          goto LAB_0025c260;
        }
      }
      uVar1 = 0;
    }
    else {
LAB_0025c260:
      uVar1 = 0x106;
    }
  }
  return uVar1;
}


