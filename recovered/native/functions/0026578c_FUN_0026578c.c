/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0026578c FUN_0026578c */

undefined4 FUN_0026578c(int *param_1,char *param_2,size_t param_3,int param_4,int param_5)

{
  char *pcVar1;
  char cVar2;
  char cVar3;
  ushort uVar4;
  ushort uVar5;
  int iVar6;
  char *pcVar7;
  int iVar8;
  undefined4 uVar9;
  char cVar10;
  uint uVar11;
  size_t local_24;
  
  if (param_2 == (char *)0x0) {
    FUN_0025fc70();
    return 0;
  }
  iVar6 = DAT_002658f8;
  if (*param_1 != 0) {
    iVar6 = *(int *)(*param_1 + 0x4c);
  }
  uVar11 = 2;
  if (param_4 == 0) {
    uVar11 = 0x10;
  }
  if ((int)param_3 < 0) {
    if (param_4 == 1) {
      for (param_3 = 0; ((int)param_3 <= iVar6 && (param_2[param_3] != '\0')); param_3 = param_3 + 1
          ) {
      }
    }
    else {
      param_3 = 0;
      pcVar7 = param_2;
      while (((int)param_3 <= iVar6 &&
             (pcVar1 = pcVar7 + 1, cVar2 = *pcVar7, pcVar7 = pcVar7 + 2,
             *pcVar1 != '\0' || cVar2 != '\0'))) {
        param_3 = param_3 + 2;
      }
    }
    uVar11 = uVar11 | 0x200;
  }
  uVar5 = (ushort)uVar11;
  if (param_5 == -1) {
    local_24 = param_3;
    if ((int)(uVar11 << 0x16) < 0) {
      iVar8 = 2;
      if (param_4 == 1) {
        iVar8 = 1;
      }
      local_24 = param_3 + iVar8;
    }
    if (iVar6 < (int)param_3) {
      return 0x12;
    }
    iVar8 = FUN_0026526c(param_1,local_24,0);
    if (iVar8 != 0) {
      return 7;
    }
    memcpy((void *)param_1[1],param_2,local_24);
  }
  else if (param_5 == DAT_002658fc + 0x265840) {
    FUN_00263730(param_1);
    param_1[1] = (int)param_2;
    param_1[9] = (int)param_2;
    param_1[8] = 0;
  }
  else {
    FUN_00263730(param_1);
    param_1[1] = (int)param_2;
    param_1[8] = param_5;
    if (param_5 == 0) {
      uVar4 = 0x800;
    }
    else {
      uVar4 = 0x400;
    }
    uVar5 = uVar4 | uVar5;
  }
  param_1[6] = param_3;
  *(ushort *)(param_1 + 7) = uVar5;
  iVar8 = param_4;
  if (param_4 == 0) {
    iVar8 = 1;
  }
  *(char *)((int)param_1 + 0x1f) = (char)iVar8;
  *(char *)((int)param_1 + 0x1e) = '\x04' - ('\x01' - (param_4 == 0));
  if ((iVar8 != 1) && (1 < (int)param_3)) {
    cVar2 = *(char *)param_1[1];
    cVar3 = ((char *)param_1[1])[1];
    if ((cVar3 != -1) || (cVar10 = '\x03', cVar2 != -2)) {
      cVar10 = '\0';
    }
    if ((cVar3 == -2) && (cVar2 == -1)) {
      cVar10 = '\x02';
    }
    else if (cVar10 == '\0') goto LAB_002658e8;
    iVar8 = FUN_00265354(param_1);
    if (iVar8 != 0) {
      return 7;
    }
    iVar8 = param_1[6];
    param_1[6] = iVar8 - 2U;
    memmove((void *)param_1[1],(void *)(param_1[1] + 2),iVar8 - 2U);
    *(undefined1 *)(param_1[1] + param_1[6]) = 0;
    *(undefined1 *)(param_1[1] + param_1[6] + 1) = 0;
    *(ushort *)(param_1 + 7) = *(ushort *)(param_1 + 7) | 0x200;
    *(char *)((int)param_1 + 0x1f) = cVar10;
  }
LAB_002658e8:
  uVar9 = 0;
  if (iVar6 < (int)param_3) {
    uVar9 = 0x12;
  }
  return uVar9;
}


