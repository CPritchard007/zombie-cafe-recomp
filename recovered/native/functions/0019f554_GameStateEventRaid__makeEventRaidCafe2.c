/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0019f554 GameStateEventRaid::makeEventRaidCafe2 */

/* GameStateEventRaid::makeEventRaidCafe2() */

void __thiscall GameStateEventRaid::makeEventRaidCafe2(GameStateEventRaid *this)

{
  char cVar1;
  short sVar2;
  undefined4 uVar3;
  Furniture *pFVar4;
  long lVar5;
  uchar uVar6;
  uchar uVar7;
  int iVar8;
  int iVar9;
  Cafe *this_00;
  int iVar10;
  FurnitureData *pFVar11;
  code *pcVar12;
  Furniture *pFVar13;
  int *piVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int *local_34;
  short *local_30;
  int local_28;
  
  iVar16 = DAT_0019f834;
  colosseumLayouts::load();
  colosseumItems::load();
  iVar16 = iVar16 + 0x19f56a;
  iVar15 = 0;
  if (0 < **(short **)(iVar16 + DAT_0019f838)) {
    iVar15 = **(int **)(iVar16 + DAT_0019f83c);
  }
  iVar17 = *(int *)(this + 0xc);
  uVar3 = Cafe::createForNewColosseum(*(int *)(iVar15 + 0xc),*(int *)(iVar15 + 0x10));
  *(undefined4 *)(this + 0x5c) = uVar3;
  *(undefined4 *)(iVar17 + 0x7e8) = uVar3;
  iVar9 = *(int *)(*(int *)(this + 0x5c) + 0x94);
  iVar10 = (*(int *)(this + 0x1c) * 4 + *(int *)(this + 0x150)) * 4;
  iVar17 = *(int *)(*(int *)(DAT_0019f840 + iVar10 + 0x19f5d2) * 4 + iVar9);
  iVar8 = *(int *)(*(int *)(DAT_0019f844 + iVar10 + 0x19f630) * 4 + iVar9);
  iVar18 = *(int *)(*(int *)(DAT_0019f848 + iVar10 + 0x19f60e) * 4 + iVar9);
  local_34 = (int *)0x0;
  iVar9 = *(int *)(iVar10 + *(int *)(iVar16 + DAT_0019f84c));
  if (iVar9 != 0) {
    for (; (int)local_34 < *(int *)(iVar15 + 0xc); local_34 = (int *)((int)local_34 + 1)) {
      piVar14 = *(int **)(this + 0x5c);
      lVar5 = Cafe::diamondToStaggeredCoords
                        ((**(int **)(iVar16 + DAT_0019f850) - *(int *)(iVar15 + 0xc)) +
                         (int)local_34,**(int **)(iVar16 + DAT_0019f854) + 1);
      iVar10 = Cafe::staggeredCoordsToIndex(lVar5);
      iVar10 = *(int *)(*(int *)(iVar10 * 4 + *piVar14) + 0xc);
      cVar1 = *(char *)(iVar9 + (int)local_34);
      if (cVar1 == '\0') {
        *(undefined2 *)(iVar10 + 0x38) = *(undefined2 *)(iVar17 + 0x3c);
        uVar3 = *(undefined4 *)(iVar17 + 0x48);
LAB_0019f630:
        *(undefined4 *)(iVar10 + 0x40) = uVar3;
      }
      else {
        if (cVar1 == '\x01') {
          *(undefined2 *)(iVar10 + 0x38) = *(undefined2 *)(iVar8 + 0x3c);
          uVar3 = *(undefined4 *)(iVar8 + 0x48);
          goto LAB_0019f630;
        }
        if (cVar1 == '\x02') {
          *(undefined2 *)(iVar10 + 0x38) = *(undefined2 *)(iVar18 + 0x3c);
          uVar3 = *(undefined4 *)(iVar18 + 0x48);
          goto LAB_0019f630;
        }
      }
    }
  }
  iVar9 = *(int *)((*(int *)(this + 0x1c) * 4 + *(int *)(this + 0x150)) * 4 +
                  *(int *)(iVar16 + DAT_0019f858));
  local_34 = (int *)0x0;
  if (iVar9 != 0) {
    for (; (int)local_34 < *(int *)(iVar15 + 0x10); local_34 = (int *)((int)local_34 + 1)) {
      piVar14 = *(int **)(this + 0x5c);
      lVar5 = Cafe::diamondToStaggeredCoords
                        (**(int **)(iVar16 + DAT_0019f850) + -1,
                         (*(int *)(iVar15 + 0x10) + **(int **)(iVar16 + DAT_0019f854)) -
                         (int)local_34);
      iVar10 = Cafe::staggeredCoordsToIndex(lVar5);
      iVar10 = *(int *)(*(int *)(iVar10 * 4 + *piVar14) + 0x10);
      cVar1 = *(char *)(iVar9 + (int)local_34);
      if (cVar1 == '\0') {
        *(undefined2 *)(iVar10 + 0x38) = *(undefined2 *)(iVar17 + 0x3c);
        uVar3 = *(undefined4 *)(iVar17 + 0x48);
LAB_0019f6b6:
        *(undefined4 *)(iVar10 + 0x40) = uVar3;
      }
      else {
        if (cVar1 == '\x01') {
          *(undefined2 *)(iVar10 + 0x38) = *(undefined2 *)(iVar8 + 0x3c);
          uVar3 = *(undefined4 *)(iVar8 + 0x48);
          goto LAB_0019f6b6;
        }
        if (cVar1 == '\x02') {
          *(undefined2 *)(iVar10 + 0x38) = *(undefined2 *)(iVar18 + 0x3c);
          uVar3 = *(undefined4 *)(iVar18 + 0x48);
          goto LAB_0019f6b6;
        }
      }
    }
  }
  local_30 = *(short **)
              ((*(int *)(this + 0x1c) * 4 + *(int *)(this + 0x150)) * 4 +
              *(int *)(iVar16 + DAT_0019f85c));
  if (local_30 != (short *)0x0) {
    for (local_34 = (int *)0x0; (int)local_34 < *(int *)(iVar15 + 0xc);
        local_34 = (int *)((int)local_34 + 1)) {
      for (iVar17 = 0; iVar17 < *(int *)(iVar15 + 0x10); iVar17 = iVar17 + 1) {
        this_00 = *(Cafe **)(this + 0x5c);
        iVar9 = *(int *)(*(short *)((int)local_30 + iVar17 * 0x14) * 4 + *(int *)(this_00 + 0x94));
        lVar5 = Cafe::diamondToStaggeredCoords
                          ((**(int **)(iVar16 + DAT_0019f850) - *(int *)(iVar15 + 0xc)) +
                           (int)local_34,
                           (*(int *)(iVar15 + 0x10) + **(int **)(iVar16 + DAT_0019f854)) - iVar17);
        iVar8 = Cafe::staggeredCoordsToIndex(lVar5);
        Cafe::setTileImageIndex(this_00,iVar8,(int)*(short *)(iVar9 + 0x3c),*(long *)(iVar9 + 0x48))
        ;
      }
      local_30 = (short *)((int)local_30 + 2);
    }
  }
  local_30 = *(short **)
              ((*(int *)(this + 0x1c) * 4 + *(int *)(this + 0x150)) * 4 +
              *(int *)(iVar16 + DAT_0019f860));
  if (local_30 != (short *)0x0) {
    for (local_34 = (int *)0x0; iVar17 = *(int *)(iVar15 + 0xc), (int)local_34 < iVar17;
        local_34 = (int *)((int)local_34 + 1)) {
      iVar8 = *(int *)(iVar15 + 0x10);
      iVar9 = **(int **)(iVar16 + DAT_0019f850);
      iVar10 = **(int **)(iVar16 + DAT_0019f854);
      if (*local_30 != 0) {
        pFVar11 = *(FurnitureData **)(*local_30 * 4 + *(int *)(*(int *)(this + 0x5c) + 0x94));
        pFVar4 = (Furniture *)operator_new(100);
        Furniture::Furniture(pFVar4,pFVar11);
        lVar5 = Cafe::diamondToStaggeredCoords((iVar9 - iVar17) + (int)local_34,iVar10 + iVar8 + 1);
        sVar2 = Cafe::staggeredCoordsToIndex(lVar5);
        *(short *)(pFVar4 + 0x2c) = sVar2;
        pcVar12 = *(code **)(*(int *)pFVar4 + 0xc);
        uVar3 = Cafe::indexToWorldCoordsCenter(*(Cafe **)(this + 0x5c),(int)sVar2);
        (*pcVar12)(pFVar4,uVar3);
        Furniture::setOrientation(pFVar4,'\x01');
        pFVar4[0x54] = (Furniture)0x0;
        Cafe::addFurniture(*(Cafe **)(this + 0x5c),pFVar4);
      }
      local_30 = local_30 + 1;
    }
  }
  local_30 = *(short **)
              ((*(int *)(this + 0x1c) * 4 + *(int *)(this + 0x150)) * 4 +
              *(int *)(iVar16 + DAT_0019f864));
  if (local_30 != (short *)0x0) {
    for (local_34 = (int *)0x0; iVar17 = *(int *)(iVar15 + 0x10), (int)local_34 < iVar17;
        local_34 = (int *)((int)local_34 + 1)) {
      iVar8 = *(int *)(iVar15 + 0xc);
      iVar9 = **(int **)(iVar16 + DAT_0019fab8);
      iVar10 = **(int **)(iVar16 + DAT_0019fabc);
      if (*local_30 != 0) {
        pFVar11 = *(FurnitureData **)(*local_30 * 4 + *(int *)(*(int *)(this + 0x5c) + 0x94));
        pFVar4 = (Furniture *)operator_new(100);
        Furniture::Furniture(pFVar4,pFVar11);
        lVar5 = Cafe::diamondToStaggeredCoords
                          ((iVar9 - iVar8) + -1,(iVar10 + iVar17) - (int)local_34);
        sVar2 = Cafe::staggeredCoordsToIndex(lVar5);
        *(short *)(pFVar4 + 0x2c) = sVar2;
        pcVar12 = *(code **)(*(int *)pFVar4 + 0xc);
        uVar3 = Cafe::indexToWorldCoordsCenter(*(Cafe **)(this + 0x5c),(int)sVar2);
        (*pcVar12)(pFVar4,uVar3);
        Furniture::setOrientation(pFVar4,'\0');
        pFVar4[0x54] = (Furniture)0x0;
        Cafe::addFurniture(*(Cafe **)(this + 0x5c),pFVar4);
      }
      local_30 = local_30 + 1;
    }
  }
  local_34 = *(int **)((*(int *)(this + 0x1c) * 4 + *(int *)(this + 0x150)) * 4 +
                      *(int *)(iVar16 + DAT_0019fac0));
  local_28 = 0x32;
  do {
    if (local_34[3] != 0) {
      iVar15 = local_34[2];
      pFVar11 = *(FurnitureData **)(local_34[3] * 4 + *(int *)(*(int *)(this + 0x5c) + 0x94));
      if (pFVar11 != (FurnitureData *)0x0) {
        iVar17 = **(int **)(iVar16 + DAT_0019fab8) - *local_34;
        iVar8 = **(int **)(iVar16 + DAT_0019fabc) + local_34[1];
        uVar7 = (uchar)iVar15;
        if (pFVar11[0x44] == (FurnitureData)0x1) {
          pFVar4 = (Furniture *)operator_new(0x8c);
          Furniture::Furniture(pFVar4,pFVar11);
          *(int *)pFVar4 = *(int *)(iVar16 + DAT_0019fac4) + 8;
          pFVar4[0x81] = (Furniture)0x1;
          *(FurnitureData **)(pFVar4 + 0x68) = pFVar11;
          *(undefined4 *)(pFVar4 + 0x6c) = 0;
          *(undefined4 *)(pFVar4 + 0x78) = 0;
          *(undefined4 *)(pFVar4 + 0x70) = 0;
          *(undefined4 *)(pFVar4 + 0x74) = 0;
          *(undefined4 *)(pFVar4 + 100) = 0;
          *(undefined4 *)(pFVar4 + 0x88) = 0;
          *(undefined4 *)(pFVar4 + 0x7c) = 0;
          pFVar4[0x80] = (Furniture)0x1;
          pFVar4[0x82] = (Furniture)0x0;
          pFVar4[0x83] = (Furniture)0x0;
          *(undefined2 *)(pFVar4 + 0x84) = 0;
          lVar5 = Cafe::diamondToStaggeredCoords(iVar17,iVar8);
          sVar2 = Cafe::staggeredCoordsToIndex(lVar5);
          *(short *)(pFVar4 + 0x2c) = sVar2;
          pcVar12 = *(code **)(*(int *)pFVar4 + 0xc);
          uVar3 = Cafe::indexToWorldCoordsCenter(*(Cafe **)(this + 0x5c),(int)sVar2);
          (*pcVar12)(pFVar4,uVar3);
          if (((iVar15 == 0) || (iVar15 == 1)) || (uVar6 = '\x03', iVar15 == 2)) {
            uVar6 = uVar7;
          }
          Furniture::setOrientation(pFVar4,uVar6);
          pFVar4[0x54] = (Furniture)0x0;
          pFVar13 = pFVar4 + 0x81;
        }
        else {
          pFVar4 = (Furniture *)operator_new(100);
          Furniture::Furniture(pFVar4,pFVar11);
          lVar5 = Cafe::diamondToStaggeredCoords(iVar17,iVar8);
          sVar2 = Cafe::staggeredCoordsToIndex(lVar5);
          *(short *)(pFVar4 + 0x2c) = sVar2;
          pcVar12 = *(code **)(*(int *)pFVar4 + 0xc);
          uVar3 = Cafe::indexToWorldCoordsCenter(*(Cafe **)(this + 0x5c),(int)sVar2);
          (*pcVar12)(pFVar4,uVar3);
          if (((iVar15 != 0) && (iVar15 != 1)) && (uVar7 = '\x03', iVar15 != 2)) {
            uVar7 = '\x02';
          }
          Furniture::setOrientation(pFVar4,uVar7);
          pFVar13 = pFVar4 + 0x54;
        }
        *pFVar13 = (Furniture)0x0;
        Cafe::addFurniture(*(Cafe **)(this + 0x5c),pFVar4);
      }
    }
    local_28 = local_28 + -1;
    local_34 = local_34 + 4;
  } while (local_28 != 0);
  piVar14 = *(int **)((*(int *)(this + 0x1c) * 4 + *(int *)(this + 0x150)) * 4 +
                     *(int *)(iVar16 + DAT_0019fac8));
  lVar5 = Cafe::diamondToStaggeredCoords
                    (**(int **)(iVar16 + DAT_0019fab8) - *piVar14,
                     **(int **)(iVar16 + DAT_0019fabc) + piVar14[1]);
  uVar3 = Cafe::staggeredCoordsToIndex(lVar5);
  *(undefined4 *)(this + 0x140) = uVar3;
  return;
}


