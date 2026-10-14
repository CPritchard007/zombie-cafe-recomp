/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0027c6ec FUN_0027c6ec */

undefined8 FUN_0027c6ec(int *param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  undefined4 *puVar5;
  int iVar6;
  int *local_20;
  int local_1c;
  
  local_1c = param_2;
  if ((param_1[0x10] == DAT_0027c89c) && (param_1[1] == 0)) {
    for (iVar6 = 0; iVar6 < param_1[5]; iVar6 = iVar6 + 1) {
      iVar1 = *(int *)(param_1[4] + iVar6 * 0x10 + 4);
      if ((iVar1 != 0) && (*(int *)(iVar1 + 0x10) != 0)) goto LAB_0027c71c;
    }
    FUN_002600ce(param_1);
    for (iVar6 = 0; iVar6 < param_1[5]; iVar6 = iVar6 + 1) {
      iVar1 = param_1[4] + iVar6 * 0x10;
      if (*(int *)(iVar1 + 4) != 0) {
        FUN_0027c61c();
        *(undefined4 *)(iVar1 + 4) = 0;
        if (iVar6 != 1) {
          *(undefined4 *)(iVar1 + 0xc) = 0;
        }
      }
    }
    if (*(int *)(param_1[4] + 0x1c) != 0) {
      FUN_00261686();
    }
    FUN_0026005c(param_1);
    FUN_0026044c(param_1);
    local_20 = param_1 + 0x17;
    piVar4 = param_1;
    do {
      iVar6 = piVar4[0x50];
      while (iVar6 != 0) {
        local_1c = *(int *)(iVar6 + 0x1c);
        iVar1 = iVar6;
        do {
          piVar2 = *(int **)(iVar1 + 0x20);
          if ((piVar2 != (int *)0x0) && (iVar6 = *piVar2, *piVar2 = iVar6 + -1, iVar6 + -1 == 0)) {
            (*(code *)piVar2[1])(piVar2[2]);
            FUN_0025fbda(param_1,piVar2);
          }
          iVar3 = *(int *)(iVar1 + 8);
          FUN_0025fbda(param_1,iVar1);
          iVar6 = local_1c;
          iVar1 = iVar3;
        } while (iVar3 != 0);
      }
      piVar4 = piVar4 + 1;
    } while (piVar4 != local_20);
    for (puVar5 = (undefined4 *)param_1[0x69]; puVar5 != (undefined4 *)0x0;
        puVar5 = (undefined4 *)*puVar5) {
      local_20 = (int *)puVar5[2];
      iVar6 = 3;
      piVar4 = local_20;
      do {
        if ((code *)piVar4[4] != (code *)0x0) {
          (*(code *)piVar4[4])(piVar4[2]);
        }
        iVar6 = iVar6 + -1;
        piVar4 = piVar4 + 5;
      } while (iVar6 != 0);
      FUN_0025fbda(param_1,local_20);
    }
    FUN_0025f666(param_1 + 0x67);
    for (puVar5 = (undefined4 *)param_1[0x4b]; puVar5 != (undefined4 *)0x0;
        puVar5 = (undefined4 *)*puVar5) {
      iVar6 = puVar5[2];
      if (*(code **)(iVar6 + 0xc) != (code *)0x0) {
        (**(code **)(iVar6 + 0xc))(*(undefined4 *)(iVar6 + 8));
      }
      FUN_0025fbda(param_1,iVar6);
    }
    FUN_0025f666(param_1 + 0x49);
    FUN_00268578(param_1,0,0);
    if (param_1[0x34] != 0) {
      FUN_00263758();
    }
    for (iVar6 = 0; iVar6 < param_1[0x23]; iVar6 = iVar6 + 1) {
      (**(code **)(*param_1 + 0x34))(*param_1,*(undefined4 *)(iVar6 * 4 + param_1[0x24]));
    }
    FUN_0025fbda(param_1,param_1[0x24]);
    param_1[0x10] = DAT_0027c8a0;
    FUN_0025fbda(param_1,*(undefined4 *)(param_1[4] + 0x1c));
    sqlite3_mutex_leave(param_1[3]);
    param_1[0x10] = DAT_0027c8a4;
    sqlite3_mutex_free(param_1[3]);
    if (*(char *)((int)param_1 + 0xeb) != '\0') {
      sqlite3_free(param_1[0x41]);
    }
    sqlite3_free(param_1);
  }
  else {
LAB_0027c71c:
    sqlite3_mutex_leave(param_1[3]);
    local_20 = param_1;
  }
  return CONCAT44(local_1c,local_20);
}


