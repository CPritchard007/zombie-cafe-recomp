/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00181910 GameStateRaid::createBossCharacters */

/* GameStateRaid::createBossCharacters() */

void __thiscall GameStateRaid::createBossCharacters(GameStateRaid *this)

{
  undefined2 uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  Character *pCVar5;
  CharacterInstance *pCVar6;
  int iVar7;
  CharacterData *this_00;
  code *pcVar8;
  CFPathFinder *pCVar9;
  GameStateRaid *pGVar10;
  int *piVar11;
  int *piVar12;
  int iVar13;
  int iVar14;
  int local_4c;
  String aSStack_38 [8];
  CharacterData aCStack_30 [8];
  String aSStack_28 [8];
  CharacterData aCStack_20 [12];
  
  iVar14 = DAT_00181c48 + 0x18191c;
  piVar11 = *(int **)(iVar14 + DAT_00181c4c);
  this_00 = *(CharacterData **)(*piVar11 * 4 + *(int *)(*(int *)(this + 0xc) + DAT_00181c50));
  iVar2 = CharacterData::copy(this_00);
  memcpy((void *)(iVar2 + 0xaf0),this_00 + 0xaf0,0x18);
  iVar3 = TutorialSystem::isTutorialCompleted
                    (*(TutorialSystem **)(*(int *)(this + 0xc) + DAT_00181c54),'&');
  if (iVar3 == 0) {
    iVar3 = **(int **)(iVar14 + DAT_00181c58);
    *(undefined2 *)(iVar2 + DAT_00181c5c) = 1;
    *(undefined2 *)(iVar2 + DAT_00181c60) = 1;
    uVar4 = __floatsisf(*(int *)((*(int *)(this + 0x54) + -1) * 4 + iVar3) / 2);
  }
  else {
    iVar3 = **(int **)(iVar14 + DAT_00181c58);
    *(short *)(iVar2 + DAT_00181c5c) =
         (short)*(undefined4 *)
                 ((*(int *)(this + 0x54) + -1) * 4 + **(int **)(iVar14 + DAT_00181c64));
    *(short *)(iVar2 + DAT_00181c60) =
         (short)*(undefined4 *)
                 ((*(int *)(this + 0x54) + -1) * 4 + **(int **)(iVar14 + DAT_00181c68));
    uVar4 = __floatsisf(*(undefined4 *)((*(int *)(this + 0x54) + -1) * 4 + iVar3));
    uVar4 = __mulsf3(uVar4,*(undefined4 *)
                            ((*(int *)(*(int *)(this + 0xc) + 0x680) + -1) * 4 +
                            **(int **)(iVar14 + DAT_00181c6c)));
  }
  iVar3 = DAT_00181c74;
  *(undefined4 *)(iVar2 + DAT_00181c70) = uVar4;
  String::String(aSStack_38,(char *)(iVar3 + 0x1819ce));
  pCVar5 = (Character *)operator_new(0x6c);
  Character::Character(pCVar5,iVar2,0,0,aSStack_38);
  String::~String(aSStack_38);
  iVar7 = *(int *)pCVar5;
  iVar3 = __fixsfsi(*(undefined4 *)(iVar7 + DAT_00181c70));
  iVar2 = __fixsfsi(*(undefined4 *)(pCVar5 + 0x40));
  if (iVar3 < iVar2) {
    iVar2 = iVar3;
  }
  uVar4 = __floatsisf(iVar2);
  iVar2 = DAT_00181c78;
  *(undefined4 *)(pCVar5 + 0x40) = uVar4;
  CharacterData::getRandomName(aCStack_30,*(bool *)(iVar7 + iVar2),0);
  String::operator=((String *)(pCVar5 + 8),aCStack_30);
  String::~String((String *)aCStack_30);
  pCVar9 = *(CFPathFinder **)(*(int *)(this + 0x78) + 0x5c);
  pCVar6 = (CharacterInstance *)operator_new(0xdc);
  CharacterInstance::CharacterInstance(pCVar6,pCVar5,pCVar9);
  pGVar10 = this + 0xf8;
  *(CharacterInstance **)pGVar10 = pCVar6;
  *(short *)(pCVar6 + 0x2c) = (short)*(undefined4 *)(this + 0x44);
  piVar12 = *(int **)pGVar10;
  pcVar8 = *(code **)(*piVar12 + 0xc);
  uVar4 = Cafe::indexToWorldCoordsCenter(*(Cafe **)(this + 0x78),(int)(short)piVar12[0xb]);
  (*pcVar8)(piVar12,uVar4);
  *(undefined1 *)(*(int *)pGVar10 + 0x84) = 1;
  Cafe::addCafeObject(*(Cafe **)(this + 0x78),*(CafeObject **)pGVar10);
  iVar2 = *(int *)((*(int *)(this + 0x54) + -1) * 4 + **(int **)(iVar14 + DAT_00181c7c));
  local_4c = 0;
  while (local_4c < iVar2) {
    iVar7 = *piVar11;
    iVar13 = *(int *)(*(int *)(this + 0xc) + DAT_00181c50);
    iVar3 = CapcomMath::random(4);
    iVar7 = CharacterData::copy(*(CharacterData **)((iVar7 + 1 + iVar3) * 4 + iVar13));
    uVar4 = __mulsf3(*(undefined4 *)(iVar7 + DAT_00181c70),0x3f000000);
    iVar3 = DAT_00181c54;
    *(undefined4 *)(iVar7 + DAT_00181c70) = uVar4;
    iVar3 = TutorialSystem::isTutorialCompleted
                      (*(TutorialSystem **)(*(int *)(this + 0xc) + iVar3),'&');
    if (iVar3 == 0) {
      uVar1 = 1;
      *(undefined2 *)(iVar7 + DAT_00181c5c) = 1;
    }
    else {
      *(short *)(iVar7 + DAT_00181c5c) =
           (short)*(undefined4 *)
                   ((*(int *)(this + 0x54) + -1) * 4 + **(int **)(iVar14 + DAT_00181c80));
      uVar1 = (undefined2)
              *(undefined4 *)((*(int *)(this + 0x54) + -1) * 4 + **(int **)(iVar14 + DAT_00181c84));
    }
    iVar3 = DAT_00181c88;
    *(undefined2 *)(iVar7 + DAT_00181c60) = uVar1;
    String::String(aSStack_28,(char *)(iVar3 + 0x181afe));
    pCVar5 = (Character *)operator_new(0x6c);
    Character::Character(pCVar5,iVar7,3,0,aSStack_28);
    pCVar9 = *(CFPathFinder **)(*(int *)(this + 0x78) + 0x5c);
    pCVar6 = (CharacterInstance *)operator_new(0xdc);
    CharacterInstance::CharacterInstance(pCVar6,pCVar5,pCVar9);
    Vector<CharacterInstance*>::addElement((Vector<CharacterInstance*> *)(this + 0xc4),pCVar6);
    String::~String(aSStack_28);
    piVar12 = *(int **)(pCVar6 + 0x8c);
    iVar7 = __fixsfsi(*(undefined4 *)(*piVar12 + DAT_00181c70));
    iVar3 = __fixsfsi(piVar12[0x10]);
    if (iVar7 < iVar3) {
      iVar3 = iVar7;
    }
    iVar3 = __floatsisf(iVar3);
    piVar12[0x10] = iVar3;
    iVar3 = *(int *)(pCVar6 + 0x8c);
    CharacterData::getRandomName(aCStack_20,(bool)this_00[DAT_00181c78],0);
    String::operator=((String *)(iVar3 + 8),aCStack_20);
    String::~String((String *)aCStack_20);
    *(undefined2 *)(pCVar6 + 0x2c) = 0;
    while ((iVar3 = Cafe::isInside(*(Cafe **)(this + 0x78),(int)*(short *)(pCVar6 + 0x2c)),
           iVar3 == 0 ||
           (iVar3 = Cafe::getFurniture(*(Cafe **)(this + 0x78),(int)*(short *)(pCVar6 + 0x2c)),
           iVar3 != 0))) {
      uVar1 = CapcomMath::random(**(int **)(iVar14 + DAT_00181c8c) *
                                 **(int **)(iVar14 + DAT_00181c90));
      *(undefined2 *)(pCVar6 + 0x2c) = uVar1;
    }
    pcVar8 = *(code **)(*(int *)pCVar6 + 0xc);
    uVar4 = Cafe::indexToWorldCoordsCenter(*(Cafe **)(this + 0x78),(int)*(short *)(pCVar6 + 0x2c));
    (*pcVar8)(pCVar6,uVar4);
    Cafe::addCafeObject(*(Cafe **)(this + 0x78),(CafeObject *)pCVar6);
    pCVar6[0x84] = (CharacterInstance)0x1;
    local_4c = local_4c + 1;
    *(undefined1 *)(*(int *)(pCVar6 + 0x8c) + 0x44) = 1;
  }
  Cafe::populateWithCustomers(*(Cafe **)(this + 0x78),this);
  return;
}


