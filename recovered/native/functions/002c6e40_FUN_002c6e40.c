/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002c6e40 FUN_002c6e40 */

void FUN_002c6e40(int *param_1)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  int iVar4;
  int *piVar5;
  undefined4 *puVar6;
  int iVar7;
  int local_3c;
  byte local_2c [16];
  int local_1c;
  
  puVar6 = (undefined4 *)param_1[6];
  piVar5 = *(int **)(DAT_002c6f48 + 0x2c6e4c);
  iVar7 = puVar6[1];
  local_1c = *piVar5;
  pbVar3 = (byte *)*puVar6;
  if (iVar7 == 0) {
    iVar2 = (*(code *)puVar6[3])();
    if (iVar2 == 0) goto LAB_002c6f32;
    pbVar3 = (byte *)*puVar6;
    iVar7 = puVar6[1];
  }
  bVar1 = *pbVar3;
  iVar7 = iVar7 + -1;
  pbVar3 = pbVar3 + 1;
  if (iVar7 == 0) {
    iVar2 = (*(code *)puVar6[3])(param_1);
    if (iVar2 == 0) goto LAB_002c6f32;
    pbVar3 = (byte *)*puVar6;
    iVar7 = puVar6[1];
  }
  iVar4 = (uint)bVar1 * 0x100 + (uint)*pbVar3 + -2;
  local_3c = 0xe;
  if (iVar4 < 0xe) {
    local_3c = 0;
    if (0 < iVar4) {
      local_3c = iVar4;
    }
  }
  iVar2 = 0;
  while( true ) {
    pbVar3 = pbVar3 + 1;
    iVar7 = iVar7 + -1;
    if (iVar2 == local_3c) break;
    if (iVar7 == 0) {
      iVar7 = (*(code *)puVar6[3])(param_1);
      if (iVar7 == 0) {
        iVar2 = 0;
        goto LAB_002c6f32;
      }
      pbVar3 = (byte *)*puVar6;
      iVar7 = puVar6[1];
    }
    local_2c[iVar2] = *pbVar3;
    iVar2 = iVar2 + 1;
  }
  iVar4 = iVar4 - iVar2;
  if (param_1[0x6e] == 0xe0) {
    FUN_002c6c60(param_1,local_2c,iVar2,iVar4);
  }
  else if (param_1[0x6e] == 0xee) {
    FUN_002c6dc0(param_1,local_2c,iVar2,iVar4);
  }
  else {
    *(undefined4 *)(*param_1 + 0x14) = 0x46;
    *(int *)(*param_1 + 0x18) = param_1[0x6e];
    (**(code **)*param_1)(param_1);
  }
  iVar2 = 1;
  *puVar6 = pbVar3;
  puVar6[1] = iVar7;
  if (0 < iVar4) {
    (**(code **)(param_1[6] + 0x10))(param_1,iVar4);
  }
LAB_002c6f32:
  if (local_1c != *piVar5) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(iVar2);
  }
  return;
}


