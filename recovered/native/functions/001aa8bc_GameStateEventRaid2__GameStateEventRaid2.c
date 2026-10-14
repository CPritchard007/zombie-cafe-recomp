/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001aa8bc GameStateEventRaid2::GameStateEventRaid2 */

/* GameStateEventRaid2::GameStateEventRaid2(int, float, bool) */

GameStateEventRaid2 * __thiscall
GameStateEventRaid2::GameStateEventRaid2
          (GameStateEventRaid2 *this,int param_1,float param_2,bool param_3)

{
  void *pvVar1;
  int iVar2;
  GameStateEventRaid2 in_r3;
  
  ZombieCafeGameState::ZombieCafeGameState((ZombieCafeGameState *)this);
  *(int *)this = *(int *)(DAT_001aaabc + 0x1aa8d6) + 8;
  String::String((String *)(this + 0x1c));
  Vector<int>::Vector((Vector<int> *)(this + 0xe0));
  *(undefined4 *)(this + 0xec) = 10;
  pvVar1 = operator_new__(0x28);
  *(void **)(this + 0xf4) = pvVar1;
  memset(pvVar1,0,*(int *)(this + 0xec) << 2);
  *(undefined4 *)(this + 0xf0) = 0xffffffff;
  Vector<int>::Vector((Vector<int> *)(this + 0xf8));
  *(undefined4 *)(this + 0x104) = 10;
  pvVar1 = operator_new__(0x28);
  *(void **)(this + 0x10c) = pvVar1;
  memset(pvVar1,0,*(int *)(this + 0x104) << 2);
  *(undefined4 *)(this + 0x108) = 0xffffffff;
  Vector<CharacterInstance*>::Vector((Vector<CharacterInstance*> *)(this + 0x110));
  Vector<CharacterInstance*>::Vector((Vector<CharacterInstance*> *)(this + 0x11c));
  Vector<CharacterInstance*>::Vector((Vector<CharacterInstance*> *)(this + 0x128));
  Vector<int>::Vector((Vector<int> *)(this + 0x134));
  *(undefined4 *)(this + 0x24) = 0;
  *(undefined4 *)(this + 0x28) = 0;
  this[0x2c] = (GameStateEventRaid2)0x0;
  *(undefined4 *)(this + 0x38) = 0;
  *(undefined4 *)(this + 0x3c) = 0;
  *(undefined4 *)(this + 0x44) = 0;
  *(undefined4 *)(this + 0x48) = 0;
  *(undefined4 *)(this + 0x70) = 0;
  *(undefined4 *)(this + 0x74) = 0;
  *(undefined4 *)(this + 0x34) = 0;
  *(undefined4 *)(this + 0x40) = 0;
  *(undefined4 *)(this + 0x4c) = 0;
  *(undefined4 *)(this + 0x50) = 0;
  *(undefined4 *)(this + 0x54) = 0;
  *(undefined4 *)(this + 0x58) = 0;
  *(undefined4 *)(this + 0x5c) = 0;
  *(undefined4 *)(this + 0x60) = 0;
  *(undefined4 *)(this + 100) = 0;
  *(undefined4 *)(this + 0x68) = 0;
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
  *(undefined4 *)(this + 0xc4) = 0;
  *(undefined4 *)(this + 200) = 0;
  *(undefined4 *)(this + 0xd0) = 0;
  this[0xd8] = (GameStateEventRaid2)0x0;
  this[0xd9] = (GameStateEventRaid2)0x0;
  this[0xda] = (GameStateEventRaid2)0x0;
  this[0xdb] = (GameStateEventRaid2)0x0;
  this[0xdc] = (GameStateEventRaid2)0x0;
  this[0xdd] = (GameStateEventRaid2)0x0;
  this[0xde] = (GameStateEventRaid2)0x0;
  *(undefined4 *)(this + 0x140) = 0;
  *(undefined4 *)(this + 0x144) = 0;
  *(undefined4 *)(this + 0x150) = 0;
  *(int *)(this + 0x30) = param_1;
  *(undefined4 *)(this + 0xcc) = **(undefined4 **)(DAT_001aaac0 + 0x1aa9f6);
  this[0x11] = (GameStateEventRaid2)0x0;
  *(undefined4 *)(this + 0x14) = 0;
  *(uint *)(this + 0xd4) = (uint)param_3;
  this[0x14e] = in_r3;
  this[0x148] = (GameStateEventRaid2)0xff;
  this[DAT_001aaac4] = (GameStateEventRaid2)0xff;
  this[0x14a] = (GameStateEventRaid2)0xff;
  this[DAT_001aaac8] = (GameStateEventRaid2)0xff;
  this[0x14c] = (GameStateEventRaid2)0xff;
  this[DAT_001aaacc] = (GameStateEventRaid2)0xff;
  *(undefined4 *)(this + 0x18) = 1;
  iVar2 = CapcomApp::getInstance();
  *(undefined4 *)(this + 0x70) = *(undefined4 *)(iVar2 + 0x40);
  iVar2 = CapcomApp::getInstance();
  *(undefined4 *)(this + 0x74) = *(undefined4 *)(iVar2 + 0x44);
  *(undefined4 *)(this + 200) = 0;
  return this;
}


