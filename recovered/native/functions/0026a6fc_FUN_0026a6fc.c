/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0026a6fc FUN_0026a6fc */

undefined4 FUN_0026a6fc(undefined4 *param_1,int param_2,int param_3,int *param_4,int *param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 *puVar7;
  int iVar8;
  int local_40;
  int local_3c;
  int local_2c;
  
  iVar8 = *(int *)(param_3 + 0x14);
  iVar2 = *(int *)(param_3 + 0x28);
  if (iVar8 == 1) {
    if (-1 < *(int *)(param_2 + 4)) {
      if (iVar2 == 0) {
        return 0;
      }
      iVar1 = sqlite3_stricmp(*(undefined4 *)
                               (*(int *)(param_2 + 4) * 0x18 + *(int *)(param_2 + 0xc)),iVar2);
      if (iVar1 == 0) {
        return 0;
      }
    }
    puVar7 = (undefined4 *)0x0;
  }
  else if (param_5 == (int *)0x0) {
    puVar7 = (undefined4 *)0x0;
  }
  else {
    puVar7 = (undefined4 *)FUN_0025ee10(*param_1,iVar8 << 2);
    if (puVar7 == (undefined4 *)0x0) {
      return 1;
    }
    *param_5 = (int)puVar7;
  }
  iVar6 = *(int *)(param_2 + 0x10);
  iVar1 = DAT_0026a860 + 0x26a75e;
  do {
    if (iVar6 == 0) {
      if (*(char *)((int)param_1 + 0x1ca) == '\0') {
        FUN_00268e48(param_1,DAT_0026a864 + 0x26a840);
      }
      FUN_0025fbda(*param_1,puVar7);
      return 1;
    }
    if ((*(int *)(iVar6 + 0x24) == iVar8) && (*(char *)(iVar6 + 0x2c) != '\0')) {
      local_3c = 0;
      if (iVar2 == 0) {
        if (*(char *)(iVar6 + 0x2d) == '\x02') {
          if (puVar7 != (undefined4 *)0x0) {
            for (iVar2 = 0; iVar2 < iVar8; iVar2 = iVar2 + 1) {
              *puVar7 = *(undefined4 *)(param_3 + 0x24);
              puVar7 = puVar7 + 1;
              param_3 = param_3 + 8;
            }
          }
LAB_0026a830:
          *param_4 = iVar6;
          return 0;
        }
      }
      else {
        for (; local_3c < iVar8; local_3c = local_3c + 1) {
          iVar3 = *(int *)(*(int *)(iVar6 + 4) + local_3c * 4) * 0x18;
          iVar4 = *(int *)(*(int *)(param_2 + 0xc) + iVar3 + 0x10);
          if (iVar4 == 0) {
            iVar4 = iVar1;
          }
          iVar4 = sqlite3_stricmp(*(undefined4 *)(*(int *)(iVar6 + 0x20) + local_3c * 4),iVar4);
          if (iVar4 != 0) break;
          uVar5 = *(undefined4 *)(*(int *)(param_2 + 0xc) + iVar3);
          local_2c = param_3;
          for (local_40 = 0; local_40 < iVar8; local_40 = local_40 + 1) {
            iVar4 = sqlite3_stricmp(*(undefined4 *)(local_2c + 0x28),uVar5);
            local_2c = local_2c + 8;
            if (iVar4 == 0) {
              if (puVar7 != (undefined4 *)0x0) {
                puVar7[local_3c] = *(undefined4 *)(param_3 + (local_40 + 4) * 8 + 4);
              }
              break;
            }
          }
          if (local_40 == iVar8) break;
        }
        if (local_3c == iVar8) goto LAB_0026a830;
      }
    }
    iVar6 = *(int *)(iVar6 + 0x14);
  } while( true );
}


