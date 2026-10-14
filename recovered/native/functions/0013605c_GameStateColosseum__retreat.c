/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0013605c GameStateColosseum::retreat */

/* GameStateColosseum::retreat(GameStateColosseum*) */

void GameStateColosseum::retreat(GameStateColosseum *param_1)

{
  int iVar1;
  
  param_1[0xd1] = (GameStateColosseum)0x1;
  for (iVar1 = 0; iVar1 < *(int *)(param_1 + 0x118) + 1; iVar1 = iVar1 + 1) {
    CharacterInstance::stopTasks(*(CharacterInstance **)(iVar1 * 4 + *(int *)(param_1 + 0x11c)));
  }
  *(undefined1 *)(*(int *)(param_1 + 0xc) + DAT_001360a0) = 0;
  HudElement::setButtonAvailability(*(int *)(param_1 + 0x74),true);
  *(undefined4 *)(*(int *)(param_1 + 0xc) + DAT_001360a8) = DAT_001360a4;
  return;
}


