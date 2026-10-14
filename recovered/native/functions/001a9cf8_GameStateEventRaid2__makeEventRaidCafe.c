/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001a9cf8 GameStateEventRaid2::makeEventRaidCafe */

/* GameStateEventRaid2::makeEventRaidCafe() */

void __thiscall GameStateEventRaid2::makeEventRaidCafe(GameStateEventRaid2 *this)

{
  char cVar1;
  short sVar2;
  undefined4 uVar3;
  int iVar4;
  Furniture *pFVar5;
  long lVar6;
  uchar uVar7;
  int *piVar8;
  int iVar9;
  Cafe *this_00;
  int iVar10;
  FurnitureData *pFVar11;
  code *pcVar12;
  Furniture *pFVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int *local_34;
  short *local_30;
  int local_2c;
  
  iVar15 = DAT_001a9fb0;
  colosseumLayouts::load();
  colosseumItems::load();
  iVar15 = iVar15 + 0x1a9d0e;
  iVar14 = 0;
  if (0 < **(short **)(iVar15 + DAT_001a9fb4)) {
    iVar14 = **(int **)(iVar15 + DAT_001a9fb8);
  }
  iVar16 = *(int *)(this + 0xc);
  uVar3 = Cafe::createForNewColosseum(*(int *)(iVar14 + 0xc),*(int *)(iVar14 + 0x10));
  iVar4 = DAT_001a9fbc;
  *(undefined4 *)(this + 0x80) = uVar3;
  *(undefined4 *)(iVar16 + 0x7e8) = uVar3;
  piVar8 = (int *)(*(int *)(*(int *)(this + 0x34) * 4 + *(int *)(iVar15 + iVar4)) +
                  *(int *)(this + 0x30) * 8);
  iVar4 = *(int *)(*piVar8 * 4 + *(int *)(*(int *)(this + 0x80) + 0x94));
  iVar17 = *(int *)(piVar8[1] * 4 + *(int *)(*(int *)(this + 0x80) + 0x94));
  local_34 = (int *)0x0;
  iVar16 = *(int *)(*(int *)(this + 0x34) * 4 + *(int *)(iVar15 + DAT_001a9fc0));
  for (; (int)local_34 < *(int *)(iVar14 + 0xc); local_34 = (int *)((int)local_34 + 1)) {
    piVar8 = *(int **)(this + 0x80);
    lVar6 = Cafe::diamondToStaggeredCoords
                      ((**(int **)(iVar15 + DAT_001a9fc4) - *(int *)(iVar14 + 0xc)) + (int)local_34,
                       **(int **)(iVar15 + DAT_001a9fc8) + 1);
    iVar10 = Cafe::staggeredCoordsToIndex(lVar6);
    iVar10 = *(int *)(*(int *)(iVar10 * 4 + *piVar8) + 0xc);
    cVar1 = *(char *)(iVar16 + (int)local_34 + *(int *)(this + 0x30) * 10);
    if (cVar1 == '\0') {
      *(undefined2 *)(iVar10 + 0x38) = *(undefined2 *)(iVar4 + 0x3c);
      uVar3 = *(undefined4 *)(iVar4 + 0x48);
LAB_001a9dbc:
      *(undefined4 *)(iVar10 + 0x40) = uVar3;
    }
    else if (cVar1 == '\x01') {
      *(undefined2 *)(iVar10 + 0x38) = *(undefined2 *)(iVar17 + 0x3c);
      uVar3 = *(undefined4 *)(iVar17 + 0x48);
      goto LAB_001a9dbc;
    }
  }
  local_34 = (int *)0x0;
  iVar16 = *(int *)(*(int *)(this + 0x34) * 4 + *(int *)(iVar15 + DAT_001a9fcc));
  do {
    if (*(int *)(iVar14 + 0x10) <= (int)local_34) {
      iVar16 = *(int *)(*(int *)(this + 0x34) * 4 + *(int *)(iVar15 + DAT_001a9fd0));
      for (iVar4 = 0; iVar4 < *(int *)(iVar14 + 0xc); iVar4 = iVar4 + 1) {
        for (iVar17 = 0; iVar17 < *(int *)(iVar14 + 0x10); iVar17 = iVar17 + 1) {
          this_00 = *(Cafe **)(this + 0x80);
          iVar9 = *(int *)(*(short *)(iVar16 + (iVar17 * 10 + iVar4) * 2 +
                                     *(int *)(this + 0x30) * 0xdc) * 4 + *(int *)(this_00 + 0x94));
          lVar6 = Cafe::diamondToStaggeredCoords
                            ((**(int **)(iVar15 + DAT_001a9fc4) - *(int *)(iVar14 + 0xc)) + iVar4,
                             (*(int *)(iVar14 + 0x10) + **(int **)(iVar15 + DAT_001a9fc8)) - iVar17)
          ;
          iVar10 = Cafe::staggeredCoordsToIndex(lVar6);
          Cafe::setTileImageIndex
                    (this_00,iVar10,(int)*(short *)(iVar9 + 0x3c),*(long *)(iVar9 + 0x48));
        }
      }
      local_30 = *(short **)
                  ((*(int *)(this + 0x34) * 5 + *(int *)(this + 0x30)) * 4 +
                  *(int *)(iVar15 + DAT_001a9fd4));
      if (local_30 != (short *)0x0) {
        for (local_34 = (int *)0x0; iVar4 = *(int *)(iVar14 + 0xc), (int)local_34 < iVar4;
            local_34 = (int *)((int)local_34 + 1)) {
          iVar16 = *(int *)(iVar14 + 0x10);
          iVar17 = **(int **)(iVar15 + DAT_001a9fc4);
          iVar10 = **(int **)(iVar15 + DAT_001a9fc8);
          if (*local_30 != 0) {
            pFVar11 = *(FurnitureData **)(*local_30 * 4 + *(int *)(*(int *)(this + 0x80) + 0x94));
            pFVar5 = (Furniture *)operator_new(100);
            Furniture::Furniture(pFVar5,pFVar11);
            lVar6 = Cafe::diamondToStaggeredCoords
                              ((iVar17 - iVar4) + (int)local_34,iVar10 + iVar16 + 1);
            sVar2 = Cafe::staggeredCoordsToIndex(lVar6);
            *(short *)(pFVar5 + 0x2c) = sVar2;
            pcVar12 = *(code **)(*(int *)pFVar5 + 0xc);
            uVar3 = Cafe::indexToWorldCoordsCenter(*(Cafe **)(this + 0x80),(int)sVar2);
            (*pcVar12)(pFVar5,uVar3);
            Furniture::setOrientation(pFVar5,'\x01');
            pFVar5[0x54] = (Furniture)0x0;
            Cafe::addFurniture(*(Cafe **)(this + 0x80),pFVar5);
          }
          local_30 = local_30 + 1;
        }
      }
      local_30 = *(short **)
                  ((*(int *)(this + 0x34) * 5 + *(int *)(this + 0x30)) * 4 +
                  *(int *)(iVar15 + DAT_001a9fd8));
      if (local_30 != (short *)0x0) {
        for (local_34 = (int *)0x0; iVar4 = *(int *)(iVar14 + 0x10), (int)local_34 < iVar4;
            local_34 = (int *)((int)local_34 + 1)) {
          iVar16 = *(int *)(iVar14 + 0xc);
          iVar17 = **(int **)(iVar15 + DAT_001aa204);
          iVar10 = **(int **)(iVar15 + DAT_001aa208);
          if (*local_30 != 0) {
            pFVar11 = *(FurnitureData **)(*local_30 * 4 + *(int *)(*(int *)(this + 0x80) + 0x94));
            pFVar5 = (Furniture *)operator_new(100);
            Furniture::Furniture(pFVar5,pFVar11);
            lVar6 = Cafe::diamondToStaggeredCoords
                              ((iVar17 - iVar16) + -1,(iVar10 + iVar4) - (int)local_34);
            sVar2 = Cafe::staggeredCoordsToIndex(lVar6);
            *(short *)(pFVar5 + 0x2c) = sVar2;
            pcVar12 = *(code **)(*(int *)pFVar5 + 0xc);
            uVar3 = Cafe::indexToWorldCoordsCenter(*(Cafe **)(this + 0x80),(int)sVar2);
            (*pcVar12)(pFVar5,uVar3);
            Furniture::setOrientation(pFVar5,'\0');
            pFVar5[0x54] = (Furniture)0x0;
            Cafe::addFurniture(*(Cafe **)(this + 0x80),pFVar5);
          }
          local_30 = local_30 + 1;
        }
      }
      local_2c = 0;
      local_34 = *(int **)((*(int *)(this + 0x34) * 5 + *(int *)(this + 0x30)) * 4 +
                          *(int *)(iVar15 + DAT_001aa20c));
      do {
        if (local_34[3] != 0) {
          iVar14 = local_34[2];
          pFVar11 = *(FurnitureData **)(local_34[3] * 4 + *(int *)(*(int *)(this + 0x80) + 0x94));
          if (pFVar11 != (FurnitureData *)0x0) {
            iVar4 = **(int **)(iVar15 + DAT_001aa204) - *local_34;
            iVar16 = **(int **)(iVar15 + DAT_001aa208) + local_34[1];
            if (pFVar11[0x44] == (FurnitureData)0x1) {
              pFVar5 = (Furniture *)operator_new(0x8c);
              Furniture::Furniture(pFVar5,pFVar11);
              *(int *)pFVar5 = *(int *)(iVar15 + DAT_001aa210) + 8;
              pFVar5[0x81] = (Furniture)0x1;
              *(FurnitureData **)(pFVar5 + 0x68) = pFVar11;
              *(undefined4 *)(pFVar5 + 0x6c) = 0;
              *(undefined4 *)(pFVar5 + 0x78) = 0;
              *(undefined4 *)(pFVar5 + 0x70) = 0;
              *(undefined4 *)(pFVar5 + 0x74) = 0;
              *(undefined4 *)(pFVar5 + 100) = 0;
              *(undefined4 *)(pFVar5 + 0x88) = 0;
              *(undefined4 *)(pFVar5 + 0x7c) = 0;
              pFVar5[0x80] = (Furniture)0x1;
              pFVar5[0x82] = (Furniture)0x0;
              pFVar5[0x83] = (Furniture)0x0;
              *(undefined2 *)(pFVar5 + 0x84) = 0;
              lVar6 = Cafe::diamondToStaggeredCoords(iVar4,iVar16);
              sVar2 = Cafe::staggeredCoordsToIndex(lVar6);
              *(short *)(pFVar5 + 0x2c) = sVar2;
              pcVar12 = *(code **)(*(int *)pFVar5 + 0xc);
              uVar3 = Cafe::indexToWorldCoordsCenter(*(Cafe **)(this + 0x80),(int)sVar2);
              (*pcVar12)(pFVar5,uVar3);
              if (((iVar14 == 0) || (iVar14 == 1)) || (uVar7 = '\x03', iVar14 == 2)) {
                uVar7 = (uchar)iVar14;
              }
              Furniture::setOrientation(pFVar5,uVar7);
              pFVar5[0x54] = (Furniture)0x0;
              pFVar13 = pFVar5 + 0x81;
            }
            else {
              pFVar5 = (Furniture *)operator_new(100);
              Furniture::Furniture(pFVar5,pFVar11);
              lVar6 = Cafe::diamondToStaggeredCoords(iVar4,iVar16);
              sVar2 = Cafe::staggeredCoordsToIndex(lVar6);
              *(short *)(pFVar5 + 0x2c) = sVar2;
              pcVar12 = *(code **)(*(int *)pFVar5 + 0xc);
              uVar3 = Cafe::indexToWorldCoordsCenter(*(Cafe **)(this + 0x80),(int)sVar2);
              (*pcVar12)(pFVar5,uVar3);
              if (((iVar14 == 0) || (iVar14 == 1)) || (uVar7 = '\x03', iVar14 == 2)) {
                uVar7 = (uchar)iVar14;
              }
              Furniture::setOrientation(pFVar5,uVar7);
              pFVar13 = pFVar5 + 0x54;
            }
            *pFVar13 = (Furniture)0x0;
            Cafe::addFurniture(*(Cafe **)(this + 0x80),pFVar5);
          }
        }
        local_2c = local_2c + 1;
        local_34 = local_34 + 4;
      } while (local_2c != 0x27);
      return;
    }
    piVar8 = *(int **)(this + 0x80);
    lVar6 = Cafe::diamondToStaggeredCoords
                      (**(int **)(iVar15 + DAT_001a9fc4) + -1,
                       (*(int *)(iVar14 + 0x10) + **(int **)(iVar15 + DAT_001a9fc8)) - (int)local_34
                      );
    iVar10 = Cafe::staggeredCoordsToIndex(lVar6);
    iVar10 = *(int *)(*(int *)(iVar10 * 4 + *piVar8) + 0x10);
    cVar1 = *(char *)(iVar16 + (int)local_34 + *(int *)(this + 0x30) * 0xb);
    if (cVar1 == '\0') {
      *(undefined2 *)(iVar10 + 0x38) = *(undefined2 *)(iVar4 + 0x3c);
      uVar3 = *(undefined4 *)(iVar4 + 0x48);
LAB_001a9e36:
      *(undefined4 *)(iVar10 + 0x40) = uVar3;
    }
    else if (cVar1 == '\x01') {
      *(undefined2 *)(iVar10 + 0x38) = *(undefined2 *)(iVar17 + 0x3c);
      uVar3 = *(undefined4 *)(iVar17 + 0x48);
      goto LAB_001a9e36;
    }
    local_34 = (int *)((int)local_34 + 1);
  } while( true );
}


