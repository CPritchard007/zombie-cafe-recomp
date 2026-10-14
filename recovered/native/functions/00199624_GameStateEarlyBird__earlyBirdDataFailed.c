/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00199624 GameStateEarlyBird::earlyBirdDataFailed */

/* GameStateEarlyBird::earlyBirdDataFailed(void*) */

void GameStateEarlyBird::earlyBirdDataFailed(void *param_1)

{
  int iVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(DAT_00199650 + 0x199630);
  L_PrintLog(pcVar2,(char *)(DAT_00199654 + 0x199634));
  iVar1 = DAT_00199658;
  *(undefined1 *)((int)param_1 + 0x370) = 0;
  *(undefined4 *)((int)param_1 + 0x20) = 0xffffffff;
  L_PrintLog(pcVar2,(char *)(iVar1 + 0x19964a));
  return;
}


