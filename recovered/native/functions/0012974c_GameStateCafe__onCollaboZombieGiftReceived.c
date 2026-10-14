/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0012974c GameStateCafe::onCollaboZombieGiftReceived */

/* GameStateCafe::onCollaboZombieGiftReceived(GameStateCafe*, String, int) */

void GameStateCafe::onCollaboZombieGiftReceived
               (CharacterInstance *param_1,undefined4 param_2,int param_3)

{
  GameStateCafe *pGVar1;
  Character *pCVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  String aSStack_28 [8];
  CharacterData aCStack_20 [12];
  
  iVar5 = *(int *)(param_1 + 0xc);
  if (3 < *(int *)(iVar5 + 0x680)) {
    if (*(int *)(iVar5 + DAT_00129850 + 4) + 1 <
        (int)*(short *)((*(int *)(iVar5 + 0x680) + -1) * 2 + **(int **)(DAT_0012984c + 0x12976a))) {
      pGVar1 = (GameStateCafe *)lotterySpawnCustomer((int)param_1,SUB41(param_3,0));
      completeInfect(param_1,pGVar1);
    }
    else if (*(int *)(iVar5 + 0x5a4) + 1 < *(int *)(iVar5 + 0x5b8)) {
      String::String(aSStack_28,(char *)(DAT_00129854 + 0x1297ac));
      pCVar2 = (Character *)operator_new(0x6c);
      Character::Character
                (pCVar2,*(undefined4 *)
                         (param_3 * 4 + *(int *)(*(int *)(param_1 + 0xc) + DAT_00129858)),2,1,
                 aSStack_28);
      String::~String(aSStack_28);
      iVar6 = *(int *)pCVar2;
      iVar3 = __fixsfsi(*(undefined4 *)(iVar6 + DAT_0012985c));
      iVar5 = __fixsfsi(*(undefined4 *)(pCVar2 + 0x40));
      if (iVar5 < iVar3) {
        iVar5 = iVar3;
      }
      uVar4 = __floatsisf(iVar5);
      iVar5 = DAT_00129860;
      *(undefined4 *)(pCVar2 + 0x40) = uVar4;
      CharacterData::getRandomName(aCStack_20,*(bool *)(iVar6 + iVar5),0);
      String::operator=((String *)(pCVar2 + 8),aCStack_20);
      String::~String((String *)aCStack_20);
      Platform::getAppTime();
      uVar4 = __fixdfsi();
      pCVar2[4] = (Character)0x1;
      *(undefined4 *)(pCVar2 + 0x10) = uVar4;
      pCVar2[5] = (Character)0x2;
      ZombieCafe::putZombieInMeetlocker
                (*(ZombieCafe **)(param_1 + 0xc),pCVar2,*(PullMenuElement **)(param_1 + 0xcc));
    }
  }
  return;
}


