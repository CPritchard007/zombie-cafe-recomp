/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00289ab8 FUN_00289ab8 */

int * FUN_00289ab8(int *param_1,int *param_2,int param_3,int param_4)

{
  int *piVar1;
  undefined4 *puVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  char cVar10;
  int iVar11;
  int iVar12;
  char *pcVar13;
  int local_6c;
  int *local_68;
  int *local_38 [9];
  
  local_68 = (int *)param_1[0x6c];
  if (local_68 == (int *)0x0) {
    local_68 = param_1;
  }
  iVar11 = *param_1;
  piVar1 = (int *)FUN_0025f04c(iVar11,0x18);
  if (piVar1 != (int *)0x0) {
    piVar1[1] = local_68[0x8a];
    local_68[0x8a] = (int)piVar1;
    puVar2 = (undefined4 *)FUN_0025f04c(iVar11,0x1c);
    piVar1[2] = (int)puVar2;
    if (puVar2 == (undefined4 *)0x0) {
      piVar1 = (int *)0x0;
    }
    else {
      iVar12 = local_68[2];
      puVar2[6] = *(int *)(iVar12 + 0xb8);
      *(int *)(iVar12 + 0xb8) = (int)puVar2;
      piVar1[4] = -1;
      *piVar1 = (int)param_2;
      piVar1[3] = param_4;
      piVar1[5] = -1;
      piVar3 = (int *)FUN_0025f04c(iVar11,0x230);
      if (piVar3 == (int *)0x0) {
        piVar1 = (int *)0x0;
      }
      else {
        memset(local_38,0,0x20);
        *piVar3 = iVar11;
        piVar3[0x6d] = param_3;
        piVar3[0x6c] = (int)local_68;
        piVar3[0x81] = *param_2;
        *(char *)(piVar3 + 0x72) = (char)param_2[2];
        iVar12 = param_1[0x6f];
        piVar3[0x6e] = param_1[0x6e];
        piVar3[0x6f] = iVar12;
        local_38[0] = piVar3;
        iVar12 = FUN_002662b8(piVar3);
        if (iVar12 != 0) {
          uVar4 = FUN_0026877c(iVar11,DAT_00289d80 + 0x289b8c,*param_2);
          FUN_00263832(iVar12,0xffffffff,uVar4,0xffffffff);
          local_6c = param_2[3];
          if (local_6c != 0) {
            uVar4 = FUN_002606fc(iVar11,local_6c,0);
            iVar5 = FUN_00269020(local_38,uVar4);
            local_6c = 0;
            if ((iVar5 == 0) && (*(char *)(iVar11 + 0x36) == '\0')) {
              local_6c = FUN_00266020(iVar12);
              FUN_00278ac2(piVar3,uVar4,local_6c,8);
            }
            FUN_002610aa(iVar11,uVar4);
          }
          iVar5 = piVar3[2];
          iVar9 = *piVar3;
          for (pcVar13 = (char *)param_2[7]; pcVar13 != (char *)0x0;
              pcVar13 = *(char **)(pcVar13 + 0x20)) {
            cVar10 = (char)param_4;
            if (param_4 == 99) {
              cVar10 = pcVar13[1];
            }
            *(char *)((int)piVar3 + DAT_00289d84) = cVar10;
            cVar10 = *pcVar13;
            if (cVar10 == 'j') {
              uVar4 = FUN_00266f80(piVar3,pcVar13);
              uVar6 = FUN_002606fc(iVar9,*(undefined4 *)(pcVar13 + 0x14),0);
              FUN_0028a47c(piVar3,uVar4,uVar6);
            }
            else if (cVar10 == 'k') {
              uVar4 = FUN_00266f80(piVar3,pcVar13);
              uVar6 = FUN_002604c0(iVar9,*(undefined4 *)(pcVar13 + 0x18),0);
              uVar7 = FUN_002606fc(iVar9,*(undefined4 *)(pcVar13 + 0x14),0);
              FUN_0028ad28(piVar3,uVar4,uVar6,uVar7,*(undefined1 *)((int)piVar3 + DAT_00289d84));
            }
            else if (cVar10 == 'i') {
              uVar4 = FUN_00266f80(piVar3,pcVar13);
              uVar6 = FUN_002604c0(iVar9,*(undefined4 *)(pcVar13 + 0x18),0);
              uVar7 = FUN_002607da(iVar9,*(undefined4 *)(pcVar13 + 8),0);
              uVar8 = FUN_002603c0(iVar9,*(undefined4 *)(pcVar13 + 0x1c));
              FUN_00288b78(piVar3,uVar4,uVar6,uVar7,uVar8,
                           *(undefined1 *)((int)piVar3 + DAT_00289d84));
            }
            else {
              uVar4 = FUN_002607da(iVar9,*(undefined4 *)(pcVar13 + 8),0);
              FUN_00276118(piVar3,uVar4);
              FUN_00261092(iVar9,uVar4);
            }
            if (*pcVar13 != 't') {
              FUN_002662aa(iVar5,0x3c);
            }
          }
          if (local_6c != 0) {
            FUN_0025c384(iVar12,local_6c);
          }
          FUN_002662aa(iVar12,6);
          if (param_1[0x11] == 0) {
            param_1[1] = piVar3[1];
            param_1[0x11] = piVar3[0x11];
          }
          else {
            FUN_0025fbda(*piVar3);
          }
          if (*(char *)(iVar11 + 0x36) == '\0') {
            uVar4 = *(undefined4 *)(iVar12 + 4);
            FUN_0025fccc(iVar12,local_68 + 0x66);
            puVar2[1] = *(undefined4 *)(iVar12 + 0x1c);
            *(undefined4 *)(iVar12 + 4) = 0;
            *puVar2 = uVar4;
          }
          puVar2[2] = piVar3[0x13];
          puVar2[3] = piVar3[0x12];
          iVar5 = piVar3[0x15];
          puVar2[5] = param_2;
          puVar2[4] = iVar5;
          piVar1[4] = piVar3[0x70];
          piVar1[5] = piVar3[0x71];
          FUN_00263cc8(iVar12);
        }
        FUN_0025fbda(iVar11,piVar3);
      }
    }
  }
  return piVar1;
}


