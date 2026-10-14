/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002856f4 FUN_002856f4 */

int FUN_002856f4(int *param_1,int param_2,int *param_3)

{
  undefined1 uVar1;
  int *piVar2;
  int iVar3;
  char *pcVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int local_3c;
  int local_30;
  int local_1c [2];
  
  iVar8 = *param_1;
  iVar6 = *(int *)(iVar8 + 0x50);
  if (*(int *)(iVar8 + 0x80) == 0) {
    *(undefined4 *)(iVar8 + 0xe0) = 0;
  }
  param_1[3] = 0;
  uVar5 = DAT_002859b0;
  param_1[0x7e] = param_2;
  piVar2 = (int *)FUN_0025edc8(uVar5);
  if (piVar2 == (int *)0x0) {
    *(undefined1 *)(iVar8 + 0x36) = 1;
    local_3c = 7;
  }
  else {
    *piVar2 = -1;
    uVar1 = *(undefined1 *)(iVar8 + 0xea);
    if (*(int *)(iVar8 + 0x104) != 0) {
      *(undefined1 *)(iVar8 + 0xea) = 1;
    }
    local_30 = -1;
    iVar7 = 0;
LAB_002857fe:
    do {
      if (*(char *)(iVar8 + 0x36) != '\0') {
        local_3c = 0;
        goto LAB_00285824;
      }
      pcVar4 = (char *)(param_2 + iVar7);
      if (*pcVar4 == '\0') {
        local_3c = 0;
        goto LAB_00285824;
      }
      param_1[0x84] = (int)pcVar4;
      iVar3 = FUN_00262b80(pcVar4,local_1c);
      iVar7 = iVar3 + iVar7;
      param_1[0x85] = iVar3;
      if (iVar6 < iVar7) {
        iVar6 = 0x12;
LAB_002857ac:
        param_1[3] = iVar6;
        local_3c = 0;
        goto LAB_00285824;
      }
      if (local_1c[0] == 0x94) {
        FUN_0025fbda(iVar8,*param_3);
        iVar6 = FUN_0026877c(iVar8,DAT_002859b8 + 0x2857c8,param_1 + 0x84);
        local_3c = 1;
        *param_3 = iVar6;
        goto LAB_00285824;
      }
      if (local_1c[0] == 0x95) {
        if (*(int *)(iVar8 + 0xe0) != 0) {
          FUN_00268e48(param_1,DAT_002859b4 + 0x2857a8);
          iVar6 = 9;
          goto LAB_002857ac;
        }
        goto LAB_002857fe;
      }
      if (local_1c[0] == 1) {
        param_1[0x7e] = param_2 + iVar7;
      }
      FUN_0028319c(piVar2,local_1c[0],param_1[0x84],param_1[0x85],param_1);
      local_30 = local_1c[0];
    } while (param_1[3] == 0);
    local_3c = 0;
LAB_00285824:
    if (((*(char *)(param_2 + iVar7) == '\0') && (local_3c == 0)) && (param_1[3] == 0)) {
      if (local_30 != 1) {
        FUN_0028319c(piVar2,1,param_1[0x84],param_1[0x85],param_1);
        param_1[0x7e] = param_2 + iVar7;
      }
      FUN_0028319c(piVar2,0,param_1[0x84],param_1[0x85],param_1);
    }
    while (-1 < *piVar2) {
      FUN_00261660(piVar2);
    }
    sqlite3_free();
    *(undefined1 *)(iVar8 + 0xea) = uVar1;
    if (*(char *)(iVar8 + 0x36) != '\0') {
      param_1[3] = 7;
    }
    if (((param_1[3] != 0x65) && (param_1[3] != 0)) && (param_1[1] == 0)) {
      uVar5 = FUN_0026311c();
      FUN_0026a976(param_1 + 1,iVar8,DAT_002859bc + 0x2858ba,uVar5);
    }
    iVar6 = DAT_002859c0;
    if (param_1[1] != 0) {
      *param_3 = param_1[1];
      sqlite3_log(param_1[3],iVar6 + 0x2858ce);
      param_1[1] = 0;
      local_3c = local_3c + 1;
    }
    if (((param_1[2] != 0) && (0 < param_1[0x11])) && (*(char *)((int)param_1 + 0x12) == '\0')) {
      FUN_00263cc8();
      param_1[2] = 0;
    }
    if (*(char *)((int)param_1 + 0x12) == '\0') {
      FUN_0025fbda(iVar8,param_1[0x6a]);
      param_1[0x6a] = 0;
      param_1[0x69] = 0;
    }
    sqlite3_free(param_1[0x88]);
    if (*(char *)((int)param_1 + DAT_002859c4) == '\0') {
      FUN_00260e84(iVar8,param_1[0x7f]);
    }
    FUN_002614e4(iVar8,param_1[0x80]);
    iVar6 = param_1[0x74];
    iVar7 = iVar6 << 2;
    while( true ) {
      iVar7 = iVar7 + -4;
      iVar6 = iVar6 + -1;
      if (iVar6 < 0) break;
      FUN_0025fbda(iVar8,*(undefined4 *)(param_1[0x7b] + iVar7));
    }
    FUN_0025fbda(iVar8,param_1[0x7b]);
    FUN_0025fbda(iVar8,param_1[0x7d]);
    while ((int *)param_1[0x6b] != (int *)0x0) {
      param_1[0x6b] = *(int *)param_1[0x6b];
      FUN_0025fbda(iVar8);
    }
    while (param_1[0x89] != 0) {
      param_1[0x89] = *(int *)(param_1[0x89] + 0x48);
      FUN_00260e84(iVar8);
    }
    if ((local_3c != 0) && (param_1[3] == 0)) {
      param_1[3] = 1;
    }
  }
  return local_3c;
}


