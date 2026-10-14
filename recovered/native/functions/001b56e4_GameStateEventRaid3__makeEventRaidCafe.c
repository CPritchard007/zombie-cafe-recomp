/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001b56e4 GameStateEventRaid3::makeEventRaidCafe */

/* GameStateEventRaid3::makeEventRaidCafe() */

void __thiscall GameStateEventRaid3::makeEventRaidCafe(GameStateEventRaid3 *this)

{
  char cVar1;
  short sVar2;
  undefined4 uVar3;
  Furniture *pFVar4;
  long lVar5;
  int iVar6;
  Cafe *this_00;
  int iVar7;
  int *piVar8;
  int *piVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  FurnitureData *pFVar13;
  code *pcVar14;
  int iVar15;
  int iVar16;
  int local_38;
  
  iVar15 = DAT_001b597c;
  colosseumLayouts::load();
  colosseumItems::load();
  iVar15 = iVar15 + 0x1b56fa;
  iVar12 = 0;
  if (0 < **(short **)(iVar15 + DAT_001b5980)) {
    iVar12 = **(int **)(iVar15 + DAT_001b5984);
  }
  iVar16 = *(int *)(this + 0xc);
  uVar3 = Cafe::createForNewColosseum(*(int *)(iVar12 + 0xc),*(int *)(iVar12 + 0x10));
  *(undefined4 *)(this + 0x84) = uVar3;
  *(undefined4 *)(iVar16 + 0x7e8) = uVar3;
  iVar16 = DAT_001b598c;
  iVar7 = DAT_001b5988 + 0x1b5730 + *(int *)(this + 0x30) * 8;
  iVar6 = *(int *)(*(int *)(iVar7 + 0x3c) * 4 + *(int *)(*(int *)(this + 0x84) + 0x94));
  iVar7 = *(int *)(*(int *)(iVar7 + 0x40) * 4 + *(int *)(*(int *)(this + 0x84) + 0x94));
  for (local_38 = 0; iVar10 = DAT_001b5998, local_38 < *(int *)(iVar12 + 0xc);
      local_38 = local_38 + 1) {
    piVar8 = *(int **)(this + 0x84);
    lVar5 = Cafe::diamondToStaggeredCoords
                      ((**(int **)(iVar15 + DAT_001b5990) - *(int *)(iVar12 + 0xc)) + local_38,
                       **(int **)(iVar15 + DAT_001b5994) + 1);
    iVar10 = Cafe::staggeredCoordsToIndex(lVar5);
    iVar10 = *(int *)(*(int *)(iVar10 * 4 + *piVar8) + 0xc);
    cVar1 = *(char *)(*(int *)(this + 0x30) * 10 + local_38 + iVar16 + 0x1b57a2);
    if (cVar1 == '\0') {
      *(undefined2 *)(iVar10 + 0x38) = *(undefined2 *)(iVar6 + 0x3c);
      uVar3 = *(undefined4 *)(iVar6 + 0x48);
LAB_001b57a0:
      *(undefined4 *)(iVar10 + 0x40) = uVar3;
    }
    else if (cVar1 == '\x01') {
      *(undefined2 *)(iVar10 + 0x38) = *(undefined2 *)(iVar7 + 0x3c);
      uVar3 = *(undefined4 *)(iVar7 + 0x48);
      goto LAB_001b57a0;
    }
  }
  local_38 = 0;
  do {
    iVar16 = DAT_001b599c;
    if (*(int *)(iVar12 + 0x10) <= local_38) {
      for (local_38 = 0; iVar6 = DAT_001b59a0, local_38 < *(int *)(iVar12 + 0xc);
          local_38 = local_38 + 1) {
        for (iVar6 = 0; iVar6 < *(int *)(iVar12 + 0x10); iVar6 = iVar6 + 1) {
          this_00 = *(Cafe **)(this + 0x84);
          iVar10 = *(int *)(*(short *)(iVar16 + (*(int *)(this + 0x30) * 0x6e + iVar6 * 10 +
                                                local_38) * 2 + 0x1b585c) * 4 +
                           *(int *)(this_00 + 0x94));
          lVar5 = Cafe::diamondToStaggeredCoords
                            ((**(int **)(iVar15 + DAT_001b5990) - *(int *)(iVar12 + 0xc)) + local_38
                             ,(*(int *)(iVar12 + 0x10) + **(int **)(iVar15 + DAT_001b5994)) - iVar6)
          ;
          iVar7 = Cafe::staggeredCoordsToIndex(lVar5);
          Cafe::setTileImageIndex
                    (this_00,iVar7,(int)*(short *)(iVar10 + 0x3c),*(long *)(iVar10 + 0x48));
        }
      }
      local_38 = 0;
      while( true ) {
        iVar16 = DAT_001b59a4;
        iVar7 = *(int *)(iVar12 + 0xc);
        piVar8 = *(int **)(iVar15 + DAT_001b5990);
        piVar9 = *(int **)(iVar15 + DAT_001b5994);
        if (iVar7 <= local_38) break;
        iVar11 = *(int *)(iVar12 + 0x10);
        iVar10 = *piVar9;
        iVar16 = *piVar8;
        sVar2 = *(short *)(iVar6 + (*(int *)(this + 0x30) * 10 + local_38) * 2 + 0x1b58d2);
        if (sVar2 != 0) {
          pFVar13 = *(FurnitureData **)(sVar2 * 4 + *(int *)(*(int *)(this + 0x84) + 0x94));
          pFVar4 = (Furniture *)operator_new(100);
          Furniture::Furniture(pFVar4,pFVar13);
          lVar5 = Cafe::diamondToStaggeredCoords((iVar16 - iVar7) + local_38,iVar10 + iVar11 + 1);
          sVar2 = Cafe::staggeredCoordsToIndex(lVar5);
          *(short *)(pFVar4 + 0x2c) = sVar2;
          pcVar14 = *(code **)(*(int *)pFVar4 + 0xc);
          uVar3 = Cafe::indexToWorldCoordsCenter(*(Cafe **)(this + 0x84),(int)sVar2);
          (*pcVar14)(pFVar4,uVar3);
          Furniture::setOrientation(pFVar4,'\x01');
          pFVar4[0x54] = (Furniture)0x0;
          Cafe::addFurniture(*(Cafe **)(this + 0x84),pFVar4);
        }
        local_38 = local_38 + 1;
      }
      for (local_38 = 0; iVar15 = *(int *)(iVar12 + 0x10), local_38 < iVar15;
          local_38 = local_38 + 1) {
        iVar7 = *(int *)(iVar12 + 0xc);
        iVar10 = *piVar9;
        iVar6 = *piVar8;
        sVar2 = *(short *)((*(int *)(this + 0x30) * 0xb + local_38) * 2 + iVar16 + 0x1b59ea);
        if (sVar2 != 0) {
          pFVar13 = *(FurnitureData **)(sVar2 * 4 + *(int *)(*(int *)(this + 0x84) + 0x94));
          pFVar4 = (Furniture *)operator_new(100);
          Furniture::Furniture(pFVar4,pFVar13);
          lVar5 = Cafe::diamondToStaggeredCoords((iVar6 - iVar7) + -1,(iVar10 + iVar15) - local_38);
          sVar2 = Cafe::staggeredCoordsToIndex(lVar5);
          *(short *)(pFVar4 + 0x2c) = sVar2;
          pcVar14 = *(code **)(*(int *)pFVar4 + 0xc);
          uVar3 = Cafe::indexToWorldCoordsCenter(*(Cafe **)(this + 0x84),(int)sVar2);
          (*pcVar14)(pFVar4,uVar3);
          Furniture::setOrientation(pFVar4,'\0');
          pFVar4[0x54] = (Furniture)0x0;
          Cafe::addFurniture(*(Cafe **)(this + 0x84),pFVar4);
        }
      }
      iVar12 = 0;
      iVar15 = DAT_001b5b24 + 0x1b5a58;
      do {
        iVar10 = *piVar8;
        iVar11 = iVar15 + (*(int *)(this + 0x30) * 0x27 + iVar12) * 0x10;
        iVar7 = *(int *)(iVar11 + 0x48);
        iVar6 = *(int *)(iVar11 + 0x4c);
        iVar16 = *piVar9;
        pFVar13 = *(FurnitureData **)
                   (*(int *)(iVar11 + 0x54) * 4 + *(int *)(*(int *)(this + 0x84) + 0x94));
        if (pFVar13 != (FurnitureData *)0x0) {
          pFVar4 = (Furniture *)operator_new(100);
          Furniture::Furniture(pFVar4,pFVar13);
          lVar5 = Cafe::diamondToStaggeredCoords(iVar10 - iVar7,iVar16 + iVar6);
          sVar2 = Cafe::staggeredCoordsToIndex(lVar5);
          *(short *)(pFVar4 + 0x2c) = sVar2;
          pcVar14 = *(code **)(*(int *)pFVar4 + 0xc);
          uVar3 = Cafe::indexToWorldCoordsCenter(*(Cafe **)(this + 0x84),(int)sVar2);
          (*pcVar14)(pFVar4,uVar3);
          iVar16 = *(int *)(sendResult +
                           DAT_001b5b28 + (*(int *)(this + 0x30) * 0x27 + iVar12) * 0x10);
          if (((iVar16 != 0) && (iVar16 != 1)) && (iVar16 != 2)) {
            iVar16 = 3;
          }
          Furniture::setOrientation(pFVar4,(uchar)iVar16);
          pFVar4[0x54] = (Furniture)0x0;
          Cafe::addFurniture(*(Cafe **)(this + 0x84),pFVar4);
        }
        iVar12 = iVar12 + 1;
      } while (iVar12 != 0x27);
      return;
    }
    piVar8 = *(int **)(this + 0x84);
    lVar5 = Cafe::diamondToStaggeredCoords
                      (**(int **)(iVar15 + DAT_001b5990) + -1,
                       (*(int *)(iVar12 + 0x10) + **(int **)(iVar15 + DAT_001b5994)) - local_38);
    iVar16 = Cafe::staggeredCoordsToIndex(lVar5);
    iVar16 = *(int *)(*(int *)(iVar16 * 4 + *piVar8) + 0x10);
    cVar1 = *(char *)(iVar10 + *(int *)(this + 0x30) * 0xb + local_38 + 0x1b57be);
    if (cVar1 == '\0') {
      *(undefined2 *)(iVar16 + 0x38) = *(undefined2 *)(iVar6 + 0x3c);
      uVar3 = *(undefined4 *)(iVar6 + 0x48);
LAB_001b5812:
      *(undefined4 *)(iVar16 + 0x40) = uVar3;
    }
    else if (cVar1 == '\x01') {
      *(undefined2 *)(iVar16 + 0x38) = *(undefined2 *)(iVar7 + 0x3c);
      uVar3 = *(undefined4 *)(iVar7 + 0x48);
      goto LAB_001b5812;
    }
    local_38 = local_38 + 1;
  } while( true );
}


