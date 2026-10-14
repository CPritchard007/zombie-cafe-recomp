/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001a9790 GameStateEventRaid2::attackAll */

/* GameStateEventRaid2::attackAll(GameStateEventRaid2*) */

void GameStateEventRaid2::attackAll(GameStateEventRaid2 *param_1)

{
  param_1[0x2c] = (GameStateEventRaid2)0x1;
  HudElement::setButtonAvailability(*(int *)(param_1 + 0x84),true);
  return;
}


