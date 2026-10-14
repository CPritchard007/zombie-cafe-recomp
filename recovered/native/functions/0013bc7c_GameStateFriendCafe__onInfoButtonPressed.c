/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0013bc7c GameStateFriendCafe::onInfoButtonPressed */

/* GameStateFriendCafe::onInfoButtonPressed(GameStateFriendCafe*, ScreenElement*) */

void GameStateFriendCafe::onInfoButtonPressed(GameStateFriendCafe *param_1,ScreenElement *param_2)

{
  int iVar1;
  
  if (param_1[0xc3] == (GameStateFriendCafe)0x0) {
    iVar1 = *(int *)(param_1 + 0x1a0);
  }
  else {
    iVar1 = *(int *)(param_1 + 0x15c);
  }
  CharacterDetails::setCharacter
            (*(CharacterDetails **)(param_1 + 0x1a8),*(Character **)(iVar1 + 0x8c));
  (**(code **)(**(int **)(param_1 + 0x1a8) + 0x20))(*(int **)(param_1 + 0x1a8),1);
  CharacterCommandBar::setInfoButtonNewIndicator(SUB41(*(undefined4 *)(param_1 + 0x1a4),0));
  return;
}


