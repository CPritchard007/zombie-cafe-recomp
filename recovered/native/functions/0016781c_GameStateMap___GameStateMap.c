/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0016781c GameStateMap::~GameStateMap */

/* GameStateMap::~GameStateMap() */

GameStateMap * __thiscall GameStateMap::~GameStateMap(GameStateMap *this)

{
  int iVar1;
  
  *(int *)this = *(int *)(DAT_001679f8 + 0x167828) + 8;
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined4 *)(this + 0x24) = 0;
  *(undefined4 *)(this + 0x28) = 0;
  *(undefined4 *)(this + 0x2c) = 0;
  *(undefined4 *)(this + 0x30) = 0;
  *(undefined4 *)(this + 0x34) = 0;
  *(undefined4 *)(this + 0x38) = 0;
  *(undefined4 *)(this + 0x3c) = 0;
  *(undefined4 *)(this + 0x40) = 0;
  *(undefined4 *)(this + 0x44) = 0;
  *(undefined4 *)(this + 0x48) = 0;
  this[0x4c] = (GameStateMap)0x0;
  this[0x4d] = (GameStateMap)0x0;
  *(undefined4 *)(this + 0x50) = 0;
  *(undefined4 *)(this + 0x54) = 0;
  *(undefined4 *)(this + 0x58) = 0;
  *(undefined4 *)(this + 0x5c) = 0;
  *(undefined4 *)(this + 0x60) = 0;
  *(undefined4 *)(this + 100) = 0;
  *(undefined4 *)(this + 0x68) = 0;
  *(undefined4 *)(this + 0x6c) = 0;
  *(undefined4 *)(this + 0x70) = 0;
  *(undefined4 *)(this + 0x74) = 0;
  *(undefined4 *)(this + 0x78) = 0;
  *(undefined4 *)(this + 0x7c) = 0;
  *(undefined4 *)(this + 0x80) = 0;
  *(undefined4 *)(this + 0x84) = 0;
  *(undefined4 *)(this + 0x88) = 0;
  *(undefined4 *)(this + 0x8c) = 0;
  *(undefined4 *)(this + 0x90) = 0;
  *(undefined4 *)(this + 0x94) = 0;
  *(undefined4 *)(this + 0x98) = 0;
  *(undefined4 *)(this + 0x9c) = 0;
  *(undefined4 *)(this + 0xa0) = 0;
  *(undefined4 *)(this + 0xa4) = 0;
  *(undefined4 *)(this + 0xa8) = 0;
  *(undefined4 *)(this + 0xac) = 0;
  *(undefined4 *)(this + 0xb0) = 0;
  *(undefined4 *)(this + 0xb4) = 0;
  *(undefined4 *)(this + 0xb8) = 0;
  *(undefined4 *)(this + 0xbc) = 0;
  *(undefined4 *)(this + 0xc0) = 0;
  *(undefined4 *)(this + 0x3d0) = 0;
  *(undefined4 *)(this + 0x3d4) = 0;
  *(undefined4 *)(this + 0x420) = 0;
  iVar1 = DAT_00167a00;
  *(undefined4 *)(this + DAT_001679fc) = 0;
  *(undefined4 *)(this + 0x428) = 0;
  iVar1 = *(int *)(iVar1 + 0x1678b4);
  *(undefined4 *)(this + DAT_00167a04) = 0;
  *(undefined4 *)(this + 0x430) = 0;
  *(undefined4 *)(this + DAT_00167a08) = 0;
  *(undefined4 *)(this + 0x438) = 0;
  *(undefined4 *)(this + DAT_00167a0c) = 0;
  *(undefined4 *)(this + 0x440) = 0;
  *(undefined4 *)(this + DAT_00167a10) = 0;
  *(undefined4 *)(this + 0x448) = 0;
  *(undefined4 *)(this + DAT_00167a14) = 0;
  this[0x450] = (GameStateMap)0x0;
  this[DAT_00167a18] = (GameStateMap)0x0;
  this[DAT_00167a1c] = (GameStateMap)0x0;
  *(undefined4 *)(this + DAT_00167a20) = 0;
  *(undefined4 *)(this + 0x458) = 0;
  *(undefined4 *)(this + DAT_00167a24) = 0;
  String::~String((String *)(this + 0x3ac));
  String::~String((String *)(this + 0x358));
  String::~String((String *)(this + 0x304));
  String::~String((String *)(this + 0x2b0));
  String::~String((String *)(this + 0x25c));
  String::~String((String *)(this + 0x208));
  String::~String((String *)(this + 0x1b4));
  String::~String((String *)(this + 0x160));
  String::~String((String *)(this + 0x10c));
  Vector<GameStateMap::MapCafe>::~Vector((Vector<GameStateMap::MapCafe> *)(this + 0xd0));
  Vector<GameStateMap::MapCafe>::~Vector((Vector<GameStateMap::MapCafe> *)(this + 0xc4));
  if (*(void **)(this + 0x20) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0x20));
  }
  *(int *)this = iVar1 + 8;
  return this;
}


