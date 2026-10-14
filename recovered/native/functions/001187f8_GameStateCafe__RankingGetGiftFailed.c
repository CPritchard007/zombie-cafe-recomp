/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001187f8 GameStateCafe::RankingGetGiftFailed */

/* GameStateCafe::RankingGetGiftFailed(void*, ccServerFailureCode) */

void GameStateCafe::RankingGetGiftFailed(int param_1)

{
  int iVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(DAT_00118838 + 0x118804);
  L_PrintLog(pcVar2,(char *)(DAT_0011883c + 0x118806));
  iVar1 = CapcomApp::getInstance();
  iVar1 = *(int *)(*(int *)(iVar1 + 4) + 8);
  if (iVar1 == param_1) {
    L_PrintLog(pcVar2,(char *)(DAT_00118844 + 0x11882a));
    *(undefined4 *)(iVar1 + 0x1cc) = 0;
  }
  else {
    L_PrintLog(pcVar2,(char *)(DAT_00118840 + 0x11881e));
  }
  return;
}


