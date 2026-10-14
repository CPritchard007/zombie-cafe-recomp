/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001bb850 GameStateEventRaid3Menu::L_ER3InfoFailed */

/* GameStateEventRaid3Menu::L_ER3InfoFailed(void*) */

void GameStateEventRaid3Menu::L_ER3InfoFailed(void *param_1)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  void *pvVar4;
  char *pcVar5;
  
  pcVar5 = (char *)(DAT_001bb888 + 0x1bb85c);
  L_PrintLog(pcVar5,(char *)(DAT_001bb88c + 0x1bb85e));
  iVar2 = CapcomApp::getInstance();
  iVar1 = DAT_001bb894;
  pvVar4 = *(void **)(*(int *)(iVar2 + 4) + 8);
  if (pvVar4 == param_1) {
    *(undefined4 *)((int)pvVar4 + 0xdc) = 3;
    pcVar3 = (char *)(iVar1 + 0x1bb880);
  }
  else {
    pcVar3 = (char *)(DAT_001bb890 + 0x1bb874);
  }
  L_PrintLog(pcVar5,pcVar3);
  return;
}


