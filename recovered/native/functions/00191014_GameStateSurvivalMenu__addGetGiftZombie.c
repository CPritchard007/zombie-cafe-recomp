/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00191014 GameStateSurvivalMenu::addGetGiftZombie */

/* GameStateSurvivalMenu::addGetGiftZombie() */

undefined4 __thiscall GameStateSurvivalMenu::addGetGiftZombie(GameStateSurvivalMenu *this)

{
  int iVar1;
  Character *pCVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  ZombieCafe *this_00;
  int iVar5;
  String aSStack_28 [8];
  CharacterData aCStack_20 [12];
  
  iVar5 = *(int *)(DAT_00191148 + 0x191020);
  if (*(int *)(iVar5 + 0x14) == 0xc) {
    iVar1 = playerHaveZombieCountCheck(this);
    if (iVar1 == 0) {
      return 0;
    }
    iVar1 = *(int *)(iVar5 + 0x18);
    String::String(aSStack_28,(char *)(DAT_0019114c + 0x19103a));
    pCVar2 = (Character *)operator_new(0x6c);
    Character::Character
              (pCVar2,*(undefined4 *)(iVar1 * 4 + *(int *)(*(int *)(this + 0xc) + DAT_00191150)),2,1
               ,aSStack_28);
    String::~String(aSStack_28);
    uVar3 = __floatsisf((int)**(short **)(DAT_00191154 + 0x191066));
    uVar4 = Character::getMaxEnergy();
    iVar1 = __aeabi_fcmplt(uVar3,0);
    if (iVar1 == 0) {
      iVar1 = __aeabi_fcmpgt(uVar3,uVar4);
      if (iVar1 != 0) {
        uVar3 = uVar4;
      }
    }
    else {
      uVar3 = 0;
    }
    iVar1 = DAT_00191158;
    *(undefined4 *)(pCVar2 + 0x40) = uVar3;
    CharacterData::getRandomName(aCStack_20,*(bool *)(*(int *)pCVar2 + iVar1),0);
    String::operator=((String *)(pCVar2 + 8),aCStack_20);
    String::~String((String *)aCStack_20);
    Platform::getAppTime();
    uVar3 = __fixdfsi();
    pCVar2[4] = (Character)0x1;
    *(undefined4 *)(pCVar2 + 0x10) = uVar3;
    pCVar2[5] = (Character)0x2;
    this_00 = *(ZombieCafe **)(this + 0xc);
    if (*(int *)((Vector<Character*> *)(this_00 + DAT_0019115c) + 4) + 1 <
        (int)*(short *)((*(int *)(this_00 + 0x680) + -1) * 2 + **(int **)(DAT_00191160 + 0x1910de)))
    {
      Vector<Character*>::addElement((Vector<Character*> *)(this_00 + DAT_0019115c),pCVar2);
    }
    else {
      ZombieCafe::putZombieInMeetlocker(this_00,pCVar2,(PullMenuElement *)0x0);
    }
  }
  ZombieCafe::save();
  iVar1 = **(int **)(DAT_00191164 + 0x191108);
  if ((0 < iVar1) && (iVar1 = iVar1 + -1, **(int **)(DAT_00191164 + 0x191108) = iVar1, iVar1 == 0))
  {
    *(undefined4 *)(iVar5 + 0x14) = 0;
    this[0x68] = (GameStateSurvivalMenu)0x0;
  }
  *(int *)(this + 0xb4) = *(int *)(this + 0xb4) + 1;
  return 1;
}


