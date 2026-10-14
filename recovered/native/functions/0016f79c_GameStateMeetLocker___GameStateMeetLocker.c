/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0016f79c GameStateMeetLocker::~GameStateMeetLocker */

/* GameStateMeetLocker::~GameStateMeetLocker() */

GameStateMeetLocker * __thiscall
GameStateMeetLocker::~GameStateMeetLocker(GameStateMeetLocker *this)

{
  *(int *)this = *(int *)(DAT_0016f7b4 + 0x16f7a6) + 8;
  operator_delete(this);
  return this;
}


