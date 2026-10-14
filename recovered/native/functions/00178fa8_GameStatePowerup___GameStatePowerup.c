/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00178fa8 GameStatePowerup::~GameStatePowerup */

/* GameStatePowerup::~GameStatePowerup() */

GameStatePowerup * __thiscall GameStatePowerup::~GameStatePowerup(GameStatePowerup *this)

{
  ~GameStatePowerup(this);
  operator_delete(this);
  return this;
}


