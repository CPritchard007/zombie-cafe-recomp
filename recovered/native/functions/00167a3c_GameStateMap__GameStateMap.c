/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00167a3c GameStateMap::GameStateMap */

/* GameStateMap::GameStateMap(bool) */

GameStateMap * __thiscall GameStateMap::GameStateMap(GameStateMap *this,bool param_1)

{
  int iVar1;
  void *__s;
  
  ZombieCafeGameState::ZombieCafeGameState((ZombieCafeGameState *)this);
  *(int *)this = *(int *)(DAT_00167bb8 + 0x167a4e) + 8;
  *(undefined4 *)(this + 0x18) = 10;
  __s = operator_new__(0x28);
  *(void **)(this + 0x20) = __s;
  memset(__s,0,*(int *)(this + 0x18) << 2);
  *(undefined4 *)(this + 0x1c) = 0xffffffff;
  Vector<GameStateMap::MapCafe>::Vector((Vector<GameStateMap::MapCafe> *)(this + 0xc4));
  Vector<GameStateMap::MapCafe>::Vector((Vector<GameStateMap::MapCafe> *)(this + 0xd0));
  MapCafe::MapCafe((MapCafe *)(this + 0xdc));
  MapCafe::MapCafe((MapCafe *)(this + 0x130));
  MapCafe::MapCafe((MapCafe *)(this + 0x184));
  MapCafe::MapCafe((MapCafe *)(this + 0x1d8));
  MapCafe::MapCafe((MapCafe *)(this + 0x22c));
  MapCafe::MapCafe((MapCafe *)(this + 0x280));
  MapCafe::MapCafe((MapCafe *)(this + 0x2d4));
  MapCafe::MapCafe((MapCafe *)(this + 0x328));
  MapCafe::MapCafe((MapCafe *)(this + 0x37c));
  *(undefined4 *)(this + 0x3d8) = 0x3f800000;
  *(undefined4 *)(this + 0x3dc) = 0;
  *(undefined4 *)(this + 0x3e0) = 0;
  *(undefined4 *)(this + 0x3e4) = 0x3f800000;
  *(undefined4 *)(this + 1000) = 0;
  *(undefined4 *)(this + 0x3ec) = 0;
  *(undefined4 *)(this + 0x3f0) = 0x3f800000;
  *(undefined4 *)(this + 0x3f4) = 0;
  *(undefined4 *)(this + 0x3f8) = 0;
  *(undefined4 *)(this + 0x3fc) = 0x3f800000;
  *(undefined4 *)(this + 0x400) = 0;
  *(undefined4 *)(this + 0x404) = 0;
  *(undefined4 *)(this + 0x408) = 0x3f800000;
  *(undefined4 *)(this + 0x40c) = 0;
  *(undefined4 *)(this + 0x410) = 0;
  *(undefined4 *)(this + 0x418) = 0;
  *(undefined4 *)(this + 0x41c) = 0;
  iVar1 = DAT_00167bbc;
  *(undefined4 *)(this + 0x414) = 0x3f800000;
  this[iVar1] = (GameStateMap)param_1;
  this[0x460] = (GameStateMap)0x0;
  this[0x11] = (GameStateMap)0x0;
  return this;
}


