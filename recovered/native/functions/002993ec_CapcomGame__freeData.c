/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002993ec CapcomGame::freeData */

/* CapcomGame::freeData() */

void __thiscall CapcomGame::freeData(CapcomGame *this)

{
  GameState::releaseHandle(*(GameState **)(this + 8));
  return;
}


