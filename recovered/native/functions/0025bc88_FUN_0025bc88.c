/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0025bc88 FUN_0025bc88 */

void FUN_0025bc88(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = *(undefined4 **)(param_1 + 0x1c);
  if (puVar1[2] == param_1) {
    for (iVar2 = *(int *)(param_1 + 0x24); (iVar2 != 0 && ((*(ushort *)(iVar2 + 0x18) & 4) != 0));
        iVar2 = *(int *)(iVar2 + 0x24)) {
    }
    puVar1[2] = iVar2;
  }
  if (*(int *)(param_1 + 0x20) == 0) {
    puVar1[1] = *(undefined4 *)(param_1 + 0x24);
  }
  else {
    *(undefined4 *)(*(int *)(param_1 + 0x20) + 0x24) = *(undefined4 *)(param_1 + 0x24);
  }
  if (*(int *)(param_1 + 0x24) == 0) {
    *puVar1 = *(undefined4 *)(param_1 + 0x20);
  }
  else {
    *(undefined4 *)(*(int *)(param_1 + 0x24) + 0x20) = *(undefined4 *)(param_1 + 0x20);
  }
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  return;
}


