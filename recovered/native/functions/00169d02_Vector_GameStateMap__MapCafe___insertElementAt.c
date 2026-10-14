/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00169d02 Vector<GameStateMap::MapCafe>::insertElementAt */

/* Vector<GameStateMap::MapCafe>::insertElementAt(GameStateMap::MapCafe, int) */

void __thiscall
Vector<GameStateMap::MapCafe>::insertElementAt
          (Vector<GameStateMap::MapCafe> *this,MapCafe *param_2,int param_3)

{
  if (-1 < param_3) {
    if (*(int *)(this + 4) + 1 < *(int *)this) {
      move(this,param_3,1);
    }
    else {
      resize(this,*(int *)(this + 4) << 1,param_3);
    }
    *(int *)(this + 4) = *(int *)(this + 4) + 1;
    GameStateMap::MapCafe::operator=((MapCafe *)(*(int *)(this + 8) + param_3 * 0x54),param_2);
  }
  return;
}


