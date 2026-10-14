/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0025ca50 FUN_0025ca50 */

undefined4 FUN_0025ca50(int param_1,byte *param_2)

{
  byte bVar1;
  
  if ((*(int *)(param_1 + 0x10) == 3) && ((int)((uint)*(ushort *)(param_2 + 2) << 0x1f) < 0)) {
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
  else {
    bVar1 = *param_2;
    if (bVar1 == 0x97) {
      if (*(int *)(param_1 + 0x10) == 2) {
        return 0;
      }
    }
    else if (bVar1 < 0x98) {
      if (bVar1 != 0x1a) {
        return 0;
      }
    }
    else if (0x9a < bVar1) {
      return 0;
    }
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
  return 2;
}


