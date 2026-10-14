/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00161a38 GameStateChangeHard::GameStateChangeHard */

/* GameStateChangeHard::GameStateChangeHard() */

GameStateChangeHard * __thiscall GameStateChangeHard::GameStateChangeHard(GameStateChangeHard *this)

{
  ZombieCafeGameState::ZombieCafeGameState((ZombieCafeGameState *)this);
  *(int *)this = *(int *)(DAT_00161a9c + 0x161a4a) + 8;
  String::String((String *)(this + 0x70));
  String::String((String *)(this + 0x78));
  String::String((String *)(this + 0x80));
  String::String((String *)(this + 0x88));
  return this;
}


