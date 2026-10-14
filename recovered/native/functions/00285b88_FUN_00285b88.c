/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00285b88 FUN_00285b88 */

void FUN_00285b88(int *param_1,int *param_2,int *param_3,int param_4)

{
  int iVar1;
  int iVar2;
  size_t __n;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  int iVar7;
  int iVar8;
  char *pcVar9;
  void *__src;
  int *piVar10;
  int iVar11;
  undefined4 uVar12;
  undefined4 *puVar13;
  int iVar14;
  int iVar15;
  int local_bc;
  int local_b8;
  int local_a8;
  undefined4 *local_a0;
  int local_9c;
  int *local_98;
  int local_84;
  int *local_80;
  undefined2 *local_7c;
  undefined1 local_64;
  undefined2 local_60 [2];
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 *local_4c;
  undefined4 local_38;
  
  iVar14 = *param_1;
  if ((((param_4 != 0) || (param_3 != (int *)0x0)) && (*(char *)(iVar14 + 0x36) == '\0')) &&
     (puVar13 = (undefined4 *)param_1[0x7f], puVar13 != (undefined4 *)0x0)) {
    iVar1 = FUN_0025d12c(iVar14,puVar13[0x11]);
    if (puVar13[0xb] != 0) {
      memset(&local_80,0,0x20);
      memset(local_60,0,0x48);
      local_60[0] = 1;
      local_54 = *puVar13;
      local_38 = 0xffffffff;
      local_64 = 4;
      piVar10 = (int *)puVar13[0xb];
      local_80 = param_1;
      local_7c = local_60;
      local_4c = puVar13;
      for (local_bc = 0; local_bc < *piVar10; local_bc = local_bc + 1) {
        iVar2 = FUN_00269020(&local_80,*(undefined4 *)(local_bc * 0x14 + piVar10[2]));
        if (iVar2 != 0) {
          return;
        }
      }
    }
    if (*(char *)(iVar14 + 0x7d) != '\0') {
      puVar13[5] = *(undefined4 *)(iVar14 + 0x78);
    }
    if (*(char *)(iVar14 + 0x7d) == '\0') {
      iVar2 = FUN_002662b8(param_1);
      if (iVar2 == 0) {
        return;
      }
      FUN_002665da(iVar2,0x2d,0);
      if (puVar13[7] == 0) {
        iVar7 = DAT_00285f4c + 0x285c62;
        iVar11 = DAT_00285f50 + 0x285c64;
      }
      else {
        iVar7 = DAT_00285f54 + 0x285c6c;
        iVar11 = DAT_00285f58 + 0x285c6e;
      }
      if (param_4 == 0) {
        iVar7 = FUN_0026877c(iVar14,DAT_00285f5c + 0x285cf6,iVar7,(*param_3 - param_1[0x82]) + 1,
                             param_1[0x82]);
      }
      else {
        FUN_00266266(iVar2,0x28,1,param_1[0x65],iVar1);
        FUN_0025c3b8(iVar2,2);
        param_1[0x12] = 2;
        local_5c = 1;
        local_60[0] = 8;
        local_58 = 0;
        local_54 = 0;
        FUN_00276118(param_1,param_4);
        FUN_002665da(iVar2,0x2d,1);
        if (param_1[0x11] == 0) {
          iVar7 = FUN_0026d0a4(param_1,param_4);
          if (iVar7 == 0) {
            return;
          }
          puVar13[2] = *(undefined4 *)(iVar7 + 8);
          puVar13[3] = *(undefined4 *)(iVar7 + 0xc);
          *(undefined4 *)(iVar7 + 8) = 0;
          *(undefined4 *)(iVar7 + 0xc) = 0;
          FUN_00260e84(iVar14);
        }
        iVar8 = 0;
        puVar6 = (undefined4 *)puVar13[3];
        for (local_bc = 0; local_bc < (int)puVar13[2]; local_bc = local_bc + 1) {
          iVar7 = 0;
          for (pcVar9 = (char *)*puVar6; *pcVar9 != '\0'; pcVar9 = pcVar9 + 1) {
            iVar7 = iVar7 + (uint)(*pcVar9 == '\"') + 1;
          }
          puVar6 = puVar6 + 6;
          iVar8 = iVar8 + iVar7 + 7;
        }
        iVar7 = 0;
        for (pcVar9 = (char *)*puVar13; *pcVar9 != '\0'; pcVar9 = pcVar9 + 1) {
          iVar7 = iVar7 + (uint)(*pcVar9 == '\"') + 1;
        }
        iVar8 = iVar8 + iVar7 + 2;
        if (iVar8 < 0x32) {
          local_b8 = DAT_00285f60 + 0x285d56;
          local_a8 = DAT_00285f64 + 0x285d5c;
          local_bc = DAT_00285f68 + 0x285d62;
        }
        else {
          local_b8 = DAT_00285f6c + 0x285d68;
          local_a8 = DAT_00285f70 + 0x285d6e;
          local_bc = DAT_00285f74 + 0x285d74;
        }
        iVar8 = iVar8 + puVar13[2] * 6 + 0x23;
        iVar7 = FUN_0025ee10(0,iVar8);
        if (iVar7 == 0) {
          *(undefined1 *)(iVar14 + 0x36) = 1;
        }
        else {
          sqlite3_snprintf(iVar8,iVar7,DAT_00285f78 + 0x285da0);
          local_84 = FUN_0025b154(iVar7);
          FUN_00262ae4(iVar7,&local_84,*puVar13);
          iVar15 = DAT_00285f7c;
          *(undefined1 *)(iVar7 + local_84) = 0x28;
          local_a0 = (undefined4 *)puVar13[3];
          local_84 = local_84 + 1;
          for (local_9c = 0; local_9c < (int)puVar13[2]; local_9c = local_9c + 1) {
            sqlite3_snprintf(iVar8 - local_84,iVar7 + local_84,local_bc);
            iVar3 = local_84;
            local_84 = FUN_0025b154(iVar7 + local_84);
            local_84 = iVar3 + local_84;
            FUN_00262ae4(iVar7,&local_84,*local_a0);
            __src = *(void **)(iVar15 + (*(byte *)((int)local_a0 + 0x16) - 0x61) * 4 + 0x285dce);
            __n = FUN_0025b154(__src);
            memcpy((void *)(iVar7 + local_84),__src,__n);
            local_84 = local_84 + __n;
            local_a0 = local_a0 + 6;
            local_bc = local_a8;
          }
          sqlite3_snprintf(iVar8 - local_84,iVar7 + local_84,DAT_00285f80 + 0x285e46,local_b8);
        }
      }
      if (iVar1 == 1) {
        iVar8 = DAT_00285f84 + 0x285e62;
      }
      else {
        iVar8 = DAT_00285f88 + 0x285e68;
      }
      uVar12 = *puVar13;
      iVar3 = param_1[0x65];
      iVar4 = param_1[100];
      uVar5 = uVar12;
      iVar15 = iVar7;
      FUN_00285af0(param_1,DAT_00285f8c + 0x285e72,
                   *(undefined4 *)(*(int *)(iVar14 + 0x10) + iVar1 * 0x10),iVar8,iVar11,uVar12,
                   uVar12,iVar3,iVar7,iVar4);
      FUN_0025fbda(iVar14,iVar7);
      FUN_002668cc(param_1,iVar1);
      if (((int)((uint)*(byte *)((int)puVar13 + 0x22) << 0x1c) < 0) &&
         (puVar6 = (undefined4 *)(*(int *)(iVar14 + 0x10) + iVar1 * 0x10),
         *(int *)(puVar6[3] + 0x48) == 0)) {
        FUN_00285af0(param_1,DAT_00285f90 + 0x285ec0,*puVar6,puVar6,iVar11,uVar12,uVar5,iVar3,iVar15
                     ,iVar4);
      }
      uVar5 = FUN_0026877c(iVar14,DAT_00285f94 + 0x285ecc,*puVar13);
      FUN_0026690a(iVar2,iVar1,uVar5);
    }
    if (*(char *)(iVar14 + 0x7d) != '\0') {
      uVar12 = *puVar13;
      uVar5 = FUN_0025b154(uVar12);
      iVar1 = FUN_00260d1c(puVar13[0x11] + 8,uVar12,uVar5,puVar13);
      if (iVar1 == 0) {
        param_1[0x7f] = 0;
        *(uint *)(iVar14 + 0x18) = *(uint *)(iVar14 + 0x18) | 0x200;
        if (puVar13[7] == 0) {
          local_98 = param_2;
          if (*param_2 == 0) {
            local_98 = param_3;
          }
          iVar14 = FUN_0025b0f4(param_1[0x82],*local_98 - param_1[0x82]);
          puVar13[0xc] = iVar14 + 0xd;
        }
      }
      else {
        *(undefined1 *)(iVar14 + 0x36) = 1;
      }
    }
  }
  return;
}


