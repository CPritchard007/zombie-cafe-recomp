/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00174930 GameStateOptions::confirmDelete2 */

/* GameStateOptions::confirmDelete2(GameStateOptions*) */

void GameStateOptions::confirmDelete2(GameStateOptions *param_1)

{
  GameStateCafe::resetPlayerCafe();
  ZombieCafe::resetSaveData(*(ZombieCafe **)(param_1 + 0xc));
  (**(code **)(**(int **)(param_1 + 0x44) + 0x20))(*(int **)(param_1 + 0x44),0);
  return;
}


