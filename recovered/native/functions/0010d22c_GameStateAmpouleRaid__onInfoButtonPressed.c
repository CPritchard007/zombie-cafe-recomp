/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0010d22c GameStateAmpouleRaid::onInfoButtonPressed */

/* GameStateAmpouleRaid::onInfoButtonPressed(GameStateAmpouleRaid*, ScreenElement*) */

void GameStateAmpouleRaid::onInfoButtonPressed(GameStateAmpouleRaid *param_1,ScreenElement *param_2)

{
  int *piVar1;
  
  CharacterDetails::setCharacter
            (*(CharacterDetails **)(param_1 + 0x98),
             *(Character **)(*(int *)(param_1 + 0x128) + 0x8c));
  piVar1 = *(int **)(param_1 + 0x98);
  (**(code **)(*piVar1 + 0x20))(piVar1,1);
  HudElement::setButtonNewIndicator(*(HudElement **)(param_1 + 0x68),7,false);
  CharacterCommandBar::setInfoButtonNewIndicator(SUB41(*(undefined4 *)(param_1 + 0x90),0));
  return;
}


