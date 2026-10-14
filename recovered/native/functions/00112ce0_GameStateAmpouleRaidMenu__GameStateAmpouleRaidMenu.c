/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00112ce0 GameStateAmpouleRaidMenu::GameStateAmpouleRaidMenu */

/* GameStateAmpouleRaidMenu::GameStateAmpouleRaidMenu() */

GameStateAmpouleRaidMenu * __thiscall
GameStateAmpouleRaidMenu::GameStateAmpouleRaidMenu(GameStateAmpouleRaidMenu *this)

{
  int iVar1;
  
  ZombieCafeGameState::ZombieCafeGameState((ZombieCafeGameState *)this);
  *(int *)this = *(int *)(DAT_00112d68 + 0x112cf2) + 8;
  *(undefined4 *)(this + 0x88) = 0;
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0x1c) = 0;
  *(undefined4 *)(this + 0x20) = 0;
  *(undefined4 *)(this + 0x24) = 0;
  *(undefined4 *)(this + 0x28) = 0;
  *(undefined4 *)(this + 0x2c) = 0;
  *(undefined4 *)(this + 0x30) = 0;
  *(undefined4 *)(this + 0x34) = 0;
  *(undefined4 *)(this + 0x58) = 0;
  *(undefined4 *)(this + 0x5c) = 0;
  *(undefined4 *)(this + 0x60) = 0;
  *(undefined4 *)(this + 100) = 0;
  *(undefined4 *)(this + 0x68) = 0;
  *(undefined4 *)(this + 0x6c) = 0;
  *(undefined4 *)(this + 0x70) = 0;
  *(undefined4 *)(this + 0x74) = 0;
  *(undefined4 *)(this + 0x7c) = 0;
  *(undefined4 *)(this + 0x80) = 0;
  *(undefined4 *)(this + 0x38) = 0;
  *(undefined4 *)(this + 0x3c) = 0;
  *(undefined4 *)(this + 0x40) = 0;
  *(undefined4 *)(this + 0x44) = 0;
  *(undefined4 *)(this + 0x78) = 0;
  *(undefined4 *)(this + 0x84) = 0;
  *(undefined4 *)(this + 0x48) = 0;
  *(undefined4 *)(this + 0x4c) = 0;
  *(undefined4 *)(this + 0x50) = 0;
  *(undefined4 *)(this + 0x54) = 0;
  this[0x8c] = (GameStateAmpouleRaidMenu)0x0;
  iVar1 = CapcomApp::getInstance();
  *(undefined4 *)(this + 0x90) = *(undefined4 *)(iVar1 + 0x40);
  iVar1 = CapcomApp::getInstance();
  *(undefined4 *)(this + 0x94) = *(undefined4 *)(iVar1 + 0x44);
  return this;
}


