/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0025d158 FUN_0025d158 */

void FUN_0025d158(int param_1,undefined4 param_2)

{
  for (; param_1 != 0; param_1 = *(int *)(param_1 + 0xc)) {
    *(short *)(param_1 + 0x20) = (short)param_2;
    *(ushort *)(param_1 + 2) = *(ushort *)(param_1 + 2) | 1;
    FUN_0025d158(*(undefined4 *)(param_1 + 8),param_2);
  }
  return;
}


