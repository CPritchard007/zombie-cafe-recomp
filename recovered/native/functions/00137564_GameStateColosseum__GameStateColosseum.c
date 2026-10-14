/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00137564 GameStateColosseum::GameStateColosseum */

/* GameStateColosseum::GameStateColosseum() */

GameStateColosseum * __thiscall GameStateColosseum::GameStateColosseum(GameStateColosseum *this)

{
  void *pvVar1;
  
  ZombieCafeGameState::ZombieCafeGameState((ZombieCafeGameState *)this);
  *(int *)this = *(int *)(DAT_00137710 + 0x137574) + 8;
  String::String((String *)(this + 0x1c));
  Vector<int>::Vector((Vector<int> *)(this + 0xd8));
  *(undefined4 *)(this + 0xe4) = 10;
  pvVar1 = operator_new__(0x28);
  *(void **)(this + 0xec) = pvVar1;
  memset(pvVar1,0,*(int *)(this + 0xe4) << 2);
  *(undefined4 *)(this + 0xe8) = 0xffffffff;
  Vector<int>::Vector((Vector<int> *)(this + 0xf0));
  *(undefined4 *)(this + 0xfc) = 10;
  pvVar1 = operator_new__(0x28);
  *(void **)(this + 0x104) = pvVar1;
  memset(pvVar1,0,*(int *)(this + 0xfc) << 2);
  *(undefined4 *)(this + 0x100) = 0xffffffff;
  Vector<CharacterInstance*>::Vector((Vector<CharacterInstance*> *)(this + 0x108));
  Vector<CharacterInstance*>::Vector((Vector<CharacterInstance*> *)(this + 0x114));
  Vector<CharacterInstance*>::Vector((Vector<CharacterInstance*> *)(this + 0x120));
  Vector<int>::Vector((Vector<int> *)(this + 300));
  *(undefined4 *)(this + 0x34) = 0;
  *(undefined4 *)(this + 0x38) = 0;
  *(undefined4 *)(this + 0x40) = 0;
  *(undefined4 *)(this + 0x44) = 0;
  *(undefined4 *)(this + 0x24) = 0;
  *(undefined4 *)(this + 0x28) = 0;
  *(undefined4 *)(this + 0x30) = 0;
  *(undefined4 *)(this + 0x4c) = 0;
  *(undefined4 *)(this + 0x54) = 0;
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
  *(undefined4 *)(this + 0xb0) = 0;
  *(undefined4 *)(this + 0xb4) = 0;
  *(undefined4 *)(this + 0xc0) = 0;
  *(undefined4 *)(this + 0x138) = 0;
  *(undefined4 *)(this + 0x13c) = 0;
  *(undefined4 *)(this + 0x14c) = 0;
  *(undefined4 *)(this + 0xac) = 0;
  *(undefined4 *)(this + 200) = **(undefined4 **)(DAT_00137714 + 0x137662);
  this[0x11] = (GameStateColosseum)0x0;
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined4 *)(this + 0xcc) = 0;
  this[0x140] = (GameStateColosseum)0xff;
  this[DAT_00137718] = (GameStateColosseum)0xff;
  this[0x142] = (GameStateColosseum)0xff;
  this[DAT_0013771c] = (GameStateColosseum)0xff;
  this[0x144] = (GameStateColosseum)0xff;
  this[DAT_00137720] = (GameStateColosseum)0xff;
  *(undefined4 *)(this + 0x18) = 1;
  *(undefined4 *)(this + 0x50) = 0;
  *(undefined4 *)(this + 0x48) = 0;
  this[0xd5] = (GameStateColosseum)0x0;
  *(undefined4 *)(this + 0x58) = 0;
  *(undefined4 *)(this + 0x5c) = 0;
  *(undefined4 *)(this + 0x60) = 0;
  *(undefined4 *)(this + 0x148) = 0;
  *(undefined4 *)(this + 0xc4) = 0;
  return this;
}


