/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0019ec16 GameStateEventRaid::onInfoButtonPressed */

/* GameStateEventRaid::onInfoButtonPressed(GameStateEventRaid*, ScreenElement*) */

void GameStateEventRaid::onInfoButtonPressed(GameStateEventRaid *param_1,ScreenElement *param_2)

{
  int *piVar1;
  
  CharacterDetails::setCharacter
            (*(CharacterDetails **)(param_1 + 0x90),
             *(Character **)(*(int *)(param_1 + 0x124) + 0x8c));
  piVar1 = *(int **)(param_1 + 0x90);
  (**(code **)(*piVar1 + 0x20))(piVar1,1);
  HudElement::setButtonNewIndicator(*(HudElement **)(param_1 + 0x60),7,false);
  CharacterCommandBar::setInfoButtonNewIndicator(SUB41(*(undefined4 *)(param_1 + 0x88),0));
  return;
}


