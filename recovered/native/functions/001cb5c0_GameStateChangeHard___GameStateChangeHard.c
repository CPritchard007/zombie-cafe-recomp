/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001cb5c0 GameStateChangeHard::~GameStateChangeHard */

/* GameStateChangeHard::~GameStateChangeHard() */

GameStateChangeHard * __thiscall
GameStateChangeHard::~GameStateChangeHard(GameStateChangeHard *this)

{
  int iVar1;
  
  iVar1 = DAT_001cb624;
  *(int *)this = *(int *)(DAT_001cb620 + 0x1cb5cc) + 8;
  iVar1 = *(int *)(iVar1 + 0x1cb5d8);
  String::~String((String *)(this + 0x88));
  String::~String((String *)(this + 0x80));
  String::~String((String *)(this + 0x78));
  String::~String((String *)(this + 0x70));
  *(int *)this = iVar1 + 8;
  return this;
}


