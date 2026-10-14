/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000c151c Cafe::createForNewRaid */

/* Cafe::createForNewRaid(int, int) */

Cafe * Cafe::createForNewRaid(int param_1,int param_2)

{
  undefined1 uVar1;
  undefined2 uVar2;
  Cafe *this;
  long lVar3;
  CafeTile *this_00;
  int iVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int *piVar10;
  int *piVar11;
  int iVar12;
  undefined1 *puVar13;
  int *piVar14;
  int iVar15;
  int *piVar16;
  int iVar17;
  int iVar18;
  bool bVar19;
  int local_38;
  Cafe local_28;
  Cafe local_24;
  
  this = (Cafe *)operator_new(0x108);
  iVar17 = DAT_000c180c + 0xc1534;
  Cafe(this);
  piVar16 = *(int **)(iVar17 + DAT_000c1810);
  lVar3 = diamondToStaggeredCoords(-*piVar16,*piVar16);
  uVar2 = staggeredCoordsToIndex(lVar3);
  *(undefined2 *)(this + 0x98) = uVar2;
  piVar14 = *(int **)(iVar17 + DAT_000c1814);
  piVar10 = *(int **)(iVar17 + DAT_000c1818);
  lVar3 = diamondToStaggeredCoords(*piVar14,(*piVar10 * 2 - *piVar14) + -1);
  uVar2 = staggeredCoordsToIndex(lVar3);
  *(short *)(this + 0x9c) = (short)*piVar14;
  iVar6 = *piVar16;
  *(undefined2 *)(this + 0x9a) = uVar2;
  *(short *)(this + 0x9e) = (short)iVar6;
  this[100] = (Cafe)0x1;
  local_38 = 0;
  piVar11 = *(int **)(iVar17 + DAT_000c181c);
  do {
    if (*piVar11 * *piVar10 <= local_38) {
      local_28 = SUB41(param_1,0);
      local_24 = SUB41(param_2,0);
      this[0xa0] = local_28;
      this[0xa1] = local_24;
      generateTileGeometry(this);
      for (iVar6 = *piVar14 - param_1; iVar6 < *piVar14; iVar6 = iVar6 + 1) {
        lVar3 = diamondToStaggeredCoords(iVar6,*piVar16 + 1);
        iVar4 = staggeredCoordsToIndex(lVar3);
        addWallSection(this,iVar4,0);
      }
      for (iVar6 = param_2 + *piVar16; *piVar16 < iVar6; iVar6 = iVar6 + -1) {
        lVar3 = diamondToStaggeredCoords(*piVar14 + -1,iVar6);
        iVar4 = staggeredCoordsToIndex(lVar3);
        addWallSection(this,iVar4,1);
      }
      lVar3 = diamondToStaggeredCoords
                        ((*piVar14 + -1) - **(int **)(iVar17 + DAT_000c1844),*piVar16 + 1);
      iVar6 = staggeredCoordsToIndex(lVar3);
      setDoor(this,iVar6,0,true);
      return this;
    }
    this_00 = (CafeTile *)operator_new(0x18);
    CafeTile::CafeTile(this_00);
    iVar15 = local_38 * 4;
    *(CafeTile **)(*(int *)this + iVar15) = this_00;
    lVar3 = indexToStaggeredCoords(local_38);
    iVar6 = staggeredToDiamondCoords(lVar3);
    iVar4 = *(int *)this;
    iVar7 = iVar6 >> 0x10;
    iVar12 = *piVar14;
    iVar6 = (int)(short)iVar6;
    piVar5 = *(int **)(iVar17 + DAT_000c1820);
    if (((iVar12 < iVar7) && (iVar7 <= *piVar5 + iVar12)) ||
       ((iVar8 = *piVar16, iVar6 < iVar8 && (iVar8 - *piVar5 <= iVar6)))) {
      iVar8 = *piVar5;
      iVar9 = *piVar16;
      if ((iVar6 == (iVar9 - (iVar8 >> 1)) + -1) && ((iVar7 <= iVar12 || (iVar12 + iVar8 < iVar7))))
      {
        puVar13 = *(undefined1 **)(iVar4 + iVar15);
        iVar6 = DAT_000c1824;
      }
      else {
        if (iVar7 == iVar12 + (iVar8 >> 1) + 1 && (iVar9 <= iVar6 || iVar6 < iVar9 - iVar8)) {
          **(undefined1 **)(iVar4 + iVar15) = (char)**(undefined2 **)(iVar17 + DAT_000c1824);
          *(undefined1 *)(*(int *)(*(int *)this + iVar15) + 8) = 1;
          goto LAB_000c1754;
        }
        puVar13 = *(undefined1 **)(iVar4 + iVar15);
        iVar6 = DAT_000c1828;
      }
LAB_000c1658:
      *puVar13 = (char)**(undefined2 **)(iVar17 + iVar6);
    }
    else {
      iVar9 = *piVar5 + iVar12 + 1;
      if (((iVar7 == iVar9) && (iVar6 == iVar8)) ||
         ((iVar18 = (iVar8 - *piVar5) + -1, iVar6 == iVar18 && (iVar7 == iVar12)))) {
        puVar13 = *(undefined1 **)(iVar4 + iVar15);
        iVar4 = DAT_000c182c;
      }
      else {
        if ((iVar7 != iVar9) && (iVar6 != iVar18)) {
          if ((iVar7 == iVar12) || (iVar6 == iVar8)) {
            **(undefined1 **)(iVar4 + iVar15) = (char)**(undefined2 **)(iVar17 + DAT_000c1834);
            bVar19 = true;
            if (iVar6 != *piVar16) {
              bVar19 = iVar6 == (*piVar16 - *piVar5) + -1;
            }
            *(bool *)(*(int *)(*(int *)this + iVar15) + 8) = bVar19;
          }
          else {
            if ((((iVar7 < iVar12) && (iVar12 - param_1 <= iVar7)) && (iVar8 < iVar6)) &&
               (iVar6 <= iVar8 + param_2)) {
              puVar13 = *(undefined1 **)(iVar4 + iVar15);
              iVar6 = DAT_000c1838;
              goto LAB_000c1658;
            }
            puVar13 = *(undefined1 **)(iVar4 + iVar15);
            iVar4 = **(int **)(iVar17 + DAT_000c183c);
            iVar6 = CapcomMath::random((uint)**(byte **)(iVar17 + DAT_000c1840));
            *puVar13 = (char)*(undefined2 *)(iVar4 + iVar6 * 2);
            iVar6 = *(int *)(*(int *)this + iVar15);
            uVar1 = CapcomMath::random(2);
            *(undefined1 *)(iVar6 + 8) = uVar1;
          }
          goto LAB_000c1754;
        }
        puVar13 = *(undefined1 **)(iVar4 + iVar15);
        iVar4 = DAT_000c1830;
      }
      *puVar13 = (char)**(undefined2 **)(iVar17 + iVar4);
      *(char *)(*(int *)(*(int *)this + iVar15) + 8) = '\x01' - (iVar6 == (*piVar16 - *piVar5) + -1)
      ;
    }
LAB_000c1754:
    local_38 = local_38 + 1;
  } while( true );
}


