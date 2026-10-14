/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00293fc4 GameStateSpecialSale::resume */

/* GameStateSpecialSale::resume() */

void __thiscall GameStateSpecialSale::resume(GameStateSpecialSale *this)

{
  GameStateCafe *this_00;
  GameStateLoading *this_01;
  CapcomGame *this_02;
  
  L_PrintLog((char *)(DAT_00294028 + 0x293fd2),(char *)(DAT_00294024 + 0x293fd0));
  if (*(char *)(*(int *)(this + 0xc) + DAT_0029402c) != '\0') {
    *(undefined1 *)(*(int *)(this + 0xc) + DAT_0029402c) = 0;
    javaAsyncConsume();
  }
  *(undefined1 *)(*(int *)(this + 0xc) + DAT_00294030) = 0;
  this_02 = *(CapcomGame **)(this + 0xc);
  this_00 = (GameStateCafe *)operator_new(0x200);
  GameStateCafe::GameStateCafe(this_00);
  this_01 = (GameStateLoading *)operator_new(0x2c);
  GameStateLoading::GameStateLoading(this_01,(GameState *)this_00);
  CapcomGame::setNextState(this_02,(GameState *)this_01);
  return;
}


