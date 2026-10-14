/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001abc28 GameStateEventRaid2::makeEnemyZombie */

/* GameStateEventRaid2::makeEnemyZombie(bool) */

void __thiscall GameStateEventRaid2::makeEnemyZombie(GameStateEventRaid2 *this,bool param_1)

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
  CFPathFinder *pCVar8;
  code *pcVar9;
  undefined4 uVar10;
  int iVar11;
  int *piVar12;
  int *piVar13;
  CharacterInstance *pCVar14;
  float fVar15;
  int local_34;
  String aSStack_28 [8];
  CharacterData aCStack_20 [12];
  
  iVar7 = DAT_001abec0 + 0x1abc3e;
  if (*(int *)(this + 0x114) < 9) {
    if ((*(int *)(this + 100) == 0) || (*(int *)(this + 100) + 1 != *(int *)(this + 0x6c))) {
      iVar6 = getEventRaid2Level(this);
      piVar13 = *(int **)(iVar6 * 4 +
                         *(int *)((*(int *)(this + 0x34) * 5 + *(int *)(this + 0x30)) * 4 +
                                 *(int *)(iVar7 + DAT_001abec4)));
      iVar6 = CapcomMath::random(*piVar13 + piVar13[5] + piVar13[10] + piVar13[0xf]);
      local_34 = 0;
      piVar12 = piVar13;
      do {
        iVar6 = iVar6 - *piVar12;
        if (iVar6 < 0) goto LAB_001abcb6;
        local_34 = local_34 + 1;
        piVar12 = piVar12 + 5;
      } while (local_34 != 4);
      local_34 = 0;
LAB_001abcb6:
      piVar13 = piVar13 + local_34 * 5;
      bVar1 = false;
    }
    else {
      piVar13 = *(int **)((*(int *)(this + 0x34) * 5 + *(int *)(this + 0x30)) * 4 +
                         *(int *)(iVar7 + DAT_001abefc));
      iVar6 = CapcomMath::random(*piVar13 + piVar13[5] + piVar13[10] + piVar13[0xf]);
      local_34 = 0;
      piVar12 = piVar13;
      do {
        iVar6 = iVar6 - *piVar12;
        if (iVar6 < 0) goto LAB_001abc9a;
        local_34 = local_34 + 1;
        piVar12 = piVar12 + 5;
      } while (local_34 != 4);
      local_34 = 0;
LAB_001abc9a:
      piVar13 = piVar13 + local_34 * 5;
      bVar1 = true;
    }
    iVar6 = CharacterData::copy(*(CharacterData **)
                                 (piVar13[1] * 4 + *(int *)(*(int *)(this + 0xc) + DAT_001abec8)));
    *(short *)(iVar6 + DAT_001abecc) = (short)piVar13[4];
    *(undefined2 *)(iVar6 + DAT_001abed0) = *(undefined2 *)((int)piVar13 + 0x12);
    uVar3 = __floatsisf(piVar13[3]);
    *(undefined4 *)(iVar6 + DAT_001abed4) = uVar3;
    *(short *)(iVar6 + DAT_001abed8) = (short)piVar13[2];
    String::String(aSStack_28,(char *)(DAT_001abedc + 0x1abcfc));
    pCVar4 = (Character *)operator_new(0x6c);
    Character::Character(pCVar4,iVar6,3,1,aSStack_28);
    String::~String(aSStack_28);
    pCVar8 = *(CFPathFinder **)(*(int *)(this + 0x80) + 0x5c);
    this_00 = (CharacterInstance *)operator_new(0xdc);
    CharacterInstance::CharacterInstance(this_00,pCVar4,pCVar8);
    Vector<CharacterInstance*>::addElement((Vector<CharacterInstance*> *)(this + 0x110),this_00);
    if (bVar1) {
      uVar10 = **(undefined4 **)(iVar7 + DAT_001abee0);
      uVar3 = DAT_001abee8;
      if (local_34 == 3) {
        uVar3 = DAT_001abee4;
      }
      uVar3 = __mulsf3(uVar10,uVar3);
      fVar15 = (float)__addsf3(uVar10,uVar3);
      CharacterInstance::setScale(this_00,fVar15);
    }
    pCVar14 = this_00 + 0x8c;
    *(undefined4 *)(*(int *)pCVar14 + 0x28) = 0;
    *(undefined1 *)(*(int *)pCVar14 + 0x36) = 0;
    iVar11 = *(int *)pCVar14;
    uVar3 = Character::getMaxEnergy();
    *(undefined4 *)(iVar11 + 0x40) = uVar3;
    iVar11 = *(int *)pCVar14;
    CharacterData::getRandomName(aCStack_20,*(bool *)(iVar6 + DAT_001abeec),0);
    String::operator=((String *)(iVar11 + 8),aCStack_20);
    String::~String((String *)aCStack_20);
    this_00[0x84] = (CharacterInstance)0x1;
    iVar11 = *(int *)((*(int *)(this + 0x34) * 5 + *(int *)(this + 0x30)) * 4 +
                     *(int *)(iVar7 + DAT_001abef0));
    iVar6 = CapcomMath::random(0xd);
    piVar12 = (int *)(iVar11 + iVar6 * 0x10);
    lVar5 = Cafe::diamondToStaggeredCoords
                      (**(int **)(iVar7 + DAT_001abef4) - *piVar12,
                       **(int **)(iVar7 + DAT_001abef8) + piVar12[1]);
    sVar2 = Cafe::staggeredCoordsToIndex(lVar5);
    *(short *)(this_00 + 0x2c) = sVar2;
    pcVar9 = *(code **)(*(int *)this_00 + 0xc);
    uVar3 = Cafe::indexToWorldCoordsCenter(*(Cafe **)(this + 0x80),(int)sVar2);
    (*pcVar9)(this_00,uVar3);
    Cafe::addCafeObject(*(Cafe **)(this + 0x80),(CafeObject *)this_00);
    *(undefined1 *)(*(int *)(this_00 + 0x8c) + 0x44) = 1;
    if (param_1) {
      *(undefined1 *)(*(int *)(this_00 + 0x8c) + 0x44) = 4;
    }
    CharacterInstance::clearTasks();
    if (piVar12[2] == 0) {
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


