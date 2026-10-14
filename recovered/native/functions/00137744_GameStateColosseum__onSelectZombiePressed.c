/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00137744 GameStateColosseum::onSelectZombiePressed */

/* GameStateColosseum::onSelectZombiePressed() */

void __thiscall GameStateColosseum::onSelectZombiePressed(GameStateColosseum *this)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  if (((*(CharacterInstance **)(this + 0x13c) != (CharacterInstance *)0x0) &&
      (-1 < *(int *)(this + 0x118))) &&
     (uVar1 = Vector<CharacterInstance*>::indexOf
                        ((Vector<CharacterInstance*> *)(this + 0x114),
                         *(CharacterInstance **)(this + 0x13c)), uVar1 != 0xffffffff)) {
    iVar2 = 0;
    iVar3 = -1;
    do {
      if ((byte)this[iVar2 + 0x140] == uVar1) {
        iVar3 = iVar2;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 != 6);
    iVar2 = getVacantSelectMember(this);
    if (iVar3 == -1) {
      if (iVar2 != -1) {
        this[iVar2 + 0x140] = SUB41(uVar1,0);
      }
    }
    else {
      this[iVar3 + 0x140] = (GameStateColosseum)0xff;
    }
    getSelectMemberCnt(this);
    HudElement::setButtonAvailability(*(int *)(this + 0x74),true);
  }
  return;
}


