/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001107c8 GameStateAmpouleRaid::makeEnemyZombie */

/* GameStateAmpouleRaid::makeEnemyZombie(bool, int, int, bool) */

void __thiscall
GameStateAmpouleRaid::makeEnemyZombie
          (GameStateAmpouleRaid *this,bool param_1,int param_2,int param_3,bool param_4)

{
  undefined2 uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  Character *pCVar5;
  CharacterInstance *this_00;
  Cafe *this_01;
  Task *pTVar6;
  int extraout_r1;
  CFPathFinder *pCVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  CharacterInstance *pCVar11;
  int iVar12;
  code *pcVar13;
  float fVar14;
  int local_38;
  String aSStack_28 [8];
  CharacterData aCStack_20 [12];
  
  iVar9 = DAT_00110ac4 + 0x1107e6;
  iVar2 = CharacterData::copy(*(CharacterData **)
                               (param_2 * 4 + *(int *)(*(int *)(this + 0xc) + DAT_00110ac0)));
  iVar12 = DAT_00110ac8;
  if (param_1) {
    iVar3 = ZombieCafe::isAmpouleRaid_FirstHalf();
    if (iVar3 == 0) {
      iVar3 = DAT_00110ad4 + 0x110834;
      uVar4 = __floatsisf(*(undefined4 *)(iVar3 + *(int *)(this + 0x60) * 8 + 0x6c));
      *(undefined4 *)(iVar2 + iVar12) = uVar4;
      *(undefined2 *)(iVar2 + DAT_00110ad0) =
           *(undefined2 *)(iVar3 + *(int *)(this + 0x60) * 8 + 0x70);
      iVar12 = iVar3 + *(int *)(this + 0x60) * 8 + 0x6c;
LAB_001108ae:
      *(undefined2 *)(iVar2 + DAT_00110adc) = *(undefined2 *)(iVar12 + 6);
      goto LAB_001108b4;
    }
    iVar3 = DAT_00110acc + 0x11080a;
    uVar4 = __floatsisf(*(undefined4 *)(iVar3 + *(int *)(this + 0x60) * 8 + 0x44));
    *(undefined4 *)(iVar2 + iVar12) = uVar4;
    *(undefined2 *)(iVar2 + DAT_00110ad0) =
         *(undefined2 *)(iVar3 + *(int *)(this + 0x60) * 8 + 0x48);
    uVar1 = *(undefined2 *)(iVar3 + *(int *)(this + 0x60) * 8 + 0x4a);
  }
  else {
    iVar3 = ZombieCafe::isAmpouleRaid_FirstHalf();
    if (iVar3 == 0) {
      iVar3 = DAT_00110ae0 + 0x110890;
      uVar4 = __floatsisf(*(undefined4 *)(iVar3 + *(int *)(this + 0x60) * 8 + 0x3c));
      *(undefined4 *)(iVar2 + iVar12) = uVar4;
      *(undefined2 *)(iVar2 + DAT_00110ad0) =
           *(undefined2 *)(iVar3 + *(int *)(this + 0x60) * 8 + 0x40);
      iVar12 = iVar3 + *(int *)(this + 0x60) * 8 + 0x3c;
      goto LAB_001108ae;
    }
    iVar3 = DAT_00110ad8 + 0x110866;
    uVar4 = __floatsisf(*(undefined4 *)(iVar3 + *(int *)(this + 0x60) * 8 + 0x14));
    *(undefined4 *)(iVar2 + iVar12) = uVar4;
    *(undefined2 *)(iVar2 + DAT_00110ad0) =
         *(undefined2 *)(iVar3 + *(int *)(this + 0x60) * 8 + 0x18);
    uVar1 = *(undefined2 *)(iVar3 + *(int *)(this + 0x60) * 8 + 0x1a);
  }
  *(undefined2 *)(iVar2 + DAT_00110adc) = uVar1;
LAB_001108b4:
  String::String(aSStack_28,(char *)(DAT_00110ae4 + 0x1108be));
  pCVar5 = (Character *)operator_new(0x6c);
  Character::Character(pCVar5,iVar2,3,0,aSStack_28);
  String::~String(aSStack_28);
  pCVar7 = *(CFPathFinder **)(*(int *)(this + 100) + 0x5c);
  this_00 = (CharacterInstance *)operator_new(0xdc);
  CharacterInstance::CharacterInstance(this_00,pCVar5,pCVar7);
  Vector<CharacterInstance*>::addElement((Vector<CharacterInstance*> *)(this + 0xf4),this_00);
  if (param_1) {
    uVar10 = **(undefined4 **)(iVar9 + DAT_00110ae8);
    uVar4 = __mulsf3(uVar10,*(undefined4 *)(DAT_00110aec + *(int *)(this + 0x60) * 4 + 0x110970));
    fVar14 = (float)__addsf3(uVar10,uVar4);
    CharacterInstance::setScale(this_00,fVar14);
  }
  pCVar11 = this_00 + 0x8c;
  *(undefined4 *)(*(int *)pCVar11 + 0x28) = 0;
  *(undefined1 *)(*(int *)pCVar11 + 0x36) = 0;
  if (param_4) {
    iVar12 = *(int *)pCVar11;
    uVar4 = Character::getMaxEnergy();
  }
  else {
    local_38 = param_3;
    if (param_3 < 1) {
      local_38 = 1;
    }
    uVar4 = Character::getMaxEnergy();
    uVar10 = __floatsisf(local_38);
    iVar12 = __aeabi_fcmpgt(uVar10,uVar4);
    if (iVar12 != 0) {
      Character::getMaxEnergy();
      local_38 = __fixsfsi();
    }
    iVar12 = *(int *)(this_00 + 0x8c);
    uVar4 = __floatsisf(local_38);
  }
  *(undefined4 *)(iVar12 + 0x40) = uVar4;
  iVar12 = *(int *)(this_00 + 0x8c);
  CharacterData::getRandomName(aCStack_20,*(bool *)(iVar2 + DAT_00110af0),0);
  String::operator=((String *)(iVar12 + 8),aCStack_20);
  String::~String((String *)aCStack_20);
  *(undefined2 *)(this_00 + 0x2c) = 0;
  while ((iVar12 = Cafe::isInside(*(Cafe **)(this + 100),(int)*(short *)(this_00 + 0x2c)),
         iVar12 == 0 ||
         (iVar12 = Cafe::getFurniture(*(Cafe **)(this + 100),(int)*(short *)(this_00 + 0x2c)),
         iVar12 != 0))) {
    uVar1 = CapcomMath::random(**(int **)(iVar9 + DAT_00110af4) * **(int **)(iVar9 + DAT_00110af8));
    *(undefined2 *)(this_00 + 0x2c) = uVar1;
  }
  if (param_1) {
    *(short *)(this_00 + 0x2c) = (short)*(undefined4 *)(this + 0x144);
    this_01 = *(Cafe **)(this + 100);
    iVar12 = *(int *)(this + 0x144);
    pcVar13 = *(code **)(*(int *)this_00 + 0xc);
  }
  else {
    this_01 = *(Cafe **)(this + 100);
    iVar12 = (int)*(short *)(this_00 + 0x2c);
    pcVar13 = *(code **)(*(int *)this_00 + 0xc);
  }
  uVar4 = Cafe::indexToWorldCoordsCenter(this_01,iVar12);
  (*pcVar13)(this_00,uVar4);
  Cafe::addCafeObject(*(Cafe **)(this + 100),(CafeObject *)this_00);
  this_00[0x84] = (CharacterInstance)0x1;
  *(undefined1 *)(*(int *)(this_00 + 0x8c) + 0x44) = 1;
  CharacterInstance::clearTasks();
  iVar3 = **(int **)(iVar9 + DAT_00110afc);
  iVar2 = **(int **)(iVar9 + DAT_00110b00);
  iVar12 = -iVar2;
  if (iVar2 != iVar12 && iVar2 * 2 < 0 == SBORROW4(iVar2,iVar12)) {
    uVar4 = arc4random();
    __aeabi_uidivmod(uVar4,iVar2 << 1);
    iVar12 = extraout_r1 + iVar12;
  }
  pTVar6 = (Task *)operator_new(0x2c);
  iVar8 = *(int *)(iVar9 + DAT_00110b04);
  *(Task **)(pTVar6 + 0x10) = pTVar6 + 8;
  iVar2 = DAT_00110b08;
  *(int *)pTVar6 = iVar8 + 8;
  *(CharacterInstance **)(pTVar6 + 0x20) = this_00;
  *(undefined4 *)(pTVar6 + 0xc) = 0;
  *(undefined4 *)(pTVar6 + 0x18) = 0;
  *(undefined4 *)(pTVar6 + 0x14) = 0;
  pTVar6[4] = (Task)0x0;
  pTVar6[5] = (Task)0x0;
  iVar8 = **(int **)(iVar9 + iVar2) + 1;
  **(int **)(iVar9 + iVar2) = iVar8;
  *(int *)(pTVar6 + 0x1c) = iVar8;
  iVar2 = *(int *)(iVar9 + DAT_00110b0c);
  *(int *)(pTVar6 + 0x24) = iVar3 + iVar12;
  *(int *)pTVar6 = iVar2 + 8;
  pTVar6[0x28] = (Task)0x0;
  CharacterInstance::addTask(this_00,pTVar6);
  return;
}


