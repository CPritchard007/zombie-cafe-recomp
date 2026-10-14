/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00289a20 FUN_00289a20 */

int * FUN_00289a20(void)

{
  undefined4 uVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int *piVar5;
  undefined4 *puVar6;
  int *piVar7;
  undefined4 uVar8;
  int *extraout_r1;
  int iVar9;
  int iVar10;
  char cVar11;
  int iVar12;
  int iVar13;
  char *pcVar14;
  int unaff_r6;
  undefined4 unaff_r7;
  undefined4 in_stack_00000004;
  int iStack0000001c;
  undefined4 in_stack_00000024;
  undefined4 in_stack_00000028;
  undefined4 in_stack_00000078;
  undefined4 in_stack_0000009c;
  int iStack_5c;
  int *piStack_58;
  int *apiStack_28 [9];
  undefined4 uStack_4;
  
  iStack0000001c = *(int *)(unaff_r6 + 0x48);
  *(int *)(unaff_r6 + 0x48) = iStack0000001c + 1;
  uVar1 = FUN_002627dc(unaff_r6);
  piVar2 = (int *)FUN_002627dc(unaff_r6);
  FUN_0026641e(unaff_r7,0x2a,iStack0000001c,in_stack_00000028);
  uVar3 = FUN_002665da(unaff_r7,4,in_stack_0000009c);
  uVar4 = FUN_002665da(unaff_r7,0x1b,in_stack_00000024);
  FUN_00266266(unaff_r7,0x1f,in_stack_00000078,in_stack_00000028);
  FUN_0026641e(unaff_r7,0x38,iStack0000001c,piVar2);
  FUN_00266266(unaff_r7,0x39,iStack0000001c,uVar1);
  iVar9 = 0;
  FUN_0026641e(unaff_r7,1,0,uVar3);
  FUN_002624c2(unaff_r7,uVar4);
  FUN_002627fe(unaff_r6,uVar1);
  FUN_002627fe(unaff_r6,piVar2);
  FUN_00289264();
  uStack_4 = in_stack_00000004;
  piStack_58 = (int *)piVar2[0x6c];
  if ((int *)piVar2[0x6c] == (int *)0x0) {
    piStack_58 = piVar2;
  }
  iVar12 = *piVar2;
  piVar5 = (int *)FUN_0025f04c(iVar12,0x18);
  if (piVar5 != (int *)0x0) {
    piVar5[1] = piStack_58[0x8a];
    piStack_58[0x8a] = (int)piVar5;
    puVar6 = (undefined4 *)FUN_0025f04c(iVar12,0x1c);
    piVar5[2] = (int)puVar6;
    if (puVar6 == (undefined4 *)0x0) {
      piVar5 = (int *)0x0;
    }
    else {
      iVar13 = piStack_58[2];
      puVar6[6] = *(int *)(iVar13 + 0xb8);
      *(int *)(iVar13 + 0xb8) = (int)puVar6;
      piVar5[4] = -1;
      *piVar5 = (int)extraout_r1;
      piVar5[3] = (int)extraout_r1;
      piVar5[5] = -1;
      piVar7 = (int *)FUN_0025f04c(iVar12,0x230);
      if (piVar7 == (int *)0x0) {
        piVar5 = (int *)0x0;
      }
      else {
        memset(apiStack_28,0,0x20);
        *piVar7 = iVar12;
        piVar7[0x6d] = iVar9;
        piVar7[0x6c] = (int)piStack_58;
        piVar7[0x81] = *extraout_r1;
        *(char *)(piVar7 + 0x72) = (char)extraout_r1[2];
        iVar9 = piVar2[0x6f];
        piVar7[0x6e] = piVar2[0x6e];
        piVar7[0x6f] = iVar9;
        apiStack_28[0] = piVar7;
        iVar9 = FUN_002662b8(piVar7);
        if (iVar9 != 0) {
          uVar1 = FUN_0026877c(iVar12,DAT_00289d80 + 0x289b8c,*extraout_r1);
          FUN_00263832(iVar9,0xffffffff,uVar1,0xffffffff);
          iStack_5c = extraout_r1[3];
          if (iStack_5c != 0) {
            uVar1 = FUN_002606fc(iVar12,iStack_5c,0);
            iVar13 = FUN_00269020(apiStack_28,uVar1);
            iStack_5c = 0;
            if ((iVar13 == 0) && (*(char *)(iVar12 + 0x36) == '\0')) {
              iStack_5c = FUN_00266020(iVar9);
              FUN_00278ac2(piVar7,uVar1,iStack_5c,8);
            }
            FUN_002610aa(iVar12,uVar1);
          }
          iVar13 = piVar7[2];
          iVar10 = *piVar7;
          for (pcVar14 = (char *)extraout_r1[7]; pcVar14 != (char *)0x0;
              pcVar14 = *(char **)(pcVar14 + 0x20)) {
            cVar11 = (char)extraout_r1;
            if (extraout_r1 == (int *)0x63) {
              cVar11 = pcVar14[1];
            }
            *(char *)((int)piVar7 + DAT_00289d84) = cVar11;
            cVar11 = *pcVar14;
            if (cVar11 == 'j') {
              uVar1 = FUN_00266f80(piVar7,pcVar14);
              uVar3 = FUN_002606fc(iVar10,*(undefined4 *)(pcVar14 + 0x14),0);
              FUN_0028a47c(piVar7,uVar1,uVar3);
            }
            else if (cVar11 == 'k') {
              uVar1 = FUN_00266f80(piVar7,pcVar14);
              uVar3 = FUN_002604c0(iVar10,*(undefined4 *)(pcVar14 + 0x18),0);
              uVar4 = FUN_002606fc(iVar10,*(undefined4 *)(pcVar14 + 0x14),0);
              FUN_0028ad28(piVar7,uVar1,uVar3,uVar4,*(undefined1 *)((int)piVar7 + DAT_00289d84));
            }
            else if (cVar11 == 'i') {
              uVar1 = FUN_00266f80(piVar7,pcVar14);
              uVar3 = FUN_002604c0(iVar10,*(undefined4 *)(pcVar14 + 0x18),0);
              uVar4 = FUN_002607da(iVar10,*(undefined4 *)(pcVar14 + 8),0);
              uVar8 = FUN_002603c0(iVar10,*(undefined4 *)(pcVar14 + 0x1c));
              FUN_00288b78(piVar7,uVar1,uVar3,uVar4,uVar8,
                           *(undefined1 *)((int)piVar7 + DAT_00289d84));
            }
            else {
              uVar1 = FUN_002607da(iVar10,*(undefined4 *)(pcVar14 + 8),0);
              FUN_00276118(piVar7,uVar1);
              FUN_00261092(iVar10,uVar1);
            }
            if (*pcVar14 != 't') {
              FUN_002662aa(iVar13,0x3c);
            }
          }
          if (iStack_5c != 0) {
            FUN_0025c384(iVar9,iStack_5c);
          }
          FUN_002662aa(iVar9,6);
          if (piVar2[0x11] == 0) {
            piVar2[1] = piVar7[1];
            piVar2[0x11] = piVar7[0x11];
          }
          else {
            FUN_0025fbda(*piVar7);
          }
          if (*(char *)(iVar12 + 0x36) == '\0') {
            uVar1 = *(undefined4 *)(iVar9 + 4);
            FUN_0025fccc(iVar9,piStack_58 + 0x66);
            puVar6[1] = *(undefined4 *)(iVar9 + 0x1c);
            *(undefined4 *)(iVar9 + 4) = 0;
            *puVar6 = uVar1;
          }
          puVar6[2] = piVar7[0x13];
          puVar6[3] = piVar7[0x12];
          iVar13 = piVar7[0x15];
          puVar6[5] = extraout_r1;
          puVar6[4] = iVar13;
          piVar5[4] = piVar7[0x70];
          piVar5[5] = piVar7[0x71];
          FUN_00263cc8(iVar9);
        }
        FUN_0025fbda(iVar12,piVar7);
      }
    }
  }
  return piVar5;
}


