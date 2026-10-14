/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0025fc70 FUN_0025fc70 */

void FUN_0025fc70(int param_1)

{
  int *piVar1;
  
  if ((int)((uint)*(ushort *)(param_1 + 0x1c) << 0x19) < 0) {
    piVar1 = *(int **)(param_1 + 0x10);
    piVar1[1] = *(int *)(*piVar1 + 0xac);
    *(int *)(*piVar1 + 0xac) = (int)piVar1;
  }
  if ((int)((uint)*(ushort *)(param_1 + 0x1c) << 0x1a) < 0) {
    FUN_0025fc48(*(undefined4 *)(param_1 + 0x10));
  }
  *(ushort *)(param_1 + 0x1c) = (ushort)DAT_0025fca4 & *(ushort *)(param_1 + 0x1c) | 1;
  *(undefined1 *)(param_1 + 0x1e) = 5;
  return;
}


