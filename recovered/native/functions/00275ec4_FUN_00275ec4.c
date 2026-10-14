/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00275ec4 FUN_00275ec4 */

void FUN_00275ec4(int *param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  
  piVar3 = (int *)param_1[0x6c];
  if ((int *)param_1[0x6c] == (int *)0x0) {
    piVar3 = param_1;
  }
  if (piVar3[0x57] == 0) {
    iVar1 = FUN_002662b8(piVar3);
    if (iVar1 == 0) {
      return;
    }
    iVar1 = FUN_0026641e(iVar1,1,0,0);
    piVar3[0x57] = iVar1 + 1;
  }
  if (-1 < (int)param_2) {
    uVar2 = 1 << (param_2 & 0xff);
    if ((piVar3[0x56] & uVar2) == 0) {
      piVar3[0x56] = piVar3[0x56] | uVar2;
      piVar3[param_2 + 0x58] = **(int **)(*(int *)(*piVar3 + 0x10) + param_2 * 0x10 + 0xc);
      if (param_2 == 1) {
        FUN_00275e54(piVar3);
      }
    }
  }
  return;
}


