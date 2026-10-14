/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0013cab0 GameStateFriendCafe::canAttackNumberLimit */

/* GameStateFriendCafe::canAttackNumberLimit(int) */

int __thiscall GameStateFriendCafe::canAttackNumberLimit(GameStateFriendCafe *this,int param_1)

{
  return (uint)((uint)param_1 < 5) - (param_1 >> 0x1f);
}


