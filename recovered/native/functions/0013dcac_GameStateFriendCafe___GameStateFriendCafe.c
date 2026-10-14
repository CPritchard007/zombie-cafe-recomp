/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0013dcac GameStateFriendCafe::~GameStateFriendCafe */

/* GameStateFriendCafe::~GameStateFriendCafe() */

GameStateFriendCafe * __thiscall
GameStateFriendCafe::~GameStateFriendCafe(GameStateFriendCafe *this)

{
  ~GameStateFriendCafe(this);
  operator_delete(this);
  return this;
}


