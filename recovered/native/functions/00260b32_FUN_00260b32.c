/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00260b32 FUN_00260b32 */

void FUN_00260b32(int param_1,int param_2)

{
  FUN_00260a6c(param_1,*(int *)(param_1 + 0x38) +
                       (uint)(CONCAT11(*(undefined1 *)(*(int *)(param_1 + 0x40) + param_2 * 2),
                                       *(undefined1 *)(*(int *)(param_1 + 0x40) + param_2 * 2 + 1))
                             & *(ushort *)(param_1 + 0x12)));
  return;
}


