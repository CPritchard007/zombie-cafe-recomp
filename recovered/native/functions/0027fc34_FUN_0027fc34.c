/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0027fc34 FUN_0027fc34 */

int FUN_0027fc34(int param_1,int *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  byte local_31;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c [2];
  
  iVar5 = *(int *)(param_1 + 4);
  if (*(char *)(iVar5 + 0x11) == '\0') {
    local_28 = FUN_0027daa4(iVar5,&local_30,&local_2c,1,0);
    if (local_28 != 0) {
      return local_28;
    }
LAB_0027fd8a:
    uVar3 = 10;
    if (param_3 << 0x1f < 0) {
      uVar3 = 0xd;
    }
    FUN_0026b790(local_30,uVar3);
    FUN_002749b4(*(undefined4 *)(local_30 + 0x44));
    *param_2 = local_2c;
    local_28 = 0;
  }
  else {
    for (iVar4 = *(int *)(iVar5 + 8); iVar4 != 0; iVar4 = *(int *)(iVar4 + 8)) {
      sqlite3_free(*(undefined4 *)(iVar4 + 0x14));
      *(undefined4 *)(iVar4 + 0x14) = 0;
    }
    FUN_00262122(param_1,4,&local_2c);
    iVar1 = DAT_0027fdb0;
    iVar4 = local_2c;
    do {
      do {
        local_2c = iVar4 + 1;
        iVar4 = local_2c;
        iVar2 = FUN_0025c29c(iVar5,local_2c);
      } while (iVar4 == iVar2);
      iVar2 = __udivsi3(*(undefined4 *)(iVar1 + 0x27fcde),*(undefined4 *)(iVar5 + 0x20));
    } while (iVar4 == iVar2 + 1);
    local_28 = FUN_0027daa4(iVar5,&local_20,&local_24,iVar4,1);
    if (local_28 != 0) {
      return local_28;
    }
    if (local_24 == local_2c) {
      local_30 = local_20;
      local_28 = 0;
LAB_0027fd4c:
      FUN_0027df1c(iVar5,local_2c,1,0,&local_28);
      if ((local_28 == 0) && (local_28 = FUN_0027e4f4(param_1,4,local_2c), local_28 == 0))
      goto LAB_0027fd8a;
    }
    else {
      local_31 = 0;
      local_1c[0] = local_28;
      FUN_00274a30();
      local_28 = FUN_00274984(iVar5,local_2c,&local_30,0);
      if (local_28 != 0) {
        return local_28;
      }
      local_28 = FUN_00274ed0(iVar5,local_2c,&local_31,local_1c);
      if (local_31 - 1 < 2) {
        local_28 = FUN_0026b4e4(DAT_0027fdb4);
      }
      if (local_28 == 0) {
        local_28 = FUN_0027e104(iVar5,local_30,local_31,local_1c[0],local_24,0);
        FUN_00274a30(local_30);
        if (local_28 != 0) {
          return local_28;
        }
        local_28 = FUN_00274984(iVar5,local_2c,&local_30,0);
        if (local_28 != 0) {
          return local_28;
        }
        local_28 = FUN_002733c4(*(undefined4 *)(local_30 + 0x44));
        if (local_28 == 0) goto LAB_0027fd4c;
      }
    }
    FUN_00274a30(local_30);
  }
  return local_28;
}


