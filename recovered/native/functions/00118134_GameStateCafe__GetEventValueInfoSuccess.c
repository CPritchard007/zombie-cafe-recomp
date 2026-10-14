/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00118134 GameStateCafe::GetEventValueInfoSuccess */

/* GameStateCafe::GetEventValueInfoSuccess(void*, unsigned char const*, unsigned int) */

void GameStateCafe::GetEventValueInfoSuccess(void *param_1,uchar *param_2,uint param_3)

{
  int iVar1;
  
  iVar1 = CapcomApp::getInstance();
  if (*(void **)(*(int *)(iVar1 + 4) + 8) == param_1) {
    javaAppDriverGetEventValueParse(param_2);
    *(undefined4 *)((int)&DAT_001181c8 + DAT_00118158) = 2;
  }
  return;
}


