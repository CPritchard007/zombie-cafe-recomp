/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002634a0 FUN_002634a0 */

int FUN_002634a0(int param_1,undefined4 *param_2)

{
  int iVar1;
  
  if ((*(char *)(param_1 + 0xc) == '\0') && (*(int *)(param_1 + 0xb8) == 0)) {
    if (*(char *)(param_1 + 4) == '\0') {
      if (*(int *)**(undefined4 **)(param_1 + 0x3c) < 2) {
        return 0xe;
      }
      if (((int *)**(undefined4 **)(param_1 + 0x3c))[0xd] == 0) {
        return 0xe;
      }
    }
    FUN_0025acd0(*(undefined4 *)(param_1 + 0x40));
    iVar1 = FUN_00263380(param_1);
    if (iVar1 == 0) {
      *(undefined1 *)(param_1 + 5) = 5;
      *(undefined1 *)(param_1 + 0xf) = 0;
    }
  }
  else {
    *param_2 = 1;
    iVar1 = 0;
  }
  return iVar1;
}


