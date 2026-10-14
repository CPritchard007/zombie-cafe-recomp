/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00118114 GameStateCafe::GetEventValueInfoFailed */

/* GameStateCafe::GetEventValueInfoFailed(void*) */

void GameStateCafe::GetEventValueInfoFailed(void *param_1)

{
  int iVar1;
  
  iVar1 = CapcomApp::getInstance();
  if (*(void **)(*(int *)(iVar1 + 4) + 8) == param_1) {
    *(undefined4 *)(DAT_00118130 + 0x1181a0) = 3;
  }
  return;
}


