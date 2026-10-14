/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00145e78 GameStateFriends::~GameStateFriends */

/* GameStateFriends::~GameStateFriends() */

GameStateFriends * __thiscall GameStateFriends::~GameStateFriends(GameStateFriends *this)

{
  *(int *)this = *(int *)(DAT_00145ea0 + 0x145e82) + 8;
  if (*(void **)(this + 0x7c) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0x7c));
  }
  *(int *)this = *(int *)(DAT_00145ea4 + 0x145e98) + 8;
  return this;
}


