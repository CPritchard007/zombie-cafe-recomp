/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002a5284 FUN_002a5284 */

undefined4 FUN_002a5284(int param_1,int param_2)

{
  do {
    param_1 = *(int *)(param_1 + 0x20);
    if (param_1 == 0) {
      return 0;
    }
  } while (param_1 != param_2);
  return 1;
}


