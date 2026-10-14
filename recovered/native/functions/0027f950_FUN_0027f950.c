/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0027f950 FUN_0027f950 */

int FUN_0027f950(int *param_1)

{
  undefined1 uVar1;
  undefined1 uVar2;
  ushort uVar3;
  short sVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  short *psVar12;
  int iVar13;
  int iVar14;
  int local_20;
  undefined1 auStack_1c [8];
  
  iVar8 = (int)*(short *)((int)param_1 + 0x5e);
  iVar11 = *param_1;
  uVar10 = (uint)*(ushort *)((iVar8 + 0x30) * 2 + (int)param_1);
  iVar14 = *(int *)(iVar11 + 4);
  iVar13 = param_1[iVar8 + 0x22];
  iVar5 = 1;
  if ((uVar10 < *(ushort *)(iVar13 + 0x10)) && (*(char *)((int)param_1 + 0x5b) == '\x01')) {
    iVar9 = *(int *)(iVar13 + 0x38);
    uVar3 = *(ushort *)(iVar13 + 0x12);
    uVar2 = *(undefined1 *)(*(int *)(iVar13 + 0x40) + uVar10 * 2);
    uVar1 = *(undefined1 *)(*(int *)(iVar13 + 0x40) + uVar10 * 2 + 1);
    if (((*(char *)(iVar13 + 3) != '\0') ||
        (local_20 = FUN_0027d024(param_1,auStack_1c), iVar5 = local_20, local_20 == 0)) &&
       (iVar5 = FUN_0027c4cc(iVar14,param_1[6],param_1), iVar5 == 0)) {
      local_20 = iVar5;
      if (param_1[4] == 0) {
        FUN_0025c266(iVar11,param_1[10],param_1[10],param_1[0xb],0);
      }
      iVar5 = FUN_002733c4(*(undefined4 *)(iVar13 + 0x44));
      if (iVar5 == 0) {
        iVar9 = iVar9 + (uint)(CONCAT11(uVar2,uVar1) & uVar3);
        local_20 = iVar5;
        local_20 = FUN_0027e700(iVar13,iVar9);
        uVar6 = FUN_00260b9e(iVar13,iVar9);
        if (local_20 == 0) {
          FUN_0026b9bc(iVar13,uVar10,uVar6,&local_20);
        }
        iVar5 = local_20;
        if (local_20 == 0) {
          if (*(char *)(iVar13 + 3) == '\0') {
            iVar9 = param_1[*(short *)((int)param_1 + 0x5e) + 0x22];
            uVar6 = *(undefined4 *)(param_1[iVar8 + 0x23] + 0x48);
            iVar5 = (*(ushort *)(iVar9 + 0x10) - 1) * 2;
            iVar11 = *(int *)(iVar9 + 0x38) +
                     (uint)(CONCAT11(*(undefined1 *)(*(int *)(iVar9 + 0x40) + iVar5),
                                     *(undefined1 *)(*(int *)(iVar9 + 0x40) + iVar5 + 1)) &
                           *(ushort *)(iVar9 + 0x12));
            iVar5 = FUN_00260b9e(iVar9,iVar11);
            if (*(int *)(iVar14 + 0x50) == 0) {
              uVar7 = FUN_0025f320(*(undefined4 *)(iVar14 + 0x20));
              *(undefined4 *)(iVar14 + 0x50) = uVar7;
            }
            uVar7 = *(undefined4 *)(iVar14 + 0x50);
            local_20 = FUN_002733c4(*(undefined4 *)(iVar9 + 0x44));
            FUN_0027e7d4(iVar13,uVar10,iVar11 + -4,iVar5 + 4,uVar7,uVar6,&local_20);
            if (local_20 == 0) {
              FUN_0026b9bc(iVar9,*(ushort *)(iVar9 + 0x10) - 1,iVar5,&local_20);
            }
            if (local_20 != 0) {
              return local_20;
            }
          }
          iVar5 = FUN_0027ea30(param_1);
          if (iVar5 == 0) {
            psVar12 = (short *)((int)param_1 + 0x5e);
            local_20 = 0;
            if (iVar8 < *psVar12) {
              while( true ) {
                sVar4 = *psVar12;
                if (sVar4 <= iVar8) break;
                iVar5 = param_1[sVar4 + 0x22];
                *psVar12 = sVar4 + -1;
                FUN_00274a30(iVar5);
              }
              iVar5 = FUN_0027ea30(param_1);
            }
          }
          local_20 = iVar5;
          iVar5 = local_20;
          if (local_20 == 0) {
            FUN_00274d94(param_1);
            iVar5 = local_20;
          }
        }
      }
    }
  }
  return iVar5;
}


