/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001aaaf0 GameStateEventRaid2::onSelectZombiePressed */

/* GameStateEventRaid2::onSelectZombiePressed() */

void __thiscall GameStateEventRaid2::onSelectZombiePressed(GameStateEventRaid2 *this)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  if (((*(CharacterInstance **)(this + 0x144) != (CharacterInstance *)0x0) &&
      (-1 < *(int *)(this + 0x120))) &&
     (uVar1 = Vector<CharacterInstance*>::indexOf
                        ((Vector<CharacterInstance*> *)(this + 0x11c),
                         *(CharacterInstance **)(this + 0x144)), uVar1 != 0xffffffff)) {
    iVar2 = 0;
    iVar3 = -1;
    do {
      if ((byte)this[iVar2 + 0x148] == uVar1) {
        iVar3 = iVar2;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 != 6);
    iVar2 = getVacantSelectMember(this);
    if (iVar3 == -1) {
      if (iVar2 != -1) {
        this[iVar2 + 0x148] = SUB41(uVar1,0);
      }
    }
    else {
      this[iVar3 + 0x148] = (GameStateEventRaid2)0xff;
    }
    getSelectMemberCnt(this);
    HudElement::setButtonAvailability(*(int *)(this + 0x84),true);
  }
  return;
}


