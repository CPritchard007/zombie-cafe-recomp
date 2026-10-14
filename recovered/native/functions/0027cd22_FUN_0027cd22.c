/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0027cd22 FUN_0027cd22 */

int FUN_0027cd22(int param_1,undefined4 param_2,uint param_3,int param_4,int param_5,int *param_6)

{
  uint uVar1;
  int iVar2;
  short *psVar3;
  int iVar4;
  int iVar5;
  byte *pbVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  int local_54;
  int local_50;
  int local_4c;
  uint local_24;
  uint local_20;
  int local_1c;
  
  if (((*(char *)(param_1 + 0x5b) == '\x01') && (*(char *)(param_1 + 0x5a) != '\0')) &&
     (*(char *)(*(int *)(param_1 + 0x88) + 2) != '\0')) {
    iVar2 = *(int *)(param_1 + 0x2c);
    if ((*(uint *)(param_1 + 0x28) == param_3) && (iVar2 == param_4)) {
      *param_6 = 0;
      return 0;
    }
    if ((*(char *)(param_1 + 0x59) != '\0') &&
       ((iVar2 < param_4 || ((param_4 == iVar2 && (*(uint *)(param_1 + 0x28) < param_3)))))) {
      *param_6 = -1;
      return 0;
    }
  }
  iVar2 = FUN_00274d94(param_1);
  local_54 = iVar2;
  if (iVar2 == 0) {
    if (*(char *)(param_1 + 0x5b) == '\0') {
      iVar4 = -1;
LAB_0027cefe:
      *param_6 = iVar4;
      local_54 = iVar2;
    }
    else {
      psVar3 = (short *)(param_1 + 0x5e);
      do {
        iVar5 = *(int *)((*psVar3 + 0x22) * 4 + param_1);
        iVar4 = *psVar3 + 0x30;
        local_4c = *(ushort *)(iVar5 + 0x10) - 1;
        if (param_5 == 0) {
          iVar9 = local_4c / 2;
          *(short *)(iVar4 * 2 + param_1) = (short)iVar9;
        }
        else {
          *(undefined2 *)(iVar4 * 2 + param_1) = (undefined2)local_4c;
          iVar9 = local_4c;
        }
        local_50 = 0;
LAB_0027cdf4:
        *(undefined2 *)(param_1 + 0x42) = 0;
        pbVar6 = (byte *)(*(int *)(iVar5 + 0x38) +
                         (uint)(CONCAT11(*(undefined1 *)(*(int *)(iVar5 + 0x40) + iVar9 * 2),
                                         *(undefined1 *)(*(int *)(iVar5 + 0x40) + iVar9 * 2 + 1)) &
                               *(ushort *)(iVar5 + 0x12)) + (uint)*(byte *)(iVar5 + 6));
        if (*(char *)(iVar5 + 2) == '\0') {
          uVar1 = (uint)*pbVar6;
          if (*(byte *)(iVar5 + 7) < uVar1) {
            if (((int)((uint)pbVar6[1] << 0x18) < 0) ||
               (uVar1 = (uVar1 & 0x7f) * 0x80 + (uint)pbVar6[1], *(ushort *)(iVar5 + 8) < uVar1)) {
              FUN_00260a6c(iVar5,(int)pbVar6 - (uint)*(byte *)(iVar5 + 6),param_1 + 0x28);
              uVar8 = *(undefined4 *)(param_1 + 0x28);
              iVar4 = FUN_0025edc8(uVar8);
              if (iVar4 == 0) {
                return 7;
              }
              iVar7 = FUN_0027c294(param_1,0,uVar8,iVar4,0);
              if (iVar7 != 0) {
                sqlite3_free(iVar4);
                return iVar7;
              }
              iVar7 = FUN_0026ca70(uVar8,iVar4,param_2);
              sqlite3_free(iVar4);
              goto LAB_0027ceea;
            }
            pbVar6 = pbVar6 + 2;
          }
          else {
            pbVar6 = pbVar6 + 1;
          }
          iVar7 = FUN_0026ca70(uVar1,pbVar6,param_2);
        }
        else {
          if (*(char *)(iVar5 + 4) != '\0') {
            if ((int)((uint)*pbVar6 << 0x18) < 0) {
              iVar4 = FUN_00260a18(pbVar6,&local_24);
            }
            else {
              iVar4 = 1;
              local_24 = (uint)*pbVar6;
            }
            pbVar6 = pbVar6 + iVar4;
          }
          FUN_0025b924(pbVar6,&local_20);
          if ((local_20 != param_3) || (iVar7 = 0, local_1c != param_4)) {
            if ((local_1c < param_4) || ((param_4 == local_1c && (local_20 < param_3)))) {
              iVar7 = -1;
            }
            else {
              iVar7 = 1;
            }
          }
          *(undefined1 *)(param_1 + 0x5a) = 1;
          *(uint *)(param_1 + 0x28) = local_20;
          *(int *)(param_1 + 0x2c) = local_1c;
        }
LAB_0027ceea:
        if (iVar7 != 0) {
          if (iVar7 < 0) {
            local_50 = iVar9 + 1;
          }
          else {
            local_4c = iVar9 + -1;
          }
          if (local_4c < local_50) goto LAB_0027cf2c;
          iVar9 = local_50 + local_4c >> 1;
          *(short *)((*psVar3 + 0x30) * 2 + param_1) = (short)iVar9;
          goto LAB_0027cdf4;
        }
        if ((*(char *)(iVar5 + 2) == '\0') || (local_50 = iVar9, *(char *)(iVar5 + 3) != '\0')) {
          iVar4 = 0;
          goto LAB_0027cefe;
        }
LAB_0027cf2c:
        if (*(char *)(iVar5 + 3) != '\0') {
LAB_0027cf60:
          *param_6 = iVar7;
          return 0;
        }
        if (local_50 < (int)(uint)*(ushort *)(iVar5 + 0x10)) {
          uVar1 = (uint)(CONCAT11(*(undefined1 *)(*(int *)(iVar5 + 0x40) + local_50 * 2),
                                  *(undefined1 *)(*(int *)(iVar5 + 0x40) + local_50 * 2 + 1)) &
                        *(ushort *)(iVar5 + 0x12));
        }
        else {
          uVar1 = *(byte *)(iVar5 + 5) + 8;
        }
        iVar4 = FUN_0025ba30(*(int *)(iVar5 + 0x38) + uVar1);
        if (iVar4 == 0) goto LAB_0027cf60;
        *(undefined2 *)((*psVar3 + 0x30) * 2 + param_1) = (undefined2)local_50;
        *(undefined2 *)(param_1 + 0x42) = 0;
        *(undefined1 *)(param_1 + 0x5a) = 0;
        local_54 = FUN_00274c90(param_1);
      } while (local_54 == 0);
    }
  }
  return local_54;
}


