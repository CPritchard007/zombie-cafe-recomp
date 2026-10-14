/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0013ca70 GameStateFriendCafe::worldToScreenCoords */

/* GameStateFriendCafe::worldToScreenCoords(long) */

void GameStateFriendCafe::worldToScreenCoords(long param_1)

{
  long lVar1;
  long in_r1;
  float in_s0;
  
  lVar1 = CFPoint::multiplyf(in_r1,in_s0);
  CFPoint::add(lVar1,*(long *)(param_1 + 0xa8));
  return;
}


