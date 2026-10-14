/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00119854 GameStateCafe::longTickServerError */

/* GameStateCafe::longTickServerError(GameStateCafe*, ccServerFailureCode) */

void GameStateCafe::longTickServerError
               (int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  GameStateMainMenu *this;
  GameStateLoading *this_00;
  char *pcVar3;
  int *piVar4;
  char *pcVar5;
  CapcomGame *this_01;
  
  pcVar5 = (char *)(DAT_00119904 + 0x119860);
  L_PrintLog(pcVar5,(char *)(DAT_00119908 + 0x119862));
  iVar2 = CapcomApp::getInstance();
  piVar4 = *(int **)(*(int *)(iVar2 + 4) + 8);
  if (piVar4 == param_1) {
    L_PrintLog(pcVar5,(char *)(DAT_00119910 + 0x119880));
    iVar2 = TutorialSystem::isTutorialCompleted
                      (*(TutorialSystem **)(piVar4[3] + DAT_00119914),'\x16');
    this_01 = (CapcomGame *)piVar4[3];
    if (iVar2 == 0) {
      this = (GameStateMainMenu *)operator_new(0x154);
      GameStateMainMenu::GameStateMainMenu(this);
      this_00 = (GameStateLoading *)operator_new(0x2c);
      GameStateLoading::GameStateLoading(this_00,(GameState *)this);
      CapcomGame::setNextState(this_01,(GameState *)this_00);
      iVar1 = DAT_00119920;
      iVar2 = DAT_0011991c;
      *(undefined1 *)((int)piVar4 + 0x11) = 1;
      pcVar5 = (char *)(iVar2 + 0x1198ee);
      pcVar3 = (char *)(iVar1 + 0x1198f0);
    }
    else {
      (**(code **)(*piVar4 + 0x2c))
                (piVar4,*(code **)(*piVar4 + 0x2c),*(undefined4 *)(this_01 + 0x4a8),
                 *(undefined4 *)(this_01 + 0x4ac),param_4);
      iVar2 = piVar4[3];
      *(undefined4 *)(iVar2 + 0x4a8) = 0;
      *(undefined4 *)(iVar2 + 0x4ac) = 0;
      pcVar3 = (char *)(DAT_00119918 + 0x1198bc);
    }
  }
  else {
    pcVar3 = (char *)(DAT_0011990c + 0x119878);
  }
  L_PrintLog(pcVar5,pcVar3);
  return;
}


