/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001b638c GameStateEventRaid3::GameStateEventRaid3 */

/* GameStateEventRaid3::GameStateEventRaid3(int, float) */

GameStateEventRaid3 * __thiscall
GameStateEventRaid3::GameStateEventRaid3(GameStateEventRaid3 *this,int param_1,float param_2)

{
  void *pvVar1;
  int iVar2;
  undefined4 in_r2;
  
  ZombieCafeGameState::ZombieCafeGameState((ZombieCafeGameState *)this);
  *(int *)this = *(int *)(DAT_001b658c + 0x1b63a4) + 8;
  String::String((String *)(this + 0x1c));
  Vector<int>::Vector((Vector<int> *)(this + 0xec));
  *(undefined4 *)(this + 0xf8) = 10;
  pvVar1 = operator_new__(0x28);
  *(void **)(this + 0x100) = pvVar1;
  memset(pvVar1,0,*(int *)(this + 0xf8) << 2);
  *(undefined4 *)(this + 0xfc) = 0xffffffff;
  Vector<int>::Vector((Vector<int> *)(this + 0x104));
  *(undefined4 *)(this + 0x110) = 10;
  pvVar1 = operator_new__(0x28);
  *(void **)(this + 0x118) = pvVar1;
  memset(pvVar1,0,*(int *)(this + 0x110) << 2);
  *(undefined4 *)(this + 0x114) = 0xffffffff;
  Vector<CharacterInstance*>::Vector((Vector<CharacterInstance*> *)(this + 0x11c));
  Vector<CharacterInstance*>::Vector((Vector<CharacterInstance*> *)(this + 0x128));
  Vector<CharacterInstance*>::Vector((Vector<CharacterInstance*> *)(this + 0x134));
  Vector<int>::Vector((Vector<int> *)(this + 0x140));
  *(undefined4 *)(this + 0x24) = 0;
  *(undefined4 *)(this + 0x28) = 0;
  this[0x2c] = (GameStateEventRaid3)0x0;
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
  *(undefined4 *)(this + 0x6c) = 0;
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
  *(undefined4 *)(this + 0xb8) = 0;
  *(undefined4 *)(this + 0xb0) = 0;
  *(undefined4 *)(this + 0xb4) = 0;
  *(undefined4 *)(this + 0xbc) = 0;
  *(undefined4 *)(this + 0xc0) = 0;
  *(undefined4 *)(this + 0xc4) = 0;
  *(undefined4 *)(this + 200) = 0;
  *(undefined4 *)(this + 0xcc) = 0;
  *(undefined4 *)(this + 0xd0) = 0;
  *(undefined4 *)(this + 0xd4) = 0;
  *(undefined4 *)(this + 0xdc) = 0;
  this[0xe4] = (GameStateEventRaid3)0x0;
  this[0xe5] = (GameStateEventRaid3)0x0;
  this[0xe6] = (GameStateEventRaid3)0x0;
  this[0xe7] = (GameStateEventRaid3)0x0;
  this[0xe8] = (GameStateEventRaid3)0x0;
  this[0xe9] = (GameStateEventRaid3)0x0;
  this[0xea] = (GameStateEventRaid3)0x0;
  *(undefined4 *)(this + 0x14c) = 0;
  *(undefined4 *)(this + 0x150) = 0;
  *(undefined4 *)(this + 0x160) = 0;
  *(int *)(this + 0x30) = param_1;
  *(undefined4 *)(this + 0xd8) = **(undefined4 **)(DAT_001b6590 + 0x1b64cc);
  this[0x11] = (GameStateEventRaid3)0x0;
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined4 *)(this + 0xe0) = in_r2;
  this[0x154] = (GameStateEventRaid3)0xff;
  this[DAT_001b6594] = (GameStateEventRaid3)0xff;
  this[0x156] = (GameStateEventRaid3)0xff;
  this[DAT_001b6598] = (GameStateEventRaid3)0xff;
  this[0x158] = (GameStateEventRaid3)0xff;
  this[DAT_001b659c] = (GameStateEventRaid3)0xff;
  *(undefined4 *)(this + 0x18) = 1;
  *(undefined4 *)(this + 0x15c) = 0;
  iVar2 = CapcomApp::getInstance();
  *(undefined4 *)(this + 0x70) = *(undefined4 *)(iVar2 + 0x40);
  iVar2 = CapcomApp::getInstance();
  *(undefined4 *)(this + 0x74) = *(undefined4 *)(iVar2 + 0x44);
  *(undefined4 *)(this + 0xd4) = 0;
  *(undefined4 *)(this + 0x6c) = 0;
  return this;
}


