/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0027028c FUN_0027028c */

void FUN_0027028c(undefined4 param_1,int param_2,undefined4 *param_3)

{
  byte bVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  byte *pbVar7;
  byte *pbVar8;
  uint uVar9;
  int iVar10;
  int local_30;
  void *local_2c;
  byte *local_28;
  undefined4 *local_24;
  
  iVar2 = sqlite3_value_type(*param_3);
  if (iVar2 == 5) {
    return;
  }
  local_2c = (void *)sqlite3_value_text(*param_3);
  if (local_2c == (void *)0x0) {
    return;
  }
  local_30 = sqlite3_value_bytes(*param_3);
  if (param_2 == 1) {
    local_24 = (undefined4 *)(DAT_00270418 + 0x27039c);
    local_28 = (byte *)0x0;
    puVar3 = (undefined4 *)(DAT_0027041c + 0x2703c8);
    iVar2 = 1;
  }
  else {
    local_28 = (byte *)sqlite3_value_text(param_3[1]);
    if (local_28 == (byte *)0x0) {
      return;
    }
    uVar9 = 0;
    pbVar8 = local_28;
    while (bVar1 = *pbVar8, bVar1 != 0) {
      pbVar8 = pbVar8 + 1;
      if (0xbf < bVar1) {
        for (; (*pbVar8 & 0xc0) == 0x80; pbVar8 = pbVar8 + 1) {
        }
      }
      uVar9 = uVar9 + 1;
    }
    if (uVar9 == 0) goto LAB_00270404;
    iVar2 = (int)uVar9 >> 0x1f;
    puVar3 = (undefined4 *)
             FUN_0026599c(param_1,iVar2,uVar9 * 5,
                          (iVar2 << 2 | uVar9 >> 0x1e) + iVar2 + (uint)CARRY4(uVar9 * 4,uVar9));
    if (puVar3 == (undefined4 *)0x0) {
      return;
    }
    local_24 = puVar3 + uVar9;
    iVar2 = 0;
    puVar6 = puVar3;
    pbVar8 = local_28;
    while (*pbVar8 != 0) {
      *puVar6 = pbVar8;
      puVar6 = puVar6 + 1;
      pbVar7 = pbVar8 + 1;
      if (0xbf < *pbVar8) {
        for (; (*pbVar7 & 0xc0) == 0x80; pbVar7 = pbVar7 + 1) {
        }
      }
      *(char *)((int)local_24 + iVar2) = (char)pbVar7 - (char)pbVar8;
      iVar2 = iVar2 + 1;
      pbVar8 = pbVar7;
    }
    if (iVar2 == 0) goto LAB_00270404;
  }
  iVar4 = sqlite3_user_data(param_1);
  if (iVar4 << 0x1f < 0) {
    for (; 0 < local_30; local_30 = local_30 - uVar9) {
      iVar10 = 0;
      puVar6 = puVar3;
      while ((uVar9 = (uint)*(byte *)((int)local_24 + iVar10), local_30 < (int)uVar9 ||
             (iVar5 = memcmp(local_2c,(void *)*puVar6,uVar9), iVar5 != 0))) {
        iVar10 = iVar10 + 1;
        puVar6 = puVar6 + 1;
        if (iVar2 <= iVar10) goto LAB_002703b6;
      }
      if (iVar2 <= iVar10) break;
      local_2c = (void *)((int)local_2c + uVar9);
    }
  }
LAB_002703b6:
  iVar10 = local_30;
  if (iVar4 << 0x1e < 0) {
LAB_002703ec:
    local_30 = iVar10;
    if (0 < local_30) {
      iVar4 = 0;
      puVar6 = puVar3;
      do {
        uVar9 = (uint)*(byte *)((int)local_24 + iVar4);
        if ((int)uVar9 <= local_30) {
          iVar10 = memcmp((void *)((int)local_2c + (local_30 - uVar9)),(void *)*puVar6,uVar9);
          if (iVar10 == 0) goto LAB_002703e4;
        }
        iVar4 = iVar4 + 1;
        puVar6 = puVar6 + 1;
        if (iVar2 <= iVar4) break;
      } while( true );
    }
  }
LAB_002703f8:
  if (local_28 != (byte *)0x0) {
    sqlite3_free(puVar3);
  }
LAB_00270404:
  sqlite3_result_text(param_1,local_2c,local_30,0xffffffff);
  return;
LAB_002703e4:
  iVar10 = local_30 - uVar9;
  if (iVar2 <= iVar4) goto LAB_002703f8;
  goto LAB_002703ec;
}


