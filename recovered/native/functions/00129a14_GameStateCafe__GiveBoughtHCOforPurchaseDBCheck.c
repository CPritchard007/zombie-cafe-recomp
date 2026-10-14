/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00129a14 GameStateCafe::GiveBoughtHCOforPurchaseDBCheck */

/* GameStateCafe::GiveBoughtHCOforPurchaseDBCheck(int) */

void __thiscall GameStateCafe::GiveBoughtHCOforPurchaseDBCheck(GameStateCafe *this,int param_1)

{
  HCOManager *pHVar1;
  int iVar2;
  Character *this_00;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  float fVar7;
  int local_2c;
  String aSStack_28 [8];
  CharacterData aCStack_20 [12];
  
  pHVar1 = (HCOManager *)HCOManager::getInstance();
  HCOManager::loadHCOItemInfo(pHVar1);
  iVar2 = HCOManager::getInstance();
  if (*(int *)(iVar2 + 0x10) == param_1) {
    iVar2 = HCOManager::getInstance();
    if (0 < *(int *)(iVar2 + 0x18)) {
      ZombieCafe::addToxin(*(ZombieCafe **)(this + 0xc),*(int *)(iVar2 + 0x18),true);
    }
    pcVar6 = (char *)(DAT_00129b28 + 0x129a4a);
    for (local_2c = 0; iVar2 = HCOManager::getInstance(), local_2c < *(int *)(iVar2 + 0x1c);
        local_2c = local_2c + 1) {
      iVar2 = HCOManager::getInstance();
      iVar5 = local_2c * 4;
      if (*(int *)(*(int *)(iVar2 + 0x20) + iVar5) == 0) {
        String::String(aSStack_28,pcVar6);
        iVar2 = HCOManager::getInstance();
        this_00 = (Character *)
                  onZombieGiftReceived
                            (this,aSStack_28,*(undefined4 *)(*(int *)(iVar2 + 0x24) + iVar5));
        String::~String(aSStack_28);
        iVar2 = HCOManager::getInstance();
        *(undefined4 *)(this_00 + 0x58) = *(undefined4 *)(*(int *)(iVar2 + 0x30) + iVar5);
        iVar2 = HCOManager::getInstance();
        this_00[0x36] = SUB41(*(undefined4 *)(*(int *)(iVar2 + 0x2c) + iVar5),0);
        iVar2 = HCOManager::getInstance();
        *(undefined4 *)(this_00 + 0x28) = *(undefined4 *)(*(int *)(iVar2 + 0x28) + iVar5);
        fVar7 = (float)Character::getMaxEnergy();
        Character::setCurrentEnergy(this_00,fVar7);
        CharacterData::getRandomName(aCStack_20,*(bool *)(*(int *)this_00 + DAT_00129b2c),0);
        String::operator=((String *)(this_00 + 8),aCStack_20);
        String::~String((String *)aCStack_20);
        Platform::getAppTime();
        uVar3 = __fixdfsi();
        this_00[4] = (Character)0x1;
        *(undefined4 *)(this_00 + 0x10) = uVar3;
        this_00[5] = (Character)0x2;
      }
      else {
        iVar4 = *(int *)(this + 0x14);
        iVar2 = HCOManager::getInstance();
        Vector<int>::addElement
                  ((Vector<int> *)(iVar4 + 0xfc),*(int *)(*(int *)(iVar2 + 0x24) + iVar5));
      }
    }
    ZombieCafe::save();
    pHVar1 = (HCOManager *)HCOManager::getInstance();
    HCOManager::buyCompleted(pHVar1);
  }
  return;
}


