/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002c8ff0 FUN_002c8ff0 */

void FUN_002c8ff0(int param_1)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  int in_stack_00000000;
  int *in_stack_00000004;
  int in_stack_00000008;
  undefined4 local_1c;
  
  iVar3 = *(int *)(param_1 + 0x1c8);
  if (*(int *)(iVar3 + 0x18) == 0) {
    uVar1 = (**(code **)(*(int *)(param_1 + 4) + 0x1c))
                      (param_1,*(undefined4 *)(iVar3 + 8),*(undefined4 *)(iVar3 + 0x14),
                       *(undefined4 *)(iVar3 + 0x10),0);
    *(undefined4 *)(iVar3 + 0xc) = uVar1;
  }
  uVar2 = *(int *)(iVar3 + 0x10) - *(int *)(iVar3 + 0x18);
  local_1c = *(int *)(param_1 + 0x74) - *(int *)(iVar3 + 0x14);
  if (uVar2 < local_1c) {
    local_1c = uVar2;
  }
  uVar2 = in_stack_00000008 - *in_stack_00000004;
  if (uVar2 < local_1c) {
    local_1c = uVar2;
  }
  (**(code **)(*(int *)(param_1 + 0x1e4) + 4))
            (param_1,*(int *)(iVar3 + 0xc) + *(int *)(iVar3 + 0x18) * 4,
             in_stack_00000000 + *in_stack_00000004 * 4,local_1c);
  *in_stack_00000004 = *in_stack_00000004 + local_1c;
  local_1c = local_1c + *(int *)(iVar3 + 0x18);
  *(uint *)(iVar3 + 0x18) = local_1c;
  if (*(uint *)(iVar3 + 0x10) <= local_1c) {
    *(uint *)(iVar3 + 0x14) = *(int *)(iVar3 + 0x14) + *(uint *)(iVar3 + 0x10);
    *(undefined4 *)(iVar3 + 0x18) = 0;
  }
  return;
}


