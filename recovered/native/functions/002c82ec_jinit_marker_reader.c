/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002c82ec jinit_marker_reader */

void jinit_marker_reader(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  piVar1 = (int *)(*(code *)**(undefined4 **)(param_1 + 4))
                            (param_1,0,0xac,(code *)**(undefined4 **)(param_1 + 4),param_4);
  *(int **)(param_1 + 0x1d0) = piVar1;
  iVar4 = DAT_002c8340;
  *piVar1 = DAT_002c833c + 0x2c8308;
  iVar2 = DAT_002c8344;
  piVar1[7] = iVar4 + 0x2c830e;
  piVar1[1] = iVar2 + 0x2c8312;
  piVar1[2] = DAT_002c8348 + 0x2c8318;
  piVar1[0x18] = 0;
  iVar2 = 0;
  do {
    iVar3 = iVar2 + 4;
    *(int *)((int)piVar1 + iVar2 + 0x20) = iVar4 + 0x2c830e;
    *(undefined4 *)((int)piVar1 + iVar2 + 100) = 0;
    iVar2 = iVar3;
  } while (iVar3 != 0x40);
  iVar4 = DAT_002c834c + 0x2c8330;
  piVar1[8] = iVar4;
  piVar1[0x16] = iVar4;
  FUN_002c72c2(param_1);
  return;
}


