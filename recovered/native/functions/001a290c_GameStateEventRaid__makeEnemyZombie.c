/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001a290c GameStateEventRaid::makeEnemyZombie */

/* GameStateEventRaid::makeEnemyZombie(bool, int, int, bool) */

void __thiscall
GameStateEventRaid::makeEnemyZombie
          (GameStateEventRaid *this,bool param_1,int param_2,int param_3,bool param_4)

{
  undefined2 uVar1;
  int iVar2;
  undefined4 uVar3;
  Character *pCVar4;
  CharacterInstance *this_00;
  Cafe *this_01;
  Task *pTVar5;
  int extraout_r1;
  CFPathFinder *pCVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  CharacterInstance *pCVar10;
  int iVar11;
  code *pcVar12;
  int iVar13;
  float fVar14;
  int local_38;
  String aSStack_28 [8];
  CharacterData aCStack_20 [12];
  
  iVar11 = DAT_001a2ba4;
  iVar13 = DAT_001a2ba0;
  iVar2 = CharacterData::copy(*(CharacterData **)
                               (param_2 * 4 + *(int *)(*(int *)(this + 0xc) + DAT_001a2b9c)));
  iVar13 = iVar13 + 0x1a2934;
  if (param_1) {
    iVar8 = *(int *)(iVar13 + DAT_001a2ba8);
    uVar3 = __floatsisf(*(undefined4 *)
                         (*(int *)(this + 0x58) * 8 + *(int *)(*(int *)(this + 0x1c) * 4 + iVar8)));
    *(undefined4 *)(iVar2 + iVar11) = uVar3;
  }
  else {
    iVar8 = *(int *)(iVar13 + DAT_001a2bac);
    uVar3 = __floatsisf(*(undefined4 *)
                         (*(int *)(this + 0x58) * 8 + *(int *)(*(int *)(this + 0x1c) * 4 + iVar8)));
    *(undefined4 *)(iVar2 + iVar11) = uVar3;
  }
  *(undefined2 *)(iVar2 + DAT_001a2bb0) =
       *(undefined2 *)(*(int *)(*(int *)(this + 0x1c) * 4 + iVar8) + *(int *)(this + 0x58) * 8 + 4);
  *(undefined2 *)(iVar2 + DAT_001a2bb4) =
       *(undefined2 *)(*(int *)(*(int *)(this + 0x1c) * 4 + iVar8) + *(int *)(this + 0x58) * 8 + 6);
  String::String(aSStack_28,(char *)(DAT_001a2bb8 + 0x1a2996));
  pCVar4 = (Character *)operator_new(0x6c);
  Character::Character(pCVar4,iVar2,3,0,aSStack_28);
  String::~String(aSStack_28);
  pCVar6 = *(CFPathFinder **)(*(int *)(this + 0x5c) + 0x5c);
  this_00 = (CharacterInstance *)operator_new(0xdc);
  CharacterInstance::CharacterInstance(this_00,pCVar4,pCVar6);
  Vector<CharacterInstance*>::addElement((Vector<CharacterInstance*> *)(this + 0xf0),this_00);
  if (param_1) {
    uVar9 = **(undefined4 **)(iVar13 + DAT_001a2bbc);
    uVar3 = __mulsf3(uVar9,*(undefined4 *)
                            (*(int *)(this + 0x58) * 4 +
                            *(int *)(*(int *)(this + 0x1c) * 4 + *(int *)(iVar13 + DAT_001a2bc0))));
    fVar14 = (float)__addsf3(uVar9,uVar3);
    CharacterInstance::setScale(this_00,fVar14);
  }
  pCVar10 = this_00 + 0x8c;
  *(undefined4 *)(*(int *)pCVar10 + 0x28) = 0;
  *(undefined1 *)(*(int *)pCVar10 + 0x36) = 0;
  if (param_4) {
    iVar11 = *(int *)pCVar10;
    uVar3 = Character::getMaxEnergy();
  }
  else {
    local_38 = param_3;
    if (param_3 < 1) {
      local_38 = 1;
    }
    uVar3 = Character::getMaxEnergy();
    uVar9 = __floatsisf(local_38);
    iVar11 = __aeabi_fcmpgt(uVar9,uVar3);
    if (iVar11 != 0) {
      Character::getMaxEnergy();
      local_38 = __fixsfsi();
    }
    iVar11 = *(int *)(this_00 + 0x8c);
    uVar3 = __floatsisf(local_38);
  }
  *(undefined4 *)(iVar11 + 0x40) = uVar3;
  iVar11 = *(int *)(this_00 + 0x8c);
  CharacterData::getRandomName(aCStack_20,*(bool *)(iVar2 + DAT_001a2bc4),0);
  String::operator=((String *)(iVar11 + 8),aCStack_20);
  String::~String((String *)aCStack_20);
  *(undefined2 *)(this_00 + 0x2c) = 0;
  while ((iVar11 = Cafe::isInside(*(Cafe **)(this + 0x5c),(int)*(short *)(this_00 + 0x2c)),
         iVar11 == 0 ||
         (iVar11 = Cafe::getFurniture(*(Cafe **)(this + 0x5c),(int)*(short *)(this_00 + 0x2c)),
         iVar11 != 0))) {
    uVar1 = CapcomMath::random(**(int **)(iVar13 + DAT_001a2bc8) * **(int **)(iVar13 + DAT_001a2bcc)
                              );
    *(undefined2 *)(this_00 + 0x2c) = uVar1;
  }
  if (param_1) {
    *(short *)(this_00 + 0x2c) = (short)*(undefined4 *)(this + 0x140);
    this_01 = *(Cafe **)(this + 0x5c);
    iVar11 = *(int *)(this + 0x140);
    pcVar12 = *(code **)(*(int *)this_00 + 0xc);
  }
  else {
    this_01 = *(Cafe **)(this + 0x5c);
    pcVar12 = *(code **)(*(int *)this_00 + 0xc);
    iVar11 = (int)*(short *)(this_00 + 0x2c);
  }
  uVar3 = Cafe::indexToWorldCoordsCenter(this_01,iVar11);
  (*pcVar12)(this_00,uVar3);
  Cafe::addCafeObject(*(Cafe **)(this + 0x5c),(CafeObject *)this_00);
  this_00[0x84] = (CharacterInstance)0x1;
  *(undefined1 *)(*(int *)(this_00 + 0x8c) + 0x44) = 1;
  CharacterInstance::clearTasks();
  iVar2 = **(int **)(iVar13 + DAT_001a2bd0);
  iVar8 = **(int **)(iVar13 + DAT_001a2bd4);
  iVar11 = -iVar8;
  if (iVar8 != iVar11 && iVar8 * 2 < 0 == SBORROW4(iVar8,iVar11)) {
    uVar3 = arc4random();
    __aeabi_uidivmod(uVar3,iVar8 << 1);
    iVar11 = extraout_r1 + iVar11;
  }
  pTVar5 = (Task *)operator_new(0x2c);
  iVar7 = *(int *)(iVar13 + DAT_001a2bd8);
  *(Task **)(pTVar5 + 0x10) = pTVar5 + 8;
  iVar8 = DAT_001a2bdc;
  *(int *)pTVar5 = iVar7 + 8;
  *(CharacterInstance **)(pTVar5 + 0x20) = this_00;
  *(undefined4 *)(pTVar5 + 0xc) = 0;
  *(undefined4 *)(pTVar5 + 0x18) = 0;
  *(undefined4 *)(pTVar5 + 0x14) = 0;
  pTVar5[4] = (Task)0x0;
  pTVar5[5] = (Task)0x0;
  iVar7 = **(int **)(iVar13 + iVar8) + 1;
  **(int **)(iVar13 + iVar8) = iVar7;
  *(int *)(pTVar5 + 0x1c) = iVar7;
  iVar13 = *(int *)(iVar13 + DAT_001a2be0);
  *(int *)(pTVar5 + 0x24) = iVar2 + iVar11;
  *(int *)pTVar5 = iVar13 + 8;
  pTVar5[0x28] = (Task)0x0;
  CharacterInstance::addTask(this_00,pTVar5);
  return;
}


