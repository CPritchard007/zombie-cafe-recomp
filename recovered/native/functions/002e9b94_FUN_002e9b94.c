/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002e9b94 FUN_002e9b94 */

void FUN_002e9b94(int param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined4 local_14 [2];
  
  _Unwind_VRS_Get(param_2,0,0xd,0,local_14);
  *(undefined4 *)(param_1 + 0x20) = local_14[0];
  *(undefined4 *)(param_1 + 0x24) = param_3[5];
  *(undefined4 *)(param_1 + 0x28) = *param_3;
  *(undefined4 *)(param_1 + 0x30) = param_3[4];
  return;
}


