/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00131c90 GameStateChooseChef::GameStateChooseChef */

/* GameStateChooseChef::GameStateChooseChef(bool) */

GameStateChooseChef * __thiscall
GameStateChooseChef::GameStateChooseChef(GameStateChooseChef *this,bool param_1)

{
  void *__s;
  int iVar1;
  int iVar2;
  
  ZombieCafeGameState::ZombieCafeGameState((ZombieCafeGameState *)this);
  *(int *)this = *(int *)(DAT_00131d48 + 0x131ca4) + 8;
  *(undefined4 *)(this + 0xa4) = 10;
  __s = operator_new__(0x28);
  *(void **)(this + 0xac) = __s;
  memset(__s,0,*(int *)(this + 0xa4) << 2);
  *(undefined4 *)(this + 0xa8) = 0xffffffff;
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0x1c) = 0;
  *(undefined4 *)(this + 0x20) = 0;
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
  *(undefined4 *)(this + 0x4c) = 0;
  *(undefined4 *)(this + 0x50) = 0;
  *(undefined4 *)(this + 0x54) = 0;
  *(undefined4 *)(this + 0x84) = 0;
  *(undefined4 *)(this + 0x88) = 0;
  *(undefined4 *)(this + 0x8c) = 0;
  *(undefined4 *)(this + 0x9c) = 0;
  *(undefined4 *)(this + 0xa0) = 0;
  *(undefined4 *)(this + 0xb0) = 0;
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
  iVar1 = 0;
  do {
    iVar2 = iVar1 + 4;
    *(undefined4 *)(this + iVar1 + 0x60) = 0;
    iVar1 = iVar2;
  } while (iVar2 != 0x24);
  *(undefined4 *)(this + 0x5c) = 0xff;
  *(undefined4 *)(this + 0x90) = 0;
  *(undefined4 *)(this + 0x94) = 0;
  *(undefined4 *)(this + 0x98) = 0;
  this[0xb4] = (GameStateChooseChef)param_1;
  *(undefined4 *)(this + 0xb8) = 0xffffffff;
  *(undefined4 *)(this + 0xbc) = 0xffffffff;
  return this;
}


