/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002c61d4 FUN_002c61d4 */

void FUN_002c61d4(int *param_1)

{
  void *__dest;
  int extraout_r1;
  int extraout_r1_00;
  int extraout_r1_01;
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int local_28;
  int *local_24;
  int *local_1c;
  
  if (param_1[0x55] == 1) {
    iVar2 = param_1[0x56];
    param_1[0x5a] = *(int *)(iVar2 + 0x1c);
    param_1[0x5b] = *(int *)(iVar2 + 0x20);
    iVar4 = *(int *)(iVar2 + 0xc);
    *(undefined4 *)(iVar2 + 0x38) = 1;
    *(undefined4 *)(iVar2 + 0x3c) = 1;
    *(undefined4 *)(iVar2 + 0x40) = 1;
    *(undefined4 *)(iVar2 + 0x44) = *(undefined4 *)(iVar2 + 0x24);
    *(undefined4 *)(iVar2 + 0x48) = 1;
    __aeabi_uidivmod(*(undefined4 *)(iVar2 + 0x20),iVar4);
    iVar3 = extraout_r1;
    if (extraout_r1 == 0) {
      iVar3 = iVar4;
    }
    *(int *)(iVar2 + 0x4c) = iVar3;
    param_1[0x5c] = 1;
    param_1[0x5d] = 0;
  }
  else {
    if (3 < param_1[0x55] - 1U) {
      *(undefined4 *)(*param_1 + 0x14) = 0x1b;
      *(int *)(*param_1 + 0x18) = param_1[0x55];
      *(undefined4 *)(*param_1 + 0x1c) = 4;
      (**(code **)*param_1)();
    }
    iVar3 = jdiv_round_up(param_1[7],param_1[0x4f] * param_1[0x6b]);
    param_1[0x5a] = iVar3;
    iVar3 = jdiv_round_up(param_1[8],param_1[0x50] * param_1[0x6b]);
    param_1[0x5b] = iVar3;
    param_1[0x5c] = 0;
    local_1c = param_1;
    for (local_28 = 0; local_28 < param_1[0x55]; local_28 = local_28 + 1) {
      iVar1 = local_1c[0x56];
      iVar6 = *(int *)(iVar1 + 8);
      iVar2 = *(int *)(iVar1 + 0xc);
      *(int *)(iVar1 + 0x38) = iVar6;
      iVar4 = iVar6 * iVar2;
      *(int *)(iVar1 + 0x40) = iVar4;
      *(int *)(iVar1 + 0x3c) = iVar2;
      *(int *)(iVar1 + 0x44) = iVar6 * *(int *)(iVar1 + 0x24);
      __aeabi_uidivmod(*(undefined4 *)(iVar1 + 0x1c),iVar6);
      iVar3 = extraout_r1_00;
      if (extraout_r1_00 == 0) {
        iVar3 = iVar6;
      }
      *(int *)(iVar1 + 0x48) = iVar3;
      __aeabi_uidivmod(*(undefined4 *)(iVar1 + 0x20),iVar2);
      iVar3 = extraout_r1_01;
      if (extraout_r1_01 == 0) {
        iVar3 = iVar2;
      }
      *(int *)(iVar1 + 0x4c) = iVar3;
      if (10 < iVar4 + param_1[0x5c]) {
        *(undefined4 *)(*param_1 + 0x14) = 0xe;
        (**(code **)*param_1)(param_1);
      }
      for (; 0 < iVar4; iVar4 = iVar4 + -1) {
        iVar3 = param_1[0x5c];
        param_1[iVar3 + 0x5d] = local_28;
        param_1[0x5c] = iVar3 + 1;
      }
      local_1c = local_1c + 1;
    }
  }
  local_24 = param_1;
  for (local_28 = 0; local_28 < param_1[0x55]; local_28 = local_28 + 1) {
    iVar3 = local_24[0x56];
    if (*(int *)(iVar3 + 0x50) == 0) {
      uVar5 = *(uint *)(iVar3 + 0x10);
      if ((3 < uVar5) || (param_1[uVar5 + 0x29] == 0)) {
        *(undefined4 *)(*param_1 + 0x14) = 0x36;
        *(uint *)(*param_1 + 0x18) = uVar5;
        (**(code **)*param_1)(param_1);
      }
      __dest = (void *)(**(code **)param_1[1])(param_1,1,0x84);
      memcpy(__dest,(void *)param_1[uVar5 + 0x29],0x84);
      *(void **)(iVar3 + 0x50) = __dest;
    }
    local_24 = local_24 + 1;
  }
  (**(code **)param_1[0x75])(param_1);
  (**(code **)param_1[0x71])(param_1);
  *(undefined4 *)param_1[0x73] = *(undefined4 *)(param_1[0x71] + 4);
  return;
}


