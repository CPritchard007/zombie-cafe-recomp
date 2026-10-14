/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000bb9d8 GameStateBusy::~GameStateBusy */

/* GameStateBusy::~GameStateBusy() */

GameStateBusy * __thiscall GameStateBusy::~GameStateBusy(GameStateBusy *this)

{
  ~GameStateBusy(this);
  operator_delete(this);
  return this;
}


