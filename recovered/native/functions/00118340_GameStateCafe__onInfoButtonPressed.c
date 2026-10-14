/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00118340 GameStateCafe::onInfoButtonPressed */

/* GameStateCafe::onInfoButtonPressed(GameStateCafe*, ScreenElement*) */

void GameStateCafe::onInfoButtonPressed(GameStateCafe *param_1,ScreenElement *param_2)

{
  GameStateCafe *pGVar1;
  
  pGVar1 = param_1 + 0xb0;
  CharacterDetails::setCharacter
            (*(CharacterDetails **)pGVar1,*(Character **)(*(int *)(param_1 + 0x54) + 0x8c));
  ScreenElement::setOrder(*(ScreenElement **)pGVar1,(int)**(char **)(DAT_00118388 + 0x11835e));
  (**(code **)(**(int **)pGVar1 + 0x20))(*(int **)pGVar1,1);
  PullMenuElement::setButtonNewIndicator(*(PullMenuElement **)(param_1 + 0xcc),2,false);
  CharacterCommandBar::setInfoButtonNewIndicator(SUB41(*(undefined4 *)(param_1 + 0xac),0));
  return;
}


