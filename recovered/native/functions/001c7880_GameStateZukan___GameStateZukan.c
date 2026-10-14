/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001c7880 GameStateZukan::~GameStateZukan */

/* GameStateZukan::~GameStateZukan() */

GameStateZukan * __thiscall GameStateZukan::~GameStateZukan(GameStateZukan *this)

{
  *(int *)this = *(int *)(DAT_001c78b8 + 0x1c788a) + 8;
  if (*(void **)(this + 0xe0) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0xe0));
  }
  if (*(void **)(this + 0xd4) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0xd4));
  }
  *(int *)this = *(int *)(DAT_001c78bc + 0x1c78b2) + 8;
  return this;
}


