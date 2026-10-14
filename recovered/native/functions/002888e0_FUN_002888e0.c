/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002888e0 FUN_002888e0 */

void FUN_002888e0(int *param_1,int param_2,int param_3,int param_4)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  bool bVar12;
  int *local_54;
  int local_50;
  int *local_3c;
  int local_24;
  int *local_20;
  int local_1c [2];
  
  iVar11 = *param_1;
  cVar1 = *(char *)((int)param_1 + 0x1ca);
  if (*(int *)(iVar11 + 0x18) << 5 < 0) {
    iVar2 = FUN_0025d12c(iVar11,*(undefined4 *)(param_2 + 0x44));
    uVar7 = *(undefined4 *)(iVar2 * 0x10 + *(int *)(iVar11 + 0x10));
    for (iVar10 = *(int *)(param_2 + 0x24); iVar10 != 0; iVar10 = *(int *)(iVar10 + 4)) {
      local_20 = (int *)0x0;
      local_24 = 0;
      if (*(char *)((int)param_1 + 0x1ca) == '\0') {
        puVar3 = (undefined4 *)FUN_00287f90(param_1,0,*(undefined4 *)(iVar10 + 8),uVar7);
      }
      else {
        puVar3 = (undefined4 *)FUN_0026460e(iVar11,*(undefined4 *)(iVar10 + 8),uVar7);
      }
      if ((puVar3 == (undefined4 *)0x0) ||
         (iVar4 = FUN_0026a6fc(param_1,puVar3,iVar10,&local_24,&local_20), iVar4 != 0)) {
        if (cVar1 == '\0') {
          return;
        }
        if (*(char *)(iVar11 + 0x36) != '\0') {
          return;
        }
        if (puVar3 == (undefined4 *)0x0) {
          iVar5 = FUN_002662b8(param_1);
          iVar9 = *(int *)(iVar10 + 0x14);
          iVar8 = *(int *)(iVar5 + 0x1c);
          local_50 = iVar10;
          for (iVar4 = 0; iVar4 < *(int *)(iVar10 + 0x14); iVar4 = iVar4 + 1) {
            FUN_0026641e(iVar5,0x49,param_3 + *(int *)(local_50 + 0x24) + 1,iVar8 + iVar9 + 1);
            local_50 = local_50 + 8;
          }
          FUN_0026641e(iVar5,0x75,*(undefined1 *)(iVar10 + 0x18),0xffffffff);
        }
      }
      else {
        local_54 = local_20;
        if (local_20 == (int *)0x0) {
          local_1c[0] = *(int *)(iVar10 + 0x24);
          local_54 = local_1c;
        }
        local_3c = local_54;
        bVar12 = false;
        for (local_50 = 0; local_50 < *(int *)(iVar10 + 0x14); local_50 = local_50 + 1) {
          if (*local_3c == *(int *)(param_2 + 4)) {
            *local_3c = -1;
          }
          if (*(int *)(iVar11 + 0x10c) != 0) {
            if (local_24 == 0) {
              iVar4 = puVar3[1];
            }
            else {
              iVar4 = *(int *)(*(int *)(local_24 + 4) + local_50 * 4);
            }
            iVar4 = FUN_00269950(param_1,*puVar3,*(undefined4 *)(puVar3[3] + iVar4 * 0x18),iVar2);
            bVar12 = iVar4 == 2;
          }
          local_3c = local_3c + 1;
        }
        FUN_00265f96(param_1,iVar2,puVar3[5],0,*puVar3);
        param_1[0x12] = param_1[0x12] + 1;
        if (param_3 != 0) {
          FUN_0026e858(param_1,iVar2,puVar3,local_24,iVar10,local_54,param_3,0xffffffff,bVar12);
        }
        if (param_4 != 0) {
          FUN_0026e858(param_1,iVar2,puVar3,local_24,iVar10,local_54,param_4,1,bVar12);
        }
        FUN_0025fbda(iVar11,local_20);
      }
    }
    for (piVar6 = (int *)FUN_0025d110(param_2); piVar6 != (int *)0x0; piVar6 = (int *)piVar6[3]) {
      local_20 = (int *)0x0;
      local_1c[0] = 0;
      if ((((char)piVar6[6] != '\0') || (param_1[0x6c] != 0)) ||
         (*(char *)((int)param_1 + 0x17) != '\0')) {
        iVar2 = FUN_0026a6fc(param_1,param_2,piVar6,&local_20,local_1c);
        if (iVar2 == 0) {
          iVar2 = FUN_00266f0c(iVar11,0,0);
          if (iVar2 != 0) {
            iVar10 = *piVar6;
            *(int *)(iVar2 + 0x14) = iVar10;
            *(undefined4 *)(iVar2 + 0xc) = *(undefined4 *)*piVar6;
            *(short *)(iVar10 + 0x20) = *(short *)(iVar10 + 0x20) + 1;
            iVar10 = param_1[0x12];
            *(int *)(iVar2 + 0x28) = iVar10;
            param_1[0x12] = iVar10 + 1;
            if (param_4 != 0) {
              FUN_0027b298(param_1,iVar2,param_2,local_20,piVar6,local_1c[0],param_4,0xffffffff);
            }
            if (param_3 != 0) {
              FUN_0027b298(param_1,iVar2,param_2,local_20,piVar6,local_1c[0],param_3,1);
            }
            *(undefined4 *)(iVar2 + 0xc) = 0;
            FUN_00260fde(iVar11,iVar2);
          }
          FUN_0025fbda(iVar11,local_1c[0]);
        }
        else {
          if (cVar1 == '\0') {
            return;
          }
          if (*(char *)(iVar11 + 0x36) != '\0') {
            return;
          }
        }
      }
    }
  }
  return;
}


