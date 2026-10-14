/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001650ec GameStateMap::showTutorials */

/* GameStateMap::showTutorials(void*) */

void GameStateMap::showTutorials(void *param_1)

{
  int iVar1;
  int iVar2;
  TutorialSystem *this;
  uchar uVar3;
  undefined1 uVar4;
  
  iVar1 = CapcomApp::getInstance();
  iVar1 = *(int *)(iVar1 + 4);
  if (param_1 == *(void **)(iVar1 + 8)) {
    iVar2 = CCFacebook::IsLoggedIn(*(void **)(iVar1 + DAT_00165128));
    uVar4 = (undefined1)iVar2;
    if (iVar2 == 0) {
      this = *(TutorialSystem **)(iVar1 + DAT_0016512c);
      uVar3 = '5';
    }
    else {
      this = *(TutorialSystem **)(iVar1 + DAT_0016512c);
      uVar3 = '3';
      if (*(int *)((int)param_1 + 200) < 1) {
        uVar3 = '4';
      }
      uVar4 = false;
    }
    TutorialSystem::triggerEvent(this,uVar3,(bool)uVar4);
  }
  return;
}


