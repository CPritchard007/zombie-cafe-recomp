/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0019e838 GameStateEventRaid::attackAll */

/* GameStateEventRaid::attackAll(GameStateEventRaid*) */

void GameStateEventRaid::attackAll(GameStateEventRaid *param_1)

{
  param_1[0x18] = (GameStateEventRaid)0x1;
  HudElement::setButtonAvailability(*(int *)(param_1 + 0x60),true);
  return;
}


