/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000bb984 GameState::releaseHandle */

/* GameState::releaseHandle() */

void __thiscall GameState::releaseHandle(GameState *this)

{
  GameState GVar1;
  
  GVar1 = this[4];
  this[4] = (GameState)((char)GVar1 + -1);
  if ((GameState)((char)GVar1 + -1) == (GameState)0x0) {
    (**(code **)(*(int *)this + 0xc))();
    (**(code **)(*(int *)this + 0x34))(this);
  }
  return;
}


