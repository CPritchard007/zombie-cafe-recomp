/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0026c2f0 FUN_0026c2f0 */

int FUN_0026c2f0(int param_1,int param_2)

{
  undefined1 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  undefined2 local_28;
  undefined2 local_26;
  int local_24;
  int local_20;
  
  if ((int)(uint)*(byte *)(param_1 + 0x10) <= param_2) {
    return 0;
  }
  FUN_0025bb6c();
  iVar6 = *(int *)(param_1 + 8);
  uVar1 = (undefined1)param_2;
  if (1 < *(byte *)(param_1 + 0x10)) {
    if (param_2 == 1) {
      local_28 = 0;
      local_26 = 0;
      local_24 = *(int *)(DAT_0026c3f0 + 0x26c386) + 2;
      local_20 = 0x1fe;
      iVar2 = FUN_0025bb88(param_1,&local_28);
      if (iVar2 != 0) {
        puVar3 = (undefined4 *)__errno();
        iVar2 = DAT_0026c3f4;
        *(undefined4 *)(param_1 + 0x14) = *puVar3;
        goto LAB_0026c3e0;
      }
    }
    local_28 = 2;
    local_26 = 0;
    local_24 = *(int *)(DAT_0026c3f8 + 0x26c3c0);
    local_20 = 2;
    iVar2 = FUN_0025bb88(param_1,&local_28);
    if (iVar2 != 0) {
      puVar3 = (undefined4 *)__errno();
      iVar2 = DAT_0026c3fc;
      *(undefined4 *)(param_1 + 0x14) = *puVar3;
      goto LAB_0026c3e0;
    }
    *(undefined1 *)(iVar6 + 0xc) = 1;
  }
  iVar2 = 0;
  if (param_2 == 0) {
    iVar5 = *(int *)(iVar6 + 8) + -1;
    *(int *)(iVar6 + 8) = iVar5;
    iVar2 = 0;
    if (iVar5 == 0) {
      local_28 = 2;
      local_26 = 0;
      local_24 = param_2;
      local_20 = param_2;
      iVar5 = FUN_0025bb88(param_1,&local_28);
      if (iVar5 == 0) {
        *(undefined1 *)(iVar6 + 0xc) = uVar1;
      }
      else {
        puVar3 = (undefined4 *)__errno();
        iVar2 = DAT_0026c3fc;
        *(undefined4 *)(param_1 + 0x14) = *puVar3;
        *(undefined1 *)(iVar6 + 0xc) = uVar1;
        *(undefined1 *)(param_1 + 0x10) = uVar1;
      }
    }
    iVar5 = *(int *)(iVar6 + 0x18) + -1;
    *(int *)(iVar6 + 0x18) = iVar5;
    if (iVar5 == 0) {
      iVar6 = *(int *)(param_1 + 8);
      puVar3 = *(undefined4 **)(iVar6 + 0x1c);
      while (puVar3 != (undefined4 *)0x0) {
        puVar4 = (undefined4 *)puVar3[2];
        FUN_0026c198(param_1,*puVar3,DAT_0026c400);
        sqlite3_free(puVar3);
        puVar3 = puVar4;
      }
      *(undefined4 *)(iVar6 + 0x1c) = 0;
    }
  }
LAB_0026c3e0:
  FUN_0025bb7a();
  if (iVar2 == 0) {
    *(undefined1 *)(param_1 + 0x10) = uVar1;
  }
  return iVar2;
}


