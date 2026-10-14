/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001b5228 GameStateEventRaid3::sendResultSuccess */

/* GameStateEventRaid3::sendResultSuccess(void*, unsigned char const*, unsigned int) */

void GameStateEventRaid3::sendResultSuccess(void *param_1,uchar *param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  void *pvVar4;
  char *pcVar5;
  
  pcVar5 = (char *)(DAT_001b5260 + 0x1b5234);
  L_PrintLog(pcVar5,(char *)(DAT_001b5264 + 0x1b5236));
  iVar2 = CapcomApp::getInstance();
  iVar1 = DAT_001b526c;
  pvVar4 = *(void **)(*(int *)(iVar2 + 4) + 8);
  if (pvVar4 == param_1) {
    *(undefined4 *)((int)pvVar4 + 0x15c) = 1;
    pcVar3 = (char *)(iVar1 + 0x1b5258);
  }
  else {
    pcVar3 = (char *)(DAT_001b5268 + 0x1b524c);
  }
  L_PrintLog(pcVar5,pcVar3);
  return;
}


