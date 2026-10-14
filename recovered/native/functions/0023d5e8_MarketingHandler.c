/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0023d5e8 MarketingHandler */

/* MarketingHandler(unsigned int, void*) */

void MarketingHandler(uint param_1,void *param_2)

{
  GameStateMainMenu *this;
  GameStateCafe *this_00;
  LoadingGameState *this_01;
  GameStateChooseChef *this_02;
  int iVar1;
  
  if (param_1 == 2) {
    *(undefined1 *)((int)param_2 + DAT_0023d6a8) = 0;
    if (*(char *)((int)param_2 + DAT_0023d6ac) == '\0') {
      if (*(char *)((int)param_2 + DAT_0023d6b4) != '\0') {
        *(undefined1 *)((int)param_2 + DAT_0023d6b4) = 0;
        this_02 = (GameStateChooseChef *)operator_new(0xec);
        GameStateChooseChef::GameStateChooseChef(this_02,false);
        CapcomGame::setNextState((CapcomGame *)param_2,(GameState *)this_02);
      }
    }
    else {
      *(undefined1 *)((int)param_2 + DAT_0023d6ac) = 0;
      this_00 = (GameStateCafe *)operator_new(0x200);
      GameStateCafe::GameStateCafe(this_00);
      this_01 = (LoadingGameState *)operator_new(0x2c);
      LoadingGameState::LoadingGameState(this_01,(GameState *)this_00,(CapcomFont *)0x0,0);
      iVar1 = *(int *)(DAT_0023d6b0 + 0x23d650);
      this_01[0x14] = (LoadingGameState)0x0;
      *(int *)this_01 = iVar1 + 8;
      *(undefined4 *)(this_01 + 0x28) = 0;
      CapcomGame::setNextState((CapcomGame *)param_2,(GameState *)this_01);
      ZombieCafe::unloadMenuImages((ZombieCafe *)param_2,false);
    }
  }
  else if (param_1 == 3) {
    *(undefined1 *)((int)param_2 + DAT_0023d6a8) = 0;
  }
  else if (param_1 == 1) {
    this = (GameStateMainMenu *)operator_new(0x154);
    GameStateMainMenu::GameStateMainMenu(this);
    CapcomGame::setNextState((CapcomGame *)param_2,(GameState *)this);
    *(undefined1 *)(*(int *)((int)param_2 + 8) + 0x11) = 1;
  }
  return;
}


