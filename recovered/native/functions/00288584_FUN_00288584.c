/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00288584 FUN_00288584 */

uint FUN_00288584(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = FUN_00287f90(param_1,0,*(undefined4 *)(param_2 + 0xc),*(undefined4 *)(param_2 + 8),param_4
                      );
  FUN_00260e84(*param_1,*(undefined4 *)(param_2 + 0x14));
  *(uint *)(param_2 + 0x14) = uVar1;
  if (uVar1 != 0) {
    *(short *)(uVar1 + 0x20) = *(short *)(uVar1 + 0x20) + 1;
  }
  iVar2 = FUN_00269304(param_1,param_2 + 8);
  return uVar1 & -(uint)(iVar2 == 0);
}


