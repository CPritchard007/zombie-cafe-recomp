/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001677ec Vector<GameStateMap::MapCafe>::~Vector */

/* Vector<GameStateMap::MapCafe>::~Vector() */

Vector<GameStateMap::MapCafe> * __thiscall
Vector<GameStateMap::MapCafe>::~Vector(Vector<GameStateMap::MapCafe> *this)

{
  int iVar1;
  
  iVar1 = *(int *)(this + 8);
  if (iVar1 != 0) {
    iVar1 = iVar1 + *(int *)(iVar1 + -4) * 0x54;
    while (iVar1 != *(int *)(this + 8)) {
      String::~String((String *)(iVar1 + -0x24));
      iVar1 = iVar1 + -0x54;
    }
    operator_delete__((void *)(iVar1 + -8));
  }
  return this;
}


