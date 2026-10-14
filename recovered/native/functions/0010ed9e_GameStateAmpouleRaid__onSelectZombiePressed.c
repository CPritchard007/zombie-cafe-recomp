/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0010ed9e GameStateAmpouleRaid::onSelectZombiePressed */

/* GameStateAmpouleRaid::onSelectZombiePressed() */

void __thiscall GameStateAmpouleRaid::onSelectZombiePressed(GameStateAmpouleRaid *this)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  if (((*(CharacterInstance **)(this + 0x128) != (CharacterInstance *)0x0) &&
      (-1 < *(int *)(this + 0x104))) &&
     (uVar1 = Vector<CharacterInstance*>::indexOf
                        ((Vector<CharacterInstance*> *)(this + 0x100),
                         *(CharacterInstance **)(this + 0x128)), uVar1 != 0xffffffff)) {
    iVar2 = 0;
    iVar3 = -1;
    do {
      if ((byte)this[iVar2 + 300] == uVar1) {
        iVar3 = iVar2;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 != 6);
    iVar2 = getVacantSelectMember(this);
    if (iVar3 == -1) {
      if (iVar2 != -1) {
        this[iVar2 + 300] = SUB41(uVar1,0);
      }
    }
    else {
      this[iVar3 + 300] = (GameStateAmpouleRaid)0xff;
    }
    getSelectMemberCnt(this);
    HudElement::setButtonAvailability(*(int *)(this + 0x68),true);
  }
  return;
}


