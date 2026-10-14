/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002b3e08 L_RestrictBounds */

/* L_RestrictBounds(ccScrollList*) */

void L_RestrictBounds(ccScrollList *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = __aeabi_fcmpgt(*(undefined4 *)(param_1 + 0x10),0);
  if (iVar1 != 0) {
    *(undefined4 *)(param_1 + 0x10) = 0;
    iVar1 = __aeabi_fcmpgt(*(undefined4 *)(param_1 + 0x30),0);
    if (iVar1 != 0) {
      *(undefined4 *)(param_1 + 0x30) = 0;
    }
  }
  iVar2 = *(int *)(param_1 + 0xc);
  iVar1 = __aeabi_fcmplt(*(undefined4 *)(param_1 + 0x10),iVar2 + -0x80000000);
  if (iVar1 != 0) {
    *(int *)(param_1 + 0x10) = iVar2 + -0x80000000;
    iVar1 = __aeabi_fcmplt(*(undefined4 *)(param_1 + 0x30),0);
    if (iVar1 != 0) {
      *(undefined4 *)(param_1 + 0x30) = 0;
    }
  }
  return;
}


