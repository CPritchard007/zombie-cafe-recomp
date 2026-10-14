/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001234e8 GameStateCafe::placeFurniture */

/* GameStateCafe::placeFurniture(Furniture*) */

undefined8 __thiscall GameStateCafe::placeFurniture(GameStateCafe *this,Furniture *param_1)

{
  short sVar1;
  int iVar2;
  Furniture *pFVar3;
  long lVar4;
  undefined4 uVar5;
  int iVar6;
  Furniture FVar7;
  int *piVar8;
  code *pcVar9;
  Cafe *local_1c;
  
  iVar2 = DAT_001236f4;
  piVar8 = *(int **)(this + 0x40);
  local_1c = *(Cafe **)(this + 0x14);
  if (*(char *)(piVar8[0xe] + 0x44) == '\x06') {
    screenToWorldCoords(this,*(long *)(*(int *)(this + 0xc) + DAT_001236f8));
    pFVar3 = (Furniture *)Cafe::pickWall((long)local_1c);
    if (((pFVar3 == (Furniture *)0x0) || (*(int *)(pFVar3 + 0x44) != 0)) ||
       (local_1c = (Cafe *)(uint)(byte)pFVar3[0x3b], local_1c != (Cafe *)0x0)) {
      if (this[iVar2] == (GameStateCafe)0x2) {
        Cafe::addWallDecor(*(CafeWall **)(this + 0x14),*(Furniture **)(this + 0x48));
        *(undefined4 *)(this + 0x40) = 0;
      }
    }
    else if (this[iVar2] == (GameStateCafe)0x2) {
      Cafe::addWallDecor(*(CafeWall **)(this + 0x14),pFVar3);
      *(undefined4 *)(this + 0x40) = 0;
    }
    else {
      FVar7 = pFVar3[0x3a];
      if (FVar7 != (Furniture)0x0) {
        FVar7 = (Furniture)0x1;
      }
      Furniture::setOrientation(param_1,(uchar)FVar7);
      pcVar9 = *(code **)(*(int *)param_1 + 0xc);
      lVar4 = CafeWall::getTopLeft((CafeWall *)pFVar3);
      uVar5 = CFPoint::add(lVar4,((int)**(short **)(DAT_001236fc + 0x12356a) +
                                  (int)**(short **)(DAT_00123700 + 0x12357a) >> 2) << 0x10 |
                                 (int)*(short *)(pFVar3 + 0x20) >> 1 & 0xffffU);
      (*pcVar9)(param_1,uVar5);
      (**(code **)(**(int **)(this + 0x84) + 0x20))(*(int **)(this + 0x84),0);
    }
    *(undefined2 *)(this + 0x16c) = 0;
  }
  else {
    pcVar9 = *(code **)(*piVar8 + 0xc);
    uVar5 = Cafe::indexToWorldCoordsCenter(local_1c,(int)(short)piVar8[0xb]);
    (*pcVar9)(piVar8,uVar5);
    iVar6 = isValidFurnitureTile
                      (this,(int)*(short *)(*(int *)(this + 0x40) + 0x2c),
                       *(FurnitureData **)(*(int *)(this + 0x40) + 0x38));
    if (iVar6 == 0) {
      if (this[iVar2] == (GameStateCafe)0x2) {
        *(undefined2 *)(*(int *)(this + 0x40) + 0x2c) = *(undefined2 *)(this + 0x162);
        Furniture::setOrientation(*(Furniture **)(this + 0x40),(uchar)this[0x164]);
        piVar8 = *(int **)(this + 0x40);
        pcVar9 = *(code **)(*piVar8 + 0xc);
        uVar5 = Cafe::indexToWorldCoordsCenter(*(Cafe **)(this + 0x14),(int)(short)piVar8[0xb]);
        (*pcVar9)(piVar8,uVar5);
        Cafe::addFurniture(*(Cafe **)(this + 0x14),*(Furniture **)(this + 0x40));
        *(undefined4 *)(this + 0x40) = 0;
      }
    }
    else {
      pFVar3 = *(Furniture **)(this + 0x40);
      iVar6 = Furniture::canRotate(pFVar3);
      if (iVar6 == 0) {
        *(undefined2 *)(this + 0x16c) = 0;
      }
      else {
        iVar6 = *(int *)(pFVar3 + 0x20);
        lVar4 = CFPoint::subtract(*(long *)(pFVar3 + 4),
                                  (iVar6 >> 0x11) << 0x10 | (int)(short)iVar6 >> 1 & 0xffffU);
        CFPoint::add(lVar4,(iVar6 >> 0x10) << 0x10);
        uVar5 = worldToScreenCoords((long)this);
        FUN_00118458(*(undefined4 *)(this + 0x170),uVar5);
        *(undefined4 *)(this + 0x44) = *(undefined4 *)(this + 0x40);
        *(undefined2 *)(this + 0x16c) = **(undefined2 **)(DAT_00123704 + 0x12362c);
      }
      if (this[iVar2] == (GameStateCafe)0x2) {
        Cafe::addFurniture(*(Cafe **)(this + 0x14),*(Furniture **)(this + 0x40));
        iVar2 = DAT_00123708;
        TutorialSystem::triggerEvent
                  (*(TutorialSystem **)(*(int *)(this + 0xc) + DAT_00123708),'?',true);
        sVar1 = *(short *)(*(int *)(this + 0x40) + 0x2c);
        lVar4 = Cafe::diamondToStaggeredCoords
                          (*(short *)(*(int *)(this + 0x14) + 0x9c) + -1,
                           *(short *)(*(int *)(this + 0x14) + 0x9e) + 1 +
                           **(int **)(DAT_0012370c + 0x123674));
        iVar6 = Cafe::staggeredCoordsToIndex(lVar4);
        if (sVar1 == iVar6) {
          TutorialSystem::triggerEvent(*(TutorialSystem **)(*(int *)(this + 0xc) + iVar2),'>',true);
        }
        *(undefined4 *)(this + 0x40) = 0;
        resetPaths(this);
      }
      else {
        (**(code **)(**(int **)(this + 0x84) + 0x20))(*(int **)(this + 0x84),0);
      }
    }
  }
  return CONCAT44(local_1c,this);
}


