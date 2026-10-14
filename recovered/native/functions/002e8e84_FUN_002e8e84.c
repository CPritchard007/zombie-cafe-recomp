/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002e8e84 FUN_002e8e84 */

bool FUN_002e8e84(undefined4 param_1,undefined4 param_2,undefined4 *param_3,undefined4 *param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_002ea234();
  if (iVar1 != 0) {
    param_4[1] = param_2;
    uVar2 = *param_3;
    *param_4 = 1;
    param_4[2] = uVar2;
    *(undefined1 *)(param_4 + 4) = 1;
  }
  return iVar1 != 0;
}


