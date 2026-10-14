/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00116ab8 GameStateBackupSelection::GameStateBackupSelection */

/* GameStateBackupSelection::GameStateBackupSelection() */

GameStateBackupSelection * __thiscall
GameStateBackupSelection::GameStateBackupSelection(GameStateBackupSelection *this)

{
  int iVar1;
  GameStateBackupSelection *pGVar2;
  
  ZombieCafeGameState::ZombieCafeGameState((ZombieCafeGameState *)this);
  iVar1 = 3;
  *(int *)this = *(int *)(DAT_00116af0 + 0x116aca) + 8;
  pGVar2 = this;
  do {
    iVar1 = iVar1 + -1;
    *(undefined4 *)(pGVar2 + 0x18) = 0;
    *(undefined4 *)(pGVar2 + 0x24) = 0;
    *(undefined4 *)(pGVar2 + 0x38) = 0;
    *(undefined4 *)(pGVar2 + 0x44) = 0;
    *(undefined4 *)(pGVar2 + 0x50) = 0;
    *(undefined4 *)(pGVar2 + 0x5c) = 0;
    pGVar2 = pGVar2 + 4;
  } while (iVar1 != 0);
  *(undefined4 *)(this + 0x30) = 0;
  *(undefined4 *)(this + 0x34) = 0;
  *(undefined4 *)(this + 0x68) = 0;
  *(undefined4 *)(this + 0x14) = 0;
  return this;
}


