/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00169c78 Vector<GameStateMap::MapCafe>::addElement */

/* Vector<GameStateMap::MapCafe>::addElement(GameStateMap::MapCafe) */

void __thiscall
Vector<GameStateMap::MapCafe>::addElement(Vector<GameStateMap::MapCafe> *this,MapCafe *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(this + 4) + 2;
  if (*(int *)this < iVar2) {
    iVar1 = *(int *)this * 2;
    if (iVar1 < iVar2) {
      iVar1 = iVar2;
    }
    resize(this,iVar1,-1);
  }
  iVar2 = *(int *)(this + 4);
  *(int *)(this + 4) = iVar2 + 1;
  GameStateMap::MapCafe::operator=((MapCafe *)(*(int *)(this + 8) + (iVar2 + 1) * 0x54),param_2);
  return;
}


