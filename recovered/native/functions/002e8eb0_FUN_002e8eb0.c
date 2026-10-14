/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002e8eb0 FUN_002e8eb0 */

undefined4 * FUN_002e8eb0(undefined4 *param_1,int param_2)

{
  int iVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 4) = 1;
  if ((param_2 != 0) &&
     (iVar1 = FUN_002e95ec(param_2,DAT_002e8ee8 + 0x2e8ece,*(undefined4 *)(DAT_002e8eec + 0x2e8ed0),
                           0), iVar1 != 0)) {
    param_1[3] = *(undefined4 *)(iVar1 + 8);
  }
  return param_1;
}


