/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001b77b0 GameStateEventRaid3::makeEnemyZombie */

/* GameStateEventRaid3::makeEnemyZombie(bool) */

void __thiscall GameStateEventRaid3::makeEnemyZombie(GameStateEventRaid3 *this,bool param_1)

{
  bool bVar1;
  short sVar2;
  undefined4 uVar3;
  Character *pCVar4;
  CharacterInstance *this_00;
  long lVar5;
  SpawnTask *this_01;
  int iVar6;
  int iVar7;
  int *piVar8;
  CFPathFinder *pCVar9;
  code *pcVar10;
  int iVar11;
  undefined4 uVar12;
  int iVar13;
  int *piVar14;
  CharacterInstance *pCVar15;
  float fVar16;
  String aSStack_28 [8];
  CharacterData aCStack_20 [12];
  
  iVar11 = DAT_001b7a58 + 0x1b77c4;
  if (*(int *)(this + 0x120) < 9) {
    if ((*(int *)(this + 100) == 0) ||
       (*(int *)(this + 100) + 1 != *(int *)(DAT_001b7a5c + *(int *)(this + 0x30) * 4 + 0x1b780a)))
    {
      iVar13 = getEventRaid3Level(this);
      iVar7 = *(int *)(this + 0x30);
      iVar6 = DAT_001b7a60;
      if ((iVar7 != 0) && ((iVar6 = DAT_001b7a64, iVar7 != 1 && (iVar6 = DAT_001b7a6c, iVar7 == 2)))
         ) {
        iVar6 = DAT_001b7a68;
      }
      iVar7 = 0;
      piVar14 = *(int **)(*(int *)(iVar11 + iVar6) + iVar13 * 4);
      iVar6 = CapcomMath::random(*piVar14 + piVar14[5] + piVar14[10] + piVar14[0xf]);
      piVar8 = piVar14;
      do {
        iVar6 = iVar6 - *piVar8;
        if (iVar6 < 0) goto LAB_001b7852;
        iVar7 = iVar7 + 1;
        piVar8 = piVar8 + 5;
      } while (iVar7 != 4);
      iVar7 = 0;
LAB_001b7852:
      bVar1 = false;
      piVar14 = piVar14 + iVar7 * 5;
    }
    else {
      iVar13 = 0;
      piVar14 = *(int **)(*(int *)(this + 0x30) * 4 + *(int *)(iVar11 + DAT_001b7aa4));
      iVar6 = CapcomMath::random(*piVar14 + piVar14[5] + piVar14[10] + piVar14[0xf]);
      piVar8 = piVar14;
      do {
        iVar6 = iVar6 - *piVar8;
        if (iVar6 < 0) goto LAB_001b7806;
        iVar13 = iVar13 + 1;
        piVar8 = piVar8 + 5;
      } while (iVar13 != 4);
      iVar13 = 0;
LAB_001b7806:
      bVar1 = true;
      piVar14 = piVar14 + iVar13 * 5;
    }
    iVar13 = CharacterData::copy(*(CharacterData **)
                                  (piVar14[1] * 4 + *(int *)(*(int *)(this + 0xc) + DAT_001b7a70)));
    *(short *)(iVar13 + DAT_001b7a74) = (short)piVar14[4];
    *(undefined2 *)(iVar13 + DAT_001b7a78) = *(undefined2 *)((int)piVar14 + 0x12);
    uVar3 = __floatsisf(piVar14[3]);
    iVar6 = DAT_001b7a80;
    *(undefined4 *)(iVar13 + DAT_001b7a7c) = uVar3;
    *(short *)(iVar13 + DAT_001b7a84) = (short)piVar14[2];
    String::String(aSStack_28,(char *)(iVar6 + 0x1b7892));
    pCVar4 = (Character *)operator_new(0x6c);
    Character::Character(pCVar4,iVar13,3,1,aSStack_28);
    String::~String(aSStack_28);
    pCVar9 = *(CFPathFinder **)(*(int *)(this + 0x84) + 0x5c);
    this_00 = (CharacterInstance *)operator_new(0xdc);
    CharacterInstance::CharacterInstance(this_00,pCVar4,pCVar9);
    Vector<CharacterInstance*>::addElement((Vector<CharacterInstance*> *)(this + 0x11c),this_00);
    if (bVar1) {
      uVar12 = **(undefined4 **)(iVar11 + DAT_001b7a88);
      uVar3 = __mulsf3(uVar12,DAT_001b7a8c);
      fVar16 = (float)__addsf3(uVar12,uVar3);
      CharacterInstance::setScale(this_00,fVar16);
    }
    pCVar15 = this_00 + 0x8c;
    *(undefined4 *)(*(int *)pCVar15 + 0x28) = 0;
    *(undefined1 *)(*(int *)pCVar15 + 0x36) = 0;
    iVar6 = *(int *)pCVar15;
    uVar3 = Character::getMaxEnergy();
    *(undefined4 *)(iVar6 + 0x40) = uVar3;
    iVar6 = *(int *)pCVar15;
    CharacterData::getRandomName(aCStack_20,*(bool *)(iVar13 + DAT_001b7a90),0);
    String::operator=((String *)(iVar6 + 8),aCStack_20);
    String::~String((String *)aCStack_20);
    this_00[0x84] = (CharacterInstance)0x1;
    iVar6 = CapcomMath::random(0xd);
    iVar13 = iVar6 * 0xc + *(int *)(this + 0x30) * 0x9c;
    lVar5 = Cafe::diamondToStaggeredCoords
                      (**(int **)(iVar11 + DAT_001b7a94) -
                       *(int *)(iVar13 + DAT_001b7a98 + 0x1b795e),
                       **(int **)(iVar11 + DAT_001b7a9c) +
                       *(int *)(DAT_001b7a98 + 0x1b795e + iVar13 + 4));
    sVar2 = Cafe::staggeredCoordsToIndex(lVar5);
    *(short *)(this_00 + 0x2c) = sVar2;
    pcVar10 = *(code **)(*(int *)this_00 + 0xc);
    uVar3 = Cafe::indexToWorldCoordsCenter(*(Cafe **)(this + 0x84),(int)sVar2);
    (*pcVar10)(this_00,uVar3);
    Cafe::addCafeObject(*(Cafe **)(this + 0x84),(CafeObject *)this_00);
    *(undefined1 *)(*(int *)(this_00 + 0x8c) + 0x44) = 1;
    if (param_1) {
      *(undefined1 *)(*(int *)(this_00 + 0x8c) + 0x44) = 4;
    }
    CharacterInstance::clearTasks();
    if (*(int *)(DAT_001b7aa0 + iVar6 * 0xc + *(int *)(this + 0x30) * 0x9c + 0x1b79e0) == 0) {
      this_01 = (SpawnTask *)operator_new(0x28);
      SpawnTask::SpawnTask(this_01,this_00,'\x03');
    }
    else {
      this_01 = (SpawnTask *)operator_new(0x28);
      SpawnTask::SpawnTask(this_01,this_00,'\x02');
    }
    CharacterInstance::addTask(this_00,(Task *)this_01);
    *(int *)(this + 100) = *(int *)(this + 100) + 1;
  }
  return;
}


