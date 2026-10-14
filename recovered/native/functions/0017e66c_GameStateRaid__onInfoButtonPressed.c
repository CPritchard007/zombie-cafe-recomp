/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0017e66c GameStateRaid::onInfoButtonPressed */

/* GameStateRaid::onInfoButtonPressed(GameStateRaid*, ScreenElement*) */

void GameStateRaid::onInfoButtonPressed(GameStateRaid *param_1,ScreenElement *param_2)

{
  CharacterDetails::setCharacter
            (*(CharacterDetails **)(param_1 + 0x140),
             *(Character **)(*(int *)(param_1 + 0x114) + 0x8c));
  (**(code **)(**(int **)(param_1 + 0x140) + 0x20))(*(int **)(param_1 + 0x140),1);
  HudElement::setButtonNewIndicator(*(HudElement **)(param_1 + 0x138),7,false);
  CharacterCommandBar::setInfoButtonNewIndicator(SUB41(*(undefined4 *)(param_1 + 0x13c),0));
  return;
}


