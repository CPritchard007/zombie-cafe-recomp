/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002e6e30 FUN_002e6e30 */

void FUN_002e6e30(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  int *piVar4;
  
  uVar1 = 0x17c;
  piVar4 = *(int **)(param_1 + 0x17c);
  uVar3 = *(uint *)(param_2 + 8);
  param_2 = param_2 + 0xc;
  uVar2 = 0x400;
  while( true ) {
    if (uVar3 < uVar2) {
      uVar2 = uVar3;
    }
    png_write_chunk_data(param_1,param_2,uVar2,uVar1,param_4);
    uVar3 = uVar3 - uVar2;
    if ((uVar3 == 0) || (piVar4 == (int *)0x0)) break;
    uVar1 = 0x180;
    param_2 = (int)(piVar4 + 1);
    uVar2 = *(uint *)(param_1 + 0x180);
    piVar4 = (int *)*piVar4;
  }
  if (uVar3 != 0) {
    png_error(param_1,DAT_002e6e74 + 0x2e6e70);
  }
  return;
}


