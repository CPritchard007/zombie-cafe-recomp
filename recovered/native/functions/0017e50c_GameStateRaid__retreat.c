/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0017e50c GameStateRaid::retreat */

/* GameStateRaid::retreat(GameStateRaid*) */

void GameStateRaid::retreat(GameStateRaid *param_1)

{
  int iVar1;
  
  iVar1 = CapcomApp::getInstance();
  *(undefined1 *)(*(int *)(iVar1 + 4) + DAT_0017e540) = 0;
  param_1[0x130] = (GameStateRaid)0x1;
  for (iVar1 = 0; iVar1 < *(int *)(param_1 + 0xb0) + 1; iVar1 = iVar1 + 1) {
    CharacterInstance::stopTasks(*(CharacterInstance **)(iVar1 * 4 + *(int *)(param_1 + 0xb4)));
  }
  return;
}


