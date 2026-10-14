/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0016629c GameStateMap::sendEmail */

/* GameStateMap::sendEmail(void*) */

void GameStateMap::sendEmail(void *param_1)

{
  int iVar1;
  
  iVar1 = CapcomApp::getInstance();
  if (param_1 == *(void **)(*(int *)(iVar1 + 4) + 8)) {
    *(undefined1 *)((int)param_1 + DAT_001662b4) = 1;
  }
  return;
}


