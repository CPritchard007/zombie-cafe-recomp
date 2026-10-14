/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0012895c GameStateCafe::makeBeginerZombie */

/* GameStateCafe::makeBeginerZombie() */

void __thiscall GameStateCafe::makeBeginerZombie(GameStateCafe *this)

{
  short sVar1;
  ZombieCafe *this_00;
  int iVar2;
  Character *pCVar3;
  CharacterInstance *this_01;
  long lVar4;
  MoveTask *this_02;
  uint uVar5;
  int iVar6;
  CFPathFinder *pCVar7;
  int *piVar8;
  int iVar9;
  int *piVar10;
  int *piVar11;
  float fVar12;
  
  L_PrintLog((char *)(DAT_00128ae4 + 0x12896c),(char *)(DAT_00128ae0 + 0x12896a));
  this_00 = *(ZombieCafe **)(this + 0xc);
  iVar9 = DAT_00128aec + 0x128984;
  if (*(int *)(this_00 + DAT_00128ae8 + 4) + 1 <
      (int)*(short *)((*(int *)(this_00 + 0x680) + -1) * 2 + **(int **)(iVar9 + DAT_00128af0))) {
    iVar2 = ZombieCafe::isGaistColaboEvent(this_00,false);
    iVar6 = *(int *)(this + 0xc);
    uVar5 = DAT_00128b04;
    if ((iVar2 == 0) &&
       ((((uVar5 = **(uint **)(iVar9 + DAT_00128af4), (int)uVar5 < 1 ||
          ((int)(uint)*(ushort *)(iVar6 + DAT_00128af8) <= (int)uVar5)) ||
         (iVar2 = *(int *)(uVar5 * 4 + *(int *)(iVar6 + DAT_00128afc)), *(int *)(iVar2 + 0x560) == 0
         )) || (*(int *)(iVar2 + DAT_00128b00) == 0)))) {
      uVar5 = 0x370;
    }
    for (iVar2 = 0; iVar2 < *(int *)(iVar6 + DAT_00128ae8 + 4) + 1; iVar2 = iVar2 + 1) {
      if (uVar5 == *(ushort *)
                    (**(int **)(iVar2 * 4 + *(int *)(iVar6 + DAT_00128ae8 + 8)) + DAT_00128b08)) {
        return;
      }
    }
    pCVar3 = (Character *)Cafe::createCustomer(*(int *)(iVar6 + 0x7e8));
    pCVar7 = *(CFPathFinder **)(*(int *)(*(int *)(this + 0xc) + 0x7e8) + 0x5c);
    this_01 = (CharacterInstance *)operator_new(0xdc);
    CharacterInstance::CharacterInstance(this_01,pCVar3,pCVar7);
    piVar11 = *(int **)(iVar9 + DAT_00128b0c);
    piVar8 = *(int **)(iVar9 + DAT_00128b10);
    piVar10 = *(int **)(iVar9 + DAT_00128b14);
    lVar4 = Cafe::diamondToStaggeredCoords(*piVar11 + -1,*piVar8 + 1 + *piVar10);
    iVar9 = Cafe::staggeredCoordsToIndex(lVar4);
    lVar4 = Cafe::diamondToStaggeredCoords(*piVar11,*piVar8 + *piVar10);
    sVar1 = Cafe::staggeredCoordsToIndex(lVar4);
    CafeObject::setTileIndex((CafeObject *)this_01,sVar1,*(Cafe **)(*(int *)(this + 0xc) + 0x7e8));
    this_02 = (MoveTask *)operator_new(0x48);
    MoveTask::MoveTask(this_02,this_01,*(Cafe **)(this + 0x14),iVar9,'\0',false);
    CharacterInstance::addTask(this_01,(Task *)this_02);
    Vector<CharacterInstance*>::addElement((Vector<CharacterInstance*> *)(this + 0x28),this_01);
    Cafe::addCafeObject(*(Cafe **)(this + 0x14),(CafeObject *)this_01);
    completeInfect((CharacterInstance *)this,(GameStateCafe *)this_01);
    pCVar3 = *(Character **)(this_01 + 0x8c);
    fVar12 = (float)Character::getMaxEnergy();
    Character::setCurrentEnergy(pCVar3,fVar12);
  }
  save(SUB41(this,0));
  L_PrintLog((char *)(DAT_00128b18 + 0x128ac6),(char *)(DAT_00128b1c + 0x128ac8));
  return;
}


