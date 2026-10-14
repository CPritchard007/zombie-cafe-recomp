/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001a97a8 GameStateEventRaid2::retreat */

/* GameStateEventRaid2::retreat(GameStateEventRaid2*) */

void GameStateEventRaid2::retreat(GameStateEventRaid2 *param_1)

{
  int iVar1;
  
  param_1[0xd9] = (GameStateEventRaid2)0x1;
  for (iVar1 = 0; iVar1 < *(int *)(param_1 + 0x120) + 1; iVar1 = iVar1 + 1) {
    CharacterInstance::stopTasks(*(CharacterInstance **)(iVar1 * 4 + *(int *)(param_1 + 0x124)));
  }
  HudElement::setButtonAvailability(*(int *)(param_1 + 0x84),true);
  *(undefined1 *)(*(int *)(param_1 + 0xc) + DAT_001a97ec) = 0;
  return;
}


