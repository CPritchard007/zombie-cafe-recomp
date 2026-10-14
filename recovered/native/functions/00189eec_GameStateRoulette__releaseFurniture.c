/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00189eec GameStateRoulette::releaseFurniture */

/* GameStateRoulette::releaseFurniture(int) */

void __thiscall GameStateRoulette::releaseFurniture(GameStateRoulette *this,int param_1)

{
  int iVar1;
  
  iVar1 = (param_1 + 0x288) * 4;
  if (*(int **)(this + iVar1) != (int *)0x0) {
    (**(code **)(**(int **)(this + iVar1) + 4))();
    *(undefined4 *)(this + iVar1) = 0;
  }
  return;
}


