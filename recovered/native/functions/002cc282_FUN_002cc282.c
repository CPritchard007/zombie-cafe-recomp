/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002cc282 FUN_002cc282 */

undefined4 FUN_002cc282(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  uint local_44;
  int local_3c;
  int local_38;
  int local_28 [5];
  
  iVar9 = *(int *)(param_1 + 0x1c4);
  local_44 = param_1;
  for (iVar10 = 0; iVar10 < *(int *)(param_1 + 0x154); iVar10 = iVar10 + 1) {
    iVar3 = *(int *)(*(int *)(local_44 + 0x158) + 0xc);
    iVar3 = (**(code **)(*(int *)(param_1 + 4) + 0x20))
                      (param_1,*(undefined4 *)
                                ((*(int *)(*(int *)(local_44 + 0x158) + 4) + 0x12) * 4 + iVar9),
                       iVar3 * *(int *)(param_1 + 0x94),iVar3,1);
    local_28[iVar10] = iVar3;
    local_44 = local_44 + 4;
  }
  iVar10 = *(int *)(iVar9 + 0x18);
  do {
    if (*(int *)(iVar9 + 0x1c) <= iVar10) {
      uVar7 = *(uint *)(param_1 + 0x94) + 1;
      *(uint *)(param_1 + 0x94) = uVar7;
      if (uVar7 < *(uint *)(param_1 + 0x14c)) {
        FUN_002cc23c(param_1);
        uVar2 = 3;
      }
      else {
        (**(code **)(*(int *)(param_1 + 0x1cc) + 0xc))(param_1);
        uVar2 = 4;
      }
      return uVar2;
    }
    for (local_44 = *(uint *)(iVar9 + 0x14); local_44 < *(uint *)(param_1 + 0x168);
        local_44 = local_44 + 1) {
      iVar3 = 0;
      local_38 = param_1;
      for (iVar6 = 0; iVar6 < *(int *)(param_1 + 0x154); iVar6 = iVar6 + 1) {
        iVar11 = *(int *)(local_38 + 0x158);
        iVar4 = *(int *)(iVar11 + 0x38);
        for (iVar5 = 0; iVar5 < *(int *)(iVar11 + 0x3c); iVar5 = iVar5 + 1) {
          local_3c = *(int *)((iVar5 + iVar10) * 4 + local_28[iVar6]) + iVar4 * 0x80 * local_44;
          iVar8 = iVar3 * 4;
          for (iVar1 = 0; iVar1 < *(int *)(iVar11 + 0x38); iVar1 = iVar1 + 1) {
            iVar3 = iVar3 + 1;
            *(int *)(iVar9 + iVar8 + iVar1 * 4 + 0x20) = local_3c;
            local_3c = local_3c + 0x80;
          }
        }
        local_38 = local_38 + 4;
      }
      iVar3 = (**(code **)(*(int *)(param_1 + 0x1d4) + 4))(param_1,iVar9 + 0x20);
      if (iVar3 == 0) {
        *(int *)(iVar9 + 0x18) = iVar10;
        *(uint *)(iVar9 + 0x14) = local_44;
        return 0;
      }
    }
    *(undefined4 *)(iVar9 + 0x14) = 0;
    iVar10 = iVar10 + 1;
  } while( true );
}


