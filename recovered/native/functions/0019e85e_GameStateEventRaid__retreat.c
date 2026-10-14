/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0019e85e GameStateEventRaid::retreat */

/* GameStateEventRaid::retreat(GameStateEventRaid*) */

void GameStateEventRaid::retreat(GameStateEventRaid *param_1)

{
  int iVar1;
  
  param_1[0xb9] = (GameStateEventRaid)0x1;
  for (iVar1 = 0; iVar1 < *(int *)(param_1 + 0x100) + 1; iVar1 = iVar1 + 1) {
    CharacterInstance::stopTasks(*(CharacterInstance **)(iVar1 * 4 + *(int *)(param_1 + 0x104)));
  }
  HudElement::setButtonAvailability(*(int *)(param_1 + 0x60),true);
  return;
}


