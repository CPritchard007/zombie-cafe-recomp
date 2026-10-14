/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002635b0 FUN_002635b0 */

byte FUN_002635b0(int param_1,undefined2 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined2 local_28 [2];
  undefined4 local_24;
  undefined4 local_20;
  
  memset(local_28,0,0x10);
  local_28[0] = param_2;
  local_24 = param_3;
  local_20 = param_4;
  iVar1 = (**(code **)(DAT_002635f0 + 0x26362c))(*(undefined4 *)(param_1 + 0xc),6,local_28);
  return -(iVar1 == -1) & 5;
}


