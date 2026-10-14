/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0029ef84 LoadingGameState::uninit */

/* LoadingGameState::uninit() */

void __thiscall LoadingGameState::uninit(LoadingGameState *this)

{
  if (*(GameState **)(this + 8) != (GameState *)0x0) {
    GameState::releaseHandle(*(GameState **)(this + 8));
    *(undefined4 *)(this + 8) = 0;
  }
  return;
}


