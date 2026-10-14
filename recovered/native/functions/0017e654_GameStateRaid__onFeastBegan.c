/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0017e654 GameStateRaid::onFeastBegan */

/* GameStateRaid::onFeastBegan(GameStateRaid*, FeastTask*) */

void GameStateRaid::onFeastBegan(GameStateRaid *param_1,FeastTask *param_2)

{
  int iVar1;
  
  iVar1 = CapcomApp::getInstance();
  Quest::runQuest(*(int *)(*(int *)(iVar1 + 4) + 0x40),0x16,(int *)0xffffffff);
  return;
}


