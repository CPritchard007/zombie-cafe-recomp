/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00129864 GameStateCafe::onZombieGiftReceived */

/* GameStateCafe::onZombieGiftReceived(GameStateCafe*, String, int) */

Character *
GameStateCafe::onZombieGiftReceived(CharacterInstance *param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  GameStateCafe *pGVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  Character *this;
  int iVar7;
  float fVar8;
  String aSStack_28 [8];
  CharacterData aCStack_20 [12];
  
  iVar1 = DAT_001299e8;
  iVar6 = *(int *)(param_1 + 0xc);
  piVar4 = *(int **)(iVar6 + DAT_001299e8);
  if (param_3 == DAT_001299f0) {
    this = (Character *)0x0;
    *(undefined1 *)(iVar6 + DAT_001299f4) = 0;
    ZombieCafe::ResetTimeCheat(*(ZombieCafe **)(param_1 + 0xc));
  }
  else if (*(char *)(piVar4[param_3] + DAT_001299ec) == '\x01') {
    iVar5 = 0;
    for (iVar1 = 0; iVar1 < (int)(uint)*(ushort *)(iVar6 + DAT_001299f8); iVar1 = iVar1 + 1) {
      iVar7 = *piVar4;
      piVar4 = piVar4 + 1;
      if (*(char *)(iVar7 + DAT_001299ec) != '\0') {
        if (iVar1 == param_3) {
          if (*(char *)(*(int *)(iVar6 + 0x988) + iVar5) != '\0') {
            return (Character *)0x0;
          }
          *(undefined1 *)(iVar6 + DAT_001299fc) = 1;
          if (iVar5 <= *(int *)(*(int *)(param_1 + 0xc) + 0x984)) {
            *(undefined1 *)(*(int *)(*(int *)(param_1 + 0xc) + 0x988) + iVar5) = 1;
          }
          if (*(int *)(*(int *)(param_1 + 0xc) + DAT_00129a00 + 4) < iVar5) {
            return (Character *)0x0;
          }
          *(undefined1 *)(*(int *)(*(int *)(param_1 + 0xc) + DAT_00129a00 + 8) + iVar5) = 1;
          return (Character *)0x0;
        }
        iVar5 = iVar5 + 1;
      }
    }
    this = (Character *)0x0;
  }
  else if (*(int *)(iVar6 + DAT_00129a04 + 4) + 1 <
           (int)*(short *)((*(int *)(iVar6 + 0x680) + -1) * 2 + **(int **)(DAT_00129a08 + 0x129916))
          ) {
    pGVar2 = (GameStateCafe *)lotterySpawnCustomer((int)param_1,SUB41(param_3,0));
    completeInfect(param_1,pGVar2);
    this = *(Character **)(pGVar2 + 0x8c);
  }
  else {
    this = (Character *)0x0;
    if ((3 < *(int *)(iVar6 + 0x680)) && (*(int *)(iVar6 + 0x5a4) + 1 < *(int *)(iVar6 + 0x5b8))) {
      String::String(aSStack_28,(char *)(DAT_00129a0c + 0x129964));
      this = (Character *)operator_new(0x6c);
      Character::Character
                (this,*(undefined4 *)(*(int *)(*(int *)(param_1 + 0xc) + iVar1) + param_3 * 4),2,1,
                 aSStack_28);
      String::~String(aSStack_28);
      CharacterData::getRandomName(aCStack_20,*(bool *)(*(int *)this + DAT_00129a10),0);
      String::operator=((String *)(this + 8),aCStack_20);
      String::~String((String *)aCStack_20);
      Platform::getAppTime();
      uVar3 = __fixdfsi();
      *(undefined4 *)(this + 0x10) = uVar3;
      fVar8 = (float)Character::getMaxEnergy();
      Character::setCurrentEnergy(this,fVar8);
      ZombieCafe::putZombieInMeetlocker(*(ZombieCafe **)(param_1 + 0xc),this,(PullMenuElement *)0x0)
      ;
    }
  }
  return this;
}


