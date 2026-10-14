/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002812a0 FUN_002812a0 */

void FUN_002812a0(undefined4 param_1,undefined4 *param_2,uint param_3,undefined4 param_4)

{
  bool bVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 uVar7;
  char *pcVar8;
  code *pcVar9;
  uint local_2c [2];
  undefined4 local_24;
  int local_20;
  undefined4 local_1c [2];
  
  *param_2 = 0;
  local_24 = 0;
  local_20 = 0;
  local_2c[0] = param_3;
  iVar2 = sqlite3_initialize();
  if (iVar2 != 0) {
    return;
  }
  if ((0x46 >> (local_2c[0] & 7) & 1U) == 0) {
    FUN_0026adf0(DAT_002815d4);
    return;
  }
  iVar2 = *(int *)(DAT_002815d8 + 0x2812e2);
  if (((iVar2 != 0) && (iVar2 = 0, -1 < (int)(local_2c[0] << 0x10))) &&
     (iVar2 = 1, -1 < (int)(local_2c[0] << 0xf))) {
    iVar2 = *(int *)(DAT_002815d8 + 0x2812e6);
  }
  if ((int)(local_2c[0] << 0xd) < 0) {
    local_2c[0] = local_2c[0] & DAT_002815dc;
  }
  else if (*(int *)(DAT_002815e0 + 0x2813c0) != 0) {
    local_2c[0] = local_2c[0] | 0x20000;
  }
  local_2c[0] = DAT_002815e4 & local_2c[0];
  puVar3 = (undefined4 *)FUN_0025f3a8(0x1f8);
  if (puVar3 != (undefined4 *)0x0) {
    if (iVar2 != 0) {
      iVar2 = FUN_0025ad68(1);
      puVar3[3] = iVar2;
      if (iVar2 == 0) {
        sqlite3_free(puVar3);
        puVar3 = (undefined4 *)0x0;
        goto LAB_00281594;
      }
    }
    sqlite3_mutex_enter(puVar3[3]);
    puVar3[5] = 2;
    iVar2 = DAT_002815ec;
    puVar3[0x10] = DAT_002815e8;
    puVar3[4] = puVar3 + 0x6e;
    puVar3[0xc] = 0xff;
    uVar5 = *(undefined4 *)(iVar2 + 0x281376);
    uVar7 = *(undefined4 *)(iVar2 + 0x28137a);
    puVar3[0x13] = *(undefined4 *)(iVar2 + 0x281372);
    puVar3[0x14] = uVar5;
    puVar3[0x15] = uVar7;
    uVar5 = *(undefined4 *)(iVar2 + 0x281382);
    uVar7 = *(undefined4 *)(iVar2 + 0x281386);
    puVar3[0x16] = *(undefined4 *)(iVar2 + 0x28137e);
    puVar3[0x17] = uVar5;
    puVar3[0x18] = uVar7;
    uVar5 = *(undefined4 *)(iVar2 + 0x28138e);
    uVar7 = *(undefined4 *)(iVar2 + 0x281392);
    puVar3[0x19] = *(undefined4 *)(iVar2 + 0x28138a);
    puVar3[0x1a] = uVar5;
    puVar3[0x1b] = uVar7;
    uVar5 = *(undefined4 *)(iVar2 + 0x28139a);
    puVar3[0x1c] = *(undefined4 *)(iVar2 + 0x281396);
    puVar3[0x1d] = uVar5;
    *(undefined1 *)(puVar3 + 0xe) = 0xff;
    *(undefined1 *)(puVar3 + 0xd) = 1;
    iVar2 = DAT_002815f4;
    puVar3[6] = puVar3[6] | DAT_002815f0;
    puVar3[0xf] = 0;
    iVar2 = iVar2 + 0x281398;
    puVar3[0x69] = 0;
    puVar3[0x68] = 0;
    puVar3[0x67] = 0;
    iVar6 = DAT_002815f8;
    puVar3[0x6a] = 0;
    puVar3[0x4b] = 0;
    puVar3[0x4a] = 0;
    iVar6 = iVar6 + 0x2813b4;
    puVar3[0x49] = 0;
    puVar3[0x4c] = 0;
    FUN_0026ae10(puVar3,iVar2,1,0,iVar6,0);
    FUN_0026ae10(puVar3,iVar2,3,0,iVar6,0);
    FUN_0026ae10(puVar3,iVar2,2,0,iVar6,0);
    pcVar8 = (char *)((int)puVar3 + 0x36);
    FUN_0026ae10(puVar3,DAT_002815fc + 0x2813f2,1,1,iVar6,0);
    if (*pcVar8 == '\0') {
      uVar5 = FUN_00261718(puVar3,1,iVar2,0);
      iVar6 = DAT_00281604;
      iVar2 = DAT_00281600;
      puVar3[2] = uVar5;
      FUN_0026ae10(puVar3,iVar6 + 0x28141e,1,0,iVar2 + 0x28141c,0);
      puVar3[10] = local_2c[0];
      iVar2 = FUN_002728dc(param_4,param_1,local_2c,puVar3,&local_24,&local_20);
      if (iVar2 == 0) {
        iVar2 = FUN_00275720(*puVar3,local_24,puVar3,puVar3[4] + 4,0,local_2c[0] | 0x100);
        if (iVar2 == 0) {
          iVar2 = puVar3[4];
          uVar5 = FUN_002621c8(puVar3,*(undefined4 *)(iVar2 + 4));
          *(undefined4 *)(iVar2 + 0xc) = uVar5;
          iVar6 = puVar3[4];
          uVar5 = FUN_002621c8(puVar3,0);
          iVar2 = DAT_00281610;
          *(undefined4 *)(iVar6 + 0x1c) = uVar5;
          *(int *)puVar3[4] = iVar2 + 0x2814b6;
          *(undefined1 *)(puVar3[4] + 9) = 3;
          *(int *)(puVar3[4] + 0x10) = DAT_00281614 + 0x2814c6;
          *(undefined1 *)(puVar3[4] + 0x19) = 1;
          puVar3[0x10] = DAT_00281618;
          if (*pcVar8 == '\0') {
            FUN_00268578(puVar3,0);
            iVar2 = sqlite3_overload_function(puVar3,DAT_0028161c + 0x2814e6,2);
            if (iVar2 == 7) {
              *pcVar8 = '\x01';
            }
            iVar6 = sqlite3_errcode(puVar3);
            iVar2 = DAT_00281620;
            if (iVar6 == 0) {
              if (*(int *)(DAT_00281620 + 0x281552) != 0) {
                iVar6 = 0;
                do {
                  uVar5 = FUN_0025ad68(2);
                  sqlite3_mutex_enter();
                  bVar1 = *(int *)(iVar2 + 0x281552) <= iVar6;
                  if (bVar1) {
                    pcVar9 = (code *)0x0;
                  }
                  else {
                    pcVar9 = *(code **)(iVar6 * 4 + *(int *)(iVar2 + 0x281556));
                  }
                  bVar1 = !bVar1;
                  sqlite3_mutex_leave(uVar5);
                  local_1c[0] = 0;
                  if ((pcVar9 != (code *)0x0) &&
                     (iVar4 = (*pcVar9)(puVar3,local_1c,DAT_00281624 + 0x28153e), iVar4 != 0)) {
                    FUN_00268578(puVar3,iVar4,DAT_00281628 + 0x28154c,local_1c[0]);
                    bVar1 = false;
                  }
                  sqlite3_free(local_1c[0]);
                  iVar6 = iVar6 + 1;
                } while (bVar1);
              }
              iVar6 = sqlite3_errcode(puVar3);
              if (iVar6 != 0) goto LAB_00281594;
            }
            FUN_00268578(puVar3,iVar6,0);
            if (puVar3[0x3b] == 0) {
              FUN_00262f98(puVar3,0,*(undefined4 *)(DAT_0028162c + 0x281592),
                           *(undefined4 *)(DAT_0028162c + 0x281596));
            }
            sqlite3_wal_autocheckpoint(puVar3,1000);
          }
        }
        else {
          if (iVar2 == DAT_0028160c) {
            iVar2 = 7;
          }
          FUN_00268578(puVar3,iVar2,0);
        }
      }
      else {
        if (iVar2 == 7) {
          *pcVar8 = '\x01';
        }
        iVar6 = local_20;
        if (local_20 != 0) {
          iVar6 = DAT_00281608 + 0x281458;
        }
        FUN_00268578(puVar3,iVar2,iVar6);
        sqlite3_free(local_20);
      }
    }
  }
LAB_00281594:
  sqlite3_free(local_24);
  if (puVar3 != (undefined4 *)0x0) {
    sqlite3_mutex_leave(puVar3[3]);
  }
  iVar2 = sqlite3_errcode(puVar3);
  if (iVar2 == 7) {
    sqlite3_close(puVar3);
    puVar3 = (undefined4 *)0x0;
  }
  else if (iVar2 != 0) {
    puVar3[0x10] = DAT_00281630;
  }
  *param_2 = puVar3;
  FUN_002685e0(0,iVar2);
  return;
}


