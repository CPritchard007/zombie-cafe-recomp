/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0026638e FUN_0026638e */

void FUN_0026638e(int param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  
  uVar4 = *(undefined4 *)(param_1 + 8);
  piVar2 = *(int **)(param_2 + 0x20);
  for (iVar3 = 0; iVar3 < *(int *)(param_2 + 0x24); iVar3 = iVar3 + 1) {
    piVar1 = *(int **)(*piVar2 + 0x10);
    if (piVar1 != (int *)0x0) {
      piVar1 = (int *)*piVar1;
    }
    FUN_002662da(uVar4,0x7c,piVar2[2],piVar1,0,piVar2[1],0xfffffffb);
    piVar2 = piVar2 + 4;
  }
  return;
}


