/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0010eb88 GameStateAmpouleRaid::GameStateAmpouleRaid */

/* GameStateAmpouleRaid::GameStateAmpouleRaid() */

GameStateAmpouleRaid * __thiscall
GameStateAmpouleRaid::GameStateAmpouleRaid(GameStateAmpouleRaid *this)

{
  void *pvVar1;
  int iVar2;
  
  ZombieCafeGameState::ZombieCafeGameState((ZombieCafeGameState *)this);
  *(int *)this = *(int *)(DAT_0010ed4c + 0x10eb98) + 8;
  Vector<int>::Vector((Vector<int> *)(this + 0xc4));
  *(undefined4 *)(this + 0xd0) = 10;
  pvVar1 = operator_new__(0x28);
  *(void **)(this + 0xd8) = pvVar1;
  memset(pvVar1,0,*(int *)(this + 0xd0) << 2);
  *(undefined4 *)(this + 0xd4) = 0xffffffff;
  Vector<int>::Vector((Vector<int> *)(this + 0xdc));
  *(undefined4 *)(this + 0xe8) = 10;
  pvVar1 = operator_new__(0x28);
  *(void **)(this + 0xf0) = pvVar1;
  memset(pvVar1,0,*(int *)(this + 0xe8) << 2);
  *(undefined4 *)(this + 0xec) = 0xffffffff;
  Vector<CharacterInstance*>::Vector((Vector<CharacterInstance*> *)(this + 0xf4));
  Vector<CharacterInstance*>::Vector((Vector<CharacterInstance*> *)(this + 0x100));
  Vector<CharacterInstance*>::Vector((Vector<CharacterInstance*> *)(this + 0x10c));
  Vector<int>::Vector((Vector<int> *)(this + 0x118));
  *(undefined4 *)(this + 0x28) = 0;
  *(undefined4 *)(this + 0x2c) = 0;
  *(undefined4 *)(this + 0x34) = 0;
  *(undefined4 *)(this + 0x38) = 0;
  *(undefined4 *)(this + 0x1c) = 0;
  *(undefined4 *)(this + 0x24) = 0;
  *(undefined4 *)(this + 0x40) = 0;
  *(undefined4 *)(this + 0x48) = 0;
  *(undefined4 *)(this + 0x58) = 0;
  *(undefined4 *)(this + 0x5c) = 0;
  *(undefined4 *)(this + 0x70) = 0;
  *(undefined4 *)(this + 0x74) = 0;
  *(undefined4 *)(this + 0xa4) = 0;
  *(undefined4 *)(this + 0xa8) = 0;
  *(undefined4 *)(this + 0xac) = 0;
  *(undefined4 *)(this + 0xb0) = 0;
  *(undefined4 *)(this + 0x124) = 0;
  *(undefined4 *)(this + 0x128) = 0;
  *(undefined4 *)(this + 0x148) = 0;
  *(undefined4 *)(this + 0x164) = 0;
  *(undefined4 *)(this + 100) = 0;
  *(undefined4 *)(this + 0x88) = 0;
  *(undefined4 *)(this + 0x8c) = 0;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0x80) = 0;
  *(undefined4 *)(this + 0x7c) = 0;
  *(undefined4 *)(this + 0x84) = 0;
  *(undefined4 *)(this + 0x78) = 0;
  *(undefined4 *)(this + 0x98) = 0;
  *(undefined4 *)(this + 0x9c) = 0;
  *(undefined4 *)(this + 0x90) = 0;
  *(undefined4 *)(this + 0x68) = 0;
  *(undefined4 *)(this + 0x6c) = 0;
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined4 *)(this + 0xa0) = 0;
  *(undefined4 *)(this + 0xb4) = **(undefined4 **)(DAT_0010ed50 + 0x10ec84);
  this[0x11] = (GameStateAmpouleRaid)0x0;
  *(undefined4 *)(this + 0xb8) = 0;
  this[300] = (GameStateAmpouleRaid)0xff;
  this[DAT_0010ed54] = (GameStateAmpouleRaid)0xff;
  this[0x12e] = (GameStateAmpouleRaid)0xff;
  this[DAT_0010ed58] = (GameStateAmpouleRaid)0xff;
  this[0x130] = (GameStateAmpouleRaid)0xff;
  this[DAT_0010ed5c] = (GameStateAmpouleRaid)0xff;
  *(undefined4 *)(this + 0x44) = 0;
  *(undefined4 *)(this + 0x3c) = 0;
  this[0xc1] = (GameStateAmpouleRaid)0x0;
  *(undefined4 *)(this + 0x4c) = 0;
  *(undefined4 *)(this + 0x50) = 0;
  *(undefined4 *)(this + 0x54) = 0;
  iVar2 = ZombieCafe::getAmpouleRaid_cafeLevel(*(ZombieCafe **)(this + 0xc));
  *(int *)(this + 0x60) = iVar2;
  if (4 < iVar2) {
    *(undefined4 *)(this + 0x60) = 4;
  }
  *(undefined2 *)(this + 0x134) = 0;
  *(undefined4 *)(this + 0x138) = 0;
  *(undefined4 *)(this + 0x13c) = 0;
  *(undefined4 *)(this + 0x144) = 0;
  *(undefined4 *)(this + 0x9c) = 0;
  *(undefined4 *)(this + 0x18) = 0;
  return this;
}


