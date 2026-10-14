/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0029722c GameStateSpecialSale::onToxinBuyOK */

/* GameStateSpecialSale::onToxinBuyOK(GameStateSpecialSale*) */

void GameStateSpecialSale::onToxinBuyOK(GameStateSpecialSale *param_1)

{
  int iVar1;
  Character *pCVar2;
  undefined4 uVar3;
  Vector<Character*> *this;
  HCOManager *this_00;
  GameStateCafe *this_01;
  GameStateLoading *this_02;
  undefined4 uVar4;
  int iVar5;
  NoticeDialog *pNVar6;
  int iVar7;
  int iVar8;
  CapcomGame *this_03;
  String aSStack_38 [8];
  String aSStack_30 [8];
  String aSStack_28 [8];
  CharacterData aCStack_20 [12];
  
  iVar1 = JSONGetGameInfo::getInstance();
  iVar5 = *(int *)(iVar1 + 0x14);
  iVar1 = ZombieCafe::getToxin(*(ZombieCafe **)(param_1 + 0xc));
  if (iVar1 < iVar5) {
    pNVar6 = *(NoticeDialog **)(param_1 + 0x448);
    if (pNVar6 != (NoticeDialog *)0x0) {
      String::String(aSStack_38,(char *)(DAT_00297418 + 0x297256));
      String::String(aSStack_30,(char *)(DAT_0029741c + 0x297260));
      NoticeDialog::show(pNVar6,aSStack_38,aSStack_30,0,param_1);
      String::~String(aSStack_30);
      String::~String(aSStack_38);
    }
  }
  else {
    ZombieCafe::addToxin(*(ZombieCafe **)(param_1 + 0xc),-iVar5,false);
    for (iVar1 = 0; iVar1 < *(int *)(param_1 + DAT_0029743c); iVar1 = iVar1 + 1) {
      if (param_1[iVar1 + 0x3b0] == (GameStateSpecialSale)0x0) {
        iVar8 = iVar1 * 4;
        iVar7 = *(int *)(*(int *)(param_1 + 0xc) + DAT_00297420);
        iVar5 = JSONGetGameInfo::getInstance();
        uVar4 = *(undefined4 *)(*(int *)(*(int *)(iVar5 + 0x20) + iVar8) * 4 + iVar7);
        String::String(aSStack_28,(char *)(DAT_00297424 + 0x2972b2));
        pCVar2 = (Character *)operator_new(0x6c);
        Character::Character(pCVar2,uVar4,2,1,aSStack_28);
        String::~String(aSStack_28);
        iVar5 = JSONGetGameInfo::getInstance();
        *(uint *)(pCVar2 + 0x58) = (uint)*(byte *)(*(int *)(iVar5 + 0x2c) + iVar8);
        iVar5 = JSONGetGameInfo::getInstance();
        pCVar2[0x36] = SUB41(*(undefined4 *)(*(int *)(iVar5 + 0x28) + iVar8),0);
        iVar5 = JSONGetGameInfo::getInstance();
        *(uint *)(pCVar2 + 0x28) = (uint)*(byte *)(*(int *)(iVar5 + 0x24) + iVar8);
        uVar4 = Character::getMaxEnergy();
        uVar3 = Character::getMaxEnergy();
        iVar5 = __aeabi_fcmplt(uVar4,0);
        if (iVar5 == 0) {
          iVar5 = __aeabi_fcmpgt(uVar4,uVar3);
          if (iVar5 != 0) {
            uVar4 = uVar3;
          }
        }
        else {
          uVar4 = 0;
        }
        iVar5 = DAT_00297428;
        *(undefined4 *)(pCVar2 + 0x40) = uVar4;
        CharacterData::getRandomName(aCStack_20,*(bool *)(*(int *)pCVar2 + iVar5),0);
        String::operator=((String *)(pCVar2 + 8),aCStack_20);
        String::~String((String *)aCStack_20);
        Platform::getAppTime();
        uVar4 = __fixdfsi();
        pCVar2[4] = (Character)0x1;
        *(undefined4 *)(pCVar2 + 0x10) = uVar4;
        pCVar2[5] = (Character)0x2;
        iVar5 = *(int *)(param_1 + 0xc);
        this = (Vector<Character*> *)(iVar5 + DAT_0029742c);
        if ((int)*(short *)((*(int *)(iVar5 + 0x680) + -1) * 2 + **(int **)(DAT_00297430 + 0x29736e)
                           ) <= *(int *)(this + 4) + 1) {
          this = (Vector<Character*> *)(iVar5 + 0x5a0);
        }
        Vector<Character*>::addElement(this,pCVar2);
      }
      L_PrintLog((char *)(DAT_00297434 + 0x297390),(char *)(DAT_00297438 + 0x297392));
    }
    ZombieCafe::save();
    this_00 = (HCOManager *)HCOManager::getInstance();
    HCOManager::buyCompleted(this_00);
    sendMalta(param_1,(char *)(DAT_00297440 + 0x2973b4));
    this_03 = *(CapcomGame **)(param_1 + 0xc);
    this_01 = (GameStateCafe *)operator_new(0x200);
    GameStateCafe::GameStateCafe(this_01);
    this_02 = (GameStateLoading *)operator_new(0x2c);
    GameStateLoading::GameStateLoading(this_02,(GameState *)this_01);
    CapcomGame::setNextState(this_03,(GameState *)this_02);
  }
  return;
}


