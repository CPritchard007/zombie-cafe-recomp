/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002803b0 FUN_002803b0 */

int FUN_002803b0(int param_1,undefined4 param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  int *piVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  
  if (*(char *)(param_1 + 8) != '\x02') {
    return 0;
  }
  piVar6 = *(int **)(param_1 + 4);
  FUN_00261f68();
  if (*(char *)((int)piVar6 + 0x11) != '\0') {
    iVar5 = *piVar6;
    for (iVar9 = piVar6[2]; iVar9 != 0; iVar9 = *(int *)(iVar9 + 8)) {
      sqlite3_free(*(undefined4 *)(iVar9 + 0x14));
      *(undefined4 *)(iVar9 + 0x14) = 0;
    }
    if (*(char *)((int)piVar6 + 0x12) == '\0') {
      uVar10 = piVar6[0xb];
      uVar2 = FUN_0025c29c(piVar6,uVar10);
      uVar4 = DAT_00280510;
      if (uVar2 != uVar10) {
        iVar9 = __udivsi3(*(undefined4 *)(DAT_0028050c + 0x280470),piVar6[8]);
        uVar7 = iVar9 + 1;
        uVar4 = DAT_00280510;
        if (uVar10 != uVar7) {
          iVar9 = FUN_0025ba30(*(int *)(piVar6[3] + 0x38) + 0x24);
          iVar8 = __udivsi3(piVar6[9],5);
          iVar8 = __udivsi3((iVar8 - uVar10) + uVar2 + iVar9,iVar8);
          uVar2 = (uVar10 - iVar9) - iVar8;
          if (uVar7 < uVar10) {
            uVar2 = uVar2 - (uVar2 < uVar7);
          }
          for (; (uVar3 = FUN_0025c29c(piVar6,uVar2), uVar3 == uVar2 || (uVar2 == uVar7));
              uVar2 = uVar2 - 1) {
          }
          iVar8 = 0;
          uVar4 = DAT_00280514;
          if (uVar2 <= uVar10) {
            for (; (iVar8 == 0 && (uVar2 < uVar10)); uVar10 = uVar10 - 1) {
              iVar8 = FUN_0027e388(piVar6,uVar2,uVar10);
            }
            if (((iVar8 == 0x65) || (iVar8 == 0)) && (iVar9 != 0)) {
              iVar8 = FUN_002733c4(*(undefined4 *)(piVar6[3] + 0x44));
              FUN_0025ba48(*(int *)(piVar6[3] + 0x38) + 0x20,0);
              FUN_0025ba48(*(int *)(piVar6[3] + 0x38) + 0x24,0);
              FUN_0025ba48(*(int *)(piVar6[3] + 0x38) + 0x1c,uVar2);
              *(uint *)(*piVar6 + 0x18) = uVar2;
              piVar6[0xb] = uVar2;
            }
            if (iVar8 != 0) {
              bVar1 = *(byte *)(iVar5 + 0xf);
              if ((bVar1 != 6) && (1 < bVar1)) {
                FUN_002747d4(iVar5);
              }
              goto LAB_00280500;
            }
            goto LAB_002804e8;
          }
        }
      }
      iVar8 = FUN_0026b4e4(uVar4);
      if (iVar8 != 0) goto LAB_00280500;
    }
  }
LAB_002804e8:
  iVar5 = *piVar6;
  iVar8 = *(int *)(iVar5 + 0x28);
  if ((iVar8 == 0) && (2 < *(byte *)(iVar5 + 0xf))) {
    iVar8 = FUN_00280070(iVar5,param_2,0);
  }
LAB_00280500:
  FUN_00262002(param_1);
  return iVar8;
}


