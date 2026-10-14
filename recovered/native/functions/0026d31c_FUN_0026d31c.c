/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0026d31c FUN_0026d31c */

void FUN_0026d31c(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  int local_20;
  
  uVar2 = *(undefined4 *)(param_1 + 8);
  if (*(int *)(param_2 + 0x24) + *(int *)(param_2 + 0x18) != 0) {
    for (iVar3 = 0; iVar3 < *(int *)(param_2 + 0x18); iVar3 = iVar3 + 1) {
      FUN_0026641e(uVar2,10,0,*(undefined4 *)(*(int *)(param_2 + 0x14) + iVar3 * 0x18 + 0x10));
    }
    piVar4 = *(int **)(param_2 + 0x20);
    iVar3 = DAT_0026d3c0 + 0x26d360;
    for (local_20 = 0; local_20 < *(int *)(param_2 + 0x24); local_20 = local_20 + 1) {
      FUN_0026641e(uVar2,10,0,piVar4[2]);
      if (-1 < piVar4[3]) {
        if ((*(int **)(*piVar4 + 0x10) == (int *)0x0) || (**(int **)(*piVar4 + 0x10) != 1)) {
          FUN_00268e48(param_1,iVar3);
          piVar4[3] = -1;
        }
        else {
          uVar1 = FUN_0026d2ac(param_1);
          FUN_002662da(uVar2,0x2a,piVar4[3],0,0,uVar1,0xfffffff0);
        }
      }
      piVar4 = piVar4 + 4;
    }
  }
  return;
}


