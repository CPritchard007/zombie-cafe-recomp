/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00160784 GameStateLoading::~GameStateLoading */

/* GameStateLoading::~GameStateLoading() */

GameStateLoading * __thiscall GameStateLoading::~GameStateLoading(GameStateLoading *this)

{
  int iVar1;
  
  iVar1 = *(int *)(DAT_001607b4 + 0x160794);
  *(int *)this = *(int *)(DAT_001607b0 + 0x160790) + 8;
  String::~String((String *)(this + 0x18));
  *(int *)this = iVar1 + 8;
  return this;
}


