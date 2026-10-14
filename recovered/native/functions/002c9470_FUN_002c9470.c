/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002c9470 FUN_002c9470 */

void FUN_002c9470(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  undefined1 *puVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  bool bVar10;
  int local_38;
  int local_30;
  int local_2c;
  int local_28;
  undefined4 local_24;
  
  iVar8 = *(int *)(param_1 + 0x1e4);
  bVar10 = *(int *)(param_1 + 0x58) != 1;
  if (bVar10) {
    local_2c = 0;
  }
  else {
    local_2c = 0x1fe;
  }
  *(uint *)(iVar8 + 0x1c) = (uint)!bVar10;
  uVar1 = (**(code **)(*(int *)(param_1 + 4) + 8))
                    (param_1,1,local_2c + 0x100,*(undefined4 *)(param_1 + 0x78));
  local_24 = *(undefined4 *)(iVar8 + 0x14);
  *(undefined4 *)(iVar8 + 0x18) = uVar1;
  local_38 = 0;
  for (local_28 = 0; local_28 < *(int *)(param_1 + 0x78); local_28 = local_28 + 1) {
    iVar6 = *(int *)(iVar8 + local_38 + 0x20);
    local_24 = __divsi3(local_24,iVar6);
    if (local_2c != 0) {
      piVar3 = (int *)(*(int *)(iVar8 + 0x18) + local_38);
      *piVar3 = *piVar3 + 0xff;
    }
    puVar4 = *(undefined1 **)(*(int *)(iVar8 + 0x18) + local_38);
    iVar9 = 0;
    iVar5 = (iVar6 + -1) * 2;
    iVar2 = __divsi3(iVar6 + 0xfe,iVar5);
    local_30 = 0;
    do {
      iVar7 = (local_30 + 1) * 0x1fe + 0xff + iVar6 + -1;
      while (iVar2 < iVar9) {
        local_30 = local_30 + 1;
        iVar2 = __divsi3(iVar7,iVar5);
        iVar7 = iVar7 + 0x1fe;
      }
      puVar4[iVar9] = (char)local_30 * (char)local_24;
      iVar9 = iVar9 + 1;
    } while (iVar9 != 0x100);
    if (local_2c != 0) {
      iVar6 = 1;
      do {
        puVar4[-iVar6] = *puVar4;
        puVar4[iVar6 + 0xff] = puVar4[0xff];
        iVar6 = iVar6 + 1;
      } while (iVar6 != 0x100);
    }
    local_38 = local_38 + 4;
  }
  return;
}


