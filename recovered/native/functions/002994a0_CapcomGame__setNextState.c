/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002994a0 CapcomGame::setNextState */

/* CapcomGame::setNextState(GameState*) */

void __thiscall CapcomGame::setNextState(CapcomGame *this,GameState *param_1)

{
  *(GameState **)(this + 0xc) = param_1;
  param_1[4] = (GameState)((char)param_1[4] + '\x01');
  return;
}


