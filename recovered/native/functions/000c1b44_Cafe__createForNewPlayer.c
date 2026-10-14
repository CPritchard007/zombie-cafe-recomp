/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000c1b44 Cafe::createForNewPlayer */

/* WARNING: Function: __gnu_thumb1_case_uqi replaced with injection: switch8_r0 */
/* WARNING (jumptable): Removing unreachable block (ram,0x000c2034) */
/* WARNING: Removing unreachable block (ram,0x000c2034) */
/* Cafe::createForNewPlayer() */

Cafe * Cafe::createForNewPlayer(void)

{
  undefined1 uVar1;
  Cafe *this;
  CafeTile *this_00;
  long lVar2;
  int iVar3;
  char cVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  int iVar10;
  int iVar11;
  int *piVar12;
  int *piVar13;
  int iVar14;
  int iVar15;
  undefined1 *puVar16;
  uint uVar17;
  char *pcVar18;
  int iVar19;
  int iVar20;
  int *piVar21;
  int iVar22;
  bool bVar23;
  int local_38;
  Cafe local_30;
  Cafe local_2c;
  
  L_PrintLog((char *)(DAT_000c1e48 + 0xc1b50),(char *)(DAT_000c1e4c + 0xc1b52));
  this = (Cafe *)operator_new(0x108);
  iVar20 = DAT_000c1e50 + 0xc1b64;
  Cafe(this);
  piVar21 = *(int **)(iVar20 + DAT_000c1e54);
  pcVar18 = (char *)(DAT_000c1e58 + 0xc1b78);
  *(short *)(this + 0x9c) = (short)*piVar21;
  piVar9 = *(int **)(iVar20 + DAT_000c1e5c);
  *(short *)(this + 0x9e) = (short)*piVar9;
  this[100] = (Cafe)0x0;
  L_PrintLog(pcVar18,(char *)(DAT_000c1e60 + 0xc1b92));
  iVar10 = **(int **)(iVar20 + DAT_000c1e64);
  iVar11 = **(int **)(iVar20 + DAT_000c1e6c);
  L_PrintLog(pcVar18,(char *)(DAT_000c1e68 + 0xc1ba0));
  local_38 = 0;
  piVar12 = *(int **)(iVar20 + DAT_000c1e70);
  piVar13 = *(int **)(iVar20 + DAT_000c1e74);
  for (; local_38 < *piVar13 * *piVar12; local_38 = local_38 + 1) {
    this_00 = (CafeTile *)operator_new(0x18);
    CafeTile::CafeTile(this_00);
    iVar19 = local_38 * 4;
    *(CafeTile **)(*(int *)this + iVar19) = this_00;
    lVar2 = indexToStaggeredCoords(local_38);
    iVar3 = staggeredToDiamondCoords(lVar2);
    iVar5 = iVar3 >> 0x10;
    iVar14 = *piVar21;
    piVar6 = *(int **)(iVar20 + DAT_000c1e78);
    iVar3 = (int)(short)iVar3;
    iVar15 = *(int *)this;
    if (((iVar14 < iVar5) && (iVar5 <= iVar14 + *piVar6)) ||
       ((iVar7 = *piVar9, iVar3 < iVar7 && (iVar7 - *piVar6 <= iVar3)))) {
      iVar7 = *piVar9;
      iVar8 = *piVar6;
      if ((iVar3 == (iVar7 - (iVar8 >> 1)) + -1) && ((iVar5 <= iVar14 || (iVar14 + iVar8 < iVar5))))
      {
        pcVar18 = *(char **)(iVar15 + iVar19);
        iVar3 = DAT_000c1e7c;
      }
      else {
        if ((iVar5 == iVar14 + (iVar8 >> 1) + 1) && ((iVar7 <= iVar3 || (iVar3 < iVar7 - iVar8)))) {
          **(undefined1 **)(iVar15 + iVar19) = (char)**(undefined2 **)(iVar20 + DAT_000c1e7c);
          *(undefined1 *)(*(int *)(*(int *)this + iVar19) + 8) = 1;
          goto LAB_000c1f6e;
        }
        pcVar18 = *(char **)(iVar15 + iVar19);
        iVar3 = DAT_000c1e80;
      }
      cVar4 = (char)**(undefined2 **)(iVar20 + iVar3);
      goto LAB_000c1c84;
    }
    iVar8 = *piVar6;
    if (iVar5 == iVar14 + iVar8 + 1) {
      if (((iVar3 == iVar7) || (iVar3 == (iVar7 - iVar8) + -1)) && (iVar5 == iVar14)) {
        puVar16 = *(undefined1 **)(iVar15 + iVar19);
        iVar5 = DAT_000c1e84;
      }
      else {
LAB_000c1cca:
        puVar16 = *(undefined1 **)(iVar15 + iVar19);
        iVar5 = DAT_000c1e88;
      }
      *puVar16 = (char)**(undefined2 **)(iVar20 + iVar5);
      *(char *)(*(int *)(*(int *)this + iVar19) + 8) = '\x01' - (iVar3 == (*piVar9 - *piVar6) + -1);
    }
    else {
      if (iVar3 == (iVar7 - iVar8) + -1) goto LAB_000c1cca;
      if ((iVar5 == iVar14) || (iVar3 == iVar7)) {
        **(undefined1 **)(iVar15 + iVar19) = (char)**(undefined2 **)(iVar20 + DAT_000c1e8c);
        bVar23 = true;
        if (iVar3 != *piVar9) {
          bVar23 = iVar3 == (*piVar9 - *piVar6) + -1;
        }
        *(bool *)(*(int *)(*(int *)this + iVar19) + 8) = bVar23;
      }
      else if ((((iVar5 < iVar14) && (iVar8 = iVar14 - iVar10, iVar8 <= iVar5)) && (iVar7 < iVar3))
              && (iVar3 <= iVar7 + iVar11)) {
        if (iVar8 + 2 < iVar5) {
LAB_000c1d7c:
          if ((iVar5 == iVar14 + -2) && (iVar3 == iVar7 + 1)) {
            pcVar18 = *(char **)(iVar15 + iVar19);
            cVar4 = **(char **)(iVar20 + DAT_000c1e90) + '\a';
          }
          else {
            iVar22 = iVar14 + -1;
            if ((iVar5 == iVar22) && (iVar3 == iVar7 + 1)) {
              pcVar18 = *(char **)(iVar15 + iVar19);
              cVar4 = **(char **)(iVar20 + DAT_000c1e90) + '\x06';
            }
            else if (iVar5 == iVar8) {
              if (iVar3 == iVar7 + 3) {
                pcVar18 = *(char **)(iVar15 + iVar19);
                cVar4 = **(char **)(iVar20 + DAT_000c1e90) + '\x05';
              }
              else if (iVar3 == iVar7 + 4) {
                pcVar18 = *(char **)(iVar15 + iVar19);
                cVar4 = **(char **)(iVar20 + DAT_000c1e90) + '\x04';
              }
              else if (iVar3 == iVar7 + 5) {
                pcVar18 = *(char **)(iVar15 + iVar19);
                cVar4 = **(char **)(iVar20 + DAT_000c1e90) + '\x03';
              }
              else {
                if (iVar3 != iVar7 + 6) goto LAB_000c1e08;
                pcVar18 = *(char **)(iVar15 + iVar19);
                cVar4 = **(char **)(iVar20 + DAT_000c1e90) + '\x02';
              }
            }
            else {
LAB_000c1e08:
              if (iVar5 == iVar8 + 1) {
                if (iVar3 == iVar7 + 5) {
                  pcVar18 = *(char **)(iVar15 + iVar19);
                  cVar4 = **(char **)(iVar20 + DAT_000c1e90);
                }
                else if (iVar3 == iVar7 + 6) {
                  pcVar18 = *(char **)(iVar15 + iVar19);
                  cVar4 = **(char **)(iVar20 + DAT_000c1e90) + '\x01';
                }
                else if (iVar3 == iVar7 + 3) {
                  pcVar18 = *(char **)(iVar15 + iVar19);
                  cVar4 = **(char **)(iVar20 + DAT_000c1e90) + '\v';
                }
                else {
                  if (iVar3 != iVar7 + 4) goto LAB_000c1ea6;
                  pcVar18 = *(char **)(iVar15 + iVar19);
                  cVar4 = **(char **)(iVar20 + DAT_000c20d0) + '\b';
                }
              }
              else {
LAB_000c1ea6:
                if (iVar5 == iVar8 + 2) {
                  if (iVar3 == iVar7 + 3) {
                    pcVar18 = *(char **)(iVar15 + iVar19);
                    cVar4 = **(char **)(iVar20 + DAT_000c20d0) + '\n';
                  }
                  else if (iVar3 == iVar7 + 4) {
                    pcVar18 = *(char **)(iVar15 + iVar19);
                    cVar4 = **(char **)(iVar20 + DAT_000c20d0) + '\t';
                  }
                  else {
                    if (iVar3 != iVar7 + 5) goto LAB_000c1ee4;
                    pcVar18 = *(char **)(iVar15 + iVar19);
                    cVar4 = **(char **)(iVar20 + DAT_000c20d0) + '\x0e';
                  }
                }
                else {
LAB_000c1ee4:
                  if ((iVar5 == iVar22) && (iVar3 == iVar7 + 6)) {
                    pcVar18 = *(char **)(iVar15 + iVar19);
                    cVar4 = **(char **)(iVar20 + DAT_000c20d0) + '\x0f';
                  }
                  else if ((iVar5 == iVar14 + -2) && (iVar3 == iVar7 + 6)) {
                    pcVar18 = *(char **)(iVar15 + iVar19);
                    cVar4 = **(char **)(iVar20 + DAT_000c20d0) + '\x10';
                  }
                  else {
                    pcVar18 = *(char **)(iVar15 + iVar19);
                    if ((iVar5 == iVar22) && (iVar3 == iVar7 + 5)) {
                      cVar4 = **(char **)(iVar20 + DAT_000c20d0) + '\x11';
                    }
                    else {
                      cVar4 = (char)*(undefined2 *)
                                     (*(int *)((uint)**(byte **)(iVar20 + DAT_000c20d4) * 4 +
                                              *(int *)(this + 0x94)) + 0x3c);
                    }
                  }
                }
              }
            }
          }
        }
        else if (iVar3 == iVar7 + 1) {
          pcVar18 = *(char **)(iVar15 + iVar19);
          cVar4 = **(char **)(iVar20 + DAT_000c1e90) + '\r';
        }
        else {
          if (iVar3 != iVar7 + 2) goto LAB_000c1d7c;
          pcVar18 = *(char **)(iVar15 + iVar19);
          cVar4 = **(char **)(iVar20 + DAT_000c1e90) + '\f';
        }
LAB_000c1c84:
        *pcVar18 = cVar4;
      }
      else {
        puVar16 = *(undefined1 **)(iVar15 + iVar19);
        iVar5 = **(int **)(iVar20 + DAT_000c20d8);
        iVar3 = CapcomMath::random((uint)**(byte **)(iVar20 + DAT_000c20dc));
        *puVar16 = (char)*(undefined2 *)(iVar5 + iVar3 * 2);
        iVar3 = *(int *)(*(int *)this + iVar19);
        uVar1 = CapcomMath::random(2);
        *(undefined1 *)(iVar3 + 8) = uVar1;
      }
    }
LAB_000c1f6e:
  }
  L_PrintLog((char *)(DAT_000c20e0 + 0xc1f90),(char *)(DAT_000c20e4 + 0xc1f92));
  local_30 = SUB41(iVar10,0);
  local_2c = SUB41(iVar11,0);
  this[0xa0] = local_30;
  this[0xa1] = local_2c;
  generateTileGeometry(this);
  iVar5 = *piVar21;
  for (iVar3 = iVar5 - iVar10; iVar3 < *piVar21; iVar3 = iVar3 + 1) {
    lVar2 = diamondToStaggeredCoords(iVar3,*piVar9 + 1);
    iVar14 = staggeredCoordsToIndex(lVar2);
    iVar15 = iVar3 - (iVar5 - iVar10);
    if (iVar15 == 5) {
      uVar17 = **(byte **)(iVar20 + DAT_000c20e8) + 5;
LAB_000c1fe8:
      addWallSection(this,iVar14,0,uVar17);
    }
    else {
      if (iVar15 == 6) {
        uVar17 = **(byte **)(iVar20 + DAT_000c20e8) + 6;
        goto LAB_000c1fe8;
      }
      if (iVar15 == 1) {
        uVar17 = (uint)**(byte **)(iVar20 + DAT_000c20e8);
        goto LAB_000c1fe8;
      }
      addWallSection(this,iVar14,0);
    }
  }
  iVar3 = *piVar9;
  iVar10 = iVar11 + iVar3;
  do {
    if (iVar10 <= *piVar9) {
      pcVar18 = (char *)(DAT_000c20ec + 0xc2088);
      L_PrintLog(pcVar18,(char *)(DAT_000c20f0 + 0xc208c));
      lVar2 = diamondToStaggeredCoords
                        (*piVar21 + -1,*piVar9 + 1 + **(int **)(iVar20 + DAT_000c20f4));
      iVar10 = staggeredCoordsToIndex(lVar2);
      setDoor(this,iVar10,1,true);
      L_PrintLog(pcVar18,(char *)(DAT_000c20f8 + 0xc20be));
      return this;
    }
    lVar2 = diamondToStaggeredCoords(*piVar21 + -1,iVar10);
    iVar5 = staggeredCoordsToIndex(lVar2);
    switch(iVar10 - (iVar11 + iVar3)) {
    case 0:
      iVar14 = **(byte **)(iVar20 + DAT_000c20e8) + 2;
      break;
    case -5:
      iVar14 = **(byte **)(iVar20 + DAT_000c20e8) + 3;
      break;
    case -4:
      iVar14 = **(byte **)(iVar20 + DAT_000c20e8) + 4;
      break;
    default:
      addWallSection(this,iVar5,1);
      goto LAB_000c2076;
    case -1:
      iVar14 = **(byte **)(iVar20 + DAT_000c20e8) + 1;
    }
    addWallSection(this,iVar5,1,iVar14);
LAB_000c2076:
    iVar10 = iVar10 + -1;
  } while( true );
}


