/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001b50dc GameStateEventRaid3::retreat */

/* GameStateEventRaid3::retreat(GameStateEventRaid3*) */

void GameStateEventRaid3::retreat(GameStateEventRaid3 *param_1)

{
  int iVar1;
  
  param_1[0xe5] = (GameStateEventRaid3)0x1;
  for (iVar1 = 0; iVar1 < *(int *)(param_1 + 300) + 1; iVar1 = iVar1 + 1) {
    CharacterInstance::stopTasks(*(CharacterInstance **)(iVar1 * 4 + *(int *)(param_1 + 0x130)));
  }
  HudElement::setButtonAvailability(*(int *)(param_1 + 0x88),true);
  *(undefined1 *)(*(int *)(param_1 + 0xc) + DAT_001b5120) = 0;
  return;
}


