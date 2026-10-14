/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00178f54 GameStatePowerup::~GameStatePowerup */

/* GameStatePowerup::~GameStatePowerup() */

GameStatePowerup * __thiscall GameStatePowerup::~GameStatePowerup(GameStatePowerup *this)

{
  *(int *)this = *(int *)(DAT_00178fa0 + 0x178f5e) + 8;
  if (*(void **)(this + 0x74) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0x74));
  }
  if (*(void **)(this + 0x68) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0x68));
  }
  Vector<int>::~Vector((Vector<int> *)(this + 0x54));
  if (*(void **)(this + 0x50) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0x50));
  }
  Vector<int>::~Vector((Vector<int> *)(this + 0x3c));
  *(int *)this = *(int *)(DAT_00178fa4 + 0x178f98) + 8;
  return this;
}


