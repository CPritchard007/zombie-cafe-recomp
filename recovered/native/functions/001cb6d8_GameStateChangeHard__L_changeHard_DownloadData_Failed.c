/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001cb6d8 GameStateChangeHard::L_changeHard_DownloadData_Failed */

/* GameStateChangeHard::L_changeHard_DownloadData_Failed(void*, ccServerFailureCode) */

void GameStateChangeHard::L_changeHard_DownloadData_Failed(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = DAT_001cb704;
  iVar1 = DAT_001cb700;
  **(undefined1 **)(DAT_001cb6fc + 0x1cb6e4) = 0;
  L_PrintLog((char *)(iVar2 + 0x1cb6ee),(char *)(iVar1 + 0x1cb6f0));
  *(undefined4 *)(param_1 + 0xcc) = 3;
  return;
}


