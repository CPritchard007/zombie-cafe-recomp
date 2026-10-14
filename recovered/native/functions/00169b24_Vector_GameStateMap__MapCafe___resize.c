/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00169b24 Vector<GameStateMap::MapCafe>::resize */

/* Vector<GameStateMap::MapCafe>::resize(int, int) */

void __thiscall
Vector<GameStateMap::MapCafe>::resize(Vector<GameStateMap::MapCafe> *this,int param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  MapCafe *__s;
  int local_2c;
  MapCafe *local_28;
  MapCafe *local_24;
  
  if (param_1 < 1) {
    *(undefined4 *)(this + 4) = 0xffffffff;
    param_1 = 1;
  }
  local_2c = param_2;
  if (*(int *)(this + 4) < param_2) {
    local_2c = -1;
  }
  puVar1 = (undefined4 *)operator_new__(param_1 * 0x54 + 8);
  *puVar1 = 0x54;
  __s = (MapCafe *)(puVar1 + 2);
  puVar1[1] = param_1;
  local_24 = __s;
  iVar2 = param_1;
  do {
    iVar2 = iVar2 + -1;
    GameStateMap::MapCafe::MapCafe(local_24);
    local_24 = local_24 + 0x54;
  } while (iVar2 != 0);
  memset(__s,0,param_1 * 0x54);
  iVar2 = *(int *)(this + 4) + 1;
  if (local_2c == -1) {
    local_2c = iVar2;
    if (param_1 < iVar2) {
      *(int *)(this + 4) = param_1 + -1;
      local_2c = param_1;
    }
    local_28 = __s;
    for (iVar2 = 0; iVar2 < local_2c; iVar2 = iVar2 + 1) {
      GameStateMap::MapCafe::operator=(local_28,(MapCafe *)(*(int *)(this + 8) + iVar2 * 0x54));
      local_28 = local_28 + 0x54;
    }
  }
  else {
    if (param_1 < iVar2) {
      *(int *)(this + 4) = param_1 + -1;
      iVar2 = param_1;
    }
    iVar2 = iVar2 - local_2c;
    local_24 = __s;
    for (iVar3 = 0; iVar3 < local_2c; iVar3 = iVar3 + 1) {
      GameStateMap::MapCafe::operator=(local_24,(MapCafe *)(*(int *)(this + 8) + iVar3 * 0x54));
      local_24 = local_24 + 0x54;
    }
    iVar3 = local_2c * 0x54;
    for (local_2c = 0; local_2c < iVar2; local_2c = local_2c + 1) {
      GameStateMap::MapCafe::operator=
                ((MapCafe *)((int)puVar1 + iVar3 + 0x5c),(MapCafe *)(*(int *)(this + 8) + iVar3));
      iVar3 = iVar3 + 0x54;
    }
  }
  iVar2 = *(int *)(this + 8);
  if (iVar2 != 0) {
    iVar2 = iVar2 + *(int *)(iVar2 + -4) * 0x54;
    while (iVar2 != *(int *)(this + 8)) {
      String::~String((String *)(iVar2 + -0x24));
      iVar2 = iVar2 + -0x54;
    }
    operator_delete__((void *)(iVar2 + -8));
  }
  *(MapCafe **)(this + 8) = __s;
  *(int *)this = param_1;
  return;
}


