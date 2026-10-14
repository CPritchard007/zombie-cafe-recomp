/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00178fbc GameStatePowerup::GameStatePowerup */

/* GameStatePowerup::GameStatePowerup() */

GameStatePowerup * __thiscall GameStatePowerup::GameStatePowerup(GameStatePowerup *this)

{
  int iVar1;
  void *pvVar2;
  int iVar3;
  
  ZombieCafeGameState::ZombieCafeGameState((ZombieCafeGameState *)this);
  *(int *)this = *(int *)(DAT_001791ac + 0x178fce) + 8;
  Vector<int>::Vector((Vector<int> *)(this + 0x3c));
  *(undefined4 *)(this + 0x48) = 10;
  pvVar2 = operator_new__(0x28);
  *(void **)(this + 0x50) = pvVar2;
  memset(pvVar2,0,*(int *)(this + 0x48) << 2);
  *(undefined4 *)(this + 0x4c) = 0xffffffff;
  Vector<int>::Vector((Vector<int> *)(this + 0x54));
  *(undefined4 *)(this + 0x60) = 10;
  pvVar2 = operator_new__(0x28);
  *(void **)(this + 0x68) = pvVar2;
  memset(pvVar2,0,*(int *)(this + 0x60) << 2);
  *(undefined4 *)(this + 100) = 0xffffffff;
  *(undefined4 *)(this + 0x6c) = 10;
  pvVar2 = operator_new__(0x28);
  *(void **)(this + 0x74) = pvVar2;
  memset(pvVar2,0,*(int *)(this + 0x6c) << 2);
  iVar3 = 0;
  *(undefined4 *)(this + 0x70) = 0xffffffff;
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
  *(undefined4 *)(this + 0xcc) = 0;
  *(undefined4 *)(this + 0xd0) = 0;
  *(undefined4 *)(this + 0xd4) = 0;
  *(undefined4 *)(this + 0xd8) = 0;
  *(undefined4 *)(this + 0xdc) = 0;
  *(undefined4 *)(this + 0xe0) = 0;
  *(undefined4 *)(this + 0xe4) = 0;
  *(undefined4 *)(this + 0xe8) = 0;
  *(undefined4 *)(this + 0xec) = 0;
  *(undefined4 *)(this + 0xf0) = 0;
  *(undefined4 *)(this + 0xf4) = 0;
  *(undefined4 *)(this + 0xf8) = 0;
  *(undefined4 *)(this + 0xfc) = 0;
  *(undefined4 *)(this + 0x100) = 0;
  *(undefined4 *)(this + 0x104) = 0;
  *(undefined4 *)(this + 0x108) = 0;
  *(undefined4 *)(this + 0x10c) = 0;
  *(undefined4 *)(this + 0x110) = 0;
  *(undefined4 *)(this + DAT_001791b0) = 0;
  *(undefined4 *)(this + 0x490) = 0;
  *(undefined4 *)(this + DAT_001791b4) = 0;
  *(undefined4 *)(this + 0x498) = 0;
  *(undefined4 *)(this + 0x4a0) = 0;
  *(undefined4 *)(this + DAT_001791b8) = 0;
  *(undefined4 *)(this + 0x4a8) = 0;
  *(undefined4 *)(this + DAT_001791bc) = 0;
  *(undefined4 *)(this + 0x4b0) = 0;
  *(undefined4 *)(this + DAT_001791c0) = 0;
  *(undefined4 *)(this + 0x4b8) = 0;
  *(undefined4 *)(this + DAT_001791c4) = 0;
  *(undefined4 *)(this + 0x4c0) = 0;
  *(undefined4 *)(this + DAT_001791c8) = 0;
  *(undefined4 *)(this + 0x4c8) = 0;
  *(undefined4 *)(this + DAT_001791cc) = 0;
  *(undefined4 *)(this + 0x4f8) = 0;
  *(undefined4 *)(this + DAT_001791d0) = 0;
  *(undefined4 *)(this + 0x500) = 0;
  *(undefined4 *)(this + DAT_001791d4) = 0;
  *(undefined4 *)(this + 0x508) = 0;
  *(undefined4 *)(this + DAT_001791d8) = 0;
  *(undefined4 *)(this + 0x510) = 0;
  *(undefined4 *)(this + DAT_001791dc) = 0;
  *(undefined4 *)(this + 0x518) = 0;
  *(undefined4 *)(this + DAT_001791e0) = 0;
  *(undefined4 *)(this + 0x520) = 0;
  *(undefined4 *)(this + DAT_001791e4) = 0;
  do {
    iVar1 = iVar3 + 0x114;
    iVar3 = iVar3 + 4;
    *(undefined4 *)(this + iVar1) = 0;
  } while (iVar3 != 0x378);
  *(undefined4 *)(this + 0x24) = 0;
  *(undefined4 *)(this + 0x20) = 0xffffffff;
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0x1c) = 0;
  *(undefined4 *)(this + 0x28) = 0;
  *(undefined4 *)(this + 0x2c) = 0;
  *(undefined4 *)(this + 0x30) = 0;
  *(undefined4 *)(this + 0x34) = 0;
  *(undefined4 *)(this + 0x38) = 0;
  *(undefined4 *)(this + 0x528) = 0;
  iVar3 = CapcomApp::getInstance();
  *(undefined4 *)(this + 0x530) = *(undefined4 *)(iVar3 + 0x40);
  iVar3 = CapcomApp::getInstance();
  *(undefined4 *)(this + DAT_001791e8) = *(undefined4 *)(iVar3 + 0x44);
  *(undefined4 *)(this + 0xdc) = 0;
  *(undefined4 *)(this + 0xe0) = 0;
  *(undefined4 *)(this + DAT_001791cc) = 0;
  this[DAT_001791ec] = (GameStatePowerup)0x0;
  this[DAT_001791f0] = (GameStatePowerup)0x0;
  return this;
}


