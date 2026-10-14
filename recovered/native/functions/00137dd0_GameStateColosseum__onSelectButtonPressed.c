/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00137dd0 GameStateColosseum::onSelectButtonPressed */

/* GameStateColosseum::onSelectButtonPressed(GameStateColosseum*, ScreenElement*) */

void GameStateColosseum::onSelectButtonPressed(GameStateColosseum *param_1,ScreenElement *param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  if (*(CharacterInstance **)(param_1 + 0x13c) == (CharacterInstance *)0x0) {
    return;
  }
  if (*(int *)(param_1 + 0x118) < 0) {
    return;
  }
  uVar1 = Vector<CharacterInstance*>::indexOf
                    ((Vector<CharacterInstance*> *)(param_1 + 0x114),
                     *(CharacterInstance **)(param_1 + 0x13c));
  if (uVar1 == 0xffffffff) {
    return;
  }
  iVar2 = 0;
  iVar3 = -1;
  do {
    if ((byte)param_1[iVar2 + 0x140] == uVar1) {
      iVar3 = iVar2;
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 != 6);
  iVar2 = getVacantSelectMember(param_1);
  if (iVar3 == -1) {
    if (iVar2 == -1) goto LAB_00137e3a;
    param_1[iVar2 + 0x140] = SUB41(uVar1,0);
  }
  else {
    param_1[iVar3 + 0x140] = (GameStateColosseum)0xff;
  }
  CharacterCommandBar::changeAttackButton(*(CharacterCommandBar **)(param_1 + 0x9c));
LAB_00137e3a:
  getSelectMemberCnt(param_1);
  HudElement::setButtonAvailability(*(int *)(param_1 + 0x74),true);
  return;
}


