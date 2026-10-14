/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00116344 GameStateBackupSelection::~GameStateBackupSelection */

/* GameStateBackupSelection::~GameStateBackupSelection() */

GameStateBackupSelection * __thiscall
GameStateBackupSelection::~GameStateBackupSelection(GameStateBackupSelection *this)

{
  *(int *)this = *(int *)(DAT_0011635c + 0x11634e) + 8;
  operator_delete(this);
  return this;
}


