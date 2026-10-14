/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0025f206 FUN_0025f206 */

void FUN_0025f206(int param_1,undefined4 param_2,undefined4 *param_3,undefined4 param_4,uint param_5
                 ,int param_6)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = *(uint *)(*(int *)(*(int *)(*(int *)(param_1 + 0x10) + 4) + 4) + 0x20);
  memset(param_3,0,0x28);
  iVar1 = FUN_0025ee10(param_1,uVar3);
  param_3[1] = iVar1;
  if (iVar1 == 0) {
    *param_3 = 7;
  }
  else {
    uVar2 = uVar3;
    __aeabi_ldivmod(param_5,param_6,uVar3,(int)uVar3 >> 0x1f,param_4);
    param_3[3] = uVar2;
    param_3[4] = uVar2;
    param_3[6] = param_5 - uVar2;
    param_3[7] = (param_6 - ((int)uVar2 >> 0x1f)) - (uint)(param_5 < uVar2);
    param_3[2] = uVar3;
    param_3[8] = param_2;
  }
  return;
}


