/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0025c456 FUN_0025c456 */

void FUN_0025c456(int param_1,uint param_2)

{
  int *piVar1;
  uint uVar2;
  
  for (uVar2 = 0; (int)uVar2 < *(int *)(param_1 + 4); uVar2 = uVar2 + 1) {
    if ((0x1f < (int)uVar2) || ((param_2 >> (uVar2 & 0xff) & 1) == 0)) {
      piVar1 = (int *)(param_1 + (uVar2 + 1) * 8);
      if (*piVar1 != 0) {
        if ((code *)piVar1[1] != (code *)0x0) {
          (*(code *)piVar1[1])();
        }
        *piVar1 = 0;
      }
    }
  }
  return;
}


