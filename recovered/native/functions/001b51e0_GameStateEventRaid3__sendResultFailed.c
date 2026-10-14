/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001b51e0 GameStateEventRaid3::sendResultFailed */

/* GameStateEventRaid3::sendResultFailed(void*) */

void GameStateEventRaid3::sendResultFailed(void *param_1)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  void *pvVar4;
  char *pcVar5;
  
  pcVar5 = (char *)(DAT_001b5218 + 0x1b51ec);
  L_PrintLog(pcVar5,(char *)(DAT_001b521c + 0x1b51ee));
  iVar2 = CapcomApp::getInstance();
  iVar1 = DAT_001b5224;
  pvVar4 = *(void **)(*(int *)(iVar2 + 4) + 8);
  if (pvVar4 == param_1) {
    *(undefined4 *)((int)pvVar4 + 0x15c) = 2;
    pcVar3 = (char *)(iVar1 + 0x1b5210);
  }
  else {
    pcVar3 = (char *)(DAT_001b5220 + 0x1b5204);
  }
  L_PrintLog(pcVar5,pcVar3);
  return;
}


