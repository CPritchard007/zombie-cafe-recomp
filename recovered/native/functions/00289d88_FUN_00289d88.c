/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00289d88 FUN_00289d88 */

uint FUN_00289d88(int param_1,int param_2,int param_3,int param_4,byte param_5,undefined4 param_6,
                 int param_7)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  
  uVar3 = 0;
  do {
    if (param_2 == 0) {
      return uVar3;
    }
    if ((((uint)*(byte *)(param_2 + 8) == 0x6b - (param_3 == 0)) &&
        ((*(byte *)(param_2 + 9) & param_5) != 0)) &&
       ((param_3 == 0 ||
        ((*(int *)(param_2 + 0x10) == 0 ||
         (iVar1 = FUN_002647d0(*(int *)(param_2 + 0x10),param_3), iVar1 != 0)))))) {
      iVar1 = *(int *)(param_1 + 0x1b0);
      if (*(int *)(param_1 + 0x1b0) == 0) {
        iVar1 = param_1;
      }
      for (piVar2 = *(int **)(iVar1 + 0x228); piVar2 != (int *)0x0; piVar2 = (int *)piVar2[1]) {
        if ((*piVar2 == param_2) && (piVar2[3] == param_7)) goto LAB_00289e0a;
      }
      piVar2 = (int *)FUN_00289ab8(param_1,param_2,param_6,param_7);
      if (piVar2 != (int *)0x0) {
LAB_00289e0a:
        uVar3 = uVar3 | piVar2[param_4 + 4];
      }
    }
    param_2 = *(int *)(param_2 + 0x20);
  } while( true );
}


