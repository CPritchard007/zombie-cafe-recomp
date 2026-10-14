/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00280540 sqlite3_backup_step */

/* WARNING: Removing unreachable block (ram,0x002807d8) */
/* WARNING: Removing unreachable block (ram,0x00280740) */
/* WARNING: Removing unreachable block (ram,0x00280800) */

int sqlite3_backup_step(int *param_1,int param_2)

{
  bool bVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  int *piVar12;
  uint uVar13;
  bool bVar14;
  longlong lVar15;
  int local_5c;
  uint local_50;
  int local_4c;
  uint local_20;
  undefined4 local_1c;
  
  sqlite3_mutex_enter(*(undefined4 *)(param_1[5] + 0xc));
  FUN_00261f68(param_1[6]);
  if (*param_1 != 0) {
    sqlite3_mutex_enter(*(undefined4 *)(*param_1 + 0xc));
  }
  iVar10 = param_1[7];
  if (((iVar10 != 5) && (iVar10 != 0)) && (iVar10 != 6)) goto LAB_00280866;
  uVar7 = **(undefined4 **)(param_1[6] + 4);
  iVar8 = **(int **)(param_1[1] + 4);
  if ((*param_1 == 0) || (*(char *)((int)*(undefined4 **)(param_1[6] + 4) + 0x13) != '\x02')) {
    if (param_1[3] == 0) {
      iVar10 = FUN_0027d63c(param_1[1],2);
      if (iVar10 != 0) goto LAB_0028059e;
      param_1[3] = 1;
      FUN_00262122(param_1[1],1,param_1 + 2);
    }
    if (*(char *)(param_1[6] + 8) == '\0') {
      iVar10 = FUN_0027d63c();
      bVar1 = true;
    }
    else {
      bVar1 = false;
      iVar10 = 0;
    }
  }
  else {
    iVar10 = 5;
LAB_0028059e:
    bVar1 = false;
  }
  uVar3 = (*(int **)(param_1[1] + 4))[8];
  uVar13 = *(uint *)(*(int *)(param_1[6] + 4) + 0x20);
  bVar14 = *(char *)(**(int **)(param_1[1] + 4) + 5) == '\x05';
  if ((iVar10 == 0) && (bVar14)) {
    iVar10 = (uint)(uVar13 != uVar3) * 8;
  }
  uVar11 = *(uint *)(*(int *)(param_1[6] + 4) + 0x2c);
  local_5c = 0;
  while ((((local_5c < param_2 || (param_2 < 0)) && (uVar5 = param_1[4], iVar10 == 0)) &&
         (uVar5 <= uVar11))) {
    iVar10 = 0;
    iVar4 = __udivsi3(*(undefined4 *)(DAT_002808b8 + 0x280660),
                      *(undefined4 *)(*(int *)(param_1[6] + 4) + 0x20));
    if ((uVar5 != iVar4 + 1U) && (iVar10 = FUN_00274878(uVar7,uVar5,&local_20,0), iVar10 == 0)) {
      iVar10 = FUN_0027350c(param_1,uVar5,*(undefined4 *)(local_20 + 4));
      FUN_002749b4(local_20);
    }
    local_5c = local_5c + 1;
    param_1[4] = param_1[4] + 1;
  }
  if (iVar10 == 0) {
    param_1[9] = uVar11;
    param_1[8] = (uVar11 + 1) - param_1[4];
    if (uVar11 < (uint)param_1[4]) {
LAB_00280680:
      iVar10 = FUN_0027e4f4(param_1[1],1,param_1[2] + 1);
      if (iVar10 == 0) {
        if (*param_1 != 0) {
          FUN_00262044();
        }
        if ((!bVar14) || (iVar10 = FUN_0027fdb8(param_1[1],2), iVar10 == 0)) {
          if ((int)uVar13 < (int)uVar3) {
            iVar10 = __divsi3(uVar3,uVar13);
            iVar10 = __divsi3(uVar11 + iVar10 + -1,iVar10);
            iVar4 = __udivsi3(*(undefined4 *)(DAT_002808bc + 0x28073e),
                              *(undefined4 *)(*(int *)(param_1[1] + 4) + 0x20));
            if (iVar10 == iVar4 + 1) {
              iVar10 = iVar4;
            }
          }
          else {
            iVar10 = __divsi3(uVar13,uVar3);
            iVar10 = uVar11 * iVar10;
          }
          *(int *)(iVar8 + 0x18) = iVar10;
          iVar10 = *(int *)(iVar8 + 0x28);
          if ((int)uVar13 < (int)uVar3) {
            iVar4 = (int)uVar13 >> 0x1f;
            lVar15 = __muldi3(uVar13,iVar4,uVar11,(int)uVar11 >> 0x1f);
            piVar12 = *(int **)(iVar8 + 0x3c);
            if ((iVar10 == 0) && (2 < *(byte *)(iVar8 + 0xf))) {
              iVar10 = FUN_00280070(iVar8,0,1);
            }
            iVar6 = *(int *)(DAT_002808c0 + 0x28079e) + uVar3;
            lVar2 = lVar15;
            if (iVar6 <= lVar15) {
              lVar2 = (longlong)iVar6;
            }
            uVar3 = *(int *)(DAT_002808c0 + 0x28079e) + uVar13;
            local_50 = 0;
            local_4c = 0;
            while( true ) {
              iVar6 = local_50 + uVar3;
              iVar9 = local_4c + ((int)uVar3 >> 0x1f) + (uint)CARRY4(local_50,uVar3);
              if ((lVar2 <= CONCAT44(iVar9,iVar6)) || (iVar10 != 0)) break;
              local_20 = 0;
              iVar10 = __aeabi_ldivmod(iVar6,iVar9,uVar13,iVar4);
              iVar10 = FUN_00274878(uVar7,iVar10 + 1,&local_20,0);
              if (iVar10 == 0) {
                iVar10 = FUN_0025ace6(piVar12,*(undefined4 *)(local_20 + 4),uVar13,iVar9,iVar6,iVar9
                                     );
              }
              FUN_002749b4(local_20);
              bVar14 = CARRY4(local_50,uVar13);
              local_50 = local_50 + uVar13;
              local_4c = local_4c + iVar4 + (uint)bVar14;
            }
            if (iVar10 == 0) {
              iVar10 = (**(code **)(*piVar12 + 0x18))(piVar12,&local_20);
              if ((iVar10 == 0) &&
                 ((CONCAT44(local_1c,local_20) <= lVar15 ||
                  (iVar10 = (**(code **)(*piVar12 + 0x10))
                                      (piVar12,*(code **)(*piVar12 + 0x10),(int)lVar15,
                                       (int)((ulonglong)lVar15 >> 0x20)), iVar10 == 0)))) {
                iVar10 = FUN_00261c22(iVar8);
                goto LAB_00280834;
              }
            }
          }
          else if (iVar10 == 0) {
            if (2 < *(byte *)(iVar8 + 0xf)) {
              iVar10 = FUN_00280070(iVar8,0,0);
LAB_00280834:
              if (iVar10 != 0) goto LAB_00280846;
            }
            iVar10 = FUN_00274b70(param_1[1],0);
            if (iVar10 == 0) {
              iVar10 = 0x65;
            }
          }
        }
      }
    }
    else if (param_1[10] == 0) {
      iVar8 = **(int **)(param_1[6] + 4);
      param_1[0xb] = *(int *)(iVar8 + 0x58);
      *(int **)(iVar8 + 0x58) = param_1;
      param_1[10] = 1;
    }
  }
  else if (iVar10 == 0x65) goto LAB_00280680;
LAB_00280846:
  if (bVar1) {
    FUN_002803b0(param_1[6],0);
    FUN_00274b70(param_1[6],0);
  }
  if (iVar10 == DAT_002808c4) {
    iVar10 = 7;
  }
  param_1[7] = iVar10;
LAB_00280866:
  if (*param_1 != 0) {
    sqlite3_mutex_leave(*(undefined4 *)(*param_1 + 0xc));
  }
  FUN_00262002(param_1[6]);
  sqlite3_mutex_leave(*(undefined4 *)(param_1[5] + 0xc));
  return iVar10;
}


