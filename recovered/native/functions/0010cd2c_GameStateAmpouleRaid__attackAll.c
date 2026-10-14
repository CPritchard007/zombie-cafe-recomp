/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0010cd2c GameStateAmpouleRaid::attackAll */

/* GameStateAmpouleRaid::attackAll(GameStateAmpouleRaid*) */

void GameStateAmpouleRaid::attackAll(GameStateAmpouleRaid *param_1)

{
  param_1[0x20] = (GameStateAmpouleRaid)0x1;
  HudElement::setButtonAvailability(*(int *)(param_1 + 0x68),true);
  return;
}


