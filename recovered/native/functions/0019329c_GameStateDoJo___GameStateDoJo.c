/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0019329c GameStateDoJo::~GameStateDoJo */

/* GameStateDoJo::~GameStateDoJo() */

GameStateDoJo * __thiscall GameStateDoJo::~GameStateDoJo(GameStateDoJo *this)

{
  *(int *)this = *(int *)(DAT_001932e0 + 0x1932a6) + 8;
  if (*(void **)(this + 0x60) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0x60));
  }
  if (*(void **)(this + 0x54) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0x54));
  }
  if (*(void **)(this + 0x48) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0x48));
  }
  if (*(void **)(this + 0x3c) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0x3c));
  }
  *(int *)this = *(int *)(DAT_001932e4 + 0x1932da) + 8;
  return this;
}


