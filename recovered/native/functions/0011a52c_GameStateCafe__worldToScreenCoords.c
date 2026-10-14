/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0011a52c GameStateCafe::worldToScreenCoords */

/* GameStateCafe::worldToScreenCoords(long) */

void GameStateCafe::worldToScreenCoords(long param_1)

{
  long lVar1;
  long in_r1;
  float in_s0;
  
  lVar1 = CFPoint::multiplyf(in_r1,in_s0);
  CFPoint::add(lVar1,*(long *)(param_1 + 0x1e0));
  return;
}


