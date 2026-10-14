/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00167bc4 Vector<GameStateMap::MapCafe>::setElementAt */

/* Vector<GameStateMap::MapCafe>::setElementAt(GameStateMap::MapCafe, int) */

void __thiscall
Vector<GameStateMap::MapCafe>::setElementAt
          (Vector<GameStateMap::MapCafe> *this,MapCafe *param_2,int param_3)

{
  if ((-1 < param_3) && (param_3 <= *(int *)(this + 4))) {
    GameStateMap::MapCafe::operator=((MapCafe *)(*(int *)(this + 8) + param_3 * 0x54),param_2);
  }
  return;
}


