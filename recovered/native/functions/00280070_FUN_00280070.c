/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00280070 FUN_00280070 */

int FUN_00280070(int param_1,int param_2,int param_3)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  uint *puVar5;
  int *piVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  undefined8 uVar10;
  int local_30;
  uint local_20;
  int local_1c;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    if (*(int *)(param_1 + 0xb8) == 0) {
      if ((*(char *)(param_1 + 0x11) == '\0') && (*(int *)(param_1 + 0x18) != 0)) {
        iVar4 = FUN_00274878(param_1,1,&local_20);
        if ((iVar4 == 0) && (iVar4 = FUN_002733c4(local_20), iVar4 == 0)) {
          FUN_0025bf90(local_20);
          *(undefined1 *)(param_1 + 0x11) = 1;
        }
        FUN_002749b4(local_20);
        if (iVar4 != 0) {
          return iVar4;
        }
      }
      uVar1 = *(uint *)(param_1 + 0x18);
      uVar7 = *(uint *)(param_1 + 0x1c);
      if ((uVar1 < uVar7) && (*(char *)(param_1 + 5) != '\x02')) {
        iVar4 = __divsi3(*(undefined4 *)(DAT_002803a0 + 0x2801b4),*(undefined4 *)(param_1 + 0x80));
        *(uint *)(param_1 + 0x18) = uVar7;
        uVar7 = uVar1;
        while (uVar7 = uVar7 + 1, uVar7 <= *(uint *)(param_1 + 0x1c)) {
          iVar3 = FUN_00261810(*(undefined4 *)(param_1 + 0x38),uVar7);
          if ((iVar3 == 0) && (uVar7 != iVar4 + 1U)) {
            iVar3 = FUN_00274878(param_1,uVar7,&local_20);
            if (iVar3 != 0) {
              return iVar3;
            }
            iVar3 = FUN_002733c4(local_20);
            FUN_002749b4(local_20);
            if (iVar3 != 0) {
              return iVar3;
            }
          }
        }
        *(uint *)(param_1 + 0x18) = uVar1;
      }
      if (((param_2 != 0) && (*(char *)(param_1 + 5) != '\x04')) &&
         (*(char *)(param_1 + 5) != '\x02')) {
        *(undefined1 *)(param_1 + 0x12) = 1;
        local_30 = 0;
        for (uVar7 = 0; *(byte *)(param_2 + uVar7) != 0; uVar7 = uVar7 + 1) {
          local_30 = local_30 + (uint)*(byte *)(param_2 + uVar7);
        }
        if (*(char *)(param_1 + 8) != '\0') {
          iVar4 = *(int *)(param_1 + 0x48);
          uVar10 = 0;
          if (iVar4 != 0 || *(int *)(param_1 + 0x4c) != 0) {
            uVar2 = *(undefined4 *)(param_1 + 0x7c);
            lVar9 = __aeabi_ldivmod(iVar4 + -1,*(int *)(param_1 + 0x4c) + -1 + (uint)(iVar4 != 0),
                                    uVar2,0);
            uVar10 = __muldi3((int)(lVar9 + 1),(int)((ulonglong)(lVar9 + 1) >> 0x20),uVar2,0);
          }
          *(undefined8 *)(param_1 + 0x48) = uVar10;
        }
        uVar10 = __divsi3(*(undefined4 *)(DAT_002803a4 + 0x280286),*(undefined4 *)(param_1 + 0x80));
        uVar1 = *(uint *)(param_1 + 0x48);
        iVar3 = *(int *)(param_1 + 0x4c);
        iVar4 = FUN_0025bf4e(*(undefined4 *)(param_1 + 0x40),(int)((ulonglong)uVar10 >> 0x20),uVar1,
                             iVar3,(int)uVar10 + 1);
        if (iVar4 != 0) {
          return iVar4;
        }
        iVar3 = iVar3 + (uint)(0xfffffffb < uVar1);
        iVar4 = iVar3;
        uVar10 = FUN_0025ace6(*(undefined4 *)(param_1 + 0x40),param_2,uVar7);
        if ((int)uVar10 != 0) {
          return (int)uVar10;
        }
        uVar8 = uVar1 + 4 + uVar7;
        iVar3 = iVar3 + ((int)uVar7 >> 0x1f) + (uint)CARRY4(uVar1 + 4,uVar7);
        uVar10 = FUN_0025bf4e(*(undefined4 *)(param_1 + 0x40),(int)((ulonglong)uVar10 >> 0x20),uVar8
                              ,iVar3,uVar7,iVar4);
        if ((int)uVar10 != 0) {
          return (int)uVar10;
        }
        iVar4 = FUN_0025bf4e(*(undefined4 *)(param_1 + 0x40),(int)((ulonglong)uVar10 >> 0x20),
                             uVar8 + 4,iVar3 + (uint)(0xfffffffb < uVar8),local_30,iVar4);
        if (iVar4 != 0) {
          return iVar4;
        }
        iVar3 = iVar3 + (uint)(0xfffffff7 < uVar8);
        iVar4 = FUN_0025ace6(*(undefined4 *)(param_1 + 0x40),DAT_002803a8 + 0x2802d8,8,iVar3,
                             uVar8 + 8,iVar3);
        if (iVar4 != 0) {
          return iVar4;
        }
        uVar7 = uVar7 + 0x14;
        uVar1 = *(uint *)(param_1 + 0x48);
        *(uint *)(param_1 + 0x48) = uVar1 + uVar7;
        *(uint *)(param_1 + 0x4c) =
             *(int *)(param_1 + 0x4c) + ((int)uVar7 >> 0x1f) + (uint)CARRY4(uVar1,uVar7);
        iVar4 = (**(code **)(**(int **)(param_1 + 0x40) + 0x18))
                          (*(int **)(param_1 + 0x40),&local_20);
        if (iVar4 != 0) {
          return iVar4;
        }
        if (((*(int *)(param_1 + 0x4c) < local_1c) ||
            ((local_1c == *(int *)(param_1 + 0x4c) && (*(uint *)(param_1 + 0x48) < local_20)))) &&
           (iVar4 = (**(code **)(**(int **)(param_1 + 0x40) + 0x10))(), iVar4 != 0)) {
          return iVar4;
        }
      }
      if ((*(int *)(param_1 + 0xb8) == 0) && (iVar4 = FUN_00261bae(param_1,4), iVar4 != 0)) {
        return iVar4;
      }
      iVar4 = FUN_0027fe18(param_1,0);
      if (iVar4 != 0) {
        return iVar4;
      }
      piVar6 = *(int **)(param_1 + 0xb4);
      iVar4 = *piVar6;
      while (iVar4 != 0) {
        *(int *)(iVar4 + 0xc) = *(int *)(iVar4 + 0x20);
        iVar4 = *(int *)(iVar4 + 0x20);
      }
      uVar2 = FUN_0025de82(*piVar6);
      iVar4 = FUN_0027c1b8(param_1,uVar2);
      if (iVar4 != 0) {
        return iVar4;
      }
      piVar6 = *(int **)(param_1 + 0xb4);
      while (*piVar6 != 0) {
        FUN_00261944();
      }
      iVar4 = *(int *)(param_1 + 0x18);
      if (iVar4 != *(int *)(param_1 + 0x20)) {
        if ((**(int **)(param_1 + 0x3c) != 0) && (2 < *(byte *)(param_1 + 0xf) - 1)) {
          iVar3 = __divsi3(*(undefined4 *)(DAT_002803ac + 0x2803ba),*(undefined4 *)(param_1 + 0x80))
          ;
          iVar4 = FUN_0026350c(param_1,iVar4 - (uint)(iVar4 == iVar3 + 1));
          if (iVar4 != 0) {
            return iVar4;
          }
        }
      }
      if ((param_3 == 0) && (iVar4 = FUN_00261c22(param_1), iVar4 != 0)) {
        return iVar4;
      }
    }
    else {
      puVar5 = *(uint **)(param_1 + 0xb4);
      uVar7 = *puVar5;
      while (uVar7 != 0) {
        *(uint *)(uVar7 + 0xc) = *(uint *)(uVar7 + 0x20);
        uVar7 = *(uint *)(uVar7 + 0x20);
      }
      uVar1 = FUN_0025de82(*puVar5);
      local_20 = uVar7;
      if (uVar1 == 0) {
        FUN_00274878(param_1,1,&local_20,0);
        *(undefined4 *)(local_20 + 0xc) = 0;
        uVar1 = local_20;
      }
      iVar4 = FUN_0027366c(param_1,uVar1,*(undefined4 *)(param_1 + 0x18),1);
      FUN_002749b4(local_20);
      if (iVar4 != 0) {
        return iVar4;
      }
      piVar6 = *(int **)(param_1 + 0xb4);
      while (*piVar6 != 0) {
        FUN_00261944();
      }
    }
  }
  else {
    for (iVar4 = *(int *)(param_1 + 0x58); iVar4 != 0; iVar4 = *(int *)(iVar4 + 0x2c)) {
      *(undefined4 *)(iVar4 + 0x10) = 1;
    }
  }
  if (*(int *)(param_1 + 0xb8) == 0) {
    *(undefined1 *)(param_1 + 0xf) = 5;
  }
  return 0;
}


