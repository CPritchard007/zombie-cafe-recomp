/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002627fe FUN_002627fe */

void FUN_002627fe(int param_1,int param_2)

{
  byte bVar1;
  int iVar2;
  
  if (param_2 != 0) {
    bVar1 = *(byte *)(param_1 + 0x13);
    if (bVar1 < 8) {
      iVar2 = param_1 + 100;
      do {
        if (*(int *)(iVar2 + 0x10) == param_2) {
          *(undefined1 *)(iVar2 + 8) = 1;
          return;
        }
        iVar2 = iVar2 + 0x18;
      } while (iVar2 != param_1 + 0x154);
      *(int *)(param_1 + (bVar1 + 6) * 4 + 4) = param_2;
      *(byte *)(param_1 + 0x13) = bVar1 + 1;
    }
  }
  return;
}


