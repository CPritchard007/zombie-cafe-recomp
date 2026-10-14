/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00127b28 GameStateCafe::addFlowerPlantZombie */

/* GameStateCafe::addFlowerPlantZombie() */

undefined4 __thiscall GameStateCafe::addFlowerPlantZombie(GameStateCafe *this)

{
  short sVar1;
  int iVar2;
  Character *pCVar3;
  CharacterInstance *this_00;
  long lVar4;
  MoveTask *this_01;
  undefined4 uVar5;
  int iVar6;
  CFPathFinder *pCVar7;
  int *piVar8;
  int iVar9;
  GameStateCafe *pGVar10;
  int *piVar11;
  int *piVar12;
  float fVar13;
  String aSStack_28 [8];
  CharacterData aCStack_20 [12];
  
  iVar9 = DAT_00127d34 + 0x127b34;
  iVar2 = ZombieCafe::getZombieFlowerZombieID(*(ZombieCafe **)(this + 0xc));
  iVar6 = *(int *)(this + 0xc);
  if (*(int *)(iVar6 + DAT_00127d38 + 4) + 1 <
      (int)*(short *)((*(int *)(iVar6 + 0x680) + -1) * 2 + **(int **)(iVar9 + DAT_00127d3c))) {
    pCVar3 = (Character *)Cafe::createCustomer(*(int *)(iVar6 + 0x7e8));
    pCVar7 = *(CFPathFinder **)(*(int *)(*(int *)(this + 0xc) + 0x7e8) + 0x5c);
    this_00 = (CharacterInstance *)operator_new(0xdc);
    CharacterInstance::CharacterInstance(this_00,pCVar3,pCVar7);
    piVar11 = *(int **)(iVar9 + DAT_00127d40);
    piVar12 = *(int **)(iVar9 + DAT_00127d44);
    piVar8 = *(int **)(iVar9 + DAT_00127d48);
    lVar4 = Cafe::diamondToStaggeredCoords(*piVar11 + -1,*piVar12 + 1 + *piVar8);
    iVar2 = Cafe::staggeredCoordsToIndex(lVar4);
    lVar4 = Cafe::diamondToStaggeredCoords(*piVar11,*piVar12 + *piVar8);
    sVar1 = Cafe::staggeredCoordsToIndex(lVar4);
    CafeObject::setTileIndex((CafeObject *)this_00,sVar1,*(Cafe **)(*(int *)(this + 0xc) + 0x7e8));
    this_01 = (MoveTask *)operator_new(0x48);
    MoveTask::MoveTask(this_01,this_00,*(Cafe **)(this + 0x14),iVar2,'\0',false);
    CharacterInstance::addTask(this_00,(Task *)this_01);
    Vector<CharacterInstance*>::addElement((Vector<CharacterInstance*> *)(this + 0x28),this_00);
    Cafe::addCafeObject(*(Cafe **)(this + 0x14),(CafeObject *)this_00);
    completeInfect((CharacterInstance *)this,(GameStateCafe *)this_00);
    pCVar3 = *(Character **)(this_00 + 0x8c);
    pGVar10 = this + 0xb0;
    fVar13 = (float)Character::getMaxEnergy();
    Character::setCurrentEnergy(pCVar3,fVar13);
    *(undefined1 *)(*(int *)pGVar10 + 0x60) = 1;
    CharacterDetails::setCharacter(*(CharacterDetails **)pGVar10,*(Character **)(this_00 + 0x8c));
    ScreenElement::setOrder(*(ScreenElement **)pGVar10,(int)**(char **)(iVar9 + DAT_00127d4c));
    (**(code **)(**(int **)pGVar10 + 0x20))(*(int **)pGVar10,1);
    uVar5 = 0;
  }
  else {
    uVar5 = 2;
    if (*(int *)(iVar6 + 0x5a4) + 1 < *(int *)(iVar6 + 0x5b8)) {
      String::String(aSStack_28,(char *)(DAT_00127d50 + 0x127c6c));
      pCVar3 = (Character *)operator_new(0x6c);
      Character::Character
                (pCVar3,*(undefined4 *)(iVar2 * 4 + *(int *)(*(int *)(this + 0xc) + DAT_00127d54)),2
                 ,1,aSStack_28);
      String::~String(aSStack_28);
      fVar13 = (float)Character::getMaxEnergy();
      Character::setCurrentEnergy(pCVar3,fVar13);
      CharacterData::getRandomName(aCStack_20,*(bool *)(*(int *)pCVar3 + DAT_00127d58),0);
      String::operator=((String *)(pCVar3 + 8),aCStack_20);
      String::~String((String *)aCStack_20);
      Platform::getAppTime();
      uVar5 = __fixdfsi();
      pCVar3[5] = (Character)0x2;
      *(undefined4 *)(pCVar3 + 0x10) = uVar5;
      pCVar3[4] = (Character)0x1;
      pGVar10 = this + 0xb0;
      ZombieCafe::putZombieInMeetlocker
                (*(ZombieCafe **)(this + 0xc),pCVar3,*(PullMenuElement **)(this + 0xcc));
      *(undefined1 *)(*(int *)pGVar10 + 0x60) = 1;
      CharacterDetails::setCharacter(*(CharacterDetails **)pGVar10,pCVar3);
      ScreenElement::setOrder(*(ScreenElement **)pGVar10,(int)**(char **)(iVar9 + DAT_00127d4c));
      (**(code **)(**(int **)pGVar10 + 0x20))(*(int **)pGVar10,1);
      uVar5 = 1;
    }
  }
  return uVar5;
}


