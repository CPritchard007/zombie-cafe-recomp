/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0029ece0 LoadingGameState::~LoadingGameState */

/* LoadingGameState::~LoadingGameState() */

LoadingGameState * __thiscall LoadingGameState::~LoadingGameState(LoadingGameState *this)

{
  int iVar1;
  
  iVar1 = *(int *)(DAT_0029ed10 + 0x29ecf0);
  *(int *)this = *(int *)(DAT_0029ed0c + 0x29ecec) + 8;
  String::~String((String *)(this + 0x18));
  *(int *)this = iVar1 + 8;
  return this;
}


