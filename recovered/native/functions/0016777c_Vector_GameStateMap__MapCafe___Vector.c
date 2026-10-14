/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0016777c Vector<GameStateMap::MapCafe>::Vector */

/* Vector<GameStateMap::MapCafe>::Vector() */

undefined8 __thiscall Vector<GameStateMap::MapCafe>::Vector(Vector<GameStateMap::MapCafe> *this)

{
  undefined4 *puVar1;
  MapCafe *__s;
  int iVar2;
  bool bVar3;
  MapCafe *local_1c;
  
  *(undefined4 *)this = 10;
  puVar1 = (undefined4 *)operator_new__(0x350);
  puVar1[1] = 10;
  __s = (MapCafe *)(puVar1 + 2);
  *puVar1 = 0x54;
  iVar2 = 9;
  local_1c = __s;
  do {
    GameStateMap::MapCafe::MapCafe(local_1c);
    local_1c = local_1c + 0x54;
    bVar3 = iVar2 != 0;
    iVar2 = iVar2 + -1;
  } while (bVar3);
  *(MapCafe **)(this + 8) = __s;
  memset(__s,0,*(int *)this * 0x54);
  *(int *)(this + 4) = iVar2;
  return CONCAT44(this,this);
}


