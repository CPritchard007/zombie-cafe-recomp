/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002cc1bc jinit_arith_decoder */

void jinit_arith_decoder(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  
  piVar1 = (int *)(*(code *)**(undefined4 **)(param_1 + 4))
                            (param_1,1,0xc0,(code *)**(undefined4 **)(param_1 + 4),param_4);
  *(int **)(param_1 + 0x1d4) = piVar1;
  *piVar1 = DAT_002cc234 + 0x2cc1d6;
  piVar1[2] = DAT_002cc238 + 0x2cc1dc;
  iVar5 = 0;
  do {
    iVar4 = iVar5 + 4;
    *(undefined4 *)((int)piVar1 + iVar5 + 0x3c) = 0;
    *(undefined4 *)((int)piVar1 + iVar5 + 0x7c) = 0;
    iVar5 = iVar4;
  } while (iVar4 != 0x40);
  *(undefined1 *)(piVar1 + 0x2f) = 0x71;
  if (*(int *)(param_1 + 0xe0) != 0) {
    puVar2 = (undefined4 *)
             (*(code *)**(undefined4 **)(param_1 + 4))(param_1,1,*(int *)(param_1 + 0x24) << 8);
    *(undefined4 **)(param_1 + 0xa0) = puVar2;
    for (iVar5 = 0; iVar5 < *(int *)(param_1 + 0x24); iVar5 = iVar5 + 1) {
      puVar3 = puVar2;
      do {
        *puVar3 = 0xffffffff;
        puVar3 = puVar3 + 1;
      } while (puVar3 != puVar2 + 0x40);
      puVar2 = puVar2 + 0x40;
    }
  }
  return;
}


