/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0028bae4 FUN_0028bae4 */

void FUN_0028bae4(int *param_1,int param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  int *piVar10;
  undefined4 uVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int local_40;
  
  iVar13 = *param_1;
  uVar8 = *(undefined4 *)(iVar13 + 0x18);
  iVar14 = 0;
  if (*(char *)(iVar13 + 0x36) == '\0') {
    piVar1 = (int *)FUN_00287f90(param_1,0,*(undefined4 *)(param_2 + 0xc),
                                 *(undefined4 *)(param_2 + 8));
    if (piVar1 == (int *)0x0) {
      iVar14 = 0;
    }
    else {
      iVar2 = FUN_0025d12c(*param_1,piVar1[0x11]);
      uVar11 = *(undefined4 *)(iVar2 * 0x10 + *(int *)(iVar13 + 0x10));
      *(uint *)(iVar13 + 0x18) = *(uint *)(iVar13 + 0x18) | 0x10000000;
      iVar14 = FUN_0025f2ac(iVar13,param_3);
      if (iVar14 != 0) {
        iVar3 = FUN_0026460e(iVar13,iVar14,uVar11);
        if ((iVar3 == 0) && (iVar3 = FUN_00264662(iVar13,iVar14,uVar11), iVar3 == 0)) {
          iVar3 = *piVar1;
          iVar4 = FUN_0025b154(iVar3);
          if ((iVar4 < 7) || (iVar4 = sqlite3_strnicmp(iVar3,DAT_0028bdc0 + 0x28bb80,7), iVar4 != 0)
             ) {
            iVar3 = FUN_00268fd4(param_1,iVar14);
            if (iVar3 != 0) goto LAB_0028bda2;
            iVar3 = *piVar1;
            if (piVar1[7] == 0) {
              iVar3 = FUN_00268e90(param_1,0x1a,uVar11,iVar3,0);
              if ((iVar3 == 0) && (iVar3 = FUN_0026d134(param_1,piVar1), iVar3 == 0)) {
                uVar12 = *(byte *)((int)piVar1 + 0x22) & 0x10;
                if (((*(byte *)((int)piVar1 + 0x22) & 0x10) != 0) &&
                   (uVar12 = FUN_0025d364(iVar13,piVar1),
                   *(int *)(**(int **)(uVar12 + 8) + 0x4c) == 0)) {
                  uVar12 = 0;
                }
                iVar3 = FUN_002662b8(param_1);
                if (iVar3 != 0) {
                  FUN_00275f2c(param_1,uVar12 != 0,iVar2);
                  FUN_002668cc(param_1,iVar2);
                  if (uVar12 != 0) {
                    iVar4 = param_1[0x13] + 1;
                    param_1[0x13] = iVar4;
                    FUN_002662da(iVar3,0x5e,0,iVar4,0,iVar14,0);
                    FUN_002662da(iVar3,0x8b,iVar4,0,0,uVar12,0xfffffff6);
                    FUN_0025cdea(param_1);
                  }
                  iVar3 = *piVar1;
                  uVar5 = FUN_0025b0f4(iVar3,0xffffffff);
                  if ((*(uint *)(iVar13 + 0x18) & 0x4000000) != 0) {
                    puVar6 = (undefined4 *)FUN_0025d110(piVar1);
                    iVar4 = DAT_0028bdcc + 0x28bc84;
                    local_40 = 0;
                    for (; puVar6 != (undefined4 *)0x0; puVar6 = (undefined4 *)puVar6[3]) {
                      iVar9 = *param_1;
                      if (local_40 == 0) {
                        local_40 = FUN_0026877c(iVar9,DAT_0028bdd0 + 0x28bca0,*(undefined4 *)*puVar6
                                               );
                      }
                      else {
                        iVar7 = FUN_0026877c(iVar9,iVar4,local_40);
                        FUN_0025fbda(iVar9,local_40);
                        local_40 = iVar7;
                      }
                    }
                    if (local_40 != 0) {
                      if (iVar2 == 1) {
                        iVar4 = DAT_0028bdd4 + 0x28bcd6;
                      }
                      else {
                        iVar4 = DAT_0028bdd8 + 0x28bcdc;
                      }
                      FUN_00285af0(param_1,DAT_0028bddc + 0x28bce8,uVar11,iVar4,iVar3,iVar14,
                                   local_40);
                      FUN_0025fbda(iVar13,local_40);
                    }
                  }
                  if (iVar2 == 1) {
                    iVar2 = DAT_0028bde0 + 0x28bd04;
                  }
                  else {
                    iVar2 = DAT_0028bde4 + 0x28bd0a;
                  }
                  iVar4 = iVar14;
                  iVar9 = iVar14;
                  iVar7 = iVar14;
                  iVar15 = iVar14;
                  FUN_00285af0(param_1,DAT_0028bde8 + 0x28bd16,uVar11,iVar2,iVar14,iVar14,iVar14,
                               iVar14,iVar14,uVar5,iVar3);
                  iVar2 = FUN_0026460e(iVar13,DAT_0028bdec + 0x28bd30,uVar11);
                  if (iVar2 != 0) {
                    FUN_00285af0(param_1,DAT_0028bdf0 + 0x28bd42,uVar11,iVar14,*piVar1,iVar4,iVar9,
                                 iVar7,iVar15,uVar5,iVar3);
                  }
                  iVar2 = FUN_00268d24(param_1,piVar1);
                  if (iVar2 != 0) {
                    FUN_00285af0(param_1,DAT_0028bdf4 + 0x28bd60,iVar14,iVar14,iVar2,iVar4,iVar9,
                                 iVar7,iVar15,uVar5,iVar3);
                    FUN_0025fbda(iVar13,iVar2);
                  }
                  if ((*(uint *)(iVar13 + 0x18) & 0x4000000) != 0) {
                    for (puVar6 = (undefined4 *)FUN_0025d110(piVar1); puVar6 != (undefined4 *)0x0;
                        puVar6 = (undefined4 *)puVar6[3]) {
                      piVar10 = (int *)*puVar6;
                      if (piVar10 != piVar1) {
                        FUN_00268db4(param_1,piVar10,*piVar10);
                      }
                    }
                  }
                  FUN_00268db4(param_1,piVar1,iVar14);
                }
              }
              goto LAB_0028bda2;
            }
            iVar2 = DAT_0028bdc8 + 0x28bbb6;
          }
          else {
            iVar2 = DAT_0028bdc4 + 0x28bb90;
          }
        }
        else {
          iVar2 = DAT_0028bdbc + 0x28bb68;
          iVar3 = iVar14;
        }
        FUN_00268e48(param_1,iVar2,iVar3);
      }
    }
  }
LAB_0028bda2:
  FUN_00260fde(iVar13,param_2);
  FUN_0025fbda(iVar13,iVar14);
  *(undefined4 *)(iVar13 + 0x18) = uVar8;
  return;
}


