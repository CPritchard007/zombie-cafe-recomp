/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0025bfc4 FUN_0025bfc4 */

undefined8 FUN_0025bfc4(uint param_1,uint *param_2,undefined4 param_3)

{
  uint uVar1;
  int iVar2;
  uint local_20;
  int local_1c;
  undefined4 uStack_18;
  
  iVar2 = *(int *)(param_1 + 0xb8);
  if (((iVar2 == 0) || (*(short *)(iVar2 + 0x28) < 0)) ||
     (uVar1 = *(uint *)(iVar2 + 0x48), local_20 = param_1, uVar1 == 0)) {
    local_20 = 0;
    local_1c = 0;
    iVar2 = **(int **)(param_1 + 0x3c);
    uStack_18 = param_3;
    if ((iVar2 != 0) &&
       (iVar2 = (**(code **)(iVar2 + 0x18))(*(int **)(param_1 + 0x3c),&local_20), iVar2 != 0))
    goto LAB_0025c02c;
    uVar1 = *(uint *)(param_1 + 0x80);
    uVar1 = __aeabi_ldivmod(local_20 + uVar1 + -1,
                            local_1c + ((int)uVar1 >> 0x1f) + (uint)CARRY4(local_20,uVar1) + -1 +
                            (uint)(local_20 + uVar1 != 0),uVar1,(int)uVar1 >> 0x1f);
  }
  if (*(uint *)(param_1 + 0x84) < uVar1) {
    *(uint *)(param_1 + 0x84) = uVar1;
  }
  *param_2 = uVar1;
  iVar2 = 0;
LAB_0025c02c:
  return CONCAT44(local_20,iVar2);
}


