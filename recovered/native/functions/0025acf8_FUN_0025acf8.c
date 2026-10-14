/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0025acf8 FUN_0025acf8 */

void FUN_0025acf8(int param_1)

{
  int iVar1;
  int iVar2;
  
  if (param_1 != 0) {
    iVar1 = *(int *)(DAT_0025ad24 + 0x25ad52);
    if (iVar1 == param_1) {
      *(undefined4 *)(DAT_0025ad24 + 0x25ad52) = *(undefined4 *)(iVar1 + 0xc);
    }
    else if (iVar1 != 0) {
      do {
        iVar2 = iVar1;
        iVar1 = *(int *)(iVar2 + 0xc);
        if (iVar1 == 0) {
          return;
        }
      } while (iVar1 != param_1);
      *(undefined4 *)(iVar2 + 0xc) = *(undefined4 *)(param_1 + 0xc);
    }
  }
  return;
}


