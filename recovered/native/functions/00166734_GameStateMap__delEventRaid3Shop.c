/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00166734 GameStateMap::delEventRaid3Shop */

/* GameStateMap::delEventRaid3Shop() */

void __thiscall GameStateMap::delEventRaid3Shop(GameStateMap *this)

{
  int *piVar1;
  
  if (*(int *)(this + 0x2d4) != 0) {
    piVar1 = *(int **)(*(int *)(this + 0x2d4) + 0x60);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))();
    }
    if (*(int **)(this + 0x2d4) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0x2d4) + 4))();
    }
    if (*(int **)(this + 0x2f4) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0x2f4) + 4))();
    }
    if (*(int **)(this + 0x2f8) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0x2f8) + 4))();
    }
    *(undefined4 *)(this + 0x2d4) = 0;
  }
  return;
}


