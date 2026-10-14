/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0013ca8c GameStateFriendCafe::canAttack */

/* GameStateFriendCafe::canAttack(long) */

bool __thiscall GameStateFriendCafe::canAttack(GameStateFriendCafe *this,long param_1)

{
  int iVar1;
  
  Platform::getAppTime();
  iVar1 = __fixdfsi();
  return DAT_0013caac < iVar1 - param_1;
}


