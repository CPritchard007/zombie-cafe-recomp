/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0025f8f8 FUN_0025f8f8 */

int * FUN_0025f8f8(int *param_1,uint param_2,int param_3)

{
  int *piVar1;
  int extraout_r1;
  int extraout_r1_00;
  int extraout_r1_01;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  undefined4 *puVar7;
  uint local_2c;
  
  puVar7 = (undefined4 *)*param_1;
  sqlite3_mutex_enter(*puVar7);
  piVar1 = (int *)param_1[10];
  piVar6 = piVar1;
  if (piVar1 != (int *)0x0) {
    __aeabi_uidivmod(param_2);
    for (piVar6 = *(int **)(extraout_r1 * 4 + param_1[0xb]);
        (piVar6 != (int *)0x0 && (piVar6[2] != param_2)); piVar6 = (int *)piVar6[3]) {
    }
  }
  if ((piVar6 != (int *)0x0) || (param_3 == 0)) {
    FUN_0025bd5e(piVar6);
    if (piVar6 == (int *)0x0) {
      piVar6 = (int *)0x0;
      goto LAB_0025fb2a;
    }
  }
  else {
    if (param_3 == 1) {
      uVar3 = param_1[9] - param_1[8];
      if ((uVar3 < (uint)puVar7[3]) && (uVar3 < (uint)param_1[6])) {
        if ((*(int *)(DAT_0025fb3c + 0x25f9ae) == 0) ||
           (*(int *)(DAT_0025fb3c + 0x25f9aa) < param_1[1] + param_1[2])) {
          iVar4 = *(int *)(DAT_0025fb40 + 0x25fa0c);
        }
        else {
          iVar4 = *(int *)(DAT_0025fb3c + 0x25f9ca);
        }
        if (iVar4 == 0) goto LAB_0025f990;
      }
LAB_0025fb36:
      piVar6 = (int *)0x0;
      goto LAB_0025fb2a;
    }
LAB_0025f990:
    if (piVar1 <= (int *)param_1[9]) {
      uVar3 = (int)piVar1 * 2;
      if (uVar3 < 0x100) {
        uVar3 = 0x100;
      }
      sqlite3_mutex_leave(*(undefined4 *)*param_1);
      if (param_1[10] != 0) {
        FUN_0025ad28();
      }
      iVar4 = FUN_0025f3a8(uVar3 << 2);
      if (param_1[10] != 0) {
        FUN_0025ad3c();
      }
      sqlite3_mutex_enter(*(undefined4 *)*param_1);
      local_2c = 0;
      if (iVar4 != 0) {
        for (; local_2c < (uint)param_1[10]; local_2c = local_2c + 1) {
          iVar5 = *(int *)(param_1[0xb] + local_2c * 4);
          while (iVar5 != 0) {
            iVar2 = *(int *)(iVar5 + 0xc);
            __aeabi_uidivmod(*(undefined4 *)(iVar5 + 8),uVar3);
            piVar6 = (int *)(iVar4 + extraout_r1_00 * 4);
            *(int *)(iVar5 + 0xc) = *piVar6;
            *piVar6 = iVar5;
            iVar5 = iVar2;
          }
        }
        sqlite3_free();
        param_1[10] = uVar3;
        param_1[0xb] = iVar4;
      }
      if (param_1[0xb] == 0) goto LAB_0025fb36;
    }
    if ((param_1[3] == 0) || (piVar6 = (int *)puVar7[6], piVar6 == (int *)0x0)) {
LAB_0025fa98:
      if (param_3 == 1) {
        FUN_0025ad28();
      }
      sqlite3_mutex_leave(*(undefined4 *)*param_1);
      piVar1 = (int *)FUN_0025f320(param_1[1] + param_1[2] + 0x1c);
      iVar4 = param_1[1];
      sqlite3_mutex_enter(*(undefined4 *)*param_1);
      piVar6 = piVar1;
      if (piVar1 != (int *)0x0) {
        piVar6 = (int *)((int)piVar1 + iVar4);
        *piVar6 = (int)piVar1;
        piVar6[1] = (int)(piVar6 + 7);
        if (param_1[3] != 0) {
          *(int *)(*param_1 + 0x10) = *(int *)(*param_1 + 0x10) + 1;
        }
      }
      if (param_3 == 1) {
        FUN_0025ad3c();
      }
      if (piVar6 == (int *)0x0) goto LAB_0025fb36;
    }
    else {
      if ((param_1[9] + 1U < (uint)param_1[5]) && ((uint)puVar7[4] < (uint)puVar7[1])) {
        if ((*(int *)(DAT_0025fb44 + 0x25fa84) == 0) ||
           (*(int *)(DAT_0025fb44 + 0x25fa80) < param_1[1] + param_1[2])) {
          iVar4 = *(int *)(DAT_0025fb48 + 0x25fae2);
        }
        else {
          iVar4 = *(int *)(DAT_0025fb44 + 0x25faa0);
        }
        if (iVar4 == 0) goto LAB_0025fa98;
      }
      FUN_0025bda8(piVar6);
      FUN_0025bd5e(piVar6);
      iVar4 = piVar6[4];
      if (*(int *)(iVar4 + 4) + *(int *)(iVar4 + 8) != param_1[1] + param_1[2]) {
        FUN_0025f73c(piVar6);
        goto LAB_0025fa98;
      }
      puVar7[4] = puVar7[4] + (param_1[3] - *(int *)(iVar4 + 0xc));
    }
    __aeabi_uidivmod(param_2,param_1[10]);
    param_1[9] = param_1[9] + 1;
    piVar6[2] = param_2;
    iVar4 = *(int *)(param_1[0xb] + extraout_r1_01 * 4);
    piVar6[4] = (int)param_1;
    piVar6[3] = iVar4;
    piVar6[6] = 0;
    piVar6[5] = 0;
    *(undefined4 *)piVar6[1] = 0;
    *(int **)(param_1[0xb] + extraout_r1_01 * 4) = piVar6;
  }
  if ((uint)param_1[7] < param_2) {
    param_1[7] = param_2;
  }
LAB_0025fb2a:
  sqlite3_mutex_leave(*puVar7);
  return piVar6;
}


