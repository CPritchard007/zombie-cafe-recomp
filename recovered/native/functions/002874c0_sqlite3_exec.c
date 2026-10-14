/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002874c0 sqlite3_exec */

int sqlite3_exec(int param_1,byte *param_2,code *param_3,undefined4 param_4,undefined4 *param_5)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  void *__dest;
  void *__src;
  byte bVar6;
  undefined4 *puVar7;
  int iVar8;
  byte *pbVar9;
  byte *pbVar10;
  undefined4 *puVar11;
  int local_4c;
  undefined4 *local_48;
  byte *local_20;
  int local_1c [2];
  
  local_1c[0] = 0;
  iVar3 = FUN_0026bd6c();
  if (iVar3 == 0) {
    iVar3 = FUN_0026adf0(DAT_002876e8);
  }
  else {
    if (param_2 == (byte *)0x0) {
      param_2 = (byte *)(DAT_002876ec + 0x2874ec);
    }
    sqlite3_mutex_enter(*(undefined4 *)(param_1 + 0xc));
    iVar3 = 0;
    FUN_00268578(param_1,0,0);
    bVar6 = 0;
LAB_00287656:
    pbVar10 = param_2;
    if (*pbVar10 != 0) {
      local_1c[0] = 0;
      iVar3 = sqlite3_prepare(param_1,pbVar10,0xffffffff,local_1c,&local_20);
      if (iVar3 == 0) goto LAB_0028751c;
      goto LAB_00287648;
    }
    puVar11 = (undefined4 *)0x0;
LAB_00287666:
    if (local_1c[0] != 0) {
      FUN_002810d0();
    }
    FUN_0025fbda(param_1,puVar11);
    iVar3 = FUN_002685e0(param_1,iVar3);
    if ((iVar3 == 0) || (iVar5 = sqlite3_errcode(param_1), iVar3 != iVar5)) {
      if (param_5 != (undefined4 *)0x0) {
        *param_5 = 0;
      }
    }
    else if (param_5 != (undefined4 *)0x0) {
      sqlite3_errmsg(param_1);
      iVar5 = FUN_0025b154();
      __dest = (void *)FUN_0025edc8(iVar5 + 1U);
      *param_5 = __dest;
      if (__dest == (void *)0x0) {
        FUN_00268578(param_1,7,0);
        iVar3 = 7;
      }
      else {
        __src = (void *)sqlite3_errmsg();
        memcpy(__dest,__src,iVar5 + 1U);
      }
    }
    sqlite3_mutex_leave(*(undefined4 *)(param_1 + 0xc));
  }
  return iVar3;
LAB_0028751c:
  param_2 = local_20;
  if (local_1c[0] != 0) {
    iVar5 = sqlite3_column_count();
    puVar11 = (undefined4 *)0x0;
    local_48 = (undefined4 *)0x0;
    bVar2 = false;
    do {
      iVar3 = sqlite3_step(local_1c[0]);
      if (param_3 != (code *)0x0) {
        if (iVar3 == 100) {
          if (!bVar2) goto LAB_00287564;
LAB_0028759c:
          local_48 = puVar11 + iVar5;
          for (local_4c = 0; local_4c < iVar5; local_4c = local_4c + 1) {
            iVar8 = sqlite3_column_text(local_1c[0],local_4c);
            local_48[local_4c] = iVar8;
            if ((iVar8 == 0) && (iVar8 = sqlite3_column_type(local_1c[0],local_4c), iVar8 != 5)) {
              *(undefined1 *)(param_1 + 0x36) = 1;
              iVar3 = 100;
              goto LAB_00287666;
            }
          }
        }
        else {
          if (((bVar2) || (iVar3 != 0x65)) || (-1 < *(int *)(param_1 + 0x18) << 0x12)) break;
LAB_00287564:
          puVar11 = (undefined4 *)FUN_0025f04c(param_1,iVar5 * 8 + 1);
          if (puVar11 == (undefined4 *)0x0) goto LAB_00287666;
          puVar7 = puVar11;
          for (iVar8 = 0; iVar8 < iVar5; iVar8 = iVar8 + 1) {
            uVar4 = sqlite3_column_name(local_1c[0],iVar8);
            *puVar7 = uVar4;
            puVar7 = puVar7 + 1;
          }
          bVar2 = true;
          if (iVar3 == 100) goto LAB_0028759c;
        }
        iVar8 = (*param_3)(param_4,iVar5,local_48,puVar11);
        if (iVar8 != 0) {
          FUN_002810d0(local_1c[0]);
          local_1c[0] = 0;
          iVar3 = 4;
          FUN_00268578(param_1,4);
          goto LAB_00287666;
        }
      }
    } while (iVar3 == 100);
    iVar3 = FUN_002810d0(local_1c[0]);
    local_1c[0] = 0;
    pbVar9 = local_20;
    if (iVar3 != 0x11) {
      while (bVar1 = *(byte *)(DAT_002876f0 + 0x28766c + (uint)*pbVar9), bVar6 = bVar1 & 1,
            pbVar10 = pbVar9, (bVar1 & 1) != 0) {
        pbVar9 = pbVar9 + 1;
      }
    }
    FUN_0025fbda(param_1,puVar11);
    param_2 = pbVar10;
    if (iVar3 != 0) {
LAB_00287648:
      if ((iVar3 != 0x11) || (bVar6 != 0)) {
        puVar11 = (undefined4 *)0x0;
        goto LAB_00287666;
      }
      bVar6 = 1;
      param_2 = pbVar10;
    }
  }
  goto LAB_00287656;
}


