/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002619f0 FUN_002619f0 */

void FUN_002619f0(int param_1,uint *param_2,int param_3)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  int local_28;
  uint local_20;
  int local_1c;
  
  uVar4 = *param_2;
  if ((((*(char *)(param_1 + 0xe) == '\0') || (uVar1 = 0, *(int *)(param_1 + 0x18) == 0)) &&
      (uVar1 = 0, *(int *)(*(int *)(param_1 + 0xb4) + 0xc) == 0)) &&
     ((uVar1 = uVar4, uVar4 != 0 && (uVar1 = 0, uVar4 != *(uint *)(param_1 + 0x80))))) {
    local_20 = 0;
    local_1c = 0;
    if (*(char *)(param_1 + 0xf) != '\0') {
      iVar3 = **(int **)(param_1 + 0x3c);
      if ((iVar3 != 0) &&
         (uVar1 = (**(code **)(iVar3 + 0x18))(*(int **)(param_1 + 0x3c),&local_20), uVar1 != 0))
      goto LAB_00261a6a;
    }
    iVar3 = FUN_0025f320(uVar4);
    if (iVar3 == 0) {
      uVar1 = 7;
    }
    else {
      FUN_002619d4(param_1);
      uVar2 = __aeabi_ldivmod(local_20 + uVar4 + -1,
                              local_1c + (uint)CARRY4(local_20,uVar4) + -1 +
                              (uint)(local_20 + uVar4 != 0),uVar4,0);
      *(undefined4 *)(param_1 + 0x18) = uVar2;
      *(uint *)(param_1 + 0x80) = uVar4;
      FUN_0025f6b8(*(int *)(param_1 + 0xb0));
      *(int *)(param_1 + 0xb0) = iVar3;
      iVar3 = *(int *)(param_1 + 0xb4);
      if (*(int *)(iVar3 + 0x28) != 0) {
        (**(code **)(DAT_00261adc + 0x261ae8))();
        *(undefined4 *)(iVar3 + 0x28) = 0;
        *(undefined4 *)(iVar3 + 0x2c) = 0;
      }
      *(uint *)(iVar3 + 0x14) = uVar4;
      uVar1 = 0;
    }
  }
LAB_00261a6a:
  *param_2 = *(uint *)(param_1 + 0x80);
  if (uVar1 == 0) {
    local_28 = param_3;
    if (param_3 < 0) {
      local_28 = (int)*(short *)(param_1 + 0x76);
    }
    *(short *)(param_1 + 0x76) = (short)local_28;
  }
  return;
}


