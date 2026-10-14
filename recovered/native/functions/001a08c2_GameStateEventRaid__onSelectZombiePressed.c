/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001a08c2 GameStateEventRaid::onSelectZombiePressed */

/* GameStateEventRaid::onSelectZombiePressed() */

void __thiscall GameStateEventRaid::onSelectZombiePressed(GameStateEventRaid *this)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  if (((*(CharacterInstance **)(this + 0x124) != (CharacterInstance *)0x0) &&
      (-1 < *(int *)(this + 0x100))) &&
     (uVar1 = Vector<CharacterInstance*>::indexOf
                        ((Vector<CharacterInstance*> *)(this + 0xfc),
                         *(CharacterInstance **)(this + 0x124)), uVar1 != 0xffffffff)) {
    iVar2 = 0;
    iVar3 = -1;
    do {
      if ((byte)this[iVar2 + 0x128] == uVar1) {
        iVar3 = iVar2;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 != 6);
    iVar2 = getVacantSelectMember(this);
    if (iVar3 == -1) {
      if (iVar2 != -1) {
        this[iVar2 + 0x128] = SUB41(uVar1,0);
      }
    }
    else {
      this[iVar3 + 0x128] = (GameStateEventRaid)0xff;
    }
    getSelectMemberCnt(this);
    HudElement::setButtonAvailability(*(int *)(this + 0x60),true);
  }
  return;
}


