/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001a06bc GameStateEventRaid::GameStateEventRaid */

/* GameStateEventRaid::GameStateEventRaid() */

GameStateEventRaid * __thiscall GameStateEventRaid::GameStateEventRaid(GameStateEventRaid *this)

{
  void *pvVar1;
  int iVar2;
  
  ZombieCafeGameState::ZombieCafeGameState((ZombieCafeGameState *)this);
  *(int *)this = *(int *)(DAT_001a0890 + 0x1a06cc) + 8;
  Vector<int>::Vector((Vector<int> *)(this + 0xc0));
  *(undefined4 *)(this + 0xcc) = 10;
  pvVar1 = operator_new__(0x28);
  *(void **)(this + 0xd4) = pvVar1;
  memset(pvVar1,0,*(int *)(this + 0xcc) << 2);
  *(undefined4 *)(this + 0xd0) = 0xffffffff;
  Vector<int>::Vector((Vector<int> *)(this + 0xd8));
  *(undefined4 *)(this + 0xe4) = 10;
  pvVar1 = operator_new__(0x28);
  *(void **)(this + 0xec) = pvVar1;
  memset(pvVar1,0,*(int *)(this + 0xe4) << 2);
  *(undefined4 *)(this + 0xe8) = 0xffffffff;
  Vector<CharacterInstance*>::Vector((Vector<CharacterInstance*> *)(this + 0xf0));
  Vector<CharacterInstance*>::Vector((Vector<CharacterInstance*> *)(this + 0xfc));
  Vector<CharacterInstance*>::Vector((Vector<CharacterInstance*> *)(this + 0x108));
  Vector<int>::Vector((Vector<int> *)(this + 0x114));
  *(undefined4 *)(this + 0x20) = 0;
  *(undefined4 *)(this + 0x24) = 0;
  *(undefined4 *)(this + 0x2c) = 0;
  *(undefined4 *)(this + 0x30) = 0;
  *(undefined4 *)(this + 0x1c) = 0;
  *(undefined4 *)(this + 0x28) = 0;
  *(undefined4 *)(this + 0x34) = 0;
  *(undefined4 *)(this + 0x38) = 0;
  *(undefined4 *)(this + 0x3c) = 0;
  *(undefined4 *)(this + 0x40) = 0;
  *(undefined4 *)(this + 0x44) = 0;
  *(undefined4 *)(this + 0x48) = 0;
  *(undefined4 *)(this + 0x4c) = 0;
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
  *(undefined4 *)(this + 0xac) = 0;
  *(undefined4 *)(this + 0xa8) = 0;
  *(undefined4 *)(this + 0xb4) = 0;
  this[0xb8] = (GameStateEventRaid)0x0;
  this[0xb9] = (GameStateEventRaid)0x0;
  this[0xba] = (GameStateEventRaid)0x0;
  this[0xbb] = (GameStateEventRaid)0x0;
  this[0xbc] = (GameStateEventRaid)0x0;
  this[0xbd] = (GameStateEventRaid)0x0;
  this[0xbe] = (GameStateEventRaid)0x0;
  *(undefined4 *)(this + 0x120) = 0;
  *(undefined4 *)(this + 0x124) = 0;
  *(undefined2 *)(this + 0x130) = 0;
  *(undefined4 *)(this + 0x134) = 0;
  *(undefined4 *)(this + 0x138) = 0;
  *(undefined4 *)(this + 0x13c) = 0;
  *(undefined4 *)(this + 0x140) = 0;
  *(undefined4 *)(this + 0x144) = 0;
  *(undefined4 *)(this + 0x148) = 0;
  *(undefined4 *)(this + 0x14c) = 0;
  *(undefined4 *)(this + 0x150) = 0;
  *(undefined4 *)(this + 0x16c) = 0;
  *(undefined4 *)(this + 0xb0) = **(undefined4 **)(DAT_001a0894 + 0x1a07e0);
  this[0x11] = (GameStateEventRaid)0x0;
  *(undefined4 *)(this + 0x14) = 0;
  this[0x128] = (GameStateEventRaid)0xff;
  this[DAT_001a0898] = (GameStateEventRaid)0xff;
  this[0x12a] = (GameStateEventRaid)0xff;
  this[DAT_001a089c] = (GameStateEventRaid)0xff;
  this[300] = (GameStateEventRaid)0xff;
  this[DAT_001a08a0] = (GameStateEventRaid)0xff;
  iVar2 = ZombieCafe::getEventRaid_cafeLevel(*(ZombieCafe **)(this + 0xc));
  *(int *)(this + 0x58) = iVar2;
  if (0x28 < iVar2) {
    *(undefined4 *)(this + 0x58) = 0x28;
  }
  *(undefined2 *)(this + 0x130) = 0;
  *(undefined4 *)(this + 0x134) = 0;
  *(undefined4 *)(this + 0x138) = 0;
  *(undefined4 *)(this + 0x140) = 0;
  *(undefined4 *)(this + 0x150) = 0;
  *(undefined4 *)(this + 0x98) = 0;
  return this;
}


