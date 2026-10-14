/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0027f614 FUN_0027f614 */

int FUN_0027f614(int *param_1,void *param_2,size_t param_3,int param_4,void *param_5,size_t param_6,
                int param_7,undefined4 param_8,int param_9)

{
  undefined2 uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  void *__dest;
  int iVar6;
  size_t __n;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  void *__src;
  undefined8 uVar11;
  uint local_7c;
  size_t local_74;
  int local_70;
  void *local_6c;
  void *local_64;
  int local_60;
  size_t local_54;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  undefined1 auStack_38 [22];
  ushort local_22;
  ushort local_20;
  undefined2 local_1e;
  
  local_48 = param_9;
  iVar9 = *param_1;
  iVar5 = *(int *)(iVar9 + 4);
  if (*(char *)((int)param_1 + 0x5b) == '\x03') {
    return param_1[0x15];
  }
  uVar11 = FUN_0027c4cc(iVar5,param_1[6],param_1);
  local_4c = (int)uVar11;
  if (local_4c != 0) {
    return local_4c;
  }
  if (param_1[4] == 0) {
    FUN_0025c266(iVar9,(int)((ulonglong)uVar11 >> 0x20),param_3,param_4,0);
  }
  if ((local_48 == 0) &&
     (local_4c = FUN_0027cf9c(param_1,param_2,param_3,param_4,param_8,&local_48), local_4c != 0)) {
    return local_4c;
  }
  uVar4 = 0;
  iVar9 = param_1[*(short *)((int)param_1 + 0x5e) + 0x22];
  if (*(int *)(iVar5 + 0x50) == 0) {
    uVar11 = FUN_0025f320(*(undefined4 *)(iVar5 + 0x20));
    uVar4 = (undefined4)((ulonglong)uVar11 >> 0x20);
    *(int *)(iVar5 + 0x50) = (int)uVar11;
  }
  __dest = *(void **)(iVar5 + 0x50);
  if (__dest == (void *)0x0) {
    return 7;
  }
  local_40 = 0;
  local_3c = 0;
  iVar10 = *(int *)(iVar9 + 0x34);
  iVar5 = (uint)(*(char *)(iVar9 + 3) == '\0') * 4;
  if (*(char *)(iVar9 + 4) == '\0') {
    param_6 = 0;
    param_7 = 0;
  }
  else {
    uVar11 = FUN_00260960((void *)((int)__dest + iVar5),param_7,param_6 + param_7,
                          (int)(param_6 + param_7) >> 0x1f);
    uVar4 = (undefined4)((ulonglong)uVar11 >> 0x20);
    iVar5 = iVar5 + (int)uVar11;
  }
  iVar3 = FUN_00260960((int)__dest + iVar5,uVar4,param_3,param_4);
  FUN_00260a6c(iVar9,__dest,auStack_38);
  iVar2 = DAT_0027f94c;
  local_74 = param_6 + param_7;
  if (*(char *)(iVar9 + 2) == '\0') {
    if ((0 < param_4) || (((param_4 == 0 && ((int)param_3 < 0)) || (param_2 == (void *)0x0)))) {
      local_4c = FUN_0026b4e4(DAT_0027f948);
      uVar1 = 0;
      goto LAB_0027f86c;
    }
    local_74 = local_74 + param_3;
    local_54 = param_6;
    param_6 = param_3;
    local_6c = param_2;
  }
  else {
    local_54 = 0;
    local_6c = param_5;
  }
  local_7c = (uint)local_22;
  local_64 = (void *)((int)__dest + iVar5 + iVar3);
  local_70 = 0;
  local_60 = (int)__dest + (uint)local_20;
  while (iVar5 = local_3c, uVar1 = local_1e, 0 < (int)local_74) {
    if (local_7c == 0) {
      if (*(char *)(iVar10 + 0x11) != '\0') {
        do {
          do {
            iVar6 = local_3c + 1;
            local_3c = iVar6;
            iVar3 = FUN_0025c29c(iVar10,iVar6);
          } while (iVar3 == iVar6);
          iVar3 = __udivsi3(*(undefined4 *)(iVar2 + 0x27f7c0),*(undefined4 *)(iVar10 + 0x20));
        } while (iVar6 == iVar3 + 1);
      }
      local_44 = FUN_0027daa4(iVar10,&local_40,&local_3c,local_3c,0);
      if (((local_44 == 0) && (*(char *)(iVar10 + 0x11) != '\0')) &&
         (FUN_0027df1c(iVar10,local_3c,4 - (uint)(iVar5 == 0),iVar5,&local_44), local_44 != 0)) {
        FUN_00274a30(local_40);
      }
      if (local_44 != 0) {
        FUN_00274a30(local_70);
        local_4c = local_44;
        goto LAB_0027f86c;
      }
      FUN_0025ba48(local_60,local_3c);
      FUN_00274a30(local_70);
      local_60 = *(int *)(local_40 + 0x38);
      local_70 = local_40;
      FUN_0025ba48(local_60,0);
      local_64 = (void *)(*(int *)(local_40 + 0x38) + 4);
      local_7c = *(int *)(iVar10 + 0x24) - 4;
    }
    __n = local_7c;
    if ((int)local_74 < (int)local_7c) {
      __n = local_74;
    }
    if ((int)param_6 < 1) {
      memset(local_64,0,__n);
    }
    else {
      if ((int)param_6 < (int)__n) {
        __n = param_6;
      }
      memcpy(local_64,local_6c,__n);
    }
    local_74 = local_74 - __n;
    local_64 = (void *)((int)local_64 + __n);
    param_6 = param_6 - __n;
    local_7c = local_7c - __n;
    if (param_6 == 0) {
      param_6 = local_54;
      local_6c = param_5;
    }
    else {
      local_6c = (void *)((int)local_6c + __n);
    }
  }
  FUN_00274a30(local_70);
  local_4c = 0;
LAB_0027f86c:
  if (local_4c != 0) {
    return local_4c;
  }
  iVar5 = (*(short *)((int)param_1 + 0x5e) + 0x30) * 2;
  uVar7 = (uint)*(ushort *)(iVar5 + (int)param_1);
  if (local_48 == 0) {
    local_4c = FUN_002733c4(*(undefined4 *)(iVar9 + 0x44));
    if (local_4c != 0) {
      return local_4c;
    }
    __src = (void *)(*(int *)(iVar9 + 0x38) +
                    (uint)(CONCAT11(*(undefined1 *)(*(int *)(iVar9 + 0x40) + uVar7 * 2),
                                    *(undefined1 *)(*(int *)(iVar9 + 0x40) + uVar7 * 2 + 1)) &
                          *(ushort *)(iVar9 + 0x12)));
    if (*(char *)(iVar9 + 3) == '\0') {
      memcpy(__dest,__src,4);
    }
    uVar4 = FUN_00260b9e(iVar9,__src);
    local_4c = FUN_0027e700(iVar9,__src);
    if (local_4c == 0) {
      FUN_0026b9bc(iVar9,uVar7,uVar4,&local_4c);
    }
    if (local_4c != 0) {
      return local_4c;
    }
  }
  else {
    local_4c = 0;
    if ((local_48 < 0) && (*(short *)(iVar9 + 0x10) != 0)) {
      uVar8 = uVar7 + 1;
      uVar7 = uVar8 & 0xffff;
      *(short *)(iVar5 + (int)param_1) = (short)uVar8;
    }
  }
  FUN_0027e7d4(iVar9,uVar7,__dest,uVar1,0,0,&local_4c);
  *(undefined2 *)((int)param_1 + 0x42) = 0;
  *(undefined1 *)((int)param_1 + 0x5a) = 0;
  if ((local_4c == 0) && (*(char *)(iVar9 + 1) != '\0')) {
    local_4c = FUN_0027ea30(param_1);
    *(undefined1 *)(param_1[*(short *)((int)param_1 + 0x5e) + 0x22] + 1) = 0;
    *(undefined1 *)((int)param_1 + 0x5b) = 0;
  }
  return local_4c;
}


