/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000c1848 Cafe::createForNewColosseum */

/* Cafe::createForNewColosseum(int, int) */

Cafe * Cafe::createForNewColosseum(int param_1,int param_2)

{
  undefined1 uVar1;
  undefined2 uVar2;
  Cafe *this;
  long lVar3;
  CafeTile *this_00;
  int iVar4;
  int *piVar5;
  int iVar6;
  undefined2 *puVar7;
  int *piVar8;
  int *piVar9;
  int iVar10;
  undefined1 *puVar11;
  int *piVar12;
  int iVar13;
  int *piVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  bool bVar20;
  int local_38;
  Cafe local_28;
  Cafe local_24;
  
  this = (Cafe *)operator_new(0x108);
  iVar15 = DAT_000c1b0c + 0xc1860;
  Cafe(this);
  piVar14 = *(int **)(iVar15 + DAT_000c1b10);
  lVar3 = diamondToStaggeredCoords(-*piVar14,*piVar14);
  uVar2 = staggeredCoordsToIndex(lVar3);
  *(undefined2 *)(this + 0x98) = uVar2;
  piVar12 = *(int **)(iVar15 + DAT_000c1b14);
  piVar8 = *(int **)(iVar15 + DAT_000c1b18);
  lVar3 = diamondToStaggeredCoords(*piVar12,(*piVar8 * 2 - *piVar12) + -1);
  uVar2 = staggeredCoordsToIndex(lVar3);
  *(short *)(this + 0x9c) = (short)*piVar12;
  iVar6 = *piVar14;
  *(undefined2 *)(this + 0x9a) = uVar2;
  *(short *)(this + 0x9e) = (short)iVar6;
  this[100] = (Cafe)0x1;
  local_38 = 0;
  piVar9 = *(int **)(iVar15 + DAT_000c1b1c);
  do {
    if (*piVar9 * *piVar8 <= local_38) {
      local_28 = SUB41(param_1,0);
      local_24 = SUB41(param_2,0);
      this[0xa0] = local_28;
      this[0xa1] = local_24;
      generateTileGeometry(this);
      for (iVar6 = *piVar12 - param_1; iVar6 < *piVar12; iVar6 = iVar6 + 1) {
        lVar3 = diamondToStaggeredCoords(iVar6,*piVar14 + 1);
        iVar15 = staggeredCoordsToIndex(lVar3);
        addWallSection(this,iVar15,0);
      }
      for (iVar6 = param_2 + *piVar14; *piVar14 < iVar6; iVar6 = iVar6 + -1) {
        lVar3 = diamondToStaggeredCoords(*piVar12 + -1,iVar6);
        iVar15 = staggeredCoordsToIndex(lVar3);
        addWallSection(this,iVar15,1);
      }
      return this;
    }
    this_00 = (CafeTile *)operator_new(0x18);
    CafeTile::CafeTile(this_00);
    iVar13 = local_38 * 4;
    *(CafeTile **)(*(int *)this + iVar13) = this_00;
    lVar3 = indexToStaggeredCoords(local_38);
    iVar6 = staggeredToDiamondCoords(lVar3);
    iVar4 = *(int *)this;
    iVar16 = *piVar12;
    iVar10 = iVar6 >> 0x10;
    iVar6 = (int)(short)iVar6;
    piVar5 = *(int **)(iVar15 + DAT_000c1b20);
    if (((iVar16 < iVar10) && (iVar10 <= *piVar5 + iVar16)) ||
       ((iVar17 = *piVar14, iVar6 < iVar17 && (iVar17 - *piVar5 <= iVar6)))) {
      iVar17 = *piVar5;
      iVar18 = *piVar14;
      if ((iVar6 == (iVar18 - (iVar17 >> 1)) + -1) &&
         ((iVar10 <= iVar16 || (iVar16 + iVar17 < iVar10)))) {
        puVar11 = *(undefined1 **)(iVar4 + iVar13);
        puVar7 = *(undefined2 **)(iVar15 + DAT_000c1b24);
      }
      else {
        if (iVar10 == iVar16 + (iVar17 >> 1) + 1 && (iVar18 <= iVar6 || iVar6 < iVar18 - iVar17)) {
          **(undefined1 **)(iVar4 + iVar13) = (char)**(undefined2 **)(iVar15 + DAT_000c1b24);
          *(undefined1 *)(*(int *)(*(int *)this + iVar13) + 8) = 1;
          goto LAB_000c1a78;
        }
        puVar11 = *(undefined1 **)(iVar4 + iVar13);
        iVar6 = DAT_000c1b28;
LAB_000c1984:
        puVar7 = *(undefined2 **)(iVar15 + iVar6);
      }
      *puVar11 = (char)*puVar7;
    }
    else {
      iVar18 = *piVar5 + iVar16 + 1;
      if (((iVar10 == iVar18) && (iVar6 == iVar17)) ||
         ((iVar19 = (iVar17 - *piVar5) + -1, iVar6 == iVar19 && (iVar10 == iVar16)))) {
        puVar11 = *(undefined1 **)(iVar4 + iVar13);
        iVar4 = DAT_000c1b2c;
      }
      else {
        if ((iVar10 != iVar18) && (iVar6 != iVar19)) {
          if ((iVar10 == iVar16) || (iVar6 == iVar17)) {
            **(undefined1 **)(iVar4 + iVar13) = (char)**(undefined2 **)(iVar15 + DAT_000c1b34);
            bVar20 = true;
            if (iVar6 != *piVar14) {
              bVar20 = iVar6 == (*piVar14 - *piVar5) + -1;
            }
            *(bool *)(*(int *)(*(int *)this + iVar13) + 8) = bVar20;
          }
          else {
            if ((((iVar10 < iVar16) && (iVar16 - param_1 <= iVar10)) && (iVar17 < iVar6)) &&
               (iVar6 <= iVar17 + param_2)) {
              puVar11 = *(undefined1 **)(iVar4 + iVar13);
              iVar6 = DAT_000c1b38;
              goto LAB_000c1984;
            }
            puVar11 = *(undefined1 **)(iVar4 + iVar13);
            iVar4 = **(int **)(iVar15 + DAT_000c1b3c);
            iVar6 = CapcomMath::random((uint)**(byte **)(iVar15 + DAT_000c1b40));
            *puVar11 = (char)*(undefined2 *)(iVar4 + iVar6 * 2);
            iVar6 = *(int *)(*(int *)this + iVar13);
            uVar1 = CapcomMath::random(2);
            *(undefined1 *)(iVar6 + 8) = uVar1;
          }
          goto LAB_000c1a78;
        }
        puVar11 = *(undefined1 **)(iVar4 + iVar13);
        iVar4 = DAT_000c1b30;
      }
      *puVar11 = (char)**(undefined2 **)(iVar15 + iVar4);
      *(char *)(*(int *)(*(int *)this + iVar13) + 8) = '\x01' - (iVar6 == (*piVar14 - *piVar5) + -1)
      ;
    }
LAB_000c1a78:
    local_38 = local_38 + 1;
  } while( true );
}


