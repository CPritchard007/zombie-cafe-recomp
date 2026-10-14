/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002c8f5e FUN_002c8f5e */

void FUN_002c8f5e(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,int *param_6)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = *(int *)(param_1 + 0x1c8);
  if (*(int *)(iVar4 + 0x18) == 0) {
    uVar1 = (**(code **)(*(int *)(param_1 + 4) + 0x1c))
                      (param_1,*(undefined4 *)(iVar4 + 8),*(undefined4 *)(iVar4 + 0x14),
                       *(undefined4 *)(iVar4 + 0x10),1);
    *(undefined4 *)(iVar4 + 0xc) = uVar1;
  }
  uVar2 = *(uint *)(iVar4 + 0x18);
  (**(code **)(*(int *)(param_1 + 0x1dc) + 4))
            (param_1,param_2,param_3,param_4,*(undefined4 *)(iVar4 + 0xc),iVar4 + 0x18,
             *(undefined4 *)(iVar4 + 0x10));
  if (uVar2 < *(uint *)(iVar4 + 0x18)) {
    iVar3 = *(uint *)(iVar4 + 0x18) - uVar2;
    (**(code **)(*(int *)(param_1 + 0x1e4) + 4))(param_1,*(int *)(iVar4 + 0xc) + uVar2 * 4,0,iVar3);
    *param_6 = *param_6 + iVar3;
  }
  if (*(uint *)(iVar4 + 0x10) <= *(uint *)(iVar4 + 0x18)) {
    *(uint *)(iVar4 + 0x14) = *(int *)(iVar4 + 0x14) + *(uint *)(iVar4 + 0x10);
    *(undefined4 *)(iVar4 + 0x18) = 0;
  }
  return;
}


