/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001c4ef8 GameStatePrizeMenu::GameStatePrizeMenu */

/* GameStatePrizeMenu::GameStatePrizeMenu(int) */

GameStatePrizeMenu * __thiscall
GameStatePrizeMenu::GameStatePrizeMenu(GameStatePrizeMenu *this,int param_1)

{
  int iVar1;
  
  ZombieCafeGameState::ZombieCafeGameState((ZombieCafeGameState *)this);
  *(int *)this = *(int *)(DAT_001c4f78 + 0x1c4f08) + 8;
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
  *(undefined4 *)(this + 0x58) = 0;
  *(undefined4 *)(this + 0x5c) = 0;
  *(undefined4 *)(this + 0x60) = 0;
  *(undefined4 *)(this + 100) = 0;
  iVar1 = CapcomApp::getInstance();
  *(undefined4 *)(this + 0x7c) = *(undefined4 *)(iVar1 + 0x40);
  iVar1 = CapcomApp::getInstance();
  *(undefined4 *)(this + 0x80) = *(undefined4 *)(iVar1 + 0x44);
  this[0x78] = (GameStatePrizeMenu)0x0;
  *(undefined4 *)(this + 0x40) = 0;
  *(undefined4 *)(this + 0x44) = 0;
  this[0x6c] = (GameStatePrizeMenu)0x0;
  *(int *)(this + 0x68) = param_1;
  *(undefined4 *)(this + 0x60) = 0;
  *(undefined4 *)(this + 0x70) = 0;
  *(undefined4 *)(this + 0x74) = 0;
  this[0x6d] = (GameStatePrizeMenu)0x0;
  return this;
}


