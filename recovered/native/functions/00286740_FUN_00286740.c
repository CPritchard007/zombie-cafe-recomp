/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00286740 FUN_00286740 */

void FUN_00286740(int param_1,int param_2,int param_3,undefined1 param_4,int param_5,int *param_6,
                 int *param_7)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  int iVar8;
  int local_38;
  int local_34;
  int local_30;
  int local_28;
  int local_20;
  int local_1c [2];
  
  local_20 = 0;
  piVar2 = (int *)FUN_0025f04c(param_1,0x230);
  iVar7 = 7;
  if (piVar2 != (int *)0x0) {
    piVar2[0x7c] = param_5;
    for (local_34 = 0; local_34 < *(int *)(param_1 + 0x14); local_34 = local_34 + 1) {
      iVar5 = *(int *)(*(int *)(param_1 + 0x10) + local_34 * 0x10 + 4);
      if (iVar5 != 0) {
        FUN_00261f68(iVar5);
        iVar7 = FUN_0025c21c(iVar5,1,1);
        FUN_00262002(iVar5);
        if (iVar7 != 0) {
          FUN_00268578(param_1,iVar7,DAT_00286a28 + 0x2867a8,
                       *(undefined4 *)(*(int *)(param_1 + 0x10) + local_34 * 0x10));
          goto LAB_00286a08;
        }
      }
    }
    FUN_0026005c(param_1);
    *piVar2 = param_1;
    iVar7 = DAT_00286a24;
    piVar2[0x6e] = DAT_00286a20;
    piVar2[0x6f] = iVar7;
    if ((param_3 < 0) || ((param_3 != 0 && (*(char *)(param_2 + param_3 + -1) == '\0')))) {
      FUN_002856f4(piVar2,param_2,&local_20);
    }
    else {
      if (*(int *)(param_1 + 0x50) < param_3) {
        FUN_00268578(param_1,0x12,DAT_00286a2c + 0x2867f8);
        iVar7 = FUN_002685e0(param_1,0x12);
        goto LAB_00286a08;
      }
      iVar7 = FUN_0025f286(param_1,param_2,param_3);
      if (iVar7 == 0) {
        piVar2[0x7e] = param_2 + param_3;
      }
      else {
        FUN_002856f4(piVar2,iVar7,&local_20);
        FUN_0025fbda(param_1,iVar7);
        piVar2[0x7e] = param_2 + (piVar2[0x7e] - iVar7);
      }
    }
    if (*(char *)(param_1 + 0x36) != '\0') {
      piVar2[3] = 7;
    }
    if (piVar2[3] == 0x65) {
      piVar2[3] = 0;
    }
    if (*(char *)((int)piVar2 + 0x11) != '\0') {
      iVar5 = *piVar2;
      for (iVar7 = 0; iVar7 < *(int *)(iVar5 + 0x14); iVar7 = iVar7 + 1) {
        iVar8 = *(int *)(*(int *)(iVar5 + 0x10) + iVar7 * 0x10 + 4);
        if (iVar8 != 0) {
          bVar1 = false;
          if (*(char *)(iVar8 + 8) == '\0') {
            iVar3 = FUN_0027d63c(iVar8);
            if ((iVar3 + DAT_00286a30 == 0) || (iVar3 == 7)) {
              *(undefined1 *)(iVar5 + 0x36) = 1;
            }
            if (iVar3 != 0) break;
            bVar1 = true;
          }
          FUN_00262122(iVar8,1,local_1c);
          if (local_1c[0] != **(int **)(*(int *)(iVar5 + 0x10) + iVar7 * 0x10 + 0xc)) {
            FUN_002634ec(iVar5,iVar7);
            piVar2[3] = 0x11;
          }
          if (bVar1) {
            FUN_00280518(iVar8);
          }
        }
      }
    }
    if (*(char *)(param_1 + 0x36) != '\0') {
      piVar2[3] = 7;
    }
    if (param_7 != (int *)0x0) {
      *param_7 = piVar2[0x7e];
    }
    iVar7 = piVar2[3];
    if (((iVar7 == 0) && (iVar5 = piVar2[2], iVar5 != 0)) && ((char)piVar2[0x75] != '\0')) {
      if ((char)piVar2[0x75] == '\x02') {
        FUN_00263b94(iVar5,4);
        local_28 = 0xc;
        local_30 = 8;
      }
      else {
        FUN_00263b94(iVar5,8);
        local_28 = 8;
        local_30 = 0;
      }
      iVar5 = DAT_00286a34;
      local_38 = 0;
      for (local_34 = local_30; local_34 < local_28; local_34 = local_34 + 1) {
        FUN_00265916(piVar2[2],local_38,0,
                     *(undefined4 *)(iVar5 + 0x286968 + local_30 * 4 + local_38 * 4),0);
        local_38 = local_38 + 1;
      }
    }
    if (*(char *)(param_1 + 0x7d) == '\0') {
      puVar6 = (undefined4 *)piVar2[2];
      if (puVar6 != (undefined4 *)0x0) {
        uVar4 = FUN_0025f286(*puVar6,param_2,piVar2[0x7e] - param_2);
        puVar6[0x28] = uVar4;
        *(undefined1 *)((int)puVar6 + 0x65) = param_4;
      }
    }
    if ((piVar2[2] == 0) || ((iVar7 == 0 && (*(char *)(param_1 + 0x36) == '\0')))) {
      *param_6 = piVar2[2];
    }
    else {
      FUN_002810d0();
    }
    if (local_20 == 0) {
      FUN_00268578(param_1,iVar7,0);
    }
    else {
      FUN_00268578(param_1,iVar7,DAT_00286a38 + 0x2869da);
      FUN_0025fbda(param_1,local_20);
    }
    while (piVar2[0x8a] != 0) {
      piVar2[0x8a] = *(int *)(piVar2[0x8a] + 4);
      FUN_0025fbda(param_1);
    }
  }
LAB_00286a08:
  FUN_0025fbda(param_1,piVar2);
  FUN_002685e0(param_1,iVar7);
  return;
}


