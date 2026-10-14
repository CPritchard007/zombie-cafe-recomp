/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0028cb78 FUN_0028cb78 */

void FUN_0028cb78(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  int *piVar1;
  int iVar2;
  void *__dest;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int local_3c;
  undefined4 local_2c;
  undefined4 local_28;
  uint local_24;
  int local_20;
  undefined4 local_1c [2];
  
  piVar1 = (int *)sqlite3_context_db_handle();
  local_2c = 0;
  local_28 = 0;
  local_20 = 0;
  local_3c = sqlite3_value_text(*param_3);
  iVar2 = sqlite3_value_text(param_3[1]);
  if (local_3c == 0) {
    local_3c = DAT_0028cde4 + 0x28cbaa;
  }
  if (iVar2 == 0) {
    iVar2 = DAT_0028cde8 + 0x28cbb4;
  }
  if (piVar1[0x1a] + 1 < piVar1[5]) {
    iVar5 = 0;
    local_20 = FUN_0026877c(piVar1,DAT_0028cdec + 0x28cbc6);
  }
  else {
    iVar5 = 0;
    if ((char)piVar1[0xd] == '\0') {
      iVar2 = DAT_0028cdf0 + 0x28cbde;
      iVar5 = 0;
    }
    else {
      while( true ) {
        piVar4 = (int *)piVar1[4];
        if (piVar1[5] <= iVar5) break;
        iVar6 = sqlite3_stricmp(piVar4[iVar5 * 4],iVar2);
        if (iVar6 == 0) {
          iVar6 = DAT_0028cdf4 + 0x28cbf6;
          iVar5 = 0;
          goto LAB_0028cd9a;
        }
        iVar5 = iVar5 + 1;
      }
      if (piVar4 == piVar1 + 0x6e) {
        __dest = (void *)FUN_0025ee10(piVar1,0x30);
        if (__dest == (void *)0x0) {
          return;
        }
        memcpy(__dest,(void *)piVar1[4],0x20);
      }
      else {
        __dest = (void *)FUN_002651e0(piVar1,piVar4,(piVar1[5] + 1) * 0x10);
        if (__dest == (void *)0x0) {
          return;
        }
      }
      piVar4 = (int *)((int)__dest + piVar1[5] * 0x10);
      piVar1[4] = (int)__dest;
      memset(piVar4,0,0x10);
      local_24 = piVar1[10];
      iVar5 = FUN_002728dc(*(undefined4 *)(*piVar1 + 0x10),local_3c,&local_24,local_1c,&local_2c,
                           &local_28);
      if (iVar5 != 0) {
        if (iVar5 == 7) {
          *(undefined1 *)((int)piVar1 + 0x36) = 1;
        }
        sqlite3_result_error(param_1,local_28,0xffffffff);
        sqlite3_free(local_28);
        return;
      }
      local_24 = local_24 | 0x100;
      iVar5 = FUN_00275720(local_1c[0],local_2c,piVar1,piVar4 + 1,0,local_24);
      sqlite3_free(local_2c);
      piVar1[5] = piVar1[5] + 1;
      if (iVar5 == 0x13) {
        iVar5 = 1;
        local_20 = FUN_0026877c(piVar1,DAT_0028cdf8 + 0x28ccb8);
      }
      else if (iVar5 == 0) {
        iVar6 = FUN_002621c8(piVar1,piVar4[1]);
        piVar4[3] = iVar6;
        if (iVar6 == 0) {
          iVar5 = 7;
        }
        else if ((*(char *)(iVar6 + 0x4c) != '\0') &&
                (*(char *)(iVar6 + 0x4d) != *(char *)(*(int *)(piVar1[4] + 0xc) + 0x4d))) {
          iVar5 = 1;
          local_20 = FUN_0026877c(piVar1,DAT_0028cdfc + 0x28ccf4);
        }
        FUN_0025c088(**(undefined4 **)(piVar4[1] + 4),*(undefined1 *)((int)piVar1 + 0x37));
        iVar6 = piVar4[1];
        uVar3 = FUN_00262088(*(undefined4 *)(piVar1[4] + 4),0xffffffff);
        FUN_00262088(iVar6,uVar3);
      }
      *(undefined1 *)((int)piVar4 + 9) = 3;
      iVar2 = FUN_0025f25a(piVar1,iVar2);
      *piVar4 = iVar2;
      if (iVar5 == 0) {
        if (iVar2 == 0) {
          iVar5 = 7;
        }
        else {
          FUN_00261fe0(piVar1);
          iVar5 = FUN_00287a10(piVar1,&local_20);
          FUN_00262022(piVar1);
          if (iVar5 == 0) {
            return;
          }
        }
      }
      iVar6 = piVar1[5];
      iVar2 = (iVar6 + -1) * 0x10;
      if (*(int *)(piVar1[4] + iVar2 + 4) != 0) {
        FUN_0027c61c();
        *(undefined4 *)(piVar1[4] + iVar2 + 4) = 0;
        *(undefined4 *)(piVar1[4] + iVar2 + 0xc) = 0;
      }
      FUN_00262044(piVar1);
      iVar2 = DAT_0028ce00;
      piVar1[5] = iVar6 + -1;
      if ((iVar5 + iVar2 != 0) && (iVar5 != 7)) {
        if (local_20 == 0) {
          iVar6 = DAT_0028ce08 + 0x28cd9c;
          iVar2 = local_3c;
LAB_0028cd9a:
          local_20 = FUN_0026877c(piVar1,iVar6,iVar2);
        }
        goto LAB_0028cda0;
      }
      *(undefined1 *)((int)piVar1 + 0x36) = 1;
      FUN_0025fbda(piVar1);
      iVar2 = DAT_0028ce04 + 0x28cd88;
    }
    local_20 = FUN_0026877c(piVar1,iVar2);
  }
LAB_0028cda0:
  if (local_20 != 0) {
    sqlite3_result_error(param_1,local_20,0xffffffff);
    FUN_0025fbda(piVar1,local_20);
  }
  if (iVar5 != 0) {
    sqlite3_result_error_code(param_1,iVar5);
  }
  return;
}


