/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0017e3a8 GameStateRaid::attackAll */

/* GameStateRaid::attackAll(GameStateRaid*) */

void GameStateRaid::attackAll(GameStateRaid *param_1)

{
  int iVar1;
  
  for (iVar1 = 0; iVar1 < *(int *)(param_1 + 0xb0) + 1; iVar1 = iVar1 + 1) {
    *(undefined1 *)(*(int *)(*(int *)(iVar1 * 4 + *(int *)(param_1 + 0xb4)) + 0x8c) + 0x44) = 4;
  }
  HudElement::setButtonAvailability(*(int *)(param_1 + 0x138),true);
  return;
}


