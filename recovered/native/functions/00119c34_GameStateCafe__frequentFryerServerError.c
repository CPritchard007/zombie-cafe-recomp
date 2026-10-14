/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00119c34 GameStateCafe::frequentFryerServerError */

/* GameStateCafe::frequentFryerServerError(GameStateCafe*, ccServerFailureCode) */

void GameStateCafe::frequentFryerServerError(int param_1)

{
  int iVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(DAT_00119c68 + 0x119c40);
  L_PrintLog(pcVar2,(char *)(DAT_00119c6c + 0x119c42));
  iVar1 = CapcomApp::getInstance();
  iVar1 = *(int *)(*(int *)(iVar1 + 4) + 8);
  if (iVar1 == param_1) {
    *(undefined1 *)(iVar1 + 0x1d4) = 0;
    L_PrintLog(pcVar2,(char *)(DAT_00119c70 + 0x119c62));
  }
  return;
}


