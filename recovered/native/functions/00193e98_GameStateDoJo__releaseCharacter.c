/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00193e98 GameStateDoJo::releaseCharacter */

/* GameStateDoJo::releaseCharacter(int) */

void __thiscall GameStateDoJo::releaseCharacter(GameStateDoJo *this,int param_1)

{
  int iVar1;
  
  iVar1 = (param_1 + 0x38) * 4;
  if (*(int **)(this + iVar1) != (int *)0x0) {
    (**(code **)(**(int **)(this + iVar1) + 4))();
    *(undefined4 *)(this + iVar1) = 0;
  }
  return;
}


