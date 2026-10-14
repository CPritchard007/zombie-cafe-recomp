/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0011eecc GameStateCafe::setFlowerPlant */

/* GameStateCafe::setFlowerPlant() */

void __thiscall GameStateCafe::setFlowerPlant(GameStateCafe *this)

{
  short sVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  undefined4 uVar5;
  CapcomOrderableList<Furniture*> *pCVar6;
  Furniture *pFVar7;
  FurnitureData *pFVar8;
  code *pcVar9;
  
  iVar2 = ZombieCafe::checkZombieFlowerEvent();
  if ((iVar2 == 0) || (iVar2 = ZombieCafe::checkZombieFlowerEventTime(), iVar2 == 0)) {
    pCVar6 = (CapcomOrderableList<Furniture*> *)
             Cafe::createDistanceSortedFurnitureList(*(Cafe **)(this + 0x14),'\x11',0);
    *(undefined4 *)(pCVar6 + 0x10) = *(undefined4 *)(pCVar6 + 8);
    pFVar7 = (Furniture *)CapcomOrderableList<Furniture*>::nextItem(pCVar6);
    if (pFVar7 != (Furniture *)0x0) {
      Cafe::removeFurniture(*(Cafe **)(this + 0x14),pFVar7);
      (**(code **)(*(int *)pFVar7 + 4))(pFVar7);
    }
  }
  else {
    pCVar6 = (CapcomOrderableList<Furniture*> *)
             Cafe::createDistanceSortedFurnitureList(*(Cafe **)(this + 0x14),'\x11',0);
    *(undefined4 *)(pCVar6 + 0x10) = *(undefined4 *)(pCVar6 + 8);
    pFVar7 = (Furniture *)CapcomOrderableList<Furniture*>::nextItem(pCVar6);
    if (*(char *)(*(int *)(this + 0xc) + 1000) == '\0') {
      if (pFVar7 != (Furniture *)0x0) {
        return;
      }
    }
    else {
      *(undefined1 *)(*(int *)(this + 0xc) + 1000) = 0;
      ZombieCafe::clearZombieFlowerPlant(*(ZombieCafe **)(this + 0xc));
      if (pFVar7 != (Furniture *)0x0) {
        Cafe::removeFurniture(*(Cafe **)(this + 0x14),pFVar7);
        (**(code **)(*(int *)pFVar7 + 4))(pFVar7);
      }
    }
    iVar2 = ZombieCafe::checkZombieFlowerPlantStateStart(*(ZombieCafe **)(this + 0xc));
    if (iVar2 == 0) {
      iVar3 = ZombieCafe::checkZombieFlowerPlantStateFinish(*(ZombieCafe **)(this + 0xc));
      iVar2 = DAT_0011f020;
      if ((iVar3 != 0) &&
         (iVar3 = ZombieCafe::getZombieFlowerFlowerType(*(ZombieCafe **)(this + 0xc)),
         iVar2 = DAT_0011f024, iVar3 == 0)) {
        iVar2 = 0x20c;
      }
    }
    else {
      iVar3 = ZombieCafe::getZombieFlowerFlowerType(*(ZombieCafe **)(this + 0xc));
      iVar2 = DAT_0011f01c;
      if (iVar3 == 0) {
        iVar2 = DAT_0011f018;
      }
    }
    pFVar8 = *(FurnitureData **)(iVar2 * 4 + *(int *)(*(int *)(this + 0x14) + 0x94));
    pFVar7 = (Furniture *)operator_new(100);
    Furniture::Furniture(pFVar7,pFVar8);
    iVar2 = *(int *)(this + 0x14);
    lVar4 = Cafe::diamondToStaggeredCoords
                      (((int)*(short *)(iVar2 + 0x9c) - (uint)*(byte *)(iVar2 + 0xa0)) + -1,
                       (int)*(short *)(iVar2 + 0x9e) + (uint)*(byte *)(iVar2 + 0xa1) + 1);
    sVar1 = Cafe::staggeredCoordsToIndex(lVar4);
    *(short *)(pFVar7 + 0x2c) = sVar1;
    pcVar9 = *(code **)(*(int *)pFVar7 + 0xc);
    uVar5 = Cafe::indexToWorldCoordsCenter(*(Cafe **)(this + 0x14),(int)sVar1);
    (*pcVar9)(pFVar7,uVar5);
    Furniture::setOrientation(pFVar7,'\x01');
    pFVar7[0x54] = (Furniture)0x0;
    pFVar7[0x2e] = (Furniture)0x1;
    Cafe::addFurniture(*(Cafe **)(this + 0x14),pFVar7);
  }
  return;
}


