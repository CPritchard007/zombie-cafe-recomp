/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001702de GameStateMeetLocker::lockerPresentOK */

/* GameStateMeetLocker::lockerPresentOK(GameStateMeetLocker*) */

void GameStateMeetLocker::lockerPresentOK(GameStateMeetLocker *param_1)

{
  ZombieCafe::setLockerPresentFlag(*(ZombieCafe **)(param_1 + 0xc));
  ZombieCafe::addLockerSize(*(ZombieCafe **)(param_1 + 0xc),10);
  save();
  return;
}


