/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002c8ef8 FUN_002c8ef8 */

void FUN_002c8ef8(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int param_5,
                 int *param_6,int param_7)

{
  uint uVar1;
  int iVar2;
  int local_1c [2];
  
  iVar2 = *(int *)(param_1 + 0x1c8);
  uVar1 = param_7 - *param_6;
  if (*(uint *)(iVar2 + 0x10) < (uint)(param_7 - *param_6)) {
    uVar1 = *(uint *)(iVar2 + 0x10);
  }
  local_1c[0] = 0;
  (**(code **)(*(int *)(param_1 + 0x1dc) + 4))
            (param_1,param_2,param_3,param_4,*(undefined4 *)(iVar2 + 0xc),local_1c,uVar1);
  (**(code **)(*(int *)(param_1 + 0x1e4) + 4))
            (param_1,*(undefined4 *)(iVar2 + 0xc),param_5 + *param_6 * 4,local_1c[0]);
  *param_6 = *param_6 + local_1c[0];
  return;
}


