/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001a4f2c GameStateEventRaidMenu::GameStateEventRaidMenu */

/* GameStateEventRaidMenu::GameStateEventRaidMenu() */

GameStateEventRaidMenu * __thiscall
GameStateEventRaidMenu::GameStateEventRaidMenu(GameStateEventRaidMenu *this)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  
  ZombieCafeGameState::ZombieCafeGameState((ZombieCafeGameState *)this);
  pcVar3 = (char *)(DAT_001a4fd8 + 0x1a4f42);
  pcVar4 = (char *)(DAT_001a4fdc + 0x1a4f44);
  *(int *)this = *(int *)(DAT_001a4fd4 + 0x1a4f3e) + 8;
  L_PrintLog(pcVar3,pcVar4);
  *(undefined4 *)(this + 0x38) = 0;
  *(undefined4 *)(this + 0xa8) = 0;
  *(undefined4 *)(this + 0xb0) = 0;
  *(undefined4 *)(this + 0xb4) = 0;
  *(undefined4 *)(this + 0xa4) = 0;
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0x1c) = 0;
  *(undefined4 *)(this + 0x20) = 0;
  *(undefined4 *)(this + 0x24) = 0;
  *(undefined4 *)(this + 0x28) = 0;
  *(undefined4 *)(this + 0x2c) = 0;
  *(undefined4 *)(this + 0x30) = 0;
  *(undefined4 *)(this + 0x34) = 0;
  *(undefined4 *)(this + 0x40) = 0;
  *(undefined4 *)(this + 0x44) = 0;
  *(undefined4 *)(this + 0x48) = 0;
  *(undefined4 *)(this + 0x4c) = 0;
  *(undefined4 *)(this + 0x50) = 0;
  *(undefined4 *)(this + 100) = 0;
  *(undefined4 *)(this + 0x68) = 0;
  *(undefined4 *)(this + 0x6c) = 0;
  *(undefined4 *)(this + 0x70) = 0;
  *(undefined4 *)(this + 0x74) = 0;
  *(undefined4 *)(this + 0x78) = 0;
  *(undefined4 *)(this + 0x7c) = 0;
  *(undefined4 *)(this + 0x80) = 0;
  *(undefined4 *)(this + 0x84) = 0;
  iVar2 = DAT_001a4fe4;
  iVar1 = DAT_001a4fe0;
  *(undefined4 *)(this + 0x98) = 0;
  *(undefined4 *)(this + 0x9c) = 0;
  *(undefined4 *)(this + 0xa0) = 0;
  *(undefined4 *)(this + 0x54) = 0;
  *(undefined4 *)(this + 0x58) = 0;
  *(undefined4 *)(this + 0x5c) = 0;
  *(undefined4 *)(this + 0x60) = 0;
  *(undefined4 *)(this + 0x88) = 0;
  *(undefined4 *)(this + 0x8c) = 0;
  *(undefined4 *)(this + 0x90) = 0;
  *(undefined4 *)(this + 0x94) = 0;
  *(undefined4 *)(this + 0x3c) = 0;
  this[0xb8] = (GameStateEventRaidMenu)0x0;
  L_PrintLog((char *)(iVar1 + 0x1a4fbc),(char *)(iVar2 + 0x1a4fc0));
  return this;
}


