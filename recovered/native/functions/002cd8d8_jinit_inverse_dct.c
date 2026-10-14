/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002cd8d8 jinit_inverse_dct */

void jinit_inverse_dct(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  void *__s;
  int iVar2;
  int iVar3;
  
  piVar1 = (int *)(*(code *)**(undefined4 **)(param_1 + 4))
                            (param_1,1,0x54,(code *)**(undefined4 **)(param_1 + 4),param_4);
  *(int **)(param_1 + 0x1d8) = piVar1;
  *piVar1 = DAT_002cd92c + 0x2cd8f6;
  iVar2 = *(int *)(param_1 + 0xd8);
  for (iVar3 = 0; iVar3 < *(int *)(param_1 + 0x24); iVar3 = iVar3 + 1) {
    __s = (void *)(*(code *)**(undefined4 **)(param_1 + 4))(param_1,1,0x100);
    *(void **)(iVar2 + 0x54) = __s;
    memset(__s,0,0x100);
    piVar1[0xb] = -1;
    iVar2 = iVar2 + 0x58;
    piVar1 = piVar1 + 1;
  }
  return;
}


