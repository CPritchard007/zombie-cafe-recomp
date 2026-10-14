/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0019e84a GameStateEventRaid::continueNo2 */

/* GameStateEventRaid::continueNo2(GameStateEventRaid*) */

void GameStateEventRaid::continueNo2(GameStateEventRaid *param_1)

{
  param_1[0x18] = (GameStateEventRaid)0x7;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  HudElement::setButtonAvailability(*(int *)(param_1 + 0x60),true);
  return;
}


