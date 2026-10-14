/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0028a47c FUN_0028a47c */

void FUN_0028a47c(int *param_1,int param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  bool bVar12;
  int local_64;
  int local_50;
  int local_40;
  int *local_3c;
  int *local_38;
  int local_34;
  
  local_40 = 0;
  local_3c = (int *)0x0;
  iVar11 = *param_1;
  if (((param_1[0x11] == 0) && (*(char *)(iVar11 + 0x36) == '\0')) &&
     (piVar1 = (int *)FUN_00288584(), piVar1 != (int *)0x0)) {
    iVar2 = FUN_002648b0(param_1,piVar1,0x6a,0,0);
    iVar3 = piVar1[7];
    iVar4 = FUN_0026d134(param_1,piVar1);
    if ((iVar4 == 0) && (iVar4 = FUN_0026a6a0(param_1,piVar1,iVar2 != 0), iVar4 == 0)) {
      iVar4 = FUN_0025d12c(iVar11,piVar1[0x11]);
      iVar5 = FUN_00268e90(param_1,9,*piVar1,0,
                           *(undefined4 *)(iVar4 * 0x10 + *(int *)(iVar11 + 0x10)));
      if (iVar5 != 1) {
        iVar9 = param_1[0x12];
        *(int *)(param_2 + 0x28) = iVar9;
        param_1[0x12] = iVar9 + 1;
        for (iVar10 = piVar1[4]; iVar10 != 0; iVar10 = *(int *)(iVar10 + 0x14)) {
          param_1[0x12] = param_1[0x12] + 1;
        }
        bVar12 = iVar3 == 0;
        if (!bVar12) {
          local_40 = param_1[0x81];
          param_1[0x81] = *piVar1;
          local_3c = param_1;
        }
        iVar3 = FUN_002662b8(param_1);
        if (iVar3 != 0) {
          if (*(char *)((int)param_1 + 0x12) == '\0') {
            *(undefined1 *)(iVar3 + 0x5e) = 1;
          }
          FUN_00275f2c(param_1,1,iVar4);
          if (!bVar12) {
            FUN_0027bff0(param_1,piVar1,param_3,iVar9);
          }
          memset(&local_38,0,0x20);
          local_38 = param_1;
          local_34 = param_2;
          iVar10 = FUN_00269020(&local_38,param_3);
          if (iVar10 == 0) {
            if ((*(uint *)(iVar11 + 0x18) & 0x1000) == 0) {
              local_50 = -1;
            }
            else {
              local_50 = param_1[0x13] + 1;
              param_1[0x13] = local_50;
              FUN_0026641e(iVar3,7);
            }
            if (((iVar5 == 0) && (param_3 == 0)) &&
               ((iVar2 == 0 &&
                ((-1 < (int)((uint)*(byte *)((int)piVar1 + 0x22) << 0x1b) &&
                 (iVar5 = FUN_00264918(param_1,piVar1,0,0), iVar5 == 0)))))) {
              FUN_002662da(iVar3,0x67,piVar1[5],iVar4,local_50,*piVar1,0xfffffffe);
              for (iVar2 = piVar1[4]; iVar2 != 0; iVar2 = *(int *)(iVar2 + 0x14)) {
                FUN_0026641e(iVar3,0x67,*(undefined4 *)(iVar2 + 0x28),iVar4);
              }
            }
            else {
              iVar4 = param_1[0x13] + 1;
              iVar10 = param_1[0x13] + 2;
              param_1[0x13] = iVar10;
              FUN_0026641e(iVar3,10,0,iVar4);
              iVar5 = FUN_00279b98(param_1,param_2,param_3,0,0,8,0);
              if (iVar5 == 0) goto LAB_0028a7ba;
              uVar6 = FUN_0027074a(param_1,piVar1,0xffffffff,iVar9,iVar10,0);
              FUN_0026641e(iVar3,0x70,iVar4,uVar6);
              if ((*(uint *)(iVar11 + 0x18) & 0x1000) != 0) {
                FUN_0026641e(iVar3,0x14,local_50,1);
              }
              FUN_0026663a(iVar5);
              uVar6 = FUN_00266020(iVar3);
              if ((bVar12) && (-1 < (int)((uint)*(byte *)((int)piVar1 + 0x22) << 0x1b))) {
                FUN_0026e7ea(param_1,piVar1,iVar9,0x28);
              }
              uVar7 = FUN_00266266(iVar3,0x71,iVar4,uVar6,iVar10);
              if ((int)((uint)*(byte *)((int)piVar1 + 0x22) << 0x1b) < 0) {
                uVar8 = FUN_0025d364(iVar11,piVar1);
                FUN_002683ea(param_1,piVar1);
                FUN_002662da(iVar3,0x8c,0,1,iVar10,uVar8,0xfffffff6);
                FUN_0025c3b8(iVar3,2);
                FUN_0025cdea(param_1);
              }
              else {
                FUN_0028a308(param_1,piVar1,iVar9,iVar10,*(char *)((int)param_1 + 0x12) == '\0',
                             iVar2,99);
              }
              FUN_0026641e(iVar3,1,0,uVar7);
              FUN_0025c384(iVar3,uVar6);
              if ((bVar12) && (-1 < (int)((uint)*(byte *)((int)piVar1 + 0x22) << 0x1b))) {
                local_64 = iVar9;
                for (iVar2 = piVar1[4]; local_64 = local_64 + 1, iVar2 != 0;
                    iVar2 = *(int *)(iVar2 + 0x14)) {
                  FUN_0026641e(iVar3,0x2d,local_64,*(undefined4 *)(iVar2 + 0x28));
                }
                FUN_002665da(iVar3,0x2d,iVar9);
              }
            }
            if ((*(char *)((int)param_1 + 0x12) == '\0') && (param_1[0x6d] == 0)) {
              FUN_00266be6(param_1);
            }
            if ((((*(uint *)(iVar11 + 0x18) & 0x1000) != 0) &&
                (*(char *)((int)param_1 + 0x12) == '\0')) && (param_1[0x6d] == 0)) {
              FUN_0026641e(iVar3,0x10,local_50,1);
              FUN_00263b94(iVar3,1);
              FUN_00265916(iVar3,0,0,DAT_0028a7dc + 0x28a7b4,0);
            }
          }
        }
      }
    }
  }
LAB_0028a7ba:
  if (local_3c != (int *)0x0) {
    local_3c[0x81] = local_40;
  }
  FUN_00260fde(iVar11,param_2);
  FUN_002610aa(iVar11,param_3);
  return;
}


