/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002cab9c FUN_002cab9c */

int FUN_002cab9c(int *param_1,uint param_2,uint param_3)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  uint local_28;
  undefined4 *local_20;
  
  uVar1 = DAT_002caca4;
  iVar5 = param_1[1];
  if (DAT_002caca4 < param_3) {
    *(undefined4 *)(*param_1 + 0x14) = 0x38;
    *(undefined4 *)(*param_1 + 0x18) = 1;
    (**(code **)*param_1)();
  }
  if ((param_3 & 7) != 0) {
    param_3 = (param_3 + 8) - (param_3 & 7);
  }
  if (1 < param_2) {
    *(undefined4 *)(*param_1 + 0x14) = 0xf;
    *(uint *)(*param_1 + 0x18) = param_2;
    (**(code **)*param_1)(param_1);
  }
  local_20 = (undefined4 *)0x0;
  puVar2 = *(undefined4 **)(iVar5 + (param_2 + 0xc) * 4 + 4);
  while (puVar3 = puVar2, puVar3 != (undefined4 *)0x0) {
    if (param_3 <= (uint)puVar3[2]) goto LAB_002cac7e;
    local_20 = puVar3;
    puVar2 = (undefined4 *)*puVar3;
  }
  if (local_20 == (undefined4 *)0x0) {
    local_28 = *(uint *)(param_2 * 4 + DAT_002caca8 + 0x2cac0a);
  }
  else {
    local_28 = *(uint *)(DAT_002cacac + param_2 * 4 + 0x2cac1e);
  }
  if (uVar1 - param_3 < local_28) {
    local_28 = uVar1 - param_3;
  }
  while( true ) {
    iVar4 = local_28 + param_3 + 0x10;
    puVar3 = (undefined4 *)jpeg_get_small(param_1,iVar4);
    if (puVar3 != (undefined4 *)0x0) break;
    local_28 = local_28 >> 1;
    if (local_28 < 0x32) {
      *(undefined4 *)(*param_1 + 0x14) = 0x38;
      *(undefined4 *)(*param_1 + 0x18) = 2;
      (**(code **)*param_1)(param_1);
    }
  }
  *(int *)(iVar5 + 0x4c) = *(int *)(iVar5 + 0x4c) + iVar4;
  *puVar3 = 0;
  puVar3[1] = 0;
  puVar3[2] = local_28 + param_3;
  if (local_20 == (undefined4 *)0x0) {
    *(undefined4 **)(iVar5 + (param_2 + 0xc) * 4 + 4) = puVar3;
  }
  else {
    *local_20 = puVar3;
  }
LAB_002cac7e:
  iVar5 = puVar3[1];
  puVar3[1] = param_3 + iVar5;
  puVar3[2] = puVar3[2] - param_3;
  return (int)puVar3 + iVar5 + 0x10;
}


