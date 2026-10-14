/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002cb9d0 FUN_002cb9d0 */

void FUN_002cb9d0(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int local_24;
  int local_20;
  int *local_1c;
  
  iVar3 = param_1[0x75];
  iVar1 = (**(code **)(param_1[0x74] + 8))();
  if (iVar1 == 0) {
    *(undefined4 *)(*param_1 + 0x14) = 0x19;
    (**(code **)*param_1)(param_1);
  }
  local_24 = iVar3;
  local_1c = param_1;
  for (local_20 = 0; local_20 < param_1[0x55]; local_20 = local_20 + 1) {
    iVar1 = local_1c[0x56];
    if ((param_1[0x38] == 0) || ((param_1[0x67] == 0 && (param_1[0x69] == 0)))) {
      memset(*(void **)(iVar3 + (*(int *)(iVar1 + 0x14) + 0xe) * 4 + 4),0,0x40);
      *(undefined4 *)(local_24 + 0x18) = 0;
      *(undefined4 *)(local_24 + 0x28) = 0;
    }
    if (param_1[0x38] == 0) {
      iVar2 = 0xda;
    }
    else {
      iVar2 = 0xce;
    }
    if (*(int *)((int)param_1 + iVar2 * 2) != 0) {
      memset(*(void **)(iVar3 + (*(int *)(iVar1 + 0x18) + 0x1e) * 4 + 4),0,0x100);
    }
    local_24 = local_24 + 4;
    local_1c = local_1c + 1;
  }
  *(undefined4 *)(iVar3 + 0xc) = 0;
  *(undefined4 *)(iVar3 + 0x10) = 0;
  *(undefined4 *)(iVar3 + 0x14) = 0xfffffff0;
  *(int *)(iVar3 + 0x38) = param_1[0x46];
  return;
}


