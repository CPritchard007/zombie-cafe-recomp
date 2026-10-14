/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00263cfc sqlite3_db_status */

/* WARNING: Function: __gnu_thumb1_case_uqi replaced with injection: switch8_r0 */
/* WARNING (jumptable): Removing unreachable block (ram,0x00263d18) */
/* WARNING: Removing unreachable block (ram,0x00263d18) */

int sqlite3_db_status(int param_1,int param_2,int *param_3,int *param_4,int param_5)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  int local_30;
  int local_24;
  int local_1c [2];
  
  sqlite3_mutex_enter(*(undefined4 *)(param_1 + 0xc));
  iVar5 = DAT_00263f08;
  iVar4 = 1;
  switch(param_2) {
  case 0:
    *param_3 = *(int *)(param_1 + 0xec);
    *param_4 = *(int *)(param_1 + 0xf0);
    iVar4 = param_5;
    if (param_5 != 0) {
      *(int *)(param_1 + 0xf0) = *(int *)(param_1 + 0xec);
      iVar4 = 0;
    }
    break;
  case 1:
    FUN_00261fe0(param_1);
    local_24 = 0;
    for (local_30 = 0; local_30 < *(int *)(param_1 + 0x14); local_30 = local_30 + 1) {
      iVar4 = *(int *)(*(int *)(param_1 + 0x10) + local_30 * 0x10 + 4);
      if (iVar4 != 0) {
        iVar7 = **(int **)(iVar4 + 4);
        iVar3 = *(int *)(iVar7 + 0x80);
        uVar1 = *(ushort *)(iVar7 + 0x74);
        iVar4 = *(int *)(*(int *)(iVar7 + 0xb4) + 0x28);
        if (iVar4 != 0) {
          iVar4 = (**(code **)(iVar5 + 0x263dec))();
        }
        iVar2 = FUN_0025aeb8(iVar7);
        local_24 = local_24 + iVar4 * ((uint)uVar1 + iVar3 + 0x3c) + iVar2 + *(int *)(iVar7 + 0x80);
      }
    }
    FUN_00262022(param_1);
    *param_3 = local_24;
    *param_4 = 0;
    iVar4 = 0;
    break;
  case 2:
    local_1c[0] = 0;
    FUN_00261fe0(param_1);
    iVar5 = DAT_00263f0c;
    local_30 = 0;
    *(int **)(param_1 + 0x1f0) = local_1c;
    for (; iVar4 = local_1c[0], local_30 < *(int *)(param_1 + 0x14); local_30 = local_30 + 1) {
      iVar7 = *(int *)(*(int *)(param_1 + 0x10) + local_30 * 0x10 + 0xc);
      if (iVar7 != 0) {
        iVar3 = (**(code **)(iVar5 + 0x263e26))(0x14);
        iVar4 = (*(int *)(iVar7 + 0x2c) + *(int *)(iVar7 + 0xc) + *(int *)(iVar7 + 0x1c) +
                *(int *)(iVar7 + 0x3c)) * iVar3 + iVar4;
        local_1c[0] = iVar4;
        iVar3 = FUN_0025aeb8(*(undefined4 *)(iVar7 + 0x14));
        iVar4 = iVar4 + iVar3;
        local_1c[0] = iVar4;
        iVar3 = FUN_0025aeb8(*(undefined4 *)(iVar7 + 0x34));
        iVar4 = iVar4 + iVar3;
        local_1c[0] = iVar4;
        iVar3 = FUN_0025aeb8(*(undefined4 *)(iVar7 + 0x24));
        iVar4 = iVar4 + iVar3;
        local_1c[0] = iVar4;
        local_1c[0] = FUN_0025aeb8(*(undefined4 *)(iVar7 + 0x44));
        local_1c[0] = iVar4 + local_1c[0];
        for (puVar6 = *(undefined4 **)(iVar7 + 0x30); puVar6 != (undefined4 *)0x0;
            puVar6 = (undefined4 *)*puVar6) {
          FUN_002614e4(param_1,puVar6[2]);
        }
        for (puVar6 = *(undefined4 **)(iVar7 + 0x10); puVar6 != (undefined4 *)0x0;
            puVar6 = (undefined4 *)*puVar6) {
          FUN_00260e84(param_1,puVar6[2]);
        }
      }
    }
    *(undefined4 *)(param_1 + 0x1f0) = 0;
    FUN_00262022(param_1);
    *param_4 = 0;
    *param_3 = local_1c[0];
    iVar4 = 0;
    break;
  case 3:
    local_1c[0] = 0;
    *(int **)(param_1 + 0x1f0) = local_1c;
    for (iVar5 = *(int *)(param_1 + 4); iVar5 != 0; iVar5 = *(int *)(iVar5 + 0x3c)) {
      FUN_00263bd6(param_1,iVar5);
    }
    *(undefined4 *)(param_1 + 0x1f0) = 0;
    *param_4 = 0;
    iVar5 = local_1c[0];
    goto LAB_00263ef6;
  case 4:
  case 5:
  case 6:
    *param_3 = 0;
    iVar5 = param_1 + (param_2 + 0x38) * 4;
    *param_4 = *(int *)(iVar5 + 4);
    iVar4 = param_5;
    if (param_5 != 0) {
      *(undefined4 *)(iVar5 + 4) = 0;
      iVar4 = 0;
    }
    break;
  case 7:
  case 8:
  case 9:
    iVar5 = 0;
    iVar7 = (param_2 + 0x21) * 4;
    for (iVar4 = 0; iVar4 < *(int *)(param_1 + 0x14); iVar4 = iVar4 + 1) {
      iVar3 = *(int *)(*(int *)(param_1 + 0x10) + iVar4 * 0x10 + 4);
      if (iVar3 != 0) {
        iVar3 = **(int **)(iVar3 + 4);
        iVar5 = iVar5 + *(int *)(iVar7 + iVar3);
        if (param_5 != 0) {
          *(undefined4 *)(iVar7 + iVar3) = 0;
        }
      }
    }
    *param_4 = 0;
LAB_00263ef6:
    *param_3 = iVar5;
    iVar4 = 0;
  }
  sqlite3_mutex_leave(*(undefined4 *)(param_1 + 0xc));
  return iVar4;
}


