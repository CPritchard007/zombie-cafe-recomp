/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00268b90 FUN_00268b90 */

void FUN_00268b90(int *param_1,short *param_2,int *param_3)

{
  int *piVar1;
  int iVar2;
  short *psVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  int iVar6;
  char *pcVar7;
  int iVar8;
  int iVar9;
  undefined4 *puVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int local_4c;
  int *local_38;
  short *local_34;
  
  iVar2 = param_1[2];
  iVar6 = *param_1;
  if (((((char)param_1[0x75] == '\0') && (iVar2 != 0)) && ((char)param_1[4] == '\0')) &&
     (*(char *)(iVar6 + 0x36) == '\0')) {
    *(undefined1 *)(param_1 + 4) = 1;
    iVar12 = *(int *)(iVar6 + 0x18);
    iVar8 = iVar12 << 0x15;
    FUN_00263b94(iVar2,*param_3);
    iVar9 = DAT_00268d10 + 0x268be8;
    for (iVar14 = 0; iVar14 < *param_3; iVar14 = iVar14 + 1) {
      puVar10 = (undefined4 *)(param_3[2] + iVar14 * 0x14);
      pcVar7 = (char *)*puVar10;
      if (pcVar7 != (char *)0x0) {
        iVar13 = puVar10[1];
        if (iVar13 == 0) {
          if (((*pcVar7 == -0x66) || (*pcVar7 == -0x68)) && (param_2 != (short *)0x0)) {
            local_4c = (int)*(short *)(pcVar7 + 0x1c);
            iVar13 = 0;
            psVar3 = param_2;
            while ((iVar13 < *param_2 &&
                   (piVar1 = (int *)(psVar3 + 0x14), psVar3 = psVar3 + 0x20,
                   *piVar1 != *(int *)(pcVar7 + 0x18)))) {
              iVar13 = iVar13 + 1;
            }
            puVar4 = *(undefined4 **)(param_2 + iVar13 * 0x20 + 10);
            if ((local_4c < 0) && (local_4c = puVar4[1], local_4c < 0)) {
              iVar13 = DAT_00268d14 + 0x268c60;
            }
            else {
              iVar13 = *(int *)(local_4c * 0x18 + puVar4[3]);
            }
            if (iVar12 << 0x14 < 0 || iVar8 < 0) {
              if (iVar8 < 0) {
                iVar13 = FUN_0026877c(iVar6,DAT_00268d1c + 0x268c8e,*puVar4,iVar13);
                iVar11 = DAT_00268d20 + 0x268c98;
              }
              else {
                iVar11 = -1;
              }
            }
            else {
              iVar13 = FUN_0025f25a(iVar6,puVar10[2]);
              iVar11 = DAT_00268d18 + 0x268c78;
            }
          }
          else {
            iVar13 = FUN_0025f25a(iVar6,puVar10[2]);
            iVar11 = iVar9;
          }
        }
        else {
          iVar11 = -1;
        }
        FUN_00265916(iVar2,iVar14,0,iVar13,iVar11);
      }
    }
    iVar2 = param_1[2];
    local_38 = param_1;
    local_34 = param_2;
    for (iVar6 = 0; iVar6 < *param_3; iVar6 = iVar6 + 1) {
      uVar5 = FUN_0025d1b0(&local_38,*(undefined4 *)(iVar6 * 0x14 + param_3[2]),0,0,0);
      FUN_00265916(iVar2,iVar6,1,uVar5,0xffffffff);
    }
  }
  return;
}


