/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002ceeb0 jinit_huff_decoder */

void jinit_huff_decoder(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  
  piVar1 = (int *)(*(code *)**(undefined4 **)(param_1 + 4))(param_1,1,0xdc);
  *(int **)(param_1 + 0x1d4) = piVar1;
  *piVar1 = DAT_002cef30 + 0x2ceecc;
  piVar1[2] = DAT_002cef34 + 0x2ceed2;
  if (*(int *)(param_1 + 0xe0) == 0) {
    piVar1[0x15] = 0;
    piVar1[0x11] = 0;
    piVar1[0x16] = 0;
    piVar1[0x12] = 0;
    piVar1[0x17] = 0;
    piVar1[0x13] = 0;
    piVar1[0x18] = 0;
    piVar1[0x14] = 0;
  }
  else {
    puVar2 = (undefined4 *)
             (*(code *)**(undefined4 **)(param_1 + 4))(param_1,1,*(int *)(param_1 + 0x24) << 8);
    *(undefined4 **)(param_1 + 0xa0) = puVar2;
    for (iVar4 = 0; iVar4 < *(int *)(param_1 + 0x24); iVar4 = iVar4 + 1) {
      puVar3 = puVar2;
      do {
        *puVar3 = 0xffffffff;
        puVar3 = puVar3 + 1;
      } while (puVar3 != puVar2 + 0x40);
      puVar2 = puVar2 + 0x40;
    }
    piVar1[0xc] = 0;
    piVar1[0xd] = 0;
    piVar1[0xe] = 0;
    piVar1[0xf] = 0;
  }
  return;
}


