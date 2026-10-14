/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00118848 GameStateCafe::RankingGetGiftSuccess */

/* GameStateCafe::RankingGetGiftSuccess(void*, unsigned char const*, unsigned int) */

void GameStateCafe::RankingGetGiftSuccess(void *param_1,uchar *param_2,uint param_3)

{
  int iVar1;
  char *pcVar2;
  void *pvVar3;
  char *pcVar4;
  
  pcVar4 = (char *)(DAT_00118894 + 0x118854);
  L_PrintLog(pcVar4,(char *)(DAT_00118898 + 0x118858));
  iVar1 = CapcomApp::getInstance();
  iVar1 = *(int *)(iVar1 + 4);
  L_PrintLog(pcVar4,(char *)(DAT_0011889c + 0x11886a));
  javaRankingGetGiftParse(param_2);
  pvVar3 = *(void **)(iVar1 + 8);
  if (pvVar3 == param_1) {
    *(undefined4 *)((int)pvVar3 + 0x1cc) = 0;
    pcVar2 = (char *)(DAT_001188a4 + 0x11888c);
  }
  else {
    pcVar2 = (char *)(DAT_001188a0 + 0x11887e);
  }
  L_PrintLog(pcVar4,pcVar2);
  return;
}


