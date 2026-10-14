/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0013c5f8 GameStateFriendCafe::deselect */

/* GameStateFriendCafe::deselect() */

void __thiscall GameStateFriendCafe::deselect(GameStateFriendCafe *this)

{
  *(undefined4 *)(this + 0x1a0) = 0;
  Cafe::select(*(Cafe **)(this + 0x34),(CafeObject *)0x0);
  return;
}


