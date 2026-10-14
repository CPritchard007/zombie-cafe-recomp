/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0010cd40 GameStateAmpouleRaid::retreat */

/* GameStateAmpouleRaid::retreat(GameStateAmpouleRaid*) */

void GameStateAmpouleRaid::retreat(GameStateAmpouleRaid *param_1)

{
  int iVar1;
  
  param_1[0xbd] = (GameStateAmpouleRaid)0x1;
  *(undefined1 *)(*(int *)(param_1 + 0xc) + DAT_0010cd7c) = 0;
  for (iVar1 = 0; iVar1 < *(int *)(param_1 + 0x104) + 1; iVar1 = iVar1 + 1) {
    CharacterInstance::stopTasks(*(CharacterInstance **)(iVar1 * 4 + *(int *)(param_1 + 0x108)));
  }
  HudElement::setButtonAvailability(*(int *)(param_1 + 0x68),true);
  return;
}


