/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0025ee10 FUN_0025ee10 */

void FUN_0025ee10(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  
  if (param_1 != 0) {
    if (*(char *)(param_1 + 0x36) != '\0') {
      return;
    }
    if (*(char *)(param_1 + 0xea) != '\0') {
      if ((int)(uint)*(ushort *)(param_1 + 0xe8) < param_2) {
        piVar2 = (int *)(param_1 + 0xf8);
      }
      else {
        piVar2 = (int *)(param_1 + 0xfc);
        if (*(undefined4 **)(param_1 + 0x100) != (undefined4 *)0x0) {
          *(undefined4 *)(param_1 + 0x100) = **(undefined4 **)(param_1 + 0x100);
          iVar1 = *(int *)(param_1 + 0xec) + 1;
          *(int *)(param_1 + 0xec) = iVar1;
          *(int *)(param_1 + 0xf4) = *(int *)(param_1 + 0xf4) + 1;
          if (iVar1 <= *(int *)(param_1 + 0xf0)) {
            return;
          }
          *(int *)(param_1 + 0xf0) = iVar1;
          return;
        }
      }
      *piVar2 = *piVar2 + 1;
    }
  }
  iVar1 = FUN_0025edc8(param_2);
  if ((iVar1 == 0) && (param_1 != 0)) {
    *(undefined1 *)(param_1 + 0x36) = 1;
  }
  return;
}


