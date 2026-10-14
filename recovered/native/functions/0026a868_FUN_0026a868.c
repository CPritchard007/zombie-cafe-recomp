/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0026a868 FUN_0026a868 */

uint FUN_0026a868(undefined4 param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int local_1c [2];
  
  uVar5 = 0;
  for (iVar4 = *(int *)(param_2 + 0x24); iVar4 != 0; iVar4 = *(int *)(iVar4 + 4)) {
    iVar2 = iVar4;
    for (iVar3 = 0; iVar3 < *(int *)(iVar4 + 0x14); iVar3 = iVar3 + 1) {
      if ((int)*(uint *)(iVar2 + 0x24) < 0x20) {
        uVar1 = 1 << (*(uint *)(iVar2 + 0x24) & 0xff);
      }
      else {
        uVar1 = 0xffffffff;
      }
      uVar5 = uVar5 | uVar1;
      iVar2 = iVar2 + 8;
    }
  }
  for (iVar2 = FUN_0025d110(param_2); iVar2 != 0; iVar2 = *(int *)(iVar2 + 0xc)) {
    local_1c[0] = iVar4;
    FUN_0026a6fc(param_1,param_2,iVar2,local_1c,0);
    if (local_1c[0] != 0) {
      for (iVar3 = 0; iVar3 < *(int *)(local_1c[0] + 0x24); iVar3 = iVar3 + 1) {
        uVar1 = *(uint *)(iVar3 * 4 + *(int *)(local_1c[0] + 4));
        if ((int)uVar1 < 0x20) {
          uVar1 = 1 << (uVar1 & 0xff);
        }
        else {
          uVar1 = 0xffffffff;
        }
        uVar5 = uVar5 | uVar1;
      }
    }
  }
  return uVar5;
}


