/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0013bb74 GameStateFriendCafe::onFeastBegan */

/* GameStateFriendCafe::onFeastBegan(GameStateCafe*, FeastTask*) */

void GameStateFriendCafe::onFeastBegan(GameStateCafe *param_1,FeastTask *param_2)

{
  int iVar1;
  
  iVar1 = CapcomApp::getInstance();
  Quest::runQuest(*(int *)(*(int *)(iVar1 + 4) + 0x40),0x16,(int *)0xffffffff);
  return;
}


