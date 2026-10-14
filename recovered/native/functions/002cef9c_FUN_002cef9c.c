/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002cef9c FUN_002cef9c */

void FUN_002cef9c(int param_1,undefined4 param_2,uint *param_3,uint param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int extraout_r1;
  undefined4 *puVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int local_48;
  int local_40;
  int local_3c;
  undefined4 *local_38;
  
  iVar10 = *(int *)(param_1 + 0x1c0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    iVar1 = (**(code **)(*(int *)(param_1 + 0x1c4) + 0xc))
                      (param_1,*(undefined4 *)((*(int *)(iVar10 + 0x40) + 0xe) * 4 + iVar10));
    if (iVar1 == 0) {
      return;
    }
    *(undefined4 *)(iVar10 + 0x30) = 1;
    *(int *)(iVar10 + 0x4c) = *(int *)(iVar10 + 0x4c) + 1;
  }
  iVar1 = *(int *)(iVar10 + 0x44);
  if (iVar1 != 1) {
    if (iVar1 == 2) {
      (**(code **)(*(int *)(param_1 + 0x1c8) + 4))
                (param_1,*(undefined4 *)((*(int *)(iVar10 + 0x40) + 0xe) * 4 + iVar10),iVar10 + 0x34
                 ,*(undefined4 *)(iVar10 + 0x48),param_2,param_3,param_4);
      if (*(uint *)(iVar10 + 0x34) < *(uint *)(iVar10 + 0x48)) {
        return;
      }
      *(undefined4 *)(iVar10 + 0x44) = 0;
      if (param_4 <= *param_3) {
        return;
      }
    }
    else if (iVar1 != 0) {
      return;
    }
    *(undefined4 *)(iVar10 + 0x34) = 0;
    *(int *)(iVar10 + 0x48) = *(int *)(param_1 + 0x148) + -1;
    if (*(int *)(iVar10 + 0x4c) == *(int *)(param_1 + 0x14c)) {
      iVar11 = *(int *)(param_1 + 0x1c0);
      iVar1 = *(int *)(param_1 + 0xd8);
      for (local_40 = 0; local_40 < *(int *)(param_1 + 0x24); local_40 = local_40 + 1) {
        local_48 = *(int *)(iVar1 + 0xc) * *(int *)(iVar1 + 0x28);
        iVar12 = __divsi3(local_48,*(undefined4 *)(param_1 + 0x148));
        __aeabi_uidivmod(*(undefined4 *)(iVar1 + 0x30),local_48);
        if (extraout_r1 != 0) {
          local_48 = extraout_r1;
        }
        if (local_40 == 0) {
          iVar2 = __divsi3(local_48 + -1,iVar12);
          *(int *)(iVar11 + 0x48) = iVar2 + 1;
        }
        iVar2 = *(int *)(local_40 * 4 + *(int *)((*(int *)(iVar11 + 0x40) + 0xe) * 4 + iVar11));
        for (iVar5 = 0; iVar5 < iVar12 << 1; iVar5 = iVar5 + 1) {
          *(undefined4 *)(iVar2 + local_48 * 4 + iVar5 * 4) =
               *(undefined4 *)(iVar2 + (local_48 + -1) * 4);
        }
        iVar1 = iVar1 + 0x58;
      }
    }
    *(undefined4 *)(iVar10 + 0x44) = 1;
  }
  (**(code **)(*(int *)(param_1 + 0x1c8) + 4))
            (param_1,*(undefined4 *)((*(int *)(iVar10 + 0x40) + 0xe) * 4 + iVar10),iVar10 + 0x34,
             *(undefined4 *)(iVar10 + 0x48),param_2,param_3,param_4);
  if (*(uint *)(iVar10 + 0x48) <= *(uint *)(iVar10 + 0x34)) {
    if (*(int *)(iVar10 + 0x4c) == 1) {
      iVar1 = *(int *)(param_1 + 0x148);
      iVar11 = *(int *)(param_1 + 0xd8);
      iVar12 = *(int *)(param_1 + 0x1c0);
      for (local_48 = 0; local_48 < *(int *)(param_1 + 0x24); local_48 = local_48 + 1) {
        iVar2 = __divsi3(*(int *)(iVar11 + 0xc) * *(int *)(iVar11 + 0x28),
                         *(undefined4 *)(param_1 + 0x148));
        puVar7 = *(undefined4 **)(*(int *)(iVar12 + 0x38) + local_48 * 4);
        puVar4 = *(undefined4 **)(*(int *)(iVar12 + 0x3c) + local_48 * 4);
        iVar5 = iVar2 * (iVar1 + 1) * 4;
        iVar8 = 0;
        puVar6 = puVar7;
        local_38 = puVar4;
        for (local_3c = 0; local_3c < iVar2; local_3c = local_3c + 1) {
          *(undefined4 *)((int)puVar7 + iVar8 + iVar2 * -4) =
               *(undefined4 *)((int)puVar7 + iVar8 + iVar5);
          *(undefined4 *)((int)puVar4 + iVar8 + iVar2 * -4) =
               *(undefined4 *)((int)puVar4 + iVar8 + iVar5);
          uVar3 = *puVar6;
          puVar6 = puVar6 + 1;
          iVar9 = iVar2 * (iVar1 + 2) * 4;
          *(undefined4 *)((int)puVar7 + iVar8 + iVar9) = uVar3;
          uVar3 = *local_38;
          local_38 = local_38 + 1;
          *(undefined4 *)((int)puVar4 + iVar8 + iVar9) = uVar3;
          iVar8 = iVar8 + 4;
        }
        iVar11 = iVar11 + 0x58;
      }
    }
    *(uint *)(iVar10 + 0x40) = *(uint *)(iVar10 + 0x40) ^ 1;
    *(undefined4 *)(iVar10 + 0x30) = 0;
    *(int *)(iVar10 + 0x34) = *(int *)(param_1 + 0x148) + 1;
    *(int *)(iVar10 + 0x48) = *(int *)(param_1 + 0x148) + 2;
    *(undefined4 *)(iVar10 + 0x44) = 2;
  }
  return;
}


