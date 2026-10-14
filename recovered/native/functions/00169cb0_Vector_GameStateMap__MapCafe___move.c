/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00169cb0 Vector<GameStateMap::MapCafe>::move */

/* Vector<GameStateMap::MapCafe>::move(int, int) */

void __thiscall
Vector<GameStateMap::MapCafe>::move(Vector<GameStateMap::MapCafe> *this,int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  if ((-1 < param_1) && (param_1 <= *(int *)(this + 4))) {
    iVar2 = param_1 * 0x54;
    memmove((void *)(*(int *)(this + 8) + (param_2 + param_1) * 0x54),
            (void *)(*(int *)(this + 8) + iVar2),((*(int *)(this + 4) - param_1) + 1) * 0x54);
    if (param_2 < 1) {
      iVar1 = -0x54;
      iVar2 = (*(int *)(this + 4) + 1 + param_2) * 0x54;
    }
    else {
      iVar1 = 0x54;
    }
    memset((void *)(*(int *)(this + 8) + iVar2),0,param_2 * iVar1);
  }
  return;
}


