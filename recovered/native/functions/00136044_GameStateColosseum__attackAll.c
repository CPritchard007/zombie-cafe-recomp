/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00136044 GameStateColosseum::attackAll */

/* GameStateColosseum::attackAll(GameStateColosseum*) */

void GameStateColosseum::attackAll(GameStateColosseum *param_1)

{
  param_1[0x2c] = (GameStateColosseum)0x1;
  HudElement::setButtonAvailability(*(int *)(param_1 + 0x74),true);
  return;
}


