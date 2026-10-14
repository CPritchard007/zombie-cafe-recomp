/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002946e8 GameStateSpecialSale::DlcPurchaseSuccess */

/* GameStateSpecialSale::DlcPurchaseSuccess(void*, unsigned int, char const*, char const*) */

void GameStateSpecialSale::DlcPurchaseSuccess
               (void *param_1,uint param_2,char *param_3,char *param_4)

{
  HCOManager *this;
  GameStateCafe *this_00;
  GameStateLoading *this_01;
  CapcomGame *this_02;
  float in_s0;
  
  ZombieCafe::playEffect(*(int *)((int)param_1 + 0xc),in_s0);
  this = (HCOManager *)HCOManager::getInstance();
  HCOManager::buyCompleted(this);
  this_02 = *(CapcomGame **)((int)param_1 + 0xc);
  this_00 = (GameStateCafe *)operator_new(0x200);
  GameStateCafe::GameStateCafe(this_00);
  this_01 = (GameStateLoading *)operator_new(0x2c);
  GameStateLoading::GameStateLoading(this_01,(GameState *)this_00);
  CapcomGame::setNextState(this_02,(GameState *)this_01);
  return;
}


