/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002733c4 FUN_002733c4 */

int FUN_002733c4(int param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint local_28;
  int local_24;
  int local_20;
  int local_1c [2];
  
  iVar8 = *(int *)(param_1 + 0x10);
  local_28 = __udivsi3(*(undefined4 *)(iVar8 + 0x7c),*(undefined4 *)(iVar8 + 0x80));
  if (local_28 < 2) {
    iVar3 = FUN_002731c8(param_1);
  }
  else {
    *(char *)(iVar8 + 0x14) = *(char *)(iVar8 + 0x14) + '\x01';
    iVar9 = DAT_00273508;
    uVar4 = *(uint *)(param_1 + 0x14);
    iVar5 = (-local_28 & uVar4 - 1) + 1;
    uVar6 = *(uint *)(iVar8 + 0x18);
    if (uVar6 < uVar4) {
      local_28 = (uVar4 + 1) - iVar5;
    }
    else if (uVar6 < (local_28 - 1) + iVar5) {
      local_28 = (uVar6 + 1) - iVar5;
    }
    bVar1 = false;
    iVar3 = 0;
    for (local_24 = 0; (iVar3 == 0 && (local_24 < (int)local_28)); local_24 = local_24 + 1) {
      iVar7 = iVar5 + local_24;
      if ((iVar7 == *(int *)(param_1 + 0x14)) ||
         (iVar3 = FUN_00261810(*(undefined4 *)(iVar8 + 0x38),iVar7), iVar3 == 0)) {
        iVar2 = __divsi3(*(undefined4 *)(iVar9 + 0x27348a),*(undefined4 *)(iVar8 + 0x80));
        iVar3 = 0;
        if ((iVar7 != iVar2 + 1) && (iVar3 = FUN_00274878(iVar8,iVar7,&local_20,0), iVar3 == 0)) {
          iVar3 = FUN_002731c8(local_20);
          if ((int)((uint)*(ushort *)(local_20 + 0x18) << 0x1d) < 0) {
            bVar1 = true;
          }
          FUN_002749b4();
        }
      }
      else {
        FUN_0025dce0(*(undefined4 *)(iVar8 + 0xb4),iVar7,0,local_1c);
        local_20 = local_1c[0];
        iVar3 = local_1c[0];
        if (local_1c[0] != 0) {
          if ((int)((uint)*(ushort *)(local_1c[0] + 0x18) << 0x1d) < 0) {
            bVar1 = true;
          }
          FUN_002749b4();
          iVar3 = 0;
        }
      }
    }
    if ((bVar1) && (iVar9 = 0, iVar3 == 0)) {
      for (; iVar9 < (int)local_28; iVar9 = iVar9 + 1) {
        FUN_0025dce0(*(undefined4 *)(iVar8 + 0xb4),iVar5 + iVar9,0,local_1c);
        if (local_1c[0] != 0) {
          *(ushort *)(local_1c[0] + 0x18) = *(ushort *)(local_1c[0] + 0x18) | 4;
          FUN_002749b4();
        }
      }
    }
    *(char *)(iVar8 + 0x14) = *(char *)(iVar8 + 0x14) + -1;
  }
  return iVar3;
}


