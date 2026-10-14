/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001b50c4 GameStateEventRaid3::attackAll */

/* GameStateEventRaid3::attackAll(GameStateEventRaid3*) */

void GameStateEventRaid3::attackAll(GameStateEventRaid3 *param_1)

{
  param_1[0x2c] = (GameStateEventRaid3)0x1;
  HudElement::setButtonAvailability(*(int *)(param_1 + 0x88),true);
  return;
}


